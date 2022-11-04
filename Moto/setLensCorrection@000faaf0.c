
/* qcamera::QCameraParameters::setLensCorrection(int) */

undefined4 __thiscall
qcamera::QCameraParameters::setLensCorrection(QCameraParameters *this,int param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  
  __android_log_print(4,DAT_000fab84 + 0xfab06,DAT_000fab88 + 0xfab08,DAT_000fab8c + 0xfab0a,param_1
                     );
  iVar3 = *(int *)(this + 0x1e0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("%s: CameraMetadata is locked" + iVar3 + 0x16) = param_1;
      *(undefined2 *)("%s: CameraMetadata is locked" + iVar3 + 0x12) = 8;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x56) = 1;
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000fab90 + 0xfab74,DAT_000fab94 + 0xfab76,DAT_000fab98 + 0xfab78,0x92c,
                      uVar2,0x56);
  return 0xffffffea;
}

