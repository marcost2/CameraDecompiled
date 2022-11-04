
/* qcamera::QCameraParameters::isOisForVideoEnabled() */

int qcamera::QCameraParameters::isOisForVideoEnabled(void)

{
  int iVar1;
  int iVar2;
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
  
  iVar2 = 0;
  piVar3 = *(int **)(DAT_000f2670 + 0xf2604);
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
  iVar1 = property_get(DAT_000f2674 + 0xf263a,&local_70,0);
  if (iVar1 != 0) {
    iVar2 = atoi((char *)&local_70);
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    __android_log_print(3,DAT_000f2678 + 0xf2658,DAT_000f267c + 0xf265a,iVar2);
  }
  if (*piVar3 == local_14) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

