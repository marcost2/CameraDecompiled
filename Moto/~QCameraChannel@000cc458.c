
/* qcamera::QCameraChannel::~QCameraChannel() */

void __thiscall qcamera::QCameraChannel::_QCameraChannel(QCameraChannel *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)QCameraVideoChannel::_QCameraVideoChannel((QCameraVideoChannel *)this);
  operator_delete(pvVar1);
  return;
}

