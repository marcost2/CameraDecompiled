
/* qcamera::QCameraParameters::setPreviewFormat(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setPreviewFormat(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s2;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  __s2 = (char *)android::CameraParameters::getPreviewFormat((CameraParameters *)param_1);
  if (__s2 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000dfd4c + 0xdfc70),__s2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000dfd50 + 0xdfc7e),__s2);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000dfd74 + 0xdfc8c),__s2);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000dfd78 + 0xdfc9a),__s2);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000dfd7c + 0xdfca8),__s2);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000dfd80 + 0xdfcb6),__s2);
              if (iVar1 != 0) goto LAB_000dfcbc;
              iVar1 = 5;
            }
          }
        }
      }
    }
    uVar3 = *(undefined4 *)(*(int *)(DAT_000dfd54 + 0xdfd0c) + iVar1 * 8 + 4);
    *(undefined4 *)(this + 0x224) = uVar3;
    *(undefined4 *)(this + 0x228) = uVar3;
    android::CameraParameters::setPreviewFormat((char *)this);
    if (*(int *)(*(int *)(DAT_000dfd58 + 0xdfd24) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000dfd60 + 0xdfd42,0x8d3,DAT_000dfd5c + 0xdfd36,
                          *(undefined4 *)(this + 0x224));
    }
    return 0;
  }
LAB_000dfcbc:
  if (*(int *)(*(int *)(DAT_000dfd64 + 0xdfcc2) + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000dfd68 + 0xdfcd2);
    if (__s2 != (char *)0x0) {
      pcVar2 = __s2;
    }
    mm_camera_debug_log(1,1,DAT_000dfd70 + 0xdfce6,0x8d6,DAT_000dfd6c + 0xdfcda,pcVar2);
  }
  return 0xffffffea;
}

