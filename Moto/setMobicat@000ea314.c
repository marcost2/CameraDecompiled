
/* qcamera::QCameraParameters::setMobicat(qcamera::QCameraParameters const&) */

void qcamera::QCameraParameters::setMobicat(QCameraParameters *param_1)

{
  uint uVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char acStack120 [92];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000ea43c + 0xea322);
  local_1c = *piVar5;
  property_get(DAT_000ea444 + 0xea336,acStack120,*(undefined4 *)(DAT_000ea440 + 0xea32c));
  uVar1 = atoi(acStack120);
  if ((uVar1 & 0xff) == 0) {
LAB_000ea3c0:
    uVar3 = 0;
LAB_000ea3c2:
    param_1[0x291] = SUB41(uVar1,0);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(param_1 + 0xd34))) {
        *(undefined4 *)("%s: CameraMetadata is locked" + iVar4 + 0x16) = 1;
        *(undefined2 *)("%s: CameraMetadata is locked" + iVar4 + 0x12) = 0x200;
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x56) = 1;
        iVar4 = *(int *)(param_1 + 0x1e0);
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          if ((*(int *)(param_1 + 0xd30) == 1) && (pVar2 == *(pthread_t *)(param_1 + 0xd34))) {
            *(undefined4 *)("updateImpl" + iVar4 + 1) = 1;
            *(undefined2 *)("%s: CameraMetadata is locked" + iVar4 + 0x1a) = 0x200;
            *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x57) = 1;
            goto LAB_000ea3c0;
          }
          MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
          uVar3 = *(undefined4 *)(param_1 + 0x1e0);
        }
        __android_log_print(6,DAT_000ea454 + 0xea42c,DAT_000ea458 + 0xea42e,DAT_000ea45c + 0xea430,
                            0x1530,uVar3,0x57);
        uVar3 = 0xffffffea;
        goto LAB_000ea3c2;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
      uVar3 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000ea448 + 0xea3ee,DAT_000ea44c + 0xea3f0,DAT_000ea450 + 0xea3f2,
                        0x152d,uVar3,0x56);
    uVar3 = 0xffffffea;
  }
  if (*piVar5 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

