
/* qcamera::QCameraParameters::setSkinToneEnhancement(int) */

void __thiscall
qcamera::QCameraParameters::setSkinToneEnhancement(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack40 [16];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e1f40 + 0xe1e88);
  local_18 = *piVar4;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000e1f44 + 0xe1e9a);
  updateParamEntry(this,*(char **)(DAT_000e1f48 + 0xe1ea4),acStack40);
  if (*(int *)(*(int *)(DAT_000e1f4c + 0xe1eb0) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e1f54 + 0xe1eca,0x1e2c,DAT_000e1f50 + 0xe1ec0,acStack40);
  }
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)(
              "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
              + iVar3 + 0x2c) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x22) = 1;
      uVar2 = 0;
      goto LAB_000e1f30;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e1f58 + 0xe1f26,DAT_000e1f5c + 0xe1f28,DAT_000e1f60 + 0xe1f2a,0x1e2e,
                      uVar2,0x22);
  uVar2 = 0xffffffea;
LAB_000e1f30:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

