
/* qcamera::QCameraFlash::setFlashMode(int, bool) */

int __thiscall qcamera::QCameraFlash::setFlashMode(QCameraFlash *this,int param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  
  piVar5 = *(int **)(DAT_0007c664 + 0x7c54c);
  local_1c = *piVar5;
  if ((uint)param_1 < 5) {
    if ((QCameraFlash)param_2 == this[param_1 + 0x1c]) {
      if (*(int *)(*(int *)(DAT_0007c674 + 0x7c58e) + 0x48) == 0) {
        iVar1 = -0x72;
      }
      else {
        mm_camera_debug_log(2,4,DAT_0007c67c + 0x7c5a6,0xee,DAT_0007c678 + 0x7c59c,param_1,param_2);
        iVar1 = -0x72;
      }
      goto LAB_0007c64e;
    }
    iVar1 = *(int *)(this + param_1 * 4 + 8);
    if (-1 < iVar1) {
      uStack64 = 0;
      local_24 = 0;
      local_28 = 0;
      iVar3 = 4;
      local_38 = 0;
      uStack48 = 0;
      if (param_1 == 1) {
        iVar3 = 8;
      }
      *(undefined4 *)((int)&local_48 + iVar3) = 0x50;
      uVar2 = 2;
      if (param_2 != false) {
        uVar2 = 3;
      }
      local_48 = (ulonglong)uVar2;
      iVar1 = ioctl(iVar1,0xc02856cd);
      if (iVar1 < 0) {
        if (*(int *)(*(int *)(DAT_0007c68c + 0x7c630) + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0007c694 + 0x7c64c,0x10d,DAT_0007c690 + 0x7c640,param_2,
                              param_1);
        }
      }
      else {
        this[param_1 + 0x1c] = (QCameraFlash)param_2;
      }
      goto LAB_0007c64e;
    }
    if (*(int *)(*(int *)(DAT_0007c680 + 0x7c610) + 0x3c) != 0) {
      uVar4 = 0xf1;
      iVar1 = DAT_0007c684 + 0x7c620;
      iVar3 = DAT_0007c688 + 0x7c62a;
      goto LAB_0007c572;
    }
  }
  else if (*(int *)(*(int *)(DAT_0007c668 + 0x7c55c) + 0x3c) != 0) {
    uVar4 = 0xe9;
    iVar1 = DAT_0007c66c + 0x7c56a;
    iVar3 = DAT_0007c670 + 0x7c574;
LAB_0007c572:
    mm_camera_debug_log(2,1,iVar3,uVar4,iVar1,param_1);
  }
  iVar1 = -0x16;
LAB_0007c64e:
  if (*piVar5 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

