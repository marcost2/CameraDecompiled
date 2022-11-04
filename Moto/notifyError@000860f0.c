
/* qcamera::QCamera3HardwareInterface::notifyError(unsigned int, camera3_error_msg_code) */

void __thiscall
qcamera::QCamera3HardwareInterface::notifyError
          (QCamera3HardwareInterface *this,uint param_1,camera3_error_msg_code param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_44;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  piVar4 = *(int **)(DAT_00086194 + 0x86100);
  local_14 = *piVar4;
  uStack40 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = (ulonglong)param_2;
  local_40 = 1;
  local_38 = (ulonglong)param_1;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),param_1,&local_44);
  if (iVar1 == 0) {
    if (local_44 != 0xffffffff) {
      local_38 = local_38 & 0xffffffff00000000 | (ulonglong)local_44;
      (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_40);
      goto LAB_00086164;
    }
    if (*(int *)(*(int *)(DAT_000861a4 + 0x86176) + 0x20) == 0) goto LAB_00086164;
    uVar3 = 0x110d;
    iVar1 = DAT_000861a8 + 0x86188;
    iVar2 = DAT_000861ac + 0x86190;
  }
  else {
    if (*(int *)(*(int *)(DAT_00086198 + 0x86136) + 0x20) == 0) goto LAB_00086164;
    uVar3 = 0x1109;
    iVar1 = DAT_0008619c + 0x86146;
    iVar2 = DAT_000861a0 + 0x8614e;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
LAB_00086164:
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

