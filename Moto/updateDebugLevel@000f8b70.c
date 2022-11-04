
/* qcamera::QCameraParameters::updateDebugLevel() */

int __thiscall qcamera::QCameraParameters::updateDebugLevel(QCameraParameters *this)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  MotParamStateMachine *this_00;
  void *pvVar4;
  
  pvVar4 = *(void **)(this + 0x1e0);
  if (pvVar4 == (void *)0x0) {
    iVar1 = -0x13;
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
        *(undefined4 *)(iVar1 + 0x22b8) = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xb4) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f8cd0 + 0xf8c44) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f8cd8 + 0xf8c5c,0x3a4c,DAT_000f8cd4 + 0xf8c54);
        return iVar1;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar3 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f8cc0 + 0xf8c8e,DAT_000f8cc4 + 0xf8c90,DAT_000f8cc8 + 0xf8c92,
                        0x3a45,uVar3,0xb4);
    if (*(int *)(*(int *)(DAT_000f8ccc + 0xf8c9a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f8ce0 + 0xf8cb2,0x3a46,DAT_000f8cdc + 0xf8caa);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

