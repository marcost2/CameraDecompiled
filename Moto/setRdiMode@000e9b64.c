
/* qcamera::QCameraParameters::setRdiMode(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setRdiMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000e9c68 + 0xe9b72);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e9c70 + 0xe9b8c,0x2aa1,DAT_000e9c6c + 0xe9b82,param_1);
  }
  if (param_1 == (char *)0x0) {
LAB_000e9bac:
    if (*(int *)(iVar5 + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e9c8c + 0xe9bbe);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e9c94 + 0xe9bd2,0x2aaf,DAT_000e9c90 + 0xe9bc6,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e9c74 + 0xe9b98),param_1);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e9c78 + 0xe9ba6),param_1);
      if (iVar1 != 0) goto LAB_000e9bac;
      iVar5 = 1;
    }
    updateParamEntry(this,*(char **)(DAT_000e9c7c + 0xe9be4),param_1);
    this[0x2ee] = (QCameraParameters)((byte)iVar5 ^ 1);
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Input settings missing!" + iVar1 + 0xb) =
             *(undefined4 *)(*(int *)(DAT_000e9c98 + 0xe9c1a) + iVar5 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5a) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e9c80 + 0xe9c5a,DAT_000e9c84 + 0xe9c5c,DAT_000e9c88 + 0xe9c5e,
                        0x2aa9,uVar4,0x5a);
  }
  return 0xffffffea;
}

