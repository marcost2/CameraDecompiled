
/* qcamera::QCameraParameters::setChromaFlash(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setChromaFlash(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3001) << 0x1a) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e6810 + 0xe67ba) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6818 + 0xe67d4,0x101e,DAT_000e6814 + 0xe67ca,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setChromaFlash(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e6800 + 0xe677e) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6808 + 0xe6796,0x1019,DAT_000e6804 + 0xe678e);
  }
  return 0;
}

