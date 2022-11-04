
/* qcamera::QCameraParameters::setFaceRecognition(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setFaceRecognition(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)))) {
    uVar2 = android::CameraParameters::getInt((char *)param_1);
    uVar3 = setFaceRecognition(this,__s1,uVar2);
    return uVar3;
  }
  return 0;
}

