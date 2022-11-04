
/* qcamera::QCameraParameters::setOptiZoom(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setOptiZoom(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3001) << 0x19) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e6980 + 0xe692a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6988 + 0xe6944,0x103e,DAT_000e6984 + 0xe693a,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setOptiZoom(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e6970 + 0xe68ee) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6978 + 0xe6906,0x1039,DAT_000e6974 + 0xe68fe);
  }
  return 0;
}

