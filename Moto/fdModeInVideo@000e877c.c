
/* qcamera::QCameraParameters::fdModeInVideo() */

uint qcamera::QCameraParameters::fdModeInVideo(void)

{
  uint uVar1;
  int *piVar2;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000e87dc + 0xe8786);
  local_14 = *piVar2;
  property_get(DAT_000e87e4 + 0xe879a,acStack112,*(undefined4 *)(DAT_000e87e0 + 0xe8790));
  uVar1 = atoi(acStack112);
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  if (*(int *)(*(int *)(DAT_000e87e8 + 0xe87ac) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e87f0 + 0xe87c8,0x3dbb,DAT_000e87ec + 0xe87bc,uVar1 & 0xff);
  }
  if (*piVar2 == local_14) {
    return uVar1 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

