
/* qcamera::QCameraParameters::setZslMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setZslMode(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = *(char **)(DAT_000e8db0 + 0xe8cdc);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (this[0x212] == (QCameraParameters)0x0) {
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      iVar1 = strcmp(*(char **)(DAT_000e8dc4 + 0xe8d4a),__s1);
      if (iVar1 == 0) {
        bVar4 = false;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e8dc8 + 0xe8d58),__s1);
        if (iVar1 != 0) {
          if (*(int *)(*(int *)(DAT_000e8dcc + 0xe8d64) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000e8dd4 + 0xe8d7e,0x12bb,DAT_000e8dd0 + 0xe8d74,__s1);
          }
          return 0xffffffea;
        }
        bVar4 = true;
      }
      android::CameraParameters::set((CameraParameters *)this,pcVar3,__s1);
      uVar2 = setZslMode(this,bVar4);
      this[0x230] = (QCameraParameters)0x1;
      return uVar2;
    }
  }
  else if (this[0x210] == (QCameraParameters)0x0) {
    android::CameraParameters::set
              ((CameraParameters *)this,pcVar3,*(char **)(DAT_000e8db4 + 0xe8d06));
    setZslMode(this,true);
    if (*(int *)(*(int *)(DAT_000e8db8 + 0xe8d1a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e8dc0 + 0xe8d32,0x12af,DAT_000e8dbc + 0xe8d2a);
    }
  }
  return 0;
}

