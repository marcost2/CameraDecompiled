
/* qcamera::QCameraStream::getNumQueuedBuf() */

int __thiscall qcamera::QCameraStream::getNumQueuedBuf(QCameraStream *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x68) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x74))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100));
    if (iVar1 != -1) {
      return iVar1;
    }
  }
  if (*(int *)(*(int *)(DAT_000d0edc + 0xd0eba) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d0ee4 + 0xd0ed2,0x4ec,DAT_000d0ee0 + 0xd0eca);
  }
  return iVar1;
}

