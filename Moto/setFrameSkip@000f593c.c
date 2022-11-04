
/* qcamera::QCameraParameters::setFrameSkip(msm_vfe_frame_skip_pattern) */

int __thiscall
qcamera::QCameraParameters::setFrameSkip(QCameraParameters *this,msm_vfe_frame_skip_pattern param_1)

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
        *(uint *)(&DAT_000735e8 + iVar1) = (uint)(byte)param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x2f) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f5aac + 0xf5a16) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f5ab4 + 0xf5a2e,0x317f,DAT_000f5ab0 + 0xf5a26);
        return iVar1;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar3 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f5a94 + 0xf5a5e,DAT_000f5a98 + 0xf5a60,DAT_000f5a9c + 0xf5a62,
                        0x3178,uVar3,0x2f);
    if (*(int *)(*(int *)(DAT_000f5aa0 + 0xf5a6a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5aa8 + 0xf5a82,0x3179,DAT_000f5aa4 + 0xf5a7a);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

