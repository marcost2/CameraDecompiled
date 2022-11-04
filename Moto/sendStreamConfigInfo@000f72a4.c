
/* qcamera::QCameraParameters::sendStreamConfigInfo(cam_stream_size_info_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::sendStreamConfigInfo
          (QCameraParameters *this,cam_stream_size_info_t *param_1)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  undefined4 uVar4;
  MotParamStateMachine *this_00;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x1e0);
  if (pvVar5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000f741c + 0xf73a6) + 0x20) == 0) {
      return 1;
    }
    uVar4 = 0x3776;
    iVar1 = DAT_000f7420 + 0xf73b8;
    iVar3 = DAT_000f7424 + 0xf73c0;
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar5,0x10f);
      *(undefined *)((int)pvVar5 + 0x117aec) = 0;
      *(undefined *)((int)pvVar5 + 0x106974) = 0;
      *(undefined *)((int)pvVar5 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar5 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar5 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar5 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar5 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar5 + 0xb7340) = 0;
      *(undefined *)((int)pvVar5 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar5 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        __aeabi_memcpy8("camera %d resource cost is %d" + iVar1 + 0x10,param_1,0x168);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x72) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f7440 + 0xf7384) + 0x20) == 0) {
          return 1;
        }
        uVar4 = 0x3781;
        iVar1 = DAT_000f7444 + 0xf7398;
        iVar3 = DAT_000f7448 + 0xf73a0;
        goto LAB_000f740a;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f7428 + 0xf73e6,DAT_000f742c + 0xf73e8,DAT_000f7430 + 0xf73ea,
                        0x377a,uVar4,0x72);
    if (*(int *)(*(int *)(DAT_000f7434 + 0xf73f2) + 0x20) == 0) {
      return 1;
    }
    uVar4 = 0x377b;
    iVar1 = DAT_000f7438 + 0xf7404;
    iVar3 = DAT_000f743c + 0xf740c;
  }
LAB_000f740a:
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar1);
  return 1;
}

