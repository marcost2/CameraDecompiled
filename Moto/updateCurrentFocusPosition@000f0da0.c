
/* qcamera::QCameraParameters::updateCurrentFocusPosition(cam_focus_pos_info_t&) */

void __thiscall
qcamera::QCameraParameters::updateCurrentFocusPosition
          (QCameraParameters *this,cam_focus_pos_info_t *param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = *(char **)(DAT_000f0e64 + 0xf0db4);
  iVar1 = android::CameraParameters::getInt((char *)this);
  iVar4 = *(int *)param_1;
  if (iVar1 != iVar4) {
    if (*(int *)(*(int *)(DAT_000f0e68 + 0xf0dc8) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f0e70 + 0xf0de4,0x1dec,DAT_000f0e6c + 0xf0dd6,iVar1,iVar4);
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar3,iVar4);
  }
  pcVar3 = *(char **)(DAT_000f0e74 + 0xf0df6);
  fVar2 = (float)android::CameraParameters::getFloat((char *)this);
  if (fVar2 != *(float *)(param_1 + 4)) {
    if (*(int *)(*(int *)(DAT_000f0e78 + 0xf0e16) + 0x2c) != 0) {
      fVar2 = (float)mm_camera_debug_log(1,4,DAT_000f0e80 + 0xf0e3e,0x1df3,DAT_000f0e7c + 0xf0e36);
    }
    android::CameraParameters::setFloat((CameraParameters *)this,pcVar3,fVar2);
    return;
  }
  return;
}

