
/* qcamera::QCameraParameters::getLiveSnapshotSize(cam_dimension_t&) */

void __thiscall
qcamera::QCameraParameters::getLiveSnapshotSize(QCameraParameters *this,cam_dimension_t *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000df668 + 0xdf5d4);
  local_1c = *piVar3;
  android::CameraParameters::getVideoSize((CameraParameters *)this,&local_28,local_24);
  if ((0xeff < local_28) || (0x86f < local_24[0])) {
    local_28 = 0;
    local_24[0] = 0;
    android::CameraParameters::getVideoSize((CameraParameters *)this,&local_28,local_24);
    if ((local_28 < *(int *)(this + 0x270)) || (local_24[0] < *(int *)(this + 0x274))) {
      *(int *)(this + 0x270) = local_28;
      *(int *)(this + 0x274) = local_24[0];
    }
  }
  uVar1 = *(undefined4 *)(this + 0x270);
  uVar2 = *(undefined4 *)(this + 0x274);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  if (*(int *)(*(int *)(DAT_000df66c + 0xdf634) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000df674 + 0xdf650,0x7ff,DAT_000df670 + 0xdf642,uVar1,uVar2);
  }
  if (*piVar3 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

