
/* qcamera::QCamera3Channel::stop() */

undefined4 __thiscall qcamera::QCamera3Channel::stop(QCamera3Channel *this)

{
  int iVar1;
  char *in_r1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar2;
  char *extraout_r1_01;
  int *piVar3;
  uint uVar4;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar3 = *(int **)(DAT_0005690c + 0x56890);
  local_18 = *piVar3;
  iVar1 = DAT_00056910 + 0x5689a;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),in_r1);
  pcVar2 = extraout_r1;
  if (this[0x50] == (QCamera3Channel)0x0) {
    if (*(int *)(*(int *)(DAT_00056914 + 0x568d8) + 0x20) != 0) {
      iVar1 = DAT_00056918 + 0x568e2;
      mm_camera_debug_log();
      pcVar2 = extraout_r1_01;
    }
  }
  else {
    if (*(int *)(this + 0x44) != 0) {
      uVar4 = 0;
      do {
        if (*(int **)(this + uVar4 * 4 + 0x24) != (int *)0x0) {
          (**(code **)(**(int **)(this + uVar4 * 4 + 0x24) + 0x20))();
          pcVar2 = extraout_r1_00;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x44));
    }
    this[0x50] = (QCamera3Channel)0x0;
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar2);
  if (*piVar3 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

