
/* qcamera::QCameraParameters::adjustPreviewFpsRange(cam_fps_range_t*) */

int __thiscall
qcamera::QCameraParameters::adjustPreviewFpsRange(QCameraParameters *this,cam_fps_range_t *param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  MotParamStateMachine *this_00;
  void *pvVar4;
  undefined8 uVar5;
  
  if (param_1 != (cam_fps_range_t *)0x0) {
    pvVar4 = *(void **)(this + 0x1e0);
    if (pvVar4 == (void *)0x0) {
      return -0x13;
    }
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
        uVar5 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)("No Advanced Capture feature enabled!" + iVar1 + 0x1a) =
             *(undefined8 *)param_1;
        *(undefined8 *)("No Advanced Capture feature enabled!" + iVar1 + 0x22) = uVar5;
        *(undefined *)(*(int *)(this + 0x1e0) + 10) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f0c84 + 0xf0bee) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f0c8c + 0xf0c06,0x1c9c,DAT_000f0c88 + 0xf0bfe);
        return iVar1;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar3 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f0c6c + 0xf0c36,DAT_000f0c70 + 0xf0c38,DAT_000f0c74 + 0xf0c3a,
                        0x1c95,uVar3,10);
    if (*(int *)(*(int *)(DAT_000f0c78 + 0xf0c42) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f0c80 + 0xf0c5a,0x1c96,DAT_000f0c7c + 0xf0c52);
    }
  }
  return -0x16;
}

