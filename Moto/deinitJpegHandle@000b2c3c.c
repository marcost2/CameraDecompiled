
/* qcamera::QCamera2HardwareInterface::deinitJpegHandle() */

int __thiscall qcamera::QCamera2HardwareInterface::deinitJpegHandle(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b2cfc + 0xb2c50);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b2d04 + 0xb2c68,0x37c6,DAT_000b2d00 + 0xb2c60);
  }
  if ((this[0x1dec] == (QCamera2HardwareInterface)0x0) || (*(int *)(this + 0x1de8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(this + 0x1ddc))();
    iVar2 = iVar1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar3 + 0x20);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      mm_camera_debug_log(1,1,DAT_000b2d0c + 0xb2cac,0x37cc,DAT_000b2d08 + 0xb2ca0,
                          *(int *)(this + 0x1de8));
    }
    *(undefined8 *)(this + 0x1dcc) = 0;
    *(undefined8 *)(this + 0x1dd4) = 0;
    *(undefined4 *)(this + 0x1ddc) = 0;
    *(undefined4 *)(this + 0x1de4) = 0;
    *(undefined4 *)(this + 0x1de0) = 0;
    this[0x1dec] = (QCamera2HardwareInterface)0x0;
  }
  *(undefined4 *)(this + 0x1de8) = 0;
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b2d14 + 0xb2cf0,0x37d3,DAT_000b2d10 + 0xb2ce6,iVar1);
  }
  return iVar1;
}

