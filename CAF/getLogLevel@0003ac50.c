
/* qcamera::QCamera3HardwareInterface::getLogLevel() */

void qcamera::QCamera3HardwareInterface::getLogLevel(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_0003acd4 + 0x3ac5a);
  local_14 = *piVar3;
  property_get();
  iVar1 = atoi(acStack112);
  if (-1 < iVar1) {
    **(int **)(DAT_0003ace0 + 0x3ac7e) = iVar1;
  }
  property_get();
  iVar1 = atoi(acStack112);
  **(int **)(DAT_0003acec + 0x3ac9c) = iVar1;
  property_get();
  uVar2 = atoi(acStack112);
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  if (**(uint **)(DAT_0003acf8 + 0x3acbc) < uVar2) {
    **(uint **)(DAT_0003acf8 + 0x3acbc) = uVar2;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

