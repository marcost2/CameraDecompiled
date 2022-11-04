
/* qcamera::QCamera2HardwareInterface::processZoomEvent(cam_crop_data_t&) */

void __thiscall
qcamera::QCamera2HardwareInterface::processZoomEvent
          (QCamera2HardwareInterface *this,cam_crop_data_t *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x9b4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9b8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9bc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9c0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9c4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9c8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9cc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  }
  piVar1 = *(int **)(this + 0x9d4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000ba096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x4a8),param_1);
  return;
}

