
/* qcamera::QCameraParameters::getEffectValue() */

char * __thiscall qcamera::QCameraParameters::getEffectValue(QCameraParameters *this)

{
  char **ppcVar1;
  char *__s2;
  int iVar2;
  char **ppcVar3;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 != (char *)0x0) {
    ppcVar1 = *(char ***)(DAT_000f4a2c + 0xf49ec);
    do {
      ppcVar3 = ppcVar1;
      iVar2 = strcmp(*ppcVar3,__s2);
      ppcVar1 = ppcVar3 + 2;
    } while (iVar2 != 0);
    return ppcVar3[1];
  }
  if (*(int *)(*(int *)(DAT_000f4a30 + 0xf4a08) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000f4a38 + 0xf4a20,0x2ee7,DAT_000f4a34 + 0xf4a18);
  }
  return (char *)0x0;
}

