
/* qcamera::QCameraParameters::setHDRMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setHDRMode(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  uVar3 = *(uint *)(*(int *)(this + 0x1d4) + 0x3000);
  iVar4 = *(int *)(DAT_000e6cbc + 0xe6bea);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6cc4 + 0xe6c04,0x107b,DAT_000e6cc0 + 0xe6bfa,__s1,__s2);
  }
  if (__s1 != (char *)0x0) {
    uVar3 = uVar3 & 0x8020;
    if (uVar3 == 0) {
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e6ce4 + 0xe6c60,0x1086,DAT_000e6ce0 + 0xe6c58);
      }
    }
    else {
      if (uVar3 == 0x20) {
        iVar1 = strncmp(__s1,*(char **)(DAT_000e6cd4 + 0xe6c6c),0x13);
        if (iVar1 != 0) {
          if (*(int *)(iVar4 + 0x28) == 0) {
            return 0;
          }
          mm_camera_debug_log(1,3,DAT_000e6cdc + 0xe6c8c,0x1083,DAT_000e6cd8 + 0xe6c84);
          return 0;
        }
      }
      else if ((uVar3 == 0x8000) &&
              (iVar1 = strncmp(__s1,*(char **)(DAT_000e6cc8 + 0xe6c24),0xf), iVar1 != 0)) {
        if (*(int *)(iVar4 + 0x28) == 0) {
          return 0;
        }
        mm_camera_debug_log(1,3,DAT_000e6cd0 + 0xe6c44,0x107f,DAT_000e6ccc + 0xe6c3c);
        return 0;
      }
      if ((__s2 == (char *)0x0) || (iVar4 = strcmp(__s1,__s2), iVar4 != 0)) {
        uVar2 = setHDRMode(this,__s1);
        return uVar2;
      }
    }
  }
  return 0;
}

