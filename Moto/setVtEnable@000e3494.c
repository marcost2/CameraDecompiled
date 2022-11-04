
/* qcamera::QCameraParameters::setVtEnable(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setVtEnable(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e34ba:
    if (*(int *)(*(int *)(DAT_000e35c4 + 0xe34c0) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e35c8 + 0xe34d0);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e35d0 + 0xe34e4,0x1f0b,DAT_000e35cc + 0xe34d8,pcVar2);
    }
    this[0x28a] = (QCameraParameters)0x0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e35a0 + 0xe34a6),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e35a4 + 0xe34b4),param_1);
      if (iVar1 != 0) goto LAB_000e34ba;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e35a8 + 0xe34fa) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e35b0 + 0xe3514,0x1f01,DAT_000e35ac + 0xe350a,param_1);
    }
    this[0x28a] = (QCameraParameters)0x1;
    updateParamEntry(this,*(char **)(DAT_000e35b4 + 0xe3524),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("%s: CameraMetadata is locked" + iVar5 + 2) =
             *(undefined4 *)(*(int *)(DAT_000e35d4 + 0xe3552) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x3a) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e35b8 + 0xe3592,DAT_000e35bc + 0xe3594,DAT_000e35c0 + 0xe3596,
                        0x1f04,uVar4,0x3a);
  }
  return 0xffffffea;
}

