
/* qcamera::QCameraPicChannel::~QCameraPicChannel() */

void __thiscall qcamera::QCameraPicChannel::_QCameraPicChannel(QCameraPicChannel *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)QCameraVideoChannel::_QCameraVideoChannel((QCameraVideoChannel *)this);
  operator_delete(pvVar1);
  return;
}

