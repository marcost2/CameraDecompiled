
/* qcamera::QCameraStream::start() */

void __thiscall qcamera::QCameraStream::start(QCameraStream *this)

{
  int iVar1;
  EVP_PKEY_CTX *in_r1;
  
  QCameraQueue::init((QCameraQueue *)(this + 0xa0),in_r1);
  iVar1 = QCameraCmdThread::launch
                    ((QCameraCmdThread *)(this + 0xc4),*(FuncDef57 **)(DAT_000d06f4 + 0xd06ae),this)
  ;
  if (iVar1 == 0) {
    this[0x2e1] = (QCameraStream)0x1;
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x1c) = 0xffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x5a) = 0;
  *(undefined4 *)(this + 0x56) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

