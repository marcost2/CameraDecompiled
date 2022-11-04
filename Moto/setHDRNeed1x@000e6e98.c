
/* qcamera::QCameraParameters::setHDRNeed1x(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setHDRNeed1x(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  pthread_t pVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000e6fa0 + 0xe6ea6);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6fa8 + 0xe6ec0,0x292b,DAT_000e6fa4 + 0xe6eb6,param_1);
  }
  if ((param_1 == (char *)0x0) ||
     ((iVar1 = strcmp(*(char **)(DAT_000e6fac + 0xe6ecc),param_1), iVar1 != 0 &&
      (iVar1 = strcmp(*(char **)(DAT_000e6fb0 + 0xe6eda),param_1), iVar1 != 0)))) {
    if (*(int *)(iVar6 + 0x28) != 0) {
      pcVar2 = (char *)(DAT_000e6fc8 + 0xe6ef2);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,3,DAT_000e6fd0 + 0xe6f06,0x293d,DAT_000e6fcc + 0xe6efa,pcVar2);
    }
  }
  else {
    updateParamEntry(this,*(char **)(DAT_000e6fb4 + 0xe6f12),param_1);
    iVar6 = strncmp(param_1,*(char **)(DAT_000e6fb8 + 0xe6f20),4);
    uVar3 = count_leading_zeroes(iVar6);
    this[0x230] = (QCameraParameters)0x1;
    this[0x298] = SUB41(uVar3 >> 5,0);
    iVar6 = *(int *)(this + 0x1e0);
    if (iVar6 == 0) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("beginInitBatch" + iVar6 + 1) = uVar3 >> 5;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x34) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar5 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e6fbc + 0xe6f92,DAT_000e6fc0 + 0xe6f94,DAT_000e6fc4 + 0xe6f96,
                        0x2935,uVar5,0x34);
  }
  return 0xffffffea;
}

