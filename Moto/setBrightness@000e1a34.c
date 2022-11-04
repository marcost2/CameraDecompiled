
/* qcamera::QCameraParameters::setBrightness(int) */

void __thiscall qcamera::QCameraParameters::setBrightness(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e1afc + 0xe1a44);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e1b00 + 0xe1a56);
  updateParamEntry(this,*(char **)(DAT_000e1b04 + 0xe1a60),acStack40);
  if (*(int *)(*(int *)(DAT_000e1b08 + 0xe1a6c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e1b10 + 0xe1a86,0x1d45,DAT_000e1b0c + 0xe1a7c,acStack40);
  }
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar3 + 0x14) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x19) = 1;
      uVar2 = 0;
      goto LAB_000e1aea;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e1b14 + 0xe1ae0,DAT_000e1b18 + 0xe1ae2,DAT_000e1b1c + 0xe1ae4,0x1d46,
                      uVar2,0x19);
  uVar2 = 0xffffffea;
LAB_000e1aea:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

