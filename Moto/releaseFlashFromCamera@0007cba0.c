
/* qcamera::QCameraFlash::releaseFlashFromCamera(int) */

void __thiscall qcamera::QCameraFlash::releaseFlashFromCamera(QCameraFlash *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  bool local_6a;
  undefined auStack105 [21];
  char acStack84 [64];
  int local_14;
  
  piVar5 = *(int **)(DAT_0007ccb0 + 0x7cbb0);
  local_14 = *piVar5;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_0007ccb4 + 0x7cbbc) + 0x3c) == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0007ccbc + 0x7cbd6,0x197,DAT_0007ccb8 + 0x7cbcc,param_1);
      uVar1 = 0xffffffea;
    }
    goto LAB_0007cc76;
  }
  if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    if (*(int *)(*(int *)(DAT_0007ccc0 + 0x7cc3a) + 0x48) != 0) {
      uVar1 = 0x19b;
      iVar2 = DAT_0007ccc4 + 0x7cc4a;
      iVar3 = DAT_0007ccc8 + 0x7cc54;
LAB_0007cc52:
      mm_camera_debug_log(2,4,iVar3,uVar1,iVar2,param_1);
    }
  }
  else {
    this[param_1 + 0x21] = (QCameraFlash)0x0;
    local_6a = false;
    QCamera3HardwareInterface::getFlashInfo(param_1,&local_6a,acStack84);
    iVar2 = *(int *)(this + 4);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (!bVar6 || iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_0007cccc + 0x7cc0e) + 0x3c) == 0) {
        uVar1 = 0xffffffda;
      }
      else {
        mm_camera_debug_log(2,1,DAT_0007ccd4 + 0x7cc26,0x1a8,DAT_0007ccd0 + 0x7cc1e);
        uVar1 = 0xffffffda;
      }
      goto LAB_0007cc76;
    }
    if (local_6a == false) {
      if (*(int *)(*(int *)(DAT_0007ccd8 + 0x7cc8e) + 0x48) != 0) {
        uVar1 = 0x1ad;
        iVar2 = DAT_0007ccdc + 0x7cca0;
        iVar3 = DAT_0007cce0 + 0x7ccaa;
        goto LAB_0007cc52;
      }
    }
    else {
      FUN_0007cb64(auStack105);
      pcVar4 = *(code **)(*(int *)(this + 4) + 4);
      (*pcVar4)(*(int *)(this + 4),auStack105,1,pcVar4,param_1);
    }
  }
  uVar1 = 0;
LAB_0007cc76:
  if (*piVar5 != local_14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

