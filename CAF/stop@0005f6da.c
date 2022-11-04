
/* qcamera::QCamera3PostProcessor::stop() */

undefined4 __thiscall qcamera::QCamera3PostProcessor::stop(QCamera3PostProcessor *this)

{
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),2,'\x01','\x01');
  if (*(int **)(this + 0x1f0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1f0) + 0xc))();
    if (*(int **)(this + 0x1f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f0) + 4))();
    }
    *(undefined4 *)(this + 0x1f0) = 0;
  }
  return 0;
}

