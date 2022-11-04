
/* qcamera::QCamera2HardwareInterface::unpreparePreview(bool) */

void qcamera::QCamera2HardwareInterface::unpreparePreview(bool param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (*(int **)(uVar1 + 0x9b4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9b4) + 4))();
    *(undefined4 *)(uVar1 + 0x9b4) = 0;
  }
  if (*(int **)(uVar1 + 0x9bc) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9bc) + 4))();
    *(undefined4 *)(uVar1 + 0x9bc) = 0;
  }
  if (*(int **)(uVar1 + 0x9c0) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c0) + 4))();
    *(undefined4 *)(uVar1 + 0x9c0) = 0;
  }
  if (*(int **)(uVar1 + 0x9c4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c4) + 4))();
    *(undefined4 *)(uVar1 + 0x9c4) = 0;
  }
  if (*(int **)(uVar1 + 0x9d4) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9d4) + 4))();
    *(undefined4 *)(uVar1 + 0x9d4) = 0;
  }
  if (*(int **)(uVar1 + 0x9c8) != (int *)0x0) {
    (**(code **)(**(int **)(uVar1 + 0x9c8) + 4))();
    *(undefined4 *)(uVar1 + 0x9c8) = 0;
  }
  return;
}

