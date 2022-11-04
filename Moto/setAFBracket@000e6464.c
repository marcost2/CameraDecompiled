
/* qcamera::QCameraParameters::setAFBracket(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setAFBracket(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(*(int *)(this + 0x1d4) + 0x3000) & 0x11000) == 0) {
    if (*(int *)(*(int *)(DAT_000e6500 + 0xe64de) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6508 + 0xe64f6,0xfd9,DAT_000e6504 + 0xe64ee);
    }
  }
  else {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e6510 + 0xe649a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6518 + 0xe64b4,0xfde,DAT_000e6514 + 0xe64aa,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setAFBracket(this,__s1);
      return uVar2;
    }
  }
  return 0;
}

