
/* qcamera::QCamera3PostProcessor::deinit() */

void __thiscall qcamera::QCamera3PostProcessor::deinit(QCamera3PostProcessor *this)

{
  int in_r1;
  
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x5c0),in_r1);
}

