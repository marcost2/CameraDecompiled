
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraParameters::parseCameraAreaString(char const*, int, cam_area_t*, int&) */

void __thiscall
qcamera::QCameraParameters::parseCameraAreaString
          (QCameraParameters *this,char *param_1,int param_2,cam_area_t *param_3,int *param_4)

{
  int *piVar1;
  char *__s;
  int iVar2;
  char *__s_00;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 local_60;
  undefined8 uStack88;
  undefined4 local_50;
  char local_48 [32];
  int local_28;
  
  piVar1 = *(int **)(DAT_000f2aac + 0xf295a);
  local_28 = *piVar1;
  *param_4 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  if (param_1 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    __s_00 = param_1;
    do {
      if (*__s_00 != '(') {
        if (*(int *)(*(int *)(DAT_000f2ab0 + 0xf2a10) + 0x20) != 0) {
          uVar3 = 0x3280;
          iVar5 = DAT_000f2ab4 + 0xf2a20;
          iVar2 = DAT_000f2ab8 + 0xf2a2c;
LAB_000f2a8e:
          mm_camera_debug_log(1,1,iVar2,uVar3,iVar5,param_1);
        }
LAB_000f2a92:
        uVar3 = 0xffffffea;
        goto LAB_000f2a96;
      }
      __s = strchr(__s_00,0x29);
      if (__s == (char *)0x0) {
        if (*(int *)(*(int *)(DAT_000f2ac8 + 0xf2a32) + 0x20) != 0) {
          uVar3 = 0x3285;
          iVar5 = DAT_000f2acc + 0xf2a42;
          iVar2 = DAT_000f2ad0 + 0xf2a4e;
          goto LAB_000f2a8e;
        }
        goto LAB_000f2a92;
      }
      iVar2 = 0;
      pcVar4 = __s_00;
      while (pcVar4 <= __s) {
        local_48[iVar2] = __s_00[iVar2];
        iVar2 = iVar2 + 1;
        pcVar4 = __s_00 + iVar2;
      }
      local_48[iVar2] = '\0';
      iVar2 = parseNDimVector((QCameraParameters *)0x2c,local_48,(int *)&local_60,5,',');
      if (iVar2 < 0) {
        if (*(int *)(*(int *)(DAT_000f2abc + 0xf2a54) + 0x20) != 0) {
          uVar3 = 0x328e;
          iVar5 = DAT_000f2ac0 + 0xf2a64;
          iVar2 = DAT_000f2ac4 + 0xf2a6e;
          param_1 = local_48;
          goto LAB_000f2a8e;
        }
        goto LAB_000f2a92;
      }
      if (param_2 <= iVar5) {
        if (*(int *)(*(int *)(DAT_000f2ad4 + 0xf2a74) + 0x20) != 0) {
          uVar3 = 0x3293;
          iVar5 = DAT_000f2ad8 + 0xf2a84;
          iVar2 = DAT_000f2adc + 0xf2a90;
          goto LAB_000f2a8e;
        }
        goto LAB_000f2a92;
      }
      *(int *)(param_3 + iVar5 * 0x14) = (int)local_60;
      *(int *)(param_3 + iVar5 * 0x14 + 4) = local_60._4_4_;
      *(int *)(param_3 + iVar5 * 0x14 + 8) = (int)uStack88 - (int)local_60;
      *(int *)(param_3 + iVar5 * 0x14 + 0xc) = uStack88._4_4_ - local_60._4_4_;
      *(undefined4 *)(param_3 + iVar5 * 0x14 + 0x10) = local_50;
      __s_00 = strchr(__s,0x28);
      iVar5 = iVar5 + 1;
    } while (__s_00 != (char *)0x0);
  }
  *param_4 = iVar5;
  uVar3 = 0;
LAB_000f2a96:
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

