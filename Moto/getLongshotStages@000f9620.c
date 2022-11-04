
/* qcamera::QCameraParameters::getLongshotStages() */

uint __thiscall qcamera::QCameraParameters::getLongshotStages(QCameraParameters *this)

{
  QCameraParameters QVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_18;
  
  piVar3 = *(int **)(DAT_000f96a4 + 0xf9630);
  local_18 = *piVar3;
  QVar1 = this[0x380];
  local_38 = 0;
  uStack48 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_2c = 0;
  uStack40 = 0;
  uStack36 = 0;
  property_get(DAT_000f96ac + 0xf9672,&local_78,*(undefined4 *)(DAT_000f96a8 + 0xf966c));
  uVar4 = 2;
  if (QVar1 == (QCameraParameters)0x0) {
    uVar4 = 4;
  }
  uVar2 = atoi((char *)&local_78);
  if ((uVar2 & 0xff) - 1 < 4) {
    uVar4 = uVar2;
  }
  if (*piVar3 == local_18) {
    return uVar4 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

