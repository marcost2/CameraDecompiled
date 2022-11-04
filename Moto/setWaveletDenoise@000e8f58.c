
/* qcamera::QCameraParameters::setWaveletDenoise(char const*) */

void __thiscall qcamera::QCameraParameters::setWaveletDenoise(QCameraParameters *this,char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  pthread_t pVar4;
  int *piVar5;
  uint uVar6;
  uint uStack156;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  piVar5 = *(int **)(DAT_000e9144 + 0xe8f6c);
  local_20 = *piVar5;
  if (-1 < (int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3000) << 0x1e)) {
    if (*(int *)(*(int *)(DAT_000e9148 + 0xe8f80) + 0x28) == 0) {
      uVar1 = 0;
    }
    else {
      mm_camera_debug_log(1,3,DAT_000e9150 + 0xe8f98,0x2a76,DAT_000e914c + 0xe8f90);
      uVar1 = 0;
    }
    goto LAB_000e9130;
  }
  if (param_1 == (char *)0x0) {
LAB_000e8fbc:
    if (*(int *)(*(int *)(DAT_000e9184 + 0xe8fc2) + 0x20) != 0) {
      pcVar3 = (char *)(DAT_000e9188 + 0xe8fd6);
      if (param_1 != (char *)0x0) {
        pcVar3 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e9190 + 0xe8fea,0x2a8f,DAT_000e918c + 0xe8fde,pcVar3);
    }
  }
  else {
    iVar2 = strcmp(*(char **)(DAT_000e9154 + 0xe8fa8),param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e9158 + 0xe8fb6),param_1);
      if (iVar2 != 0) goto LAB_000e8fbc;
      iVar2 = 1;
    }
    updateParamEntry(this,*(char **)(DAT_000e915c + 0xe9000),param_1);
    uStack156 = 0;
    uVar6 = *(uint *)(*(int *)(DAT_000e9160 + 0xe9020) + iVar2 * 8 + 4);
    this[0x232] = SUB41(iVar2,0);
    if (iVar2 != 0) {
      local_80 = 0;
      uStack120 = 0;
      uStack48 = 0;
      uStack44 = 0;
      local_40 = 0;
      uStack56 = 0;
      local_34 = 0;
      local_50 = 0;
      uStack72 = 0;
      local_60 = 0;
      uStack88 = 0;
      local_70 = 0;
      uStack104 = 0;
      property_get(DAT_000e9164 + 0xe906a,&local_80,DAT_000e9168 + 0xe906c);
      iVar2 = __strlen_chk(&local_80,0x5c);
      if (iVar2 == 0) {
        uStack156 = 0;
      }
      else {
        uStack156 = atoi((char *)&local_80);
        if (3 < uStack156) {
          uStack156 = 1;
        }
      }
    }
    if (*(int *)(*(int *)(DAT_000e916c + 0xe9094) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9174 + 0xe90b4,0x2a88,DAT_000e9170 + 0xe90a6,uVar6 & 0xff,
                          uStack156);
    }
    iVar2 = *(int *)(this + 0x1e0);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
        *(ulonglong *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar2 + 0x44) = CONCAT44(uStack156,uVar6) & 0xffffffff000000ff;
        *(undefined8 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar2 + 0x4c) = 0;
        *(undefined8 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar2 + 0x54) = 0;
        *(undefined8 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar2 + 0x5c) = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x27) = 1;
        uVar1 = 0;
        goto LAB_000e9130;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar1 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e9178 + 0xe9126,DAT_000e917c + 0xe9128,DAT_000e9180 + 0xe912a,
                        0x2a89,uVar1,0x27);
  }
  uVar1 = 0xffffffea;
LAB_000e9130:
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

