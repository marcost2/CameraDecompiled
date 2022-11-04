
/* qcamera::QCameraCbNotifier::exit() */

void __thiscall qcamera::QCameraCbNotifier::exit(QCameraCbNotifier *this,int __status)

{
  this[0x84] = (QCameraCbNotifier)0x0;
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x44),0);
}

