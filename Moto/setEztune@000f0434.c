
/* qcamera::QCameraParameters::setEztune() */

undefined4 __thiscall qcamera::QCameraParameters::setEztune(QCameraParameters *this)

{
  int iVar1;
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
  
  piVar2 = *(int **)(DAT_000f04a8 + 0xf0448);
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
  property_get(DAT_000f04b0 + 0xf0484,&local_70,*(undefined4 *)(DAT_000f04ac + 0xf047e));
  iVar1 = atoi((char *)&local_70);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[0x799] = SUB41(iVar1,0);
  if (*piVar2 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

