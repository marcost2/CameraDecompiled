
/* qcamera::QCamera3HardwareInterface::get3AVersion(cam_q3a_version_t&) */

void __thiscall
qcamera::QCamera3HardwareInterface::get3AVersion
          (QCamera3HardwareInterface *this,cam_q3a_version_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0004af70 + 0x4af2c) + *(int *)(this + 0x4c) * 4);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_0004af74 + 0x4af4a) + 0x20) != 0) {
      mm_camera_debug_log();
      return;
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x2f50);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x2f54);
    *(undefined4 *)param_1 = uVar2;
  }
  return;
}

