
/* qcamera::QCameraParameters::setCacheVideoBuffers(char const*) */

void __thiscall
qcamera::QCameraParameters::setCacheVideoBuffers(QCameraParameters *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
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
  
  piVar3 = *(int **)(DAT_000f38b8 + 0xf379c);
  local_1c = *piVar3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000f38bc + 0xf37aa),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
LAB_000f37ca:
      uVar4 = *(uint *)(*(int *)(DAT_000f38c4 + 0xf37d0) + iVar1 * 8 + 4);
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f38c0 + 0xf37b8),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
        goto LAB_000f37ca;
      }
      uVar4 = 0xfffffffe;
    }
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
    property_get(DAT_000f38c8 + 0xf3812,&local_78,DAT_000f38cc + 0xf3814);
    iVar1 = __strlen_chk(&local_78,0x5c);
    if (iVar1 != 0) {
      uVar4 = atoi((char *)&local_78);
    }
    if ((uVar4 & 0xff) != 0xfe) {
      iVar1 = __strlen_chk(&local_78,0x5c);
      if (iVar1 != 0) {
        param_1 = (char *)&local_78;
      }
      if (*(int *)(*(int *)(DAT_000f38d0 + 0xf386c) + 0x2c) != 0) {
        iVar1 = DAT_000f38d8 + 0xf3880;
        if ((uVar4 & 0xff) == 0) {
          iVar1 = DAT_000f38d4 + 0xf387e;
        }
        mm_camera_debug_log(1,4,DAT_000f38e0 + 0xf3894,0x29a1,DAT_000f38dc + 0xf3888,iVar1);
      }
      updateParamEntry(this,*(char **)(DAT_000f38e4 + 0xf389e),param_1);
      uVar2 = 0;
      goto LAB_000f38a6;
    }
    if (*(int *)(*(int *)(DAT_000f38e8 + 0xf3838) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f38f0 + 0xf3850,0x29a4,DAT_000f38ec + 0xf3848);
    }
  }
  uVar2 = 0xffffffea;
LAB_000f38a6:
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

