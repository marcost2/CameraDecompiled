
/* qcamera::QCameraFlash::releaseFlashFromCamera(int) */

undefined4 __thiscall qcamera::QCameraFlash::releaseFlashFromCamera(QCameraFlash *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r1;
  char *pcVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  bool local_6a;
  char acStack105 [21];
  char acStack84 [64];
  int local_14;
  
  piVar5 = *(int **)(DAT_00037c14 + 0x37b12);
  local_14 = *piVar5;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_00037c18 + 0x37b20) + 0x3c) == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      mm_camera_debug_log();
      uVar1 = 0xffffffea;
    }
    goto LAB_00037bda;
  }
  if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    iVar2 = *(int *)(*(int *)(DAT_00037c24 + 0x37b9e) + 0x48);
joined_r0x00037ba0:
    if (iVar2 != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    this[param_1 + 0x21] = (QCameraFlash)0x0;
    local_6a = false;
    pcVar3 = acStack84;
    QCamera3HardwareInterface::getFlashInfo(param_1,&local_6a,pcVar3);
    iVar2 = *(int *)(this + 4);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (!bVar6 || iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_00037c30 + 0x37b72) + 0x3c) == 0) {
        uVar1 = 0xffffffda;
      }
      else {
        mm_camera_debug_log();
        uVar1 = 0xffffffda;
      }
      goto LAB_00037bda;
    }
    if (local_6a == false) {
      iVar2 = *(int *)(*(int *)(DAT_00037c3c + 0x37bf2) + 0x48);
      goto joined_r0x00037ba0;
    }
    snprintf(acStack105,extraout_r1,pcVar3);
    pcVar4 = *(code **)(*(int *)(this + 4) + 4);
    (*pcVar4)(*(int *)(this + 4),acStack105,1,pcVar4,param_1);
  }
  uVar1 = 0;
LAB_00037bda:
  if (*piVar5 != local_14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

