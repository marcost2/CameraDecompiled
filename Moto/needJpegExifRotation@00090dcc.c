
/* qcamera::QCamera3HardwareInterface::needJpegExifRotation() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::needJpegExifRotation(QCamera3HardwareInterface *this)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_00090e18 + 0x90dd8) + *(int *)(this + 0x60) * 4) +
                           0x3000) << 0x1c) < 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(DAT_00090e1c + 0x90dec) + 0x2c) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    mm_camera_debug_log(1,4,DAT_00090e24 + 0x90e06,0x3259,DAT_00090e20 + 0x90dfe);
  }
  return uVar1;
}

