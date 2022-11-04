
/* qcamera::QCameraParameters::setStatsDebugMask() */

void __thiscall qcamera::QCameraParameters::setStatsDebugMask(QCameraParameters *this)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e2ebc + 0xe2e08);
  local_18 = *piVar4;
  property_get(DAT_000e2ec4 + 0xe2e1c,acStack116,*(undefined4 *)(DAT_000e2ec0 + 0xe2e12));
  iVar1 = atoi(acStack116);
  if (*(int *)(*(int *)(DAT_000e2ec8 + 0xe2e2c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e2ed0 + 0xe2e46,0xc9e,DAT_000e2ecc + 0xe2e3c,iVar1);
  }
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("cam_sem_wait error (%s)" + iVar5 + 0xe) = iVar1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0xa1) = 1;
      uVar3 = 0;
      goto LAB_000e2eac;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e2ed4 + 0xe2ea2,DAT_000e2ed8 + 0xe2ea4,DAT_000e2edc + 0xe2ea6,0xca0,
                      uVar3,0xa1);
  uVar3 = 0xffffffea;
LAB_000e2eac:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

