
/* qcamera::QCameraParameters::sendStreamConfigForPickRes(cam_stream_size_info_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::sendStreamConfigForPickRes
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
    if (*(int *)(*(int *)(DAT_000f8360 + 0xf82e8) + 0x20) == 0) {
      return 1;
    }
    uVar4 = 0x3f4f;
    iVar1 = DAT_000f8364 + 0xf82fa;
    iVar3 = DAT_000f8368 + 0xf8302;
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
        __aeabi_memcpy8("Could not find input request for frame number %d" + iVar1 + 0x23,param_1,
                        0x168);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x105) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f8384 + 0xf82c6) + 0x20) == 0) {
          return 1;
        }
        uVar4 = 0x3f5b;
        iVar1 = DAT_000f8388 + 0xf82da;
        iVar3 = DAT_000f838c + 0xf82e2;
        goto LAB_000f834e;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f836c + 0xf832a,DAT_000f8370 + 0xf832c,DAT_000f8374 + 0xf832e,
                        0x3f54,uVar4,0x105);
    if (*(int *)(*(int *)(DAT_000f8378 + 0xf8336) + 0x20) == 0) {
      return 1;
    }
    uVar4 = 0x3f55;
    iVar1 = DAT_000f837c + 0xf8348;
    iVar3 = DAT_000f8380 + 0xf8350;
  }
LAB_000f834e:
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar1);
  return 1;
}

