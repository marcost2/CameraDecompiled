
/* qcamera::QCamera3HardwareInterface::deleteQCFARawChannel() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::deleteQCFARawChannel(QCamera3HardwareInterface *this)

{
  if (*(int *)(*(int *)(DAT_0008e16c + 0x8e134) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008e174 + 0x8e14c,0x116d,DAT_0008e170 + 0x8e144);
  }
  if (*(int **)(this + 0x117f30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x117f30) + 4))();
    *(undefined4 *)(this + 0x117f30) = 0;
  }
  return 0;
}

