
/* qcamera::QCamera3HardwareInterface::needRotationReprocess() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::needRotationReprocess(QCamera3HardwareInterface *this)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_0005108c + 0x5104c) + *(int *)(this + 0x4c) * 4) +
                           0x2ff0) << 0x1c) < 0) {
    if (*(int *)(*(int *)(DAT_00051090 + 0x51064) + 0x28) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
      mm_camera_debug_log();
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

