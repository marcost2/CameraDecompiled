
/* qcamera::QCameraParameters::setAutoExposure(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setAutoExposure(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e033e:
    if (*(int *)(*(int *)(DAT_000e0450 + 0xe0344) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e0454 + 0xe0356);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e045c + 0xe036a,0x1d10,DAT_000e0458 + 0xe035e,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e042c + 0xe02e2),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e0430 + 0xe02f2),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e0460 + 0xe0300),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e0464 + 0xe030e),param_1);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000e0468 + 0xe031c),param_1);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000e046c + 0xe032a),param_1);
              if (iVar1 == 0) {
                iVar1 = 5;
              }
              else {
                iVar1 = strcmp(*(char **)(DAT_000e0470 + 0xe0338),param_1);
                if (iVar1 != 0) goto LAB_000e033e;
                iVar1 = 6;
              }
            }
          }
        }
      }
    }
    if (*(int *)(*(int *)(DAT_000e0434 + 0xe038e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e043c + 0xe03a8,0x1d08,DAT_000e0438 + 0xe039e,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e0440 + 0xe03b2),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar5 + 0xd) =
             *(undefined4 *)(*(int *)(DAT_000e0474 + 0xe03e0) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1e) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e0444 + 0xe041e,DAT_000e0448 + 0xe0420,DAT_000e044c + 0xe0422,
                        0x1d0a,uVar4,0x1e);
  }
  return 0xffffffea;
}

