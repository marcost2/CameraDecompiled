
/* qcamera::QCameraParameters::setWhiteBalance(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setWhiteBalance(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e2646:
    if (*(int *)(*(int *)(DAT_000e275c + 0xe264c) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e2760 + 0xe265e);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e2768 + 0xe2672,0x24de,DAT_000e2764 + 0xe2666,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e2738 + 0xe25c8),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e273c + 0xe25d8),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e276c + 0xe25e8),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e2770 + 0xe25f8),param_1);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000e2774 + 0xe2608),param_1);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000e2778 + 0xe2616),param_1);
              if (iVar1 == 0) {
                iVar1 = 5;
              }
              else {
                iVar1 = strcmp(*(char **)(DAT_000e277c + 0xe2624),param_1);
                if (iVar1 == 0) {
                  iVar1 = 6;
                }
                else {
                  iVar1 = strcmp(*(char **)(DAT_000e2780 + 0xe2632),param_1);
                  if (iVar1 == 0) {
                    iVar1 = 7;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(DAT_000e2784 + 0xe2640),param_1);
                    if (iVar1 != 0) goto LAB_000e2646;
                    iVar1 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*(int *)(*(int *)(DAT_000e2740 + 0xe269e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e2748 + 0xe26b8,0x24d6,DAT_000e2744 + 0xe26ae,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e274c + 0xe26c2),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)(iVar5 + 0xc680) =
             *(undefined4 *)(*(int *)(DAT_000e2788 + 0xe26ec) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 4) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e2750 + 0xe272a,DAT_000e2754 + 0xe272c,DAT_000e2758 + 0xe272e,
                        0x24d8,uVar4,4);
  }
  return 0xffffffea;
}

