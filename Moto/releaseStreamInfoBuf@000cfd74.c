
/* qcamera::QCameraStream::releaseStreamInfoBuf() */

undefined4 __thiscall qcamera::QCameraStream::releaseStreamInfoBuf(QCameraStream *this)

{
  if (*(int **)(this + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x104) + 0xc))();
    if (*(int **)(this + 0x104) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x104) + 0x2c))();
    }
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x104) = 0;
  }
  return 0;
}

