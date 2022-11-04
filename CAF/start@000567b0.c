
/* qcamera::QCamera3Channel::start() */

undefined4 __thiscall qcamera::QCamera3Channel::start(QCamera3Channel *this)

{
  int iVar1;
  char *in_r1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar4 = *(int **)(DAT_00056864 + 0x567bc);
  local_18 = *piVar4;
  iVar1 = DAT_00056868 + 0x567c6;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),in_r1);
  pcVar2 = extraout_r1;
  if (*(uint *)(this + 0x44) < 2) {
    if (*(uint *)(this + 0x44) == 0) {
      uVar3 = 0xffffffed;
      goto LAB_00056846;
    }
  }
  else if (*(int *)(*(int *)(DAT_0005686c + 0x567de) + 0x24) != 0) {
    iVar1 = DAT_00056870 + 0x567e8;
    mm_camera_debug_log();
    pcVar2 = extraout_r1_00;
  }
  if (this[0x50] == (QCamera3Channel)0x0) {
    if (*(int *)(this + 0x44) != 0) {
      uVar5 = 0;
      do {
        if (*(int **)(this + uVar5 * 4 + 0x24) != (int *)0x0) {
          (**(code **)(**(int **)(this + uVar5 * 4 + 0x24) + 0x1c))();
          pcVar2 = extraout_r1_02;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x44));
    }
    this[0x50] = (QCamera3Channel)0x1;
  }
  else if (*(int *)(*(int *)(DAT_00056878 + 0x56806) + 0x24) != 0) {
    iVar1 = DAT_0005687c + 0x56810;
    mm_camera_debug_log();
    pcVar2 = extraout_r1_01;
  }
  uVar3 = 0;
LAB_00056846:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),pcVar2);
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

