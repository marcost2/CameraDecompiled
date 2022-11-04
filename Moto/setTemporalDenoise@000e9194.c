
/* qcamera::QCameraParameters::setTemporalDenoise(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setTemporalDenoise(QCameraParameters *this,QCameraParameters *param_1)

{
  QCameraParameters QVar1;
  QCameraParameters QVar2;
  QCameraParameters QVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *__s2;
  char *__s1;
  char *__s2_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  pthread_t pVar9;
  int *piVar10;
  char *pcVar11;
  void *__s2_01;
  char *pcVar12;
  undefined auVar13 [16];
  undefined4 local_1d8;
  uint uStack468;
  undefined8 local_1b8;
  undefined8 uStack432;
  undefined8 local_1a8;
  undefined8 uStack416;
  undefined8 local_198;
  undefined8 uStack400;
  undefined8 local_188;
  undefined8 uStack384;
  undefined8 local_178;
  undefined4 uStack368;
  undefined4 local_16c;
  undefined4 uStack360;
  undefined8 uStack356;
  undefined8 local_158;
  undefined8 uStack336;
  undefined8 local_148;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 uStack288;
  undefined8 local_118;
  undefined4 uStack272;
  undefined4 local_10c;
  undefined4 uStack264;
  undefined8 uStack260;
  undefined8 local_f8;
  undefined8 uStack240;
  undefined8 local_e8;
  undefined8 uStack224;
  undefined8 local_d8;
  undefined8 uStack208;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined4 uStack176;
  undefined4 local_ac;
  undefined4 uStack168;
  undefined8 uStack164;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined4 uStack80;
  undefined4 local_4c;
  undefined4 uStack72;
  undefined8 uStack68;
  int local_3c;
  
  piVar10 = *(int **)(DAT_000e9530 + 0xe91ae);
  local_3c = *piVar10;
  if (-1 < (int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3002) << 0x1e)) {
    if (*(int *)(*(int *)(DAT_000e9534 + 0xe91c2) + 0x28) == 0) {
      uVar4 = 0;
    }
    else {
      mm_camera_debug_log(1,3,DAT_000e953c + 0xe91de,0x133b,DAT_000e9538 + 0xe91d6);
      uVar4 = 0;
    }
    goto LAB_000e973e;
  }
  pcVar11 = *(char **)(DAT_000e9540 + 0xe91ec);
  pcVar5 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  pcVar12 = *(char **)(DAT_000e9544 + 0xe9208);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2_00 = (char *)android::CameraParameters::get((char *)this);
  QVar1 = this[0x233];
  QVar2 = this[0x234];
  QVar3 = this[0x235];
  local_178 = 0;
  uStack368 = 0;
  local_188 = 0;
  uStack384 = 0;
  local_198 = 0;
  uStack400 = 0;
  local_1a8 = 0;
  uStack416 = 0;
  local_1b8 = 0;
  uStack432 = 0;
  local_16c = 0;
  uStack360 = 0;
  uStack356 = 0;
  property_get(DAT_000e954c + 0xe9278,&local_1b8,*(undefined4 *)(DAT_000e9548 + 0xe9272));
  uVar6 = atoi((char *)&local_1b8);
  if ((__s1 != (char *)0x0) &&
     ((__s2_00 == (char *)0x0 || (iVar7 = strcmp(__s1,__s2_00), iVar7 != 0)))) {
    iVar7 = strcmp(__s1,*(char **)(DAT_000e9550 + 0xe929c));
    uVar8 = count_leading_zeroes(iVar7);
    this[0x234] = SUB41(uVar8 >> 5,0);
    updateParamEntry(this,pcVar12,__s1);
  }
  if ((pcVar5 != (char *)0x0) &&
     ((__s2 == (char *)0x0 || (iVar7 = strcmp(pcVar5,__s2), iVar7 != 0)))) {
    iVar7 = strcmp(pcVar5,*(char **)(DAT_000e9554 + 0xe92ce));
    uVar8 = count_leading_zeroes(iVar7);
    this[0x233] = SUB41(uVar8 >> 5,0);
    updateParamEntry(this,pcVar11,pcVar5);
  }
  if (this[0x214] == (QCameraParameters)0x0) {
    if ((pcVar5 == (char *)0x0) ||
       (iVar7 = strcmp(pcVar5,*(char **)(DAT_000e975c + 0xe93ca)), iVar7 != 0)) {
      local_158 = 0;
      uStack336 = 0;
      uStack264 = 0;
      uStack260 = 0;
      local_118 = 0;
      uStack272 = 0;
      local_10c = 0;
      local_128 = 0;
      uStack288 = 0;
      local_138 = 0;
      uStack304 = 0;
      local_148 = 0;
      uStack320 = 0;
      property_get(DAT_000e9764 + 0xe9414,&local_158,*(undefined4 *)(DAT_000e9760 + 0xe940e));
      iVar7 = memcmp(&local_158,*(void **)(DAT_000e9768 + 0xe941e),3);
      uVar8 = count_leading_zeroes(iVar7);
      goto LAB_000e942e;
    }
  }
  else if ((__s1 == (char *)0x0) ||
          (iVar7 = strcmp(__s1,*(char **)(DAT_000e9558 + 0xe92f8)), iVar7 != 0)) {
    auVar13 = ZEXT816(0);
    local_f8 = 0;
    uStack240 = 0;
    uStack168 = 0;
    uStack164 = 0;
    local_b8 = 0;
    uStack176 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack192 = 0;
    local_d8 = 0;
    uStack208 = 0;
    local_e8 = 0;
    uStack224 = 0;
    uVar4 = *(undefined4 *)(DAT_000e955c + 0xe9342);
    property_get(DAT_000e9560 + 0xe9348,&local_f8,uVar4);
    __s2_01 = *(void **)(DAT_000e9564 + 0xe9354);
    iVar7 = memcmp(&local_f8,__s2_01,3);
    uVar8 = count_leading_zeroes(iVar7);
    this[0x234] = SUB41(uVar8 >> 5,0);
    updateParamEntry(this,pcVar12,(char *)&local_f8);
    local_158 = SUB168(auVar13,0);
    uStack336 = SUB168(auVar13 >> 0x40,0);
    uStack272 = SUB164(auVar13 >> 0x40,0);
    local_10c = SUB164(auVar13,0);
    uStack264 = SUB164(auVar13 >> 0x20,0);
    local_148 = local_158;
    uStack320 = uStack336;
    local_138 = local_158;
    uStack304 = uStack336;
    local_128 = local_158;
    uStack288 = uStack336;
    local_118 = local_158;
    uStack260 = uStack336;
    property_get(DAT_000e9568 + 0xe93a6,&local_158,uVar4);
    iVar7 = memcmp(&local_158,__s2_01,3);
    uVar8 = count_leading_zeroes(iVar7);
LAB_000e942e:
    this[0x233] = SUB41(uVar8 >> 5,0);
    updateParamEntry(this,pcVar11,(char *)&local_158);
  }
  local_1b8 = 0;
  uStack432 = 0;
  uStack360 = 0;
  uStack356 = 0;
  local_178 = 0;
  uStack368 = 0;
  local_16c = 0;
  local_188 = 0;
  uStack384 = 0;
  local_198 = 0;
  uStack400 = 0;
  local_1a8 = 0;
  uStack416 = 0;
  property_get(DAT_000e9770 + 0xe946e,&local_1b8,*(undefined4 *)(DAT_000e976c + 0xe9468));
  iVar7 = memcmp(&local_1b8,*(void **)(DAT_000e9774 + 0xe9478),3);
  if (iVar7 == 0) {
    this[0x235] = (QCameraParameters)0x1;
    if (*(int *)(*(int *)(DAT_000e9778 + 0xe9494) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9780 + 0xe94ac,0x13a8,DAT_000e977c + 0xe94a4);
    }
  }
  else {
    this[0x235] = (QCameraParameters)0x0;
  }
  local_1d8 = 0;
  uStack468 = 0;
  if (((this[0x234] == (QCameraParameters)0x0) && (this[0x233] == (QCameraParameters)0x0)) &&
     (this[0x235] == (QCameraParameters)0x0)) {
    uVar4 = 0;
LAB_000e9628:
    if (((this[0x234] == QVar2) && (this[0x233] == QVar1)) && (QVar3 == this[0x235])) {
      uVar4 = 0;
      goto LAB_000e973e;
    }
    if (*(int *)(*(int *)(DAT_000e97c8 + 0xe9652) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e97d0 + 0xe966c,0x13d2,DAT_000e97cc + 0xe9662,uVar4,uStack468);
    }
    iVar7 = *(int *)(this + 0x1e0);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar9 = pthread_self(), pVar9 == *(pthread_t *)(this + 0xd34))) {
        *(ulonglong *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar7 + 100) = CONCAT44(uStack468,local_1d8);
        *(undefined8 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar7 + 0x6c) = 0;
        *(undefined8 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar7 + 4) = 0;
        *(undefined8 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar7 + 0xc) = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x28) = 1;
        uVar4 = 0;
        goto LAB_000e973e;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e97d4 + 0xe96e2,DAT_000e97d8 + 0xe96e4,DAT_000e97dc + 0xe96e6,
                        0x13d4,uVar4,0x28);
  }
  else {
    local_1d8 = 1;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_78 = 0;
    uStack112 = 0;
    local_88 = 0;
    uStack128 = 0;
    local_98 = 0;
    uStack144 = 0;
    local_4c = 0;
    uStack72 = 0;
    uStack68 = 0;
    property_get(DAT_000e9784 + 0xe9514,&local_98,DAT_000e9788 + 0xe9516);
    iVar7 = __strlen_chk(&local_98,0x5c);
    if (iVar7 == 0) {
      uStack468 = 0;
    }
    else {
      uVar8 = atoi((char *)&local_98);
      uStack468 = 1;
      if (uVar8 < 4) {
        uStack468 = uVar8;
      }
    }
    if ((uVar6 & 0xff) != 0) {
      if (*(int *)(*(int *)(DAT_000e97bc + 0xe957c) + 0x28) == 0) {
LAB_000e9626:
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
        mm_camera_debug_log(1,3,DAT_000e97c4 + 0xe9598,0x13ca,DAT_000e97c0 + 0xe9590);
      }
      goto LAB_000e9628;
    }
    pcVar5 = *(char **)(DAT_000e9790 + 0xe95a8);
    updateParamEntry(this,*(char **)(DAT_000e978c + 0xe95a2),pcVar5);
    if (this[0x233] != (QCameraParameters)0x0) {
      updateParamEntry(this,*(char **)(DAT_000e9794 + 0xe95be),pcVar5);
    }
    iVar7 = *(int *)(this + 0x1e0);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar9 = pthread_self(), pVar9 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("No memory for camera_cmd_t" + iVar7 + 0x19) = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5b) = 1;
        if (*(int *)(*(int *)(DAT_000e97b0 + 0xe9606) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e97b8 + 0xe9620,0x13c3,DAT_000e97b4 + 0xe9616,pcVar5);
        }
        *(undefined4 *)(this + 900) = 0;
        goto LAB_000e9626;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e9798 + 0xe9712,DAT_000e979c + 0xe9714,DAT_000e97a0 + 0xe9716,
                        0x13be,uVar4,0x5b);
    if (*(int *)(*(int *)(DAT_000e97a4 + 0xe9720) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e97ac + 0xe9738,0x13bf,DAT_000e97a8 + 0xe9730);
    }
  }
  uVar4 = 0xffffffea;
LAB_000e973e:
  if (*piVar10 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

