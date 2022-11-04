
/* qcamera::QCameraParameters::setAwbLock(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setAwbLock(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e46ca:
    if (*(int *)(*(int *)(DAT_000e47c8 + 0xe46d0) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e47cc + 0xe46e2);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e47d4 + 0xe46f6,0x2228,DAT_000e47d0 + 0xe46ea,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e47a4 + 0xe46b6),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e47a8 + 0xe46c4),param_1);
      if (iVar1 != 0) goto LAB_000e46ca;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e47ac + 0xe4706) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e47b4 + 0xe4720,0x221f,DAT_000e47b0 + 0xe4716,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e47b8 + 0xe472a),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + iVar5 + 5) =
             *(undefined4 *)(*(int *)(DAT_000e47d8 + 0xe4758) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0xb) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e47bc + 0xe4796,DAT_000e47c0 + 0xe4798,DAT_000e47c4 + 0xe479a,
                        0x2222,uVar4,0xb);
  }
  return 0xffffffea;
}

