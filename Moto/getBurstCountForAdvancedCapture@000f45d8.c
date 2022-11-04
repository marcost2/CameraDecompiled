
/* qcamera::QCameraParameters::getBurstCountForAdvancedCapture() */

uint __thiscall qcamera::QCameraParameters::getBurstCountForAdvancedCapture(QCameraParameters *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
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
  
  piVar9 = *(int **)(DAT_000f47a8 + 0xf45e6);
  local_1c = *piVar9;
  if (this[0x2c8] == (QCameraParameters)0x0) {
    if (this[0x2c9] != (QCameraParameters)0x0) goto LAB_000f4604;
LAB_000f4618:
    if ((this[0x2cb] != (QCameraParameters)0x0) &&
       (uVar8 = *(uint *)(this + 0x37c), -1 < (int)uVar8)) {
      bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
      if (*(int *)(*(int *)(DAT_000f47ac + 0xf4636) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f47b4 + 0xf4650,0x27c0,DAT_000f47b0 + 0xf4646,uVar8,
                            (uint)bVar1);
      }
      if (bVar1 <= uVar8) {
        iVar2 = *(int *)(this + 0x1d4);
        iVar7 = 0x3855;
        goto LAB_000f467e;
      }
    }
    if (this[0x2ca] != (QCameraParameters)0x0) {
      iVar2 = *(int *)(this + 0x1d4);
      iVar7 = 0x385a;
      goto LAB_000f467e;
    }
    if (this[0x2d9] != (QCameraParameters)0x0) {
      if (this[0x2d8] != (QCameraParameters)0x0) {
        uVar8 = 1;
        goto LAB_000f46d6;
      }
      iVar2 = *(int *)(this + 0x1d4);
      uVar8 = (uint)(byte)this[0x28d];
      if ((uVar8 < *(byte *)(iVar2 + 0x3858)) || (*(byte *)(iVar2 + 0x3859) < uVar8)) {
        uVar8 = (uint)*(byte *)(iVar2 + 0x3857);
      }
      goto joined_r0x000f46c0;
    }
    if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
      uVar8 = *(uint *)(*(int *)(this + 0x1d4) + 0x2fd8);
      goto joined_r0x000f46c0;
    }
    pcVar4 = (char *)android::CameraParameters::get((char *)this);
    if ((pcVar4 != (char *)0x0) &&
       (iVar2 = strcmp(pcVar4,*(char **)(DAT_000f47bc + 0xf471e)), iVar2 != 0)) {
      sVar5 = strlen((char *)(this + 0x244));
      if (sVar5 != 0) {
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
        __strlcpy_chk(&local_78,this + 0x244,0x5c,0x5c);
        uVar8 = 0;
        local_7c = (char *)0x0;
        pcVar4 = strtok_r((char *)&local_78,(char *)(DAT_000f47c0 + 0xf4782),&local_7c);
        if (pcVar4 != (char *)0x0) {
          uVar8 = 0;
          pcVar4 = (char *)(DAT_000f47c4 + 0xf4794);
          do {
            pcVar6 = strtok_r((char *)0x0,pcVar4,&local_7c);
            uVar8 = uVar8 + 1;
          } while (pcVar6 != (char *)0x0);
        }
        goto joined_r0x000f46c0;
      }
    }
  }
  else {
    if (this[0x2c9] == (QCameraParameters)0x0) {
      iVar2 = *(int *)(this + 0x1d4);
      iVar7 = 0x383d;
    }
    else {
LAB_000f4604:
      iVar2 = *(int *)(this + 0x1d4);
      if (*(byte *)(iVar2 + 0x384f) < 2) goto LAB_000f4618;
      iVar7 = 0x3849;
    }
LAB_000f467e:
    uVar8 = (uint)*(byte *)(iVar2 + iVar7);
joined_r0x000f46c0:
    if (uVar8 != 0) goto LAB_000f46d6;
  }
  uVar3 = android::CameraParameters::getInt((char *)this);
  uVar8 = 1;
  if (0 < (int)uVar3) {
    uVar8 = uVar3 & 0xff;
  }
LAB_000f46d6:
  if (*(int *)(*(int *)(DAT_000f47cc + 0xf46dc) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f47d4 + 0xf46f6,0x2e15,DAT_000f47d0 + 0xf46ec,uVar8);
  }
  if (*piVar9 == local_1c) {
    return uVar8 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

