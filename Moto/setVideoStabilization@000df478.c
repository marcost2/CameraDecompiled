
/* qcamera::QCameraParameters::setVideoStabilization(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setVideoStabilization(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((this[0xd44] != (QCameraParameters)0x0) || (*(char *)(*(int *)(this + 0x1d4) + 0x5c4) == '\0')
     ) {
    __android_log_print(3,DAT_000df58c + 0xdf490,DAT_000df590 + 0xdf492,DAT_000df594 + 0xdf494);
    return 0;
  }
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000df598 + 0xdf4b4),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000df59c + 0xdf4c2),param_1);
      if (iVar1 != 0) goto LAB_000df4e8;
      iVar1 = 1;
    }
    iVar1 = *(int *)(*(int *)(DAT_000df5a0 + 0xdf4d4) + iVar1 * 8 + 4);
    if (iVar1 != -2) {
      if (iVar1 == 0) {
        iVar5 = *(int *)(this + 900);
      }
      else {
        iVar5 = 0;
      }
      setCDSMode(this,iVar5,false);
      updateParamEntry(this,*(char **)(DAT_000df5a4 + 0xdf520),param_1);
      iVar5 = *(int *)(this + 0x1e0);
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
          *(int *)("camera %d resource cost is %d" + iVar5 + 8) = iVar1;
          *(undefined *)(*(int *)(this + 0x1e0) + 0x66) = 1;
          return 0;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar4 = *(undefined4 *)(this + 0x1e0);
      }
      __android_log_print(6,DAT_000df5a8 + 0xdf57e,DAT_000df5ac + 0xdf580,DAT_000df5b0 + 0xdf582,
                          0x971,uVar4,0x66);
      return 0xffffffff;
    }
  }
LAB_000df4e8:
  pcVar2 = (char *)(DAT_000df5b4 + 0xdf4f0);
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  __android_log_print(6,DAT_000df5b8 + 0xdf500,DAT_000df5bc + 0xdf502,DAT_000df5c0 + 0xdf504,pcVar2)
  ;
  return 0xffffffea;
}

