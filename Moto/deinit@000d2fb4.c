
/* qcamera::QCameraPostProcessor::deinit() */

undefined4 __thiscall qcamera::QCameraPostProcessor::deinit(QCameraPostProcessor *this)

{
  int in_r1;
  
  if (this[0x168] == (QCameraPostProcessor)0x1) {
                    /* WARNING: Subroutine does not return */
    QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x244),in_r1);
  }
  return 0;
}

