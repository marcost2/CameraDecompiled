
/* qcamera::QCamera2HardwareInterface::isPreviewRestartEnabled() */

uint qcamera::QCamera2HardwareInterface::isPreviewRestartEnabled(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined4 uStack40;
  undefined4 local_24;
  undefined4 uStack32;
  undefined8 uStack28;
  int local_14;
  
  piVar3 = *(int **)(DAT_000b3b40 + 0xb3ae6);
  local_14 = *piVar3;
  local_30 = 0;
  uStack40 = 0;
  local_40 = 0;
  uStack56 = 0;
  local_50 = 0;
  uStack72 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_24 = 0;
  uStack32 = 0;
  uStack28 = 0;
  property_get(DAT_000b3b44 + 0xb3b1e,&local_70,DAT_000b3b48 + 0xb3b20);
  iVar1 = atoi((char *)&local_70);
  if (*piVar3 == local_14) {
    uVar2 = count_leading_zeroes(iVar1 + -1);
    return uVar2 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

