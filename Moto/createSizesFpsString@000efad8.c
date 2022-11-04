
/* qcamera::QCameraParameters::createSizesFpsString(cam_dim_fps_t const*, unsigned int) */

void qcamera::QCameraParameters::createSizesFpsString(cam_dim_fps_t *param_1,uint param_2)

{
  int iVar1;
  int in_r2;
  uint in_r3;
  uint uVar2;
  undefined4 *puVar3;
  
  android::String8::String8((String8 *)param_1);
  if (in_r3 != 0) {
    puVar3 = (undefined4 *)(in_r2 + 4);
    uVar2 = 0;
    iVar1 = DAT_000efb28 + 0xefaf4;
    do {
      android::String8::appendFormat((char *)param_1,iVar1,puVar3[-1],*puVar3,puVar3[1]);
      uVar2 = uVar2 + 1;
      if (uVar2 < in_r3) {
        android::String8::append((char *)param_1);
      }
      puVar3 = puVar3 + 3;
    } while (in_r3 != uVar2);
  }
  return;
}

