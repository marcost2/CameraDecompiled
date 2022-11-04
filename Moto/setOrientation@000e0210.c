
/* qcamera::QCameraParameters::setOrientation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setOrientation(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_000e0278 + 0xe021c);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,(char *)(DAT_000e027c + 0xe022e));
    if ((iVar1 != 0) && (iVar1 = strcmp(__s1,(char *)(DAT_000e0280 + 0xe023a)), iVar1 != 0)) {
      if (*(int *)(*(int *)(DAT_000e0284 + 0xe0244) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e028c + 0xe025e,0x99a,DAT_000e0288 + 0xe0254,__s1);
      }
      return 0xffffffea;
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar2,__s1);
  }
  return 0;
}

