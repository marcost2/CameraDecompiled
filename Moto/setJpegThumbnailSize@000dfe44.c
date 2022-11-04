
/* qcamera::QCameraParameters::setJpegThumbnailSize(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setJpegThumbnailSize(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(DAT_000dfef4 + 0xdfe54);
  iVar1 = android::CameraParameters::getInt((char *)param_1);
  pcVar3 = *(char **)(DAT_000dfef8 + 0xdfe66);
  iVar2 = android::CameraParameters::getInt((char *)param_1);
  iVar4 = *(int *)(DAT_000dfefc + 0xdfe76);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000dff04 + 0xdfe90,0x906,DAT_000dff00 + 0xdfe86,iVar1,iVar2);
  }
  if (iVar1 == 0) {
    if (iVar2 != 0) goto LAB_000dfecc;
  }
  else if ((iVar1 != 0x200) || (((iVar2 != 0x100 && (iVar2 != 0x180)) && (iVar2 != 0x120)))) {
LAB_000dfecc:
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dff0c + 0xdfee6,0x911,DAT_000dff08 + 0xdfedc,iVar1,iVar2);
    }
    return 0xffffffea;
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar5,iVar1);
  android::CameraParameters::set((CameraParameters *)this,pcVar3,iVar2);
  return 0;
}

