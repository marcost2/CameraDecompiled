
/* qcamera::QCameraParameters::setExposureCompensation(int) */

void __thiscall
qcamera::QCameraParameters::setExposureCompensation(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e255c + 0xe24c8);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e2560 + 0xe24da);
  updateParamEntry(this,*(char **)(DAT_000e2564 + 0xe24e4),acStack40);
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("No Advanced Capture feature enabled!" + iVar3 + 10) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 7) = 1;
      uVar2 = 0;
      goto LAB_000e254c;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e2568 + 0xe2542,DAT_000e256c + 0xe2544,DAT_000e2570 + 0xe2546,0x24bd,
                      uVar2,7);
  uVar2 = 0xffffffea;
LAB_000e254c:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

