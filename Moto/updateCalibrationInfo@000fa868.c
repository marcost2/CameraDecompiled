
/* qcamera::QCameraParameters::updateCalibrationInfo() */

void qcamera::QCameraParameters::updateCalibrationInfo(void)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_000fa8d4 + 0xfa874);
  local_14 = *piVar3;
  if (*(char *)(in_r0 + 0xd19) == '\0') {
    local_18 = 0x4c0;
    iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(in_r0 + 0xd1c),0xf,(void *)0x0,0,(void *)(in_r0 + 0x858),
                             &local_18);
    if (iVar1 < 0) {
      __android_log_print(6,DAT_000fa8d8 + 0xfa8c2,DAT_000fa8dc + 0xfa8c4,DAT_000fa8e0 + 0xfa8c6);
      uVar2 = 0x80000000;
      goto LAB_000fa8aa;
    }
    *(undefined *)(in_r0 + 0xd19) = 1;
  }
  uVar2 = 0;
LAB_000fa8aa:
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

