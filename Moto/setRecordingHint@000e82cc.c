
/* qcamera::QCameraParameters::setRecordingHint(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setRecordingHint(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  char acStack120 [92];
  int local_1c;
  
  piVar6 = *(int **)(DAT_000e8418 + 0xe82da);
  local_1c = *piVar6;
  pcVar5 = *(char **)(DAT_000e841c + 0xe82e4);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)))) {
    iVar1 = strcmp(*(char **)(DAT_000e8420 + 0xe8312),__s1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e8424 + 0xe8320),__s1);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_000e8450 + 0xe832c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000e8458 + 0xe8346,0x1264,DAT_000e8454 + 0xe833c,__s1);
        }
        uVar2 = 0xffffffea;
        goto LAB_000e8404;
      }
      iVar1 = 1;
    }
    updateParamEntry(this,pcVar5,__s1);
    setRecordingHintValue(this,*(int *)(*(int *)(DAT_000e8428 + 0xe8368) + iVar1 * 8 + 4));
    if (this[0x21c] != (QCameraParameters)0x0) {
      property_get(DAT_000e8430 + 0xe838a,acStack120,*(undefined4 *)(DAT_000e842c + 0xe8380));
      uVar3 = atoi(acStack120);
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
      if (*(int *)(*(int *)(DAT_000e8434 + 0xe839c) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000e843c + 0xe83b8,0x3dbb,DAT_000e8438 + 0xe83ac,uVar3 & 0xff);
      }
      if ((uVar3 & 0xff) == 0) {
        bVar4 = (bool)((byte)iVar1 ^ 1);
      }
      else {
        bVar4 = true;
      }
      setFaceDetection(this,bVar4,false);
    }
    if (this[0x28b] != (QCameraParameters)0x0) {
      if (*(int *)(*(int *)(DAT_000e8440 + 0xe83dc) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e8448 + 0xe83f4,0x125f,DAT_000e8444 + 0xe83ec);
      }
      setDISValue(this,*(char **)(DAT_000e844c + 0xe83fc));
    }
  }
  uVar2 = 0;
LAB_000e8404:
  if (*piVar6 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

