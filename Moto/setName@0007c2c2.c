
/* qcamera::QCameraCmdThread::setName(char const*) */

undefined4 __thiscall qcamera::QCameraCmdThread::setName(QCameraCmdThread *this,char *param_1)

{
  prctl(0xf,param_1,0,0,0);
  return 0;
}

