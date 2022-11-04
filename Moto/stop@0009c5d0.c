
/* qcamera::QCamera3Stream::stop() */

void qcamera::QCamera3Stream::stop(void)

{
  int in_r0;
  int in_r1;
  
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(in_r0 + 0x88),in_r1);
}

