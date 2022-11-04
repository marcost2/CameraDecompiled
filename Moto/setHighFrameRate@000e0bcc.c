
/* qcamera::QCameraParameters::setHighFrameRate(int) */

undefined4 __thiscall
qcamera::QCameraParameters::setHighFrameRate(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)(
              "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
              + iVar3 + 0x3c) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x25) = 1;
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e0c40 + 0xe0c30,DAT_000e0c44 + 0xe0c32,DAT_000e0c48 + 0xe0c34,0x2483,
                      uVar2,0x25);
  return 0xffffffea;
}

