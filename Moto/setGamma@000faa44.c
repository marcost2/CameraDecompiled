
/* qcamera::QCameraParameters::setGamma(int) */

undefined4 __thiscall qcamera::QCameraParameters::setGamma(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  
  __android_log_print(3,DAT_000faad8 + 0xfaa5a,DAT_000faadc + 0xfaa5c,DAT_000faae0 + 0xfaa5e,param_1
                     );
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("%s: CameraMetadata is locked" + iVar3 + 0x16) = param_1;
      *(undefined2 *)("%s: CameraMetadata is locked" + iVar3 + 0x12) = 4;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x56) = 1;
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000faae4 + 0xfaac8,DAT_000faae8 + 0xfaaca,DAT_000faaec + 0xfaacc,0x90f,
                      uVar2,0x56);
  return 0xffffffea;
}

