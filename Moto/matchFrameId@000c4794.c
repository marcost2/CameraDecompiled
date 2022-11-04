
/* qcamera::QCameraMuxer::matchFrameId(void*, void*, void*) */

uint qcamera::QCameraMuxer::matchFrameId(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000c47f4 + 0xc47a2);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c47fc + 0xc47ba,0x9b2,DAT_000c47f8 + 0xc47b2);
  }
  if (param_1 == (void *)0x0 || param_3 == (void *)0x0) {
    return 0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_3;
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4804 + 0xc47e4,0x9ba,DAT_000c4800 + 0xc47dc);
  }
  uVar1 = count_leading_zeroes(*(int *)((int)param_1 + 0x18) - iVar2);
  return uVar1 >> 5;
}

