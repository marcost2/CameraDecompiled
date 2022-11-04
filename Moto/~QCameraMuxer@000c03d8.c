
/* qcamera::QCameraMuxer::~QCameraMuxer() */

void __thiscall qcamera::QCameraMuxer::_QCameraMuxer(QCameraMuxer *this)

{
  int __status;
  
  *(int *)this = *(int *)(DAT_000c0460 + 0xc03e4) + 8;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(void **)(this + 0x2c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(int *)(this + 0xc4) != 0) {
    (**(code **)(*(int *)(this + 0xc4) + 0xc))();
    *(undefined4 *)(this + 0xc4) = 0;
  }
  QCameraQueue::flush((QCameraQueue *)(this + 0x3c),true);
  QCameraQueue::flush((QCameraQueue *)(this + 0x60),true);
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x84),2,'\x01','\0');
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x84),__status);
}

