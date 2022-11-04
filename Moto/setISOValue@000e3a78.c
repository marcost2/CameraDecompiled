
/* qcamera::QCameraParameters::setISOValue(char const*) */

void __thiscall qcamera::QCameraParameters::setISOValue(QCameraParameters *this,char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  pthread_t pVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(DAT_000e3c88 + 0xe3a88);
  iVar1 = *piVar8;
  if (param_1 == (char *)0x0) {
LAB_000e3b2e:
    if (*(int *)(*(int *)(DAT_000e3cc8 + 0xe3b34) + 0x20) != 0) {
      pcVar3 = (char *)(DAT_000e3ccc + 0xe3b48);
      if (param_1 != (char *)0x0) {
        pcVar3 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e3cd4 + 0xe3b5c,0x1f87,DAT_000e3cd0 + 0xe3b50,pcVar3);
    }
  }
  else {
    iVar2 = strcmp(param_1,*(char **)(DAT_000e3c8c + 0xe3a94));
    if (iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_000e3c94 + 0xe3b66) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000e3c9c + 0xe3b7e,0x1f6e,DAT_000e3c98 + 0xe3b76);
      }
      updateParamEntry(this,*(char **)(DAT_000e3ca0 + 0xe3b88),param_1);
      uVar6 = 0;
      goto LAB_000e3c76;
    }
    iVar2 = strcmp(*(char **)(DAT_000e3c90 + 0xe3aa6),param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e3ca4 + 0xe3ab6),param_1);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000e3cd8 + 0xe3ac6),param_1);
        if (iVar2 == 0) {
          iVar2 = 2;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000e3cdc + 0xe3ad6),param_1);
          if (iVar2 == 0) {
            iVar2 = 3;
          }
          else {
            iVar2 = strcmp(*(char **)(DAT_000e3ce0 + 0xe3ae6),param_1);
            if (iVar2 == 0) {
              iVar2 = 4;
            }
            else {
              iVar2 = strcmp(*(char **)(DAT_000e3ce4 + 0xe3af6),param_1);
              if (iVar2 == 0) {
                iVar2 = 5;
              }
              else {
                iVar2 = strcmp(*(char **)(DAT_000e3ce8 + 0xe3b06),param_1);
                if (iVar2 == 0) {
                  iVar2 = 6;
                }
                else {
                  iVar2 = strcmp(*(char **)(DAT_000e3cec + 0xe3b16),param_1);
                  if (iVar2 == 0) {
                    iVar2 = 7;
                  }
                  else {
                    iVar2 = strcmp(*(char **)(DAT_000e3cf0 + 0xe3b26),param_1);
                    if (iVar2 != 0) goto LAB_000e3b2e;
                    iVar2 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar2 = *(int *)(*(int *)(DAT_000e3ca8 + 0xe3bba) + iVar2 * 8 + 4);
    if (*(int *)(*(int *)(DAT_000e3cac + 0xe3bc6) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e3cb4 + 0xe3be0,0x1f74,DAT_000e3cb0 + 0xe3bd6,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e3cb8 + 0xe3bea),param_1);
    iVar4 = *(int *)(this + 0x7c0);
    iVar7 = *(int *)(this + 0x1e0);
    if (iVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
        *(ulonglong *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar7 + 0x18) =
             (ulonglong)(iVar4 != 0);
        *(longlong *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar7 + 0x20) =
             (longlong)iVar2;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1a) = 1;
        *(int *)(this + 0x7bc) = iVar2;
        uVar6 = 0;
        goto LAB_000e3c76;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar6 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e3cbc + 0xe3c6c,DAT_000e3cc0 + 0xe3c6e,DAT_000e3cc4 + 0xe3c70,
                        0x1f7f,uVar6,0x1a);
  }
  uVar6 = 0xffffffea;
LAB_000e3c76:
  if (*piVar8 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

