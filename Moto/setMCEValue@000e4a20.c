
/* qcamera::QCameraParameters::setMCEValue(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setMCEValue(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e4a46:
    if (*(int *)(*(int *)(DAT_000e4b48 + 0xe4a4c) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e4b4c + 0xe4a5e);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e4b54 + 0xe4a72,0x2249,DAT_000e4b50 + 0xe4a66,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e4b24 + 0xe4a32),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e4b28 + 0xe4a40),param_1);
      if (iVar1 != 0) goto LAB_000e4a46;
      iVar1 = 1;
    }
    if (*(int *)(*(int *)(DAT_000e4b2c + 0xe4a82) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e4b34 + 0xe4a9c,0x223e,DAT_000e4b30 + 0xe4a92,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e4b38 + 0xe4aa6),param_1);
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
         + iVar5 + 0x38) = *(undefined4 *)(*(int *)(DAT_000e4b58 + 0xe4ad4) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x24) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e4b3c + 0xe4b14,DAT_000e4b40 + 0xe4b16,DAT_000e4b44 + 0xe4b18,
                        0x2243,uVar4,0x24);
  }
  return 0xffffffea;
}

