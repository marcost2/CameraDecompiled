
/* qcamera::QCameraParameters::setWaveletDenoise(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setWaveletDenoise(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)))) {
    uVar2 = setWaveletDenoise(this,__s1);
    return uVar2;
  }
  return 0;
}

