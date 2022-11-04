
/* qcamera::QCameraParameters::getDenoiseProcessPlate(cam_intf_parm_type_t) */

void __thiscall
qcamera::QCameraParameters::getDenoiseProcessPlate
          (QCameraParameters *this,cam_intf_parm_type_t param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulonglong local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined4 uStack32;
  undefined4 local_1c;
  undefined4 uStack24;
  undefined8 uStack20;
  int local_c;
  
  piVar3 = *(int **)(DAT_000e988c + 0xe97ee);
  local_c = *piVar3;
  local_28 = 0;
  uStack32 = 0;
  local_38 = 0;
  uStack48 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_1c = 0;
  uStack24 = 0;
  uStack20 = 0;
  if (param_1 == 0x28) {
    iVar1 = DAT_000e9898 + 0xe9832;
  }
  else {
    if (param_1 != 0x27) {
      if (*(int *)(*(int *)(DAT_000e989c + 0xe9842) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000e98a4 + 0xe985a,0x2a4e,DAT_000e98a0 + 0xe9852);
      }
      local_68 = local_68 & 0xffffffffffffff00;
      goto LAB_000e9862;
    }
    iVar1 = DAT_000e9890 + 0xe982c;
  }
  property_get(iVar1,&local_68,DAT_000e9894 + 0xe9838);
LAB_000e9862:
  iVar1 = __strlen_chk(&local_68,0x5c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = atoi((char *)&local_68);
    if (3 < uVar2) {
      uVar2 = 1;
    }
  }
  if (*piVar3 != local_c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

