
/* qcamera::QCameraParameters::setLedCalibration(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setLedCalibration(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  int *piVar2;
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
  
  piVar2 = *(int **)(DAT_000ec8c4 + 0xec80c);
  local_18 = *piVar2;
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (char *)0x0) {
    local_78 = 0;
    uStack112 = 0;
    uStack40 = 0;
    uStack36 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_2c = 0;
    local_48 = 0;
    uStack64 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    property_get(DAT_000ec8d0 + 0xec88e,&local_78,*(undefined4 *)(DAT_000ec8cc + 0xec888));
    iVar1 = __strlen_chk(&local_78,0x5c);
    if ((iVar1 == 0) ||
       ((__s2 != (char *)0x0 && (iVar1 = strcmp((char *)&local_78,__s2), iVar1 == 0))))
    goto LAB_000ec8b0;
    iVar1 = setLedCalibration(this,(char *)&local_78);
  }
  else {
    if ((__s2 == (char *)0x0) || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)) {
      iVar1 = *piVar2 - local_18;
      if (iVar1 == 0) {
        setLedCalibration(this,__s1);
        return;
      }
      goto LAB_000ec8be;
    }
LAB_000ec8b0:
    iVar1 = 0;
  }
  if (*piVar2 == local_18) {
    return;
  }
LAB_000ec8be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

