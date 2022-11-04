
/* qcamera::QCameraParameters::getStreamRotation(cam_stream_type_t, cam_pp_feature_config_t&,
   cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::getStreamRotation
          (QCameraParameters *this,cam_stream_type_t param_1,cam_pp_feature_config_t *param_2,
          cam_dimension_t *param_3)

{
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
LAB_000f3944:
    iVar1 = -2;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f39b0 + 0xf3914),__s2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f39b4 + 0xf3922),__s2);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f39bc + 0xf3930),__s2);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000f39c0 + 0xf393e),__s2);
          if (iVar1 != 0) goto LAB_000f3944;
          iVar1 = 3;
        }
      }
    }
    iVar1 = *(int *)(*(int *)(DAT_000f39b8 + 0xf395e) + iVar1 * 8 + 4);
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (param_1 == 4) {
    if (iVar1 == 0x5a) {
      uVar2 = 2;
    }
    else {
      if (iVar1 != 0x10e) {
        if (iVar1 == 0xb4) {
          *(undefined4 *)(param_2 + 0x38) = 4;
          *(uint *)param_2 = *(uint *)param_2 | 8;
          return 0;
        }
        *(undefined4 *)(param_2 + 0x38) = 1;
        return 0;
      }
      uVar2 = 8;
    }
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(uint *)param_2 = *(uint *)param_2 | 8;
    uVar2 = *(undefined4 *)param_3;
    *(undefined4 *)param_3 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_3 + 4) = uVar2;
  }
  return 0;
}

