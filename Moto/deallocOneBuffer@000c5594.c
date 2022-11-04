
/* qcamera::QCameraMemory::deallocOneBuffer(qcamera::QCameraMemory::QCameraMemInfo&) */

void qcamera::QCameraMemory::deallocOneBuffer(QCameraMemInfo *param_1)

{
  int *piVar1;
  undefined4 local_18;
  int local_14;
  
  piVar1 = *(int **)(DAT_000c55f0 + 0xc55a0);
  local_14 = *piVar1;
  if (-1 < *(int *)param_1) {
    close(*(int *)param_1);
    *(undefined4 *)param_1 = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 4)) {
    local_18 = *(undefined4 *)(param_1 + 8);
    ioctl(*(int *)(param_1 + 4),0xc0044901,&local_18);
    close(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

