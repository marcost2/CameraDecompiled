
/* qcamera::QCamera3HardwareInterface::get3AVersion(cam_q3a_version_t&) */

void __thiscall
qcamera::QCamera3HardwareInterface::get3AVersion
          (QCamera3HardwareInterface *this,cam_q3a_version_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_000914bc + 0x91478) + *(int *)(this + 0x60) * 4);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000914c0 + 0x91496) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000914c8 + 0x914b4,0x2090,DAT_000914c4 + 0x914ac);
      return;
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x2f60);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x2f64);
    *(undefined4 *)param_1 = uVar2;
  }
  return;
}

