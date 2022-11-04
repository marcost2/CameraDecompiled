
/* qcamera::QCameraParameters::setAdvancedCaptureMode() */

undefined4 __thiscall qcamera::QCameraParameters::setAdvancedCaptureMode(QCameraParameters *this)

{
  pthread_t pVar1;
  undefined4 uVar2;
  char *__s1;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if ((((((this[0x2c8] == (QCameraParameters)0x0) || (this[0x2c9] != (QCameraParameters)0x0)) &&
        (this[0x2ca] == (QCameraParameters)0x0)) &&
       ((this[0x2cb] == (QCameraParameters)0x0 && (this[0x288] == (QCameraParameters)0x0)))) &&
      ((this[0x299] == (QCameraParameters)0x0 &&
       ((__s1 = (char *)android::CameraParameters::get((char *)this), __s1 == (char *)0x0 ||
        (iVar4 = strcmp(__s1,*(char **)(DAT_000ecd84 + 0xecd54)), iVar4 == 0)))))) &&
     (this[0x2d9] == (QCameraParameters)0x0)) {
    bVar3 = false;
    if (this[0x2c9] != (QCameraParameters)0x0) {
      bVar3 = 1 < *(byte *)(*(int *)(this + 0x1d4) + 0x384f);
    }
  }
  else {
    bVar3 = true;
  }
  iVar4 = *(int *)(DAT_000ecd88 + 0xecca0);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ecd90 + 0xeccba,0x3ed8,DAT_000ecd8c + 0xeccb0,bVar3);
  }
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
      "Could not find input request for frame number %d"[iVar5 + 0x13] = bVar3;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x5f) = 1;
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar2 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000ecd94 + 0xecd18,DAT_000ecd98 + 0xecd1a,DAT_000ecd9c + 0xecd1c,0x3eda,
                      uVar2,0x5f);
  if (*(int *)(iVar4 + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000ecda4 + 0xecd36,0x3edb,DAT_000ecda0 + 0xecd2e);
  }
  return 0xffffffea;
}

