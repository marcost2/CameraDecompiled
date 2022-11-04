
/* qcamera::QCameraParameters::commitGetBatch() */

int __thiscall qcamera::QCameraParameters::commitGetBatch(QCameraParameters *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  MotParamStateMachine *this_00;
  
  if (*(int *)(this + 0x1e0) == 0) {
    if (*(int *)(*(int *)(DAT_000f5fd0 + 0xf5f5e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5fd8 + 0xf5f76,0x343d,DAT_000f5fd4 + 0xf5f6e);
      return -0x13;
    }
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    MotParamStateMachine::beginCommitBatch(this_00);
    uVar2 = 0;
    do {
      if (*(char *)(*(int *)(this + 0x1e0) + uVar2) != '\0') {
        bVar1 = true;
        goto LAB_000f5f80;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10f);
    bVar1 = false;
LAB_000f5f80:
    puVar4 = *(undefined4 **)(this + 0x1d8);
    if (puVar4 != (undefined4 *)0x0) {
      if ((bVar1) && (iVar3 = (**(code **)(puVar4[1] + 0x1c))(*puVar4), iVar3 != 0)) {
        MotParamStateMachine::endCommitBatch(this_00);
        return iVar3;
      }
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000f5fdc + 0xf5fa6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5fe4 + 0xf5fbe,0x344c,DAT_000f5fe0 + 0xf5fb6);
    }
    MotParamStateMachine::endCommitBatch(this_00);
  }
  return -0x13;
}

