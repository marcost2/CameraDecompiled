
/* qcamera::QCameraParameters::setJpegQuality(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setJpegQuality(QCameraParameters *this,QCameraParameters *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(char **)(DAT_000e01f0 + 0xe0166);
  uVar1 = android::CameraParameters::getInt((char *)param_1);
  if (uVar1 < 0x65) {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,uVar1);
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(int *)(DAT_000e01f4 + 0xe0186) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e01fc + 0xe01a0,0x976,DAT_000e01f8 + 0xe0196,uVar1);
    }
    uVar3 = 0xffffffea;
  }
  pcVar2 = *(char **)(DAT_000e0200 + 0xe01ac);
  uVar1 = android::CameraParameters::getInt((char *)param_1);
  if (uVar1 < 0x65) {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,uVar1);
  }
  else {
    if (*(int *)(*(int *)(DAT_000e0204 + 0xe01ca) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e020c + 0xe01e4,0x97e,DAT_000e0208 + 0xe01da,uVar1);
    }
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

