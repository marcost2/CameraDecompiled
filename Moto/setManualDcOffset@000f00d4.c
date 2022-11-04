
/* qcamera::QCameraParameters::setManualDcOffset(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setManualDcOffset(QCameraParameters *this,char *param_1)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    iVar1 = DAT_000f017c + 0xf012e;
    iVar4 = DAT_000f0180 + 0xf0130;
    iVar3 = DAT_000f0184 + 0xf0132;
  }
  else {
    iVar1 = atoi(param_1);
    updateParamEntry(this,*(char **)(DAT_000f016c + 0xf00ee),param_1);
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 != 0) {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(int *)(iVar4 + 0x22c0) = iVar1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x10b) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    }
    iVar1 = DAT_000f0170 + 0xf015a;
    iVar4 = DAT_000f0174 + 0xf015c;
    iVar3 = DAT_000f0178 + 0xf015e;
  }
  __android_log_print(6,iVar1,iVar4,iVar3);
  return 0xffffffea;
}

