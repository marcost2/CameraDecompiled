
/* qcamera::QCameraFlash::reserveFlashForCamera(int) */

undefined4 __thiscall qcamera::QCameraFlash::reserveFlashForCamera(QCameraFlash *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  bool local_6e;
  undefined auStack109 [21];
  char acStack88 [64];
  int local_18;
  
  piVar5 = *(int **)(DAT_0007cb30 + 0x7ca14);
  local_18 = *piVar5;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_0007cb34 + 0x7ca20) + 0x3c) == 0) {
      uVar4 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0007cb3c + 0x7ca3a,0x15c,DAT_0007cb38 + 0x7ca30,param_1);
      uVar4 = 0xffffffea;
    }
    goto LAB_0007cb1c;
  }
  if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    if (this[param_1 + 0x1c] != (QCameraFlash)0x0) {
      setFlashMode(this,param_1,false);
      deinitFlash(this,param_1);
    }
    this[param_1 + 0x21] = (QCameraFlash)0x1;
    local_6e = false;
    QCamera3HardwareInterface::getFlashInfo(param_1,&local_6e,acStack88);
    iVar1 = *(int *)(this + 4);
    bVar6 = iVar1 != 0;
    if (bVar6) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (!bVar6 || iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_0007cb4c + 0x7caba) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0007cb54 + 0x7cad2,0x171,DAT_0007cb50 + 0x7caca);
      }
      uVar4 = 0xffffffda;
      goto LAB_0007cb1c;
    }
    if (local_6e != false) {
      FUN_0007cb64(auStack109);
      uVar4 = 0;
      pcVar3 = *(code **)(*(int *)(this + 4) + 4);
      (*pcVar3)(*(int *)(this + 4),auStack109,0,pcVar3,param_1);
      goto LAB_0007cb1c;
    }
    if (*(int *)(*(int *)(DAT_0007cb58 + 0x7cb00) + 0x48) == 0) goto LAB_0007cb1a;
    uVar4 = 0x176;
    iVar1 = DAT_0007cb5c + 0x7cb10;
    iVar2 = DAT_0007cb60 + 0x7cb1a;
  }
  else {
    if (*(int *)(*(int *)(DAT_0007cb40 + 0x7ca52) + 0x48) == 0) {
LAB_0007cb1a:
      uVar4 = 0;
      goto LAB_0007cb1c;
    }
    uVar4 = 0x160;
    iVar1 = DAT_0007cb44 + 0x7ca64;
    iVar2 = DAT_0007cb48 + 0x7ca6e;
  }
  mm_camera_debug_log(2,4,iVar2,uVar4,iVar1,param_1);
  uVar4 = 0;
LAB_0007cb1c:
  if (*piVar5 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

