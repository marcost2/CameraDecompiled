
/* qcamera::QCameraParameters::setSharpness(int) */

void __thiscall qcamera::QCameraParameters::setSharpness(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e1d28 + 0xe1c6c);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e1d2c + 0xe1c7e);
  updateParamEntry(this,*(char **)(DAT_000e1d30 + 0xe1c88),acStack40);
  if (*(int *)(*(int *)(DAT_000e1d34 + 0xe1c94) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e1d3c + 0xe1cae,0x1e09,DAT_000e1d38 + 0xe1ca4,acStack40);
  }
  *(int *)(this + 0x370) = param_1;
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar3 + 8) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x16) = 1;
      uVar2 = 0;
      goto LAB_000e1d16;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e1d40 + 0xe1d0c,DAT_000e1d44 + 0xe1d0e,DAT_000e1d48 + 0xe1d10,0x1e14,
                      uVar2,0x16);
  uVar2 = 0xffffffea;
LAB_000e1d16:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

