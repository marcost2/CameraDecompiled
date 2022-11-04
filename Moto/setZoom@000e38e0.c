
/* qcamera::QCameraParameters::setZoom(int) */

void __thiscall qcamera::QCameraParameters::setZoom(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e39ac + 0xe38f0);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e39b0 + 0xe3902);
  updateParamEntry(this,*(char **)(DAT_000e39b4 + 0xe390c),acStack40);
  if (*(int *)(*(int *)(DAT_000e39b8 + 0xe3918) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e39c0 + 0xe3932,0x1f55,DAT_000e39bc + 0xe3928,param_1);
  }
  *(int *)(this + 0x378) = param_1;
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar3 + 1) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x1b) = 1;
      uVar2 = 0;
      goto LAB_000e399a;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e39c4 + 0xe3990,DAT_000e39c8 + 0xe3992,DAT_000e39cc + 0xe3994,0x1f57,
                      uVar2,0x1b);
  uVar2 = 0xffffffea;
LAB_000e399a:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

