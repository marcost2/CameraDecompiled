
/* qcamera::QCameraParameters::setReFocus(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setReFocus(QCameraParameters *this,QCameraParameters *param_1)

{
  QCameraParameters QVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((*(uint *)(*(int *)(this + 0x1d4) + 0x3000) & 0x11000) == 0) {
    if (*(int *)(*(int *)(DAT_000e66b8 + 0xe6682) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e66c0 + 0xe669a,0xff9,DAT_000e66bc + 0xe6692);
    }
  }
  else {
    pcVar4 = *(char **)(DAT_000e66c4 + 0xe65f2);
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    iVar3 = *(int *)(DAT_000e66c8 + 0xe660e);
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e66d0 + 0xe6628,0xffe,DAT_000e66cc + 0xe661e,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar2 = strcmp(__s1,__s2), iVar2 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      if (*(int *)(iVar3 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e66d8 + 0xe665a,0x2839,DAT_000e66d4 + 0xe6650,__s1);
      }
      iVar3 = strcmp(*(char **)(DAT_000e66dc + 0xe6664),__s1);
      if (iVar3 == 0) {
        QVar1 = (QCameraParameters)0x0;
      }
      else {
        iVar3 = strcmp(*(char **)(DAT_000e66e0 + 0xe6672),__s1);
        if (iVar3 != 0) {
          return 0;
        }
        QVar1 = (QCameraParameters)0x1;
      }
      this[0x2c9] = QVar1;
      updateParamEntry(this,pcVar4,__s1);
    }
  }
  return 0;
}

