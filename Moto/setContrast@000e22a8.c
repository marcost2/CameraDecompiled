
/* qcamera::QCameraParameters::setContrast(int) */

void __thiscall qcamera::QCameraParameters::setContrast(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e2370 + 0xe22b8);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e2374 + 0xe22ca);
  updateParamEntry(this,*(char **)(DAT_000e2378 + 0xe22d4),acStack40);
  if (*(int *)(*(int *)(DAT_000e237c + 0xe22e0) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e2384 + 0xe22fa,0x1e60,DAT_000e2380 + 0xe22f0,acStack40);
  }
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar3 + 0xc) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x17) = 1;
      uVar2 = 0;
      goto LAB_000e235e;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e2388 + 0xe2354,DAT_000e238c + 0xe2356,DAT_000e2390 + 0xe2358,0x1e62,
                      uVar2,0x17);
  uVar2 = 0xffffffea;
LAB_000e235e:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

