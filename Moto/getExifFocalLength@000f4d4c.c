
/* qcamera::QCameraParameters::getExifFocalLength(rat_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::getExifFocalLength(QCameraParameters *this,rat_t *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  fVar1 = (float)android::CameraParameters::getFloat((char *)this);
  fVar1 = ROUND(fVar1 * DAT_000f4dd0 + 0.5);
  if ((int)fVar1 < 0) {
    if (*(int *)(*(int *)(DAT_000f4dd8 + 0xf4d90) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar4 = 0x2f4f;
    iVar2 = DAT_000f4ddc + 0xf4da0;
    iVar3 = DAT_000f4de0 + 0xf4da8;
  }
  else {
    if (param_1 != (rat_t *)0x0) {
      *(float *)param_1 = fVar1;
      *(undefined4 *)(param_1 + 4) = 1000;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000f4de4 + 0xf4dae) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar4 = 0x2f53;
    iVar2 = DAT_000f4de8 + 0xf4dbe;
    iVar3 = DAT_000f4dec + 0xf4dc6;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  return 0xffffffea;
}

