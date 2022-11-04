
/* qcamera::QCameraParametersIntf::~QCameraParametersIntf() */

QCameraParametersIntf * __thiscall
qcamera::QCameraParametersIntf::_QCameraParametersIntf(QCameraParametersIntf *this)

{
  void *pvVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 4);
  pthread_mutex_lock(__mutex);
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    pvVar1 = (void *)QCameraParameters::_QCameraParameters(*(QCameraParameters **)this);
    operator_delete(pvVar1);
    *(undefined4 *)this = 0;
  }
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  return this;
}

