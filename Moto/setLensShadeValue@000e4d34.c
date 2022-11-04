
/* qcamera::QCameraParameters::setLensShadeValue(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setLensShadeValue(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e4d5a:
    if (*(int *)(*(int *)(DAT_000e4e58 + 0xe4d60) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e4e5c + 0xe4d72);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e4e64 + 0xe4d86,0x24a5,DAT_000e4e60 + 0xe4d7a,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e4e34 + 0xe4d46),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e4e38 + 0xe4d54),param_1);
      if (iVar1 != 0) goto LAB_000e4d5a;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e4e3c + 0xe4d96) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e4e44 + 0xe4db0,0x249c,DAT_000e4e40 + 0xe4da6,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e4e48 + 0xe4dba),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar5 + 5) =
             *(undefined4 *)(*(int *)(DAT_000e4e68 + 0xe4de8) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1c) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e4e4c + 0xe4e26,DAT_000e4e50 + 0xe4e28,DAT_000e4e54 + 0xe4e2a,
                        0x249e,uVar4,0x1c);
  }
  return 0xffffffea;
}

