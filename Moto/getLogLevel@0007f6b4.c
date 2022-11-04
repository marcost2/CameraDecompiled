
/* qcamera::QCamera3HardwareInterface::getLogLevel() */

void qcamera::QCamera3HardwareInterface::getLogLevel(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_0007f738 + 0x7f6c2);
  local_14 = *piVar3;
  property_get(DAT_0007f73c + 0x7f6ce,acStack112,DAT_0007f740 + 0x7f6d0);
  iVar1 = atoi(acStack112);
  if (-1 < iVar1) {
    **(int **)(DAT_0007f744 + 0x7f6e2) = iVar1;
  }
  property_get(DAT_0007f748 + 0x7f6f0,acStack112,DAT_0007f74c + 0x7f6f2);
  iVar1 = atoi(acStack112);
  **(int **)(DAT_0007f750 + 0x7f700) = iVar1;
  property_get(DAT_0007f754 + 0x7f70c,acStack112,DAT_0007f758 + 0x7f70e);
  uVar2 = atoi(acStack112);
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  if (**(uint **)(DAT_0007f75c + 0x7f720) < uVar2) {
    **(uint **)(DAT_0007f75c + 0x7f720) = uVar2;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

