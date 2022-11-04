
/* qcamera::QCamera3HardwareInterface::needJpegExifRotation() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::needJpegExifRotation(QCamera3HardwareInterface *this)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_0004abb0 + 0x4ab70) + *(int *)(this + 0x4c) * 4) +
                           0x2ff0) << 0x1c) < 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(DAT_0004abb4 + 0x4ab84) + 0x2c) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    mm_camera_debug_log();
  }
  return uVar1;
}

