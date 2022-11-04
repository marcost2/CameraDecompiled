
/* qcamera::QCameraParameters::setNumOfSnapshot() */

undefined4 __thiscall qcamera::QCameraParameters::setNumOfSnapshot(QCameraParameters *this)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  char *local_7c;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000e8288 + 0xe8152);
  local_1c = *piVar6;
  pcVar1 = (char *)android::CameraParameters::get((char *)this);
  if ((pcVar1 == (char *)0x0) || (sVar2 = strlen(pcVar1), sVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar3 = strcmp(*(char **)(DAT_000e8290 + 0xe8174),pcVar1);
    if ((iVar3 == 0) || (iVar3 = strcmp(*(char **)(DAT_000e8294 + 0xe8182),pcVar1), iVar3 != 0)) {
      if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
        uVar5 = (uint)(byte)((char)this[0x298] + 1);
        goto LAB_000e81a2;
      }
    }
    else {
      pcVar1 = (char *)android::CameraParameters::get((char *)this);
      if ((pcVar1 != (char *)0x0) && (sVar2 = strlen(pcVar1), sVar2 != 0)) {
        local_78 = 0;
        uStack112 = 0;
        uStack40 = 0;
        uStack36 = 0;
        local_38 = 0;
        uStack48 = 0;
        local_2c = 0;
        local_48 = 0;
        uStack64 = 0;
        local_58 = 0;
        uStack80 = 0;
        local_68 = 0;
        uStack96 = 0;
        __strlcpy_chk(&local_78,pcVar1,0x5c,0x5c);
        local_7c = (char *)0x0;
        pcVar1 = strtok_r((char *)&local_78,(char *)(DAT_000e829c + 0xe8260),&local_7c);
        if (pcVar1 != (char *)0x0) {
          uVar5 = 0;
          pcVar1 = (char *)(DAT_000e82a0 + 0xe8270);
          do {
            pcVar4 = strtok_r((char *)0x0,pcVar1,&local_7c);
            uVar5 = uVar5 + 1;
          } while (pcVar4 != (char *)0x0);
          goto LAB_000e81a2;
        }
      }
    }
    uVar5 = 1;
  }
LAB_000e81a2:
  if ((this[0x2c9] == (QCameraParameters)0x0) || (*(byte *)(*(int *)(this + 0x1d4) + 0x384f) < 2)) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(byte *)(*(int *)(this + 0x1d4) + 0x384f) + 1;
  }
  if (*(int *)(*(int *)(DAT_000e82a4 + 0xe81c2) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e82ac + 0xe81dc,0x123b,DAT_000e82a8 + 0xe81d2,iVar3,uVar5);
  }
  android::CameraParameters::set
            ((CameraParameters *)this,*(char **)(DAT_000e82b0 + 0xe81e8),iVar3 * uVar5);
  if (*piVar6 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

