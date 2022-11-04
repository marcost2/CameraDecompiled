
/* qcamera::QCameraParameters::setDISValue(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setDISValue(QCameraParameters *this,char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  pthread_t pVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (param_1 == (char *)0x0) {
LAB_000e4bc4:
    if (*(int *)(*(int *)(DAT_000e4ce0 + 0xe4bca) + 0x20) != 0) {
      pcVar6 = (char *)(DAT_000e4ce4 + 0xe4bda);
      if (param_1 != (char *)0x0) {
        pcVar6 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e4cec + 0xe4bee,0x2424,DAT_000e4ce8 + 0xe4be2,pcVar6);
    }
    this[0x28b] = (QCameraParameters)0x0;
  }
  else {
    pcVar6 = *(char **)(DAT_000e4cbc + 0xe4bae);
    iVar1 = strcmp(pcVar6,param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e4cc0 + 0xe4bbe),param_1);
      if (iVar1 != 0) goto LAB_000e4bc4;
      iVar1 = 1;
    }
    this[0x230] = (QCameraParameters)0x1;
    if (*(int *)(*(int *)(DAT_000e4cc4 + 0xe4c0a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e4ccc + 0xe4c24,0x2417,DAT_000e4cc8 + 0xe4c1a,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e4cd0 + 0xe4c2e),param_1);
    iVar2 = strcmp(param_1,pcVar6);
    uVar3 = count_leading_zeroes(iVar2);
    this[0x28b] = SUB41(uVar3 >> 5,0);
    iVar2 = *(int *)(this + 0x1e0);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + iVar2 + 0xd) =
             *(undefined4 *)(*(int *)(DAT_000e4cf0 + 0xe4c6e) + iVar1 * 8 + 4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0xe) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar5 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e4cd4 + 0xe4cac,DAT_000e4cd8 + 0xe4cae,DAT_000e4cdc + 0xe4cb0,
                        0x241e,uVar5,0xe);
  }
  return 0xffffffea;
}

