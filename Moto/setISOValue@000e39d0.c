
/* qcamera::QCameraParameters::setISOValue(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setISOValue(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  int *piVar2;
  char acStack116 [92];
  int local_18;
  
  piVar2 = *(int **)(DAT_000e3a68 + 0xe39dc);
  local_18 = *piVar2;
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (*(int *)(this + 0x7c0) == 0) {
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      iVar1 = *piVar2 - local_18;
      if (iVar1 == 0) {
        setISOValue(this,__s1);
        return;
      }
      goto LAB_000e3a62;
    }
LAB_000e3a54:
    iVar1 = 0;
  }
  else {
    property_get(DAT_000e3a70 + 0xe3a0c,acStack116,DAT_000e3a74 + 0xe3a0e);
    iVar1 = __strlen_chk(acStack116,0x5c);
    if ((iVar1 == 0) || ((__s2 != (char *)0x0 && (iVar1 = strcmp(acStack116,__s2), iVar1 == 0))))
    goto LAB_000e3a54;
    iVar1 = setISOValue(this,acStack116);
  }
  if (*piVar2 == local_18) {
    return;
  }
LAB_000e3a62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

