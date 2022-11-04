
/* qcamera::QCameraParametersIntf::QCameraParametersIntf() */

QCameraParametersIntf * __thiscall
qcamera::QCameraParametersIntf::QCameraParametersIntf(QCameraParametersIntf *this)

{
  *(undefined4 *)this = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 4),(pthread_mutexattr_t *)0x0);
  return this;
}

