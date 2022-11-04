
/* qcamera::QCameraParameters::setLedCalibration(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setLedCalibration(QCameraParameters *this,char *param_1)

{
  int iVar1;
  pthread_t pVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000f970c:
    if (*(int *)(*(int *)(DAT_000f983c + 0xf9712) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x3e9a;
    pcVar3 = (char *)(DAT_000f9840 + 0xf9724);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    iVar1 = DAT_000f9844 + 0xf972c;
    iVar4 = DAT_000f9848 + 0xf9738;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f980c + 0xf96ea),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f9810 + 0xf96f8),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f984c + 0xf9706),param_1);
        if (iVar1 != 0) goto LAB_000f970c;
        iVar1 = 2;
      }
    }
    uVar5 = *(undefined4 *)(*(int *)(DAT_000f9814 + 0xf9748) + iVar1 * 8 + 4);
    *(undefined4 *)(this + 0x7f8) = uVar5;
    iVar1 = *(int *)(DAT_000f9818 + 0xf9758);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f9820 + 0xf9772,0x3e8e,DAT_000f981c + 0xf9766,uVar5);
    }
    updateParamEntry(this,*(char **)(DAT_000f9824 + 0xf977c),param_1);
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Could not find input request for frame number %d" + iVar4 + 0xf) =
             *(undefined4 *)(this + 0x7f8);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5e) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      pcVar3 = *(char **)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f9828 + 0xf97e2,DAT_000f982c + 0xf97e4,DAT_000f9830 + 0xf97e6,
                        0x3e92,pcVar3,0x5e);
    if (*(int *)(iVar1 + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x3e93;
    iVar1 = DAT_000f9834 + 0xf97f8;
    iVar4 = DAT_000f9838 + 0xf9800;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar1,pcVar3);
  return 0xffffffea;
}

