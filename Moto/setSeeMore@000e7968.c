
/* qcamera::QCameraParameters::setSeeMore(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSeeMore(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3002) << 0x1b) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e7a14 + 0xe79be) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e7a1c + 0xe79d8,0x112d,DAT_000e7a18 + 0xe79ce,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setSeeMore(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e7a04 + 0xe7982) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e7a0c + 0xe799a,0x1128,DAT_000e7a08 + 0xe7992);
  }
  return 0;
}

