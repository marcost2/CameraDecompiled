
/* qcamera::QCameraParameters::setVideoRotation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setVideoRotation(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s2;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_000e4200 + 0xe413c);
  __s2 = (char *)android::CameraParameters::get((char *)param_1);
  if (__s2 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000e4204 + 0xe4152),__s2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e4208 + 0xe4160),__s2);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e4228 + 0xe416e),__s2);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e422c + 0xe417c),__s2);
          if (iVar1 != 0) {
            if (*(int *)(*(int *)(DAT_000e421c + 0xe4188) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000e4224 + 0xe41a6,0xdd8,DAT_000e4220 + 0xe419a,0xfffffffe
                                 );
            }
            return 0xffffffea;
          }
          iVar1 = 3;
        }
      }
    }
    updateParamEntry(this,pcVar2,__s2);
    if (*(int *)(*(int *)(DAT_000e420c + 0xe41ce) + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000e4218 + 0xe41f6,0xdd6,DAT_000e4214 + 0xe41e0,__s2,
                          *(undefined4 *)(*(int *)(DAT_000e4210 + 0xe41de) + iVar1 * 8 + 4));
    }
  }
  return 0;
}

