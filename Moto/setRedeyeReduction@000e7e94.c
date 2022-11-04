
/* qcamera::QCameraParameters::setRedeyeReduction(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setRedeyeReduction(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e7eba:
    if (*(int *)(*(int *)(DAT_000e7fbc + 0xe7ec0) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e7fc0 + 0xe7ed2);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e7fc8 + 0xe7ee6,0x2a32,DAT_000e7fc4 + 0xe7eda,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e7f98 + 0xe7ea6),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e7f9c + 0xe7eb4),param_1);
      if (iVar1 != 0) goto LAB_000e7eba;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e7fa0 + 0xe7ef6) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e7fa8 + 0xe7f10,0x2a28,DAT_000e7fa4 + 0xe7f06,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e7fac + 0xe7f1a),param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar5 + 0x40) = *(undefined4 *)(*(int *)(DAT_000e7fcc + 0xe7f48) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x26) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e7fb0 + 0xe7f88,DAT_000e7fb4 + 0xe7f8a,DAT_000e7fb8 + 0xe7f8c,
                        0x2a2b,uVar4,0x26);
  }
  return 0xffffffea;
}

