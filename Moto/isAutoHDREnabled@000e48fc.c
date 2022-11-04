
/* qcamera::QCameraParameters::isAutoHDREnabled() */

uint __thiscall qcamera::QCameraParameters::isAutoHDREnabled(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    if (*(int *)(*(int *)(DAT_000e49c8 + 0xe4950) + 0x28) == 0) {
      return 0;
    }
    uVar2 = 3;
    uVar4 = 0xe8a;
    iVar1 = DAT_000e49cc + 0xe4960;
    iVar3 = DAT_000e49d0 + 0xe4968;
LAB_000e4966:
    mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar1);
    return 0;
  }
  iVar1 = strcmp(*(char **)(DAT_000e49b0 + 0xe4916),__s2);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e49b4 + 0xe4924),__s2);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_000e49d4 + 0xe4930) + 0x20) == 0) {
        return 0;
      }
      uVar2 = 1;
      uVar4 = 0xe82;
      iVar1 = DAT_000e49d8 + 0xe4940;
      iVar3 = DAT_000e49dc + 0xe494a;
      goto LAB_000e4966;
    }
    uVar5 = 1;
  }
  if (*(int *)(*(int *)(DAT_000e49b8 + 0xe497c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e49c4 + 0xe49a2,0xe86,DAT_000e49bc + 0xe498c,
                        *(undefined4 *)(*(int *)(DAT_000e49c0 + 0xe4992) + uVar5 * 8 + 4));
  }
  return uVar5 ^ 1;
}

