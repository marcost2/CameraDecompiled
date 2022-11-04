
/* qcamera::QCameraParameters::isYUVFrameInfoNeeded() */

uint __thiscall qcamera::QCameraParameters::isYUVFrameInfoNeeded(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x22c) != 5 && *(int *)(this + 0x22c) != 2) {
    return 0;
  }
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
LAB_000f619e:
    iVar1 = -2;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f61ec + 0xf618a),__s2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f61f0 + 0xf6198),__s2);
      if (iVar1 != 0) goto LAB_000f619e;
      iVar1 = 1;
    }
    iVar1 = *(int *)(*(int *)(DAT_000f61f4 + 0xf61b4) + iVar1 * 8 + 4);
  }
  if (*(int *)(*(int *)(DAT_000f61f8 + 0xf61c0) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f6200 + 0xf61da,0x32f1,DAT_000f61fc + 0xf61d0,__s2,iVar1);
  }
  uVar2 = count_leading_zeroes(iVar1 + -1);
  return uVar2 >> 5;
}

