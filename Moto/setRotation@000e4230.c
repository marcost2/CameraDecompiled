
/* qcamera::QCameraParameters::setRotation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setRotation(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = *(char **)(DAT_000e42fc + 0xe423c);
  iVar1 = android::CameraParameters::getInt((char *)param_1);
  if (iVar1 < 0x5a) {
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 != 0) goto LAB_000e429a;
  }
  else if ((iVar1 != 0x5a) && (iVar1 != 0x10e && iVar1 != 0xb4)) {
LAB_000e429a:
    if (*(int *)(*(int *)(DAT_000e430c + 0xe42a0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e4314 + 0xe42ba,0xdf8,DAT_000e4310 + 0xe42b0,iVar1);
    }
    return 0xffffffea;
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar4,iVar1);
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("Invalid buffer/metadata in channel request" + iVar5 + 0x1d) = iVar1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0xaa) = 1;
      goto LAB_000e42f2;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e4300 + 0xe42ec,DAT_000e4304 + 0xe42ee,DAT_000e4308 + 0xe42f0,0xdf5,
                      uVar3,0xaa);
LAB_000e42f2:
  *(int *)(this + 0x79c) = iVar1;
  return 0;
}

