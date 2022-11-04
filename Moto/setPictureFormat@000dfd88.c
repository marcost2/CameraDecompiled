
/* qcamera::QCameraParameters::setPictureFormat(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setPictureFormat(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s2;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  __s2 = (char *)android::CameraParameters::getPictureFormat((CameraParameters *)param_1);
  if (__s2 != (char *)0x0) {
    uVar3 = 0;
    iVar4 = *(int *)(DAT_000dfe24 + 0xdfda0);
    do {
      iVar1 = strcmp(*(char **)(iVar4 + uVar3 * 8),__s2);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 0x22c) = *(undefined4 *)(iVar4 + uVar3 * 8 + 4);
        android::CameraParameters::setPictureFormat((char *)this);
        if (*(int *)(*(int *)(DAT_000dfe38 + 0xdfdfe) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000dfe40 + 0xdfe1c,0x8ee,DAT_000dfe3c + 0xdfe10,
                              *(undefined4 *)(this + 0x22c));
        }
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x5b);
  }
  if (*(int *)(*(int *)(DAT_000dfe28 + 0xdfdb8) + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000dfe2c + 0xdfdc8);
    if (__s2 != (char *)0x0) {
      pcVar2 = __s2;
    }
    mm_camera_debug_log(1,1,DAT_000dfe34 + 0xdfddc,0x8f1,DAT_000dfe30 + 0xdfdd0,pcVar2);
  }
  return 0xffffffea;
}

