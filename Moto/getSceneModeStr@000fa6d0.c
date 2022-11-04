
/* qcamera::QCameraParameters::getSceneModeStr() const */

char * __thiscall qcamera::QCameraParameters::getSceneModeStr(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 != (char *)0x0) {
    uVar2 = 0;
    iVar3 = *(int *)(DAT_000fa704 + 0xfa6e8);
    do {
      iVar1 = strcmp(*(char **)(iVar3 + uVar2 * 8),__s2);
      if (iVar1 == 0) {
        return __s2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
  }
  return (char *)0x0;
}

