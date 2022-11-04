
/* qcamera::QCameraParameters::setLog3A(qcamera::QCameraParameters const&, char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setLog3A
          (QCameraParameters *this,QCameraParameters *param_1,char *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)))) {
    uVar2 = setLog3A(this,param_2,__s1);
    return uVar2;
  }
  return 0;
}

