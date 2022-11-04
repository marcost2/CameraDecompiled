
/* qcamera::QCameraParameters::setPreviewFrameRate(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setPreviewFrameRate(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s2;
  char *__s1;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(char **)(DAT_000e109c + 0xe1038);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  uVar3 = android::CameraParameters::get((char *)this);
  __s2 = (char *)((ulonglong)uVar3 >> 0x20);
  if (__s1 != (char *)0x0) {
    __s2 = (char *)uVar3;
  }
  if ((__s1 != (char *)0x0 && (char *)uVar3 != (char *)0x0) &&
     (iVar1 = strcmp(__s1,__s2), iVar1 != 0)) {
    if (*(int *)(*(int *)(DAT_000e10a0 + 0xe106c) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e10a8 + 0xe1086,0xab7,DAT_000e10a4 + 0xe107c,__s1);
    }
    updateParamEntry(this,pcVar2,__s1);
    this[0x269] = (QCameraParameters)0x1;
  }
  return 0;
}

