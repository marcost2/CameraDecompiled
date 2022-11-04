
/* qcamera::QCamera2HardwareInterface::getLogLevel() */

void qcamera::QCamera2HardwareInterface::getLogLevel(void)

{
  int iVar1;
  int *piVar2;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000b0950 + 0xb0922);
  local_14 = *piVar2;
  property_get(DAT_000b0954 + 0xb092e,acStack112,DAT_000b0958 + 0xb0930);
  iVar1 = atoi(acStack112);
  **(int **)(DAT_000b095c + 0xb093e) = iVar1;
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

