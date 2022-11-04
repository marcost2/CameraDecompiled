
/* qcamera::QCameraParameters::setCDSMode(int, bool) */

int __thiscall
qcamera::QCameraParameters::setCDSMode(QCameraParameters *this,int param_1,bool param_2)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  if (param_2 != false) {
    pvVar4 = *(void **)(this + 0x1e0);
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000f15d4 + 0xf1590) + 0x20) == 0) {
        return -0x7ffffffe;
      }
      mm_camera_debug_log(1,1,DAT_000f15dc + 0xf15aa,0x3d7e,DAT_000f15d8 + 0xf15a2);
      return -0x7ffffffe;
    }
    iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
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
      MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
    }
  }
  iVar1 = *(int *)(this + 0x1e0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("No memory for camera_cmd_t" + iVar1 + 0x19) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x5b) = 1;
      if ((param_2 != false) && (iVar1 = commitSetBatch(this), iVar1 != 0)) {
        if (*(int *)(*(int *)(DAT_000f15f8 + 0xf150e) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f1600 + 0xf1526,0x3d8c,DAT_000f15fc + 0xf151e);
        return iVar1;
      }
      if (*(int *)(*(int *)(DAT_000f1604 + 0xf15b4) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f160c + 0xf15ce,0x3d91,DAT_000f1608 + 0xf15c4,param_1);
      }
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000f15e0 + 0xf1552,DAT_000f15e4 + 0xf1554,DAT_000f15e8 + 0xf1556,0x3d84,
                      uVar3,0x5b);
  if (*(int *)(*(int *)(DAT_000f15ec + 0xf155e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000f15f4 + 0xf1576,0x3d85,DAT_000f15f0 + 0xf156e);
  }
  return -0x16;
}

