
/* qcamera::QCameraParameters::setSceneDetect(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setSceneDetect(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e3042:
    if (*(int *)(*(int *)(DAT_000e3144 + 0xe3048) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e3148 + 0xe305a);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e3150 + 0xe306e,0x1e84,DAT_000e314c + 0xe3062,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e3120 + 0xe302e),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e3124 + 0xe303c),param_1);
      if (iVar1 != 0) goto LAB_000e3042;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e3128 + 0xe307e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e3130 + 0xe3098,0x1e7b,DAT_000e312c + 0xe308e,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e3134 + 0xe30a2),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar5 + 0x18) =
             *(undefined4 *)(*(int *)(DAT_000e3154 + 930000) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x2a) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e3138 + 0xe3110,DAT_000e313c + 0xe3112,DAT_000e3140 + 0xe3114,
                        0x1e7d,uVar4,0x2a);
  }
  return 0xffffffea;
}

