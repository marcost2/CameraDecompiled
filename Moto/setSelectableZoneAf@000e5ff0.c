
/* qcamera::QCameraParameters::setSelectableZoneAf(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setSelectableZoneAf(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e6032:
    if (*(int *)(*(int *)(DAT_000e6138 + 0xe6038) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e613c + 0xe604a);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e6144 + 0xe605e,0x26f2,DAT_000e6140 + 0xe6052,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e6114 + 0xe6002),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e6118 + 0xe6010),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e6148 + 0xe601e),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e614c + 0xe602c),param_1);
          if (iVar1 != 0) goto LAB_000e6032;
          iVar1 = 3;
        }
      }
    }
    if (*(int *)(*(int *)(DAT_000e611c + 0xe6076) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e6124 + 0xe6090,0x26e9,DAT_000e6120 + 0xe6086,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e6128 + 0xe609a),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar5 + 0x11) =
             *(undefined4 *)(*(int *)(DAT_000e6150 + 0xe60c8) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1f) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e612c + 0xe6106,DAT_000e6130 + 0xe6108,DAT_000e6134 + 0xe610a,
                        0x26eb,uVar4,0x1f);
  }
  return 0xffffffea;
}

