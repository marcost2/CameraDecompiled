
/* qcamera::QCameraParameters::setSaturation(int) */

void __thiscall qcamera::QCameraParameters::setSaturation(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e2158 + 0xe20a0);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e215c + 0xe20b2);
  updateParamEntry(this,*(char **)(DAT_000e2160 + 0xe20bc),acStack40);
  if (*(int *)(*(int *)(DAT_000e2164 + 0xe20c8) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e216c + 0xe20e2,0x1e46,DAT_000e2168 + 0xe20d8,acStack40);
  }
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar3 + 0x10) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x18) = 1;
      uVar2 = 0;
      goto LAB_000e2146;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e2170 + 0xe213c,DAT_000e2174 + 0xe213e,DAT_000e2178 + 0xe2140,0x1e48,
                      uVar2,0x18);
  uVar2 = 0xffffffea;
LAB_000e2146:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

