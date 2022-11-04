
/* qcamera::QCameraStream::releaseMiscBuf() */

undefined4 __thiscall qcamera::QCameraStream::releaseMiscBuf(QCameraStream *this)

{
  if (*(int **)(this + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x108) + 0xc))();
    if (*(int **)(this + 0x108) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x108) + 0x2c))();
    }
    *(undefined4 *)(this + 0x108) = 0;
  }
  return 0;
}

