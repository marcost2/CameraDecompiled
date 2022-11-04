
/* qcamera::QCameraParameters::setIntEvent(cam_int_evt_params_t) */

int qcamera::QCameraParameters::setIntEvent(cam_int_evt_params_t param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  MotParamStateMachine *this;
  void *pvVar4;
  undefined local_c [12];
  
  pvVar4 = *(void **)(param_1 + 0x1e0);
  if (pvVar4 == (void *)0x0) {
    iVar1 = -0x13;
  }
  else {
    this = (MotParamStateMachine *)(param_1 + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this);
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
      MotParamStateMachine::endInitBatch(this);
    }
    iVar1 = *(int *)(param_1 + 0x1e0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(param_1 + 0xd34))) {
        __aeabi_memcpy8("Open camera id %d API version %d" + iVar1 + 0xe,local_c,0x54);
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x65) = 1;
        iVar1 = commitSetBatch((QCameraParameters *)param_1);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f5928 + 0xf588e) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f5930 + 0xf58a6,0x30ec,DAT_000f592c + 0xf589e);
        return iVar1;
      }
      MotParamStateMachine::paramWriteError(this);
      uVar3 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000f5910 + 0xf58d6,DAT_000f5914 + 0xf58d8,DAT_000f5918 + 0xf58da,
                        0x30e5,uVar3,0x65);
    if (*(int *)(*(int *)(DAT_000f591c + 0xf58e2) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5924 + 0xf58fa,0x30e6,DAT_000f5920 + 0xf58f2);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

