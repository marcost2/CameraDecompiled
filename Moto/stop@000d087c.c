
/* qcamera::QCameraStream::stop() */

void __thiscall qcamera::QCameraStream::stop(QCameraStream *this)

{
  int __status;
  
  this[0x2e1] = (QCameraStream)0x0;
  (**(code **)(**(int **)(this + 0x114) + 0x1c))(*(int **)(this + 0x114),this + 0x10074);
  (**(code **)(**(int **)(this + 0x114) + 0x1c))(*(int **)(this + 0x114),this + 0x10080);
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 0xc4),__status);
}

