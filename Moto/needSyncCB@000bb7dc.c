
/* qcamera::QCamera2HardwareInterface::needSyncCB(cam_stream_type_t) */

uint __thiscall
qcamera::QCamera2HardwareInterface::needSyncCB
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1)

{
  uint uVar1;
  int *piVar2;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000bb824 + 0xbb7ec);
  local_14 = *piVar2;
  property_get(DAT_000bb828 + 0xbb7f8,acStack112,DAT_000bb82c + 0xbb7fa);
  uVar1 = atoi(acStack112);
  if (*piVar2 == local_14) {
    uVar1 = count_leading_zeroes(uVar1 ^ 1 | param_1 ^ 1);
    return uVar1 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

