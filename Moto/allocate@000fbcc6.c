
/* qcamera::QCameraParametersIntf::allocate() */

undefined4 __thiscall qcamera::QCameraParametersIntf::allocate(QCameraParametersIntf *this)

{
  QCameraParameters *pQVar1;
  undefined4 uVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 4);
  pthread_mutex_lock(__mutex);
  pQVar1 = (QCameraParameters *)operator_new(0xd48);
  pQVar1 = (QCameraParameters *)QCameraParameters::QCameraParameters(pQVar1,(Mutex *)__mutex);
  *(QCameraParameters **)this = pQVar1;
  uVar2 = QCameraParameters::allocate(pQVar1);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}

