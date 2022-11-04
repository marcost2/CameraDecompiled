
/* qcamera::QCamera3Stream::start() */

void __thiscall qcamera::QCamera3Stream::start(QCamera3Stream *this)

{
  EVP_PKEY_CTX *in_r1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  
  QCameraQueue::init((QCameraQueue *)(this + 0x40),in_r1);
  QCameraQueue::init((QCameraQueue *)(this + 100),ctx);
  if (*(int *)(this + 0x280) != 0) {
    QCameraQueue::init((QCameraQueue *)(this + 0x298),ctx_00);
  }
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 0x88),*(FuncDef57 **)(DAT_0009c3d0 + 0x9c3c4),this);
  return;
}

