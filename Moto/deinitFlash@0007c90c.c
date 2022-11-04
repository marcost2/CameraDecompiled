
/* qcamera::QCameraFlash::deinitFlash(int) */

uint __thiscall qcamera::QCameraFlash::deinitFlash(QCameraFlash *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_40 [10];
  int local_18;
  
  piVar6 = *(int **)(DAT_0007c9dc + 0x7c91a);
  local_18 = *piVar6;
  if ((uint)param_1 < 5) {
    piVar1 = (int *)(this + param_1 * 4 + 8);
    if (-1 < *piVar1) {
      setFlashMode(this,param_1,false);
      local_40[0] = 1;
      uVar5 = ioctl(*piVar1,0xc02856cd,local_40);
      if ((0x7fffffff < uVar5) && (*(int *)(*(int *)(DAT_0007c9f8 + 0x7c97a) + 0x3c) != 0)) {
        mm_camera_debug_log(2,1,DAT_0007ca00 + 0x7c994,0x139,DAT_0007c9fc + 0x7c98a,param_1);
      }
      close(*piVar1);
      *piVar1 = -1;
      goto LAB_0007c9c8;
    }
    if (*(int *)(*(int *)(DAT_0007c9ec + 0x7c9aa) + 0x3c) != 0) {
      uVar4 = 0x12d;
      iVar2 = DAT_0007c9f0 + 0x7c9ba;
      iVar3 = DAT_0007c9f4 + 0x7c9c2;
      goto LAB_0007c9c0;
    }
  }
  else if (*(int *)(*(int *)(DAT_0007c9e0 + 0x7c926) + 0x3c) != 0) {
    uVar4 = 0x12a;
    iVar2 = DAT_0007c9e4 + 0x7c938;
    iVar3 = DAT_0007c9e8 + 0x7c942;
LAB_0007c9c0:
    mm_camera_debug_log(2,1,iVar3,uVar4,iVar2);
  }
  uVar5 = 0xffffffea;
LAB_0007c9c8:
  if (*piVar6 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

