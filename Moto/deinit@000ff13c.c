
/* qcamera::QCameraThermalAdapter::deinit() */

void __thiscall qcamera::QCameraThermalAdapter::deinit(QCameraThermalAdapter *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ff1a8 + 0xff148);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff1b0 + 0xff15e,0x89,DAT_000ff1ac + 0xff156);
  }
  if (*(code **)(this + 0xc) != (code *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(this + 0xc))();
      *(undefined4 *)(this + 0x10) = 0;
    }
    if (*(int *)(this + 0x14) != 0) {
      (**(code **)(this + 0xc))();
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  if (*(int *)(this + 4) != 0) {
    dlclose();
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff1b8 + 0xff1a0,0x9b,DAT_000ff1b4 + 0xff198);
  }
  return;
}

