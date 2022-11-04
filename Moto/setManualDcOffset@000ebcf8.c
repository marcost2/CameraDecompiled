
/* qcamera::QCameraParameters::setManualDcOffset(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setManualDcOffset(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s1_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  piVar3 = *(int **)(DAT_000ebda0 + 0xebd04);
  local_18 = *piVar3;
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s1_00 = (char *)android::CameraParameters::get((char *)this);
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
  property_get(DAT_000ebdac + 0xebd60,&local_78,*(undefined4 *)(DAT_000ebda8 + 0xebd5a));
  if (__s1 == (char *)0x0) {
    if ((__s1_00 == (char *)0x0) || (iVar1 = strcmp(__s1_00,(char *)&local_78), iVar1 != 0)) {
      setManualDcOffset(this,(char *)&local_78);
    }
  }
  else if ((__s1_00 == (char *)0x0) || (iVar1 = strcmp(__s1,__s1_00), iVar1 != 0)) {
    uVar2 = setManualDcOffset(this,__s1);
    goto LAB_000ebd90;
  }
  uVar2 = 0;
LAB_000ebd90:
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

