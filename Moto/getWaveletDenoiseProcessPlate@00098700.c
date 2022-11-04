
/* qcamera::QCamera3HardwareInterface::getWaveletDenoiseProcessPlate() */

void qcamera::QCamera3HardwareInterface::getWaveletDenoiseProcessPlate(void)

{
  uint uVar1;
  int *piVar2;
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
  
  piVar2 = *(int **)(DAT_0009876c + 0x98712);
  local_14 = *piVar2;
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
  property_get(DAT_00098770 + 0x9874a,&local_70,DAT_00098774 + 0x9874c);
  uVar1 = atoi((char *)&local_70);
  if (3 < uVar1) {
    uVar1 = 2;
  }
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

