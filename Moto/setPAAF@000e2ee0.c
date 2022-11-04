
/* qcamera::QCameraParameters::setPAAF() */

void __thiscall qcamera::QCameraParameters::setPAAF(QCameraParameters *this)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_000e2fb0 + 0xe2eec);
  local_18 = *piVar4;
  property_get(DAT_000e2fb8 + 0xe2f00,acStack116,*(undefined4 *)(DAT_000e2fb4 + 0xe2ef6));
  iVar1 = atoi(acStack116);
  if (*(int *)(*(int *)(DAT_000e2fbc + 0xe2f10) + 0x28) != 0) {
    iVar5 = DAT_000e2fc4 + 0xe2f24;
    if (iVar1 == 0) {
      iVar5 = DAT_000e2fc0 + 0xe2f22;
    }
    mm_camera_debug_log(1,3,DAT_000e2fcc + 0xe2f38,0xcbb,DAT_000e2fc8 + 0xe2f2c,iVar5);
  }
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("cam_sem_wait error (%s)" + iVar5 + 0x12) = iVar1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0xa2) = 1;
      uVar3 = 0;
      goto LAB_000e2f9e;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e2fd0 + 0xe2f94,DAT_000e2fd4 + 0xe2f96,DAT_000e2fd8 + 0xe2f98,0xcbd,
                      uVar3,0xa2);
  uVar3 = 0xffffffea;
LAB_000e2f9e:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

