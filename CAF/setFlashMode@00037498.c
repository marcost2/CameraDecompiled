
/* qcamera::QCameraFlash::setFlashMode(int, bool) */

int __thiscall qcamera::QCameraFlash::setFlashMode(QCameraFlash *this,int param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000375c4 + 0x374a6);
  local_1c = *piVar3;
  if ((uint)param_1 < 5) {
    if ((QCameraFlash)param_2 == this[param_1 + 0x1c]) {
      if (*(int *)(*(int *)(DAT_000375d4 + 0x374ea) + 0x48) == 0) {
        iVar1 = -0x72;
      }
      else {
        mm_camera_debug_log();
        iVar1 = -0x72;
      }
      goto LAB_000375ae;
    }
    if (-1 < *(int *)(this + param_1 * 4 + 8)) {
      uStack64 = 0;
      local_24 = 0;
      local_38 = 0;
      uStack48 = 0;
      local_28 = 0;
      iVar1 = 1;
      do {
        *(undefined4 *)((int)&local_48 + iVar1 * 4) = 200;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      uVar2 = 2;
      if (param_2 != false) {
        uVar2 = 3;
      }
      local_48 = (ulonglong)uVar2;
      iVar1 = ioctl(*(int *)(this + param_1 * 4 + 8),0xc02856cd,&local_48);
      if (iVar1 < 0) {
        if (*(int *)(*(int *)(DAT_000375ec + 0x37592) + 0x3c) != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        this[param_1 + 0x1c] = (QCameraFlash)param_2;
      }
      goto LAB_000375ae;
    }
    iVar1 = *(int *)(*(int *)(DAT_000375e0 + 0x37572) + 0x3c);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_000375c8 + 0x374b8) + 0x3c);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  iVar1 = -0x16;
LAB_000375ae:
  if (*piVar3 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

