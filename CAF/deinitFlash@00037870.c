
/* qcamera::QCameraFlash::deinitFlash(int) */

uint __thiscall qcamera::QCameraFlash::deinitFlash(QCameraFlash *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_40 [10];
  int local_18;
  
  piVar4 = *(int **)(DAT_00037940 + 0x3787c);
  local_18 = *piVar4;
  if ((uint)param_1 < 5) {
    piVar1 = (int *)(this + param_1 * 4 + 8);
    if (-1 < *piVar1) {
      setFlashMode(this,param_1,false);
      local_40[0] = 1;
      uVar3 = ioctl(*piVar1,0xc02856cd,local_40);
      if ((0x7fffffff < uVar3) && (*(int *)(*(int *)(DAT_0003795c + 0x378de) + 0x3c) != 0)) {
        mm_camera_debug_log();
      }
      close(*piVar1);
      *piVar1 = -1;
      goto LAB_0003792c;
    }
    iVar2 = *(int *)(*(int *)(DAT_00037950 + 0x3790e) + 0x3c);
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_00037944 + 0x3788a) + 0x3c);
  }
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
  uVar3 = 0xffffffea;
LAB_0003792c:
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

