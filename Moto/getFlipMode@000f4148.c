
/* qcamera::QCameraParameters::getFlipMode(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraParameters::getFlipMode(QCameraParameters *this,cam_stream_type_t param_1)

{
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 - 2 < 2) || (param_1 == 4)) {
LAB_000f4172:
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (__s2 != (char *)0x0) {
      iVar1 = strcmp(*(char **)(DAT_000f4238 + 0xf4184),__s2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f423c + 0xf4192),__s2);
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000f4250 + 0xf41a0),__s2);
          if (iVar1 == 0) {
            iVar1 = 2;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000f4254 + 0xf41ae),__s2);
            if (iVar1 != 0) goto LAB_000f41de;
            iVar1 = 3;
          }
        }
      }
      uVar2 = *(undefined4 *)(*(int *)(DAT_000f4240 + 0xf41f2) + iVar1 * 8 + 4);
      goto LAB_000f41f8;
    }
  }
  else if (param_1 == 1) {
    if (this[0x2ee] == (QCameraParameters)0x0) goto LAB_000f4172;
  }
  else if (*(int *)(*(int *)(DAT_000f4228 + 0xf41be) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f4230 + 0xf41d8,0x2bdf,DAT_000f422c + 0xf41ce,param_1);
    uVar2 = 0;
    goto LAB_000f41f8;
  }
LAB_000f41de:
  uVar2 = 0;
LAB_000f41f8:
  if (*(int *)(*(int *)(DAT_000f4244 + 0xf41fe) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f424c + 0xf4218,0x2bea,DAT_000f4248 + 0xf420e,param_1,uVar2);
  }
  return uVar2;
}

