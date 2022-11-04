
/* qcamera::QCameraParameters::setAecLock(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setAecLock(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e4552:
    if (*(int *)(*(int *)(DAT_000e4650 + 0xe4558) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e4654 + 0xe456a);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e465c + 0xe457e,0x2209,DAT_000e4658 + 0xe4572,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e462c + 0xe453e),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e4630 + 0xe454c),param_1);
      if (iVar1 != 0) goto LAB_000e4552;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e4634 + 0xe458e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e463c + 0xe45a8,0x21ff,DAT_000e4638 + 0xe459e,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e4640 + 0xe45b2),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("No Advanced Capture feature enabled!" + iVar5 + 0x16) =
             *(undefined4 *)(*(int *)(DAT_000e4660 + 0xe45e0) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 9) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e4644 + 0xe461e,DAT_000e4648 + 0xe4620,DAT_000e464c + 0xe4622,
                        0x2202,uVar4,9);
  }
  return 0xffffffea;
}

