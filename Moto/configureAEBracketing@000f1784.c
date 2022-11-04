
/* qcamera::QCameraParameters::configureAEBracketing(cam_capture_frame_config_t&) */

int __thiscall
qcamera::QCameraParameters::configureAEBracketing
          (QCameraParameters *this,cam_capture_frame_config_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  QCameraParameters *__s;
  uint uVar11;
  int *piVar12;
  char *local_8c;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar12 = *(int **)(DAT_000f1918 + 0xf1794);
  local_28 = *piVar12;
  iVar1 = *(int *)(DAT_000f191c + 0xf17a2);
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f1924 + 0xf17bc,0x20ed,DAT_000f1920 + 0xf17b4);
  }
  iVar2 = setToneMapMode(this,0,true);
  iVar3 = iVar2;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar1 + 0x28);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    mm_camera_debug_log(1,3,DAT_000f192c + 0xf17ee,0x20f4,DAT_000f1928 + 0xf17e6);
  }
  __s = this + 0x244;
  sVar4 = strlen((char *)__s);
  if (sVar4 == 0) {
    uVar11 = 0;
    *(undefined4 *)param_1 = 0;
  }
  else {
    local_88 = 0;
    uStack128 = 0;
    uStack56 = 0;
    uStack52 = 0;
    local_48 = 0;
    uStack64 = 0;
    local_3c = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_78 = 0;
    uStack112 = 0;
    __strlcpy_chk(&local_88,__s,0x5c,0x5c);
    uVar11 = 0;
    local_8c = (char *)0x0;
    pcVar5 = strtok_r((char *)&local_88,(char *)(DAT_000f1930 + 0xf1850),&local_8c);
    if (pcVar5 != (char *)0x0) {
      uVar11 = 1;
      pcVar5 = (char *)(DAT_000f1934 + 0xf1860);
      while (pcVar6 = strtok_r((char *)0x0,pcVar5,&local_8c), pcVar6 != (char *)0x0) {
        uVar11 = uVar11 + 1;
      }
    }
    *(uint *)param_1 = uVar11;
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      puVar10 = (undefined4 *)(param_1 + 0xc);
      uVar9 = 0;
      uVar8 = *(undefined4 *)(this + 0x240);
      iVar3 = DAT_000f1938 + 0xf189a;
      uVar7 = uVar11;
      do {
        *puVar10 = 2;
        puVar10[1] = uVar8;
        puVar10[-1] = 1;
        puVar10[2] = (uint)(byte)__s[uVar9];
        if (*(int *)(iVar1 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000f193c + 0xf18c2,0x2113,iVar3,__s[uVar9]);
          uVar7 = *(uint *)param_1;
        }
        puVar10 = puVar10 + 8;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f1944 + 0xf1900,0x2116,DAT_000f1940 + 0xf18f6,uVar11);
  }
  if (*piVar12 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

