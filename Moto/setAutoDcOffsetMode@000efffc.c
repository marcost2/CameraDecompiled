
/* qcamera::QCameraParameters::setAutoDcOffsetMode(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setAutoDcOffsetMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  char *pcVar4;
  undefined uVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000f0022:
    pcVar4 = (char *)(DAT_000f00c8 + 0xf002a);
    if (param_1 != (char *)0x0) {
      pcVar4 = param_1;
    }
    iVar1 = DAT_000f00cc + 0xf0034;
    iVar3 = DAT_000f00d0 + 0xf0036;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f00b0 + 0xf000e),param_1);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f00b4 + 0xf001c),param_1);
      if (iVar1 != 0) goto LAB_000f0022;
      uVar5 = 1;
    }
    updateParamEntry(this,*(char **)(DAT_000f00b8 + 0xf0044),param_1);
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 != 0) {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(undefined *)(iVar1 + 0x22bc) = uVar5;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x10a) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    }
    iVar1 = DAT_000f00bc + 0xf00a0;
    iVar3 = DAT_000f00c0 + 0xf00a2;
    pcVar4 = (char *)(DAT_000f00c4 + 0xf00a4);
  }
  __android_log_print(6,iVar1,iVar3,pcVar4);
  return 0xffffffea;
}

