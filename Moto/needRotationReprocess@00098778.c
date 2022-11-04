
/* qcamera::QCamera3HardwareInterface::needRotationReprocess() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::needRotationReprocess(QCamera3HardwareInterface *this)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_000987c4 + 0x98784) + *(int *)(this + 0x60) * 4) +
                           0x3000) << 0x1c) < 0) {
    if (*(int *)(*(int *)(DAT_000987c8 + 0x9879c) + 0x28) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
      mm_camera_debug_log(1,3,DAT_000987d0 + 0x987b6,0x3223,DAT_000987cc + 0x987ae);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

