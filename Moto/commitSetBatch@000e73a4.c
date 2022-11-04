
/* qcamera::QCameraParameters::commitSetBatch() */

int __thiscall qcamera::QCameraParameters::commitSetBatch(QCameraParameters *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  MotParamStateMachine *this_00;
  
  if (*(int *)(this + 0x1e0) == 0) {
    if (*(int *)(*(int *)(DAT_000e7450 + 0xe73c6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e7458 + 0xe73de,0x3408,DAT_000e7454 + 0xe73d6);
    }
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar2 = MotParamStateMachine::beginCommitBatch(this_00);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = 0;
    do {
      if (*(char *)(*(int *)(this + 0x1e0) + uVar3) != '\0') {
        bVar1 = true;
        goto LAB_000e73fa;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10f);
    bVar1 = false;
LAB_000e73fa:
    puVar4 = *(undefined4 **)(this + 0x1d8);
    if (puVar4 != (undefined4 *)0x0) {
      if ((!bVar1) || (iVar2 = (**(code **)(puVar4[1] + 0x18))(*puVar4), iVar2 == 0)) {
        commitParamChanges(this);
        iVar2 = 0;
      }
      MotParamStateMachine::endCommitBatch(this_00);
      return iVar2;
    }
    if (*(int *)(*(int *)(DAT_000e745c + 0xe7424) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e7464 + 0xe743c,0x3417,DAT_000e7460 + 0xe7434);
    }
    MotParamStateMachine::endCommitBatch(this_00);
  }
  return -0x13;
}

