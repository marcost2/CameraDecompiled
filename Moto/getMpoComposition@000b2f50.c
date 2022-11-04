
/* qcamera::QCamera2HardwareInterface::getMpoComposition() */

QCamera2HardwareInterface __thiscall
qcamera::QCamera2HardwareInterface::getMpoComposition(QCamera2HardwareInterface *this)

{
  if (*(int *)(*(int *)(DAT_000b2f84 + 0xb2f5c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b2f8c + 0xb2f7a,0xa8a,DAT_000b2f88 + 0xb2f6e,this[0x4d8]);
  }
  return this[0x4d8];
}

