
/* qcamera::QCameraParameters::setLongshotEnable(bool) */

int __thiscall qcamera::QCameraParameters::setLongshotEnable(QCameraParameters *this,bool param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  MotParamStateMachine *this_00;
  void *pvVar4;
  
  pvVar4 = *(void **)(this + 0x1e0);
  if (pvVar4 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f1004 + 0xf0f8a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f100c + 0xf0fa2,0x2008,DAT_000f1008 + 0xf0f9a);
    }
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar4,0x10f);
      *(undefined *)((int)pvVar4 + 0x117aec) = 0;
      *(undefined *)((int)pvVar4 + 0x106974) = 0;
      *(undefined *)((int)pvVar4 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar4 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar4 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar4 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar4 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar4 + 0xb7340) = 0;
      *(undefined *)((int)pvVar4 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar4 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        "Could not find input request for frame number %d"[iVar1 + 3] = param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x59) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          this[0x216] = (QCameraParameters)param_1;
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f1028 + 0xf0f60) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f1030 + 0xf0f7a,0x2013,DAT_000f102c + 0xf0f72);
        return iVar1;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar3 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f1010 + 0xf0fcc,DAT_000f1014 + 0xf0fce,DAT_000f1018 + 0xf0fd0,
                        0x200c,uVar3,0x59);
    if (*(int *)(*(int *)(DAT_000f101c + 0xf0fd8) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f1024 + 0xf0ff0,0x200d,DAT_000f1020 + 0xf0fe8);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

