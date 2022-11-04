
/* qcamera::QCameraParameters::setExposureTime(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setExposureTime(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  int *piVar2;
  char acStack116 [92];
  int local_18;
  
  piVar2 = *(int **)(DAT_000e3ee4 + 0xe3e58);
  local_18 = *piVar2;
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (char *)0x0) {
    if (*(int *)(this + 0x7c0) == 0) goto LAB_000e3ed0;
    property_get(DAT_000e3eec + 0xe3eac,acStack116,DAT_000e3ef0 + 0xe3eae);
    iVar1 = __strlen_chk(acStack116,0x5c);
    if ((iVar1 == 0) || ((__s2 != (char *)0x0 && (iVar1 = strcmp(acStack116,__s2), iVar1 == 0))))
    goto LAB_000e3ed0;
    iVar1 = setExposureTime(this,acStack116);
  }
  else {
    if ((__s2 == (char *)0x0) || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)) {
      iVar1 = *piVar2 - local_18;
      if (iVar1 == 0) {
        setExposureTime(this,__s1);
        return;
      }
      goto LAB_000e3ede;
    }
LAB_000e3ed0:
    iVar1 = 0;
  }
  if (*piVar2 == local_18) {
    return;
  }
LAB_000e3ede:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

