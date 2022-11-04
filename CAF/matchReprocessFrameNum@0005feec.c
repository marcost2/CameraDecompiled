
/* qcamera::QCamera3PostProcessor::matchReprocessFrameNum(void*, void*, void*) */

uint qcamera::QCamera3PostProcessor::matchReprocessFrameNum
               (void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_3;
  if (*(int *)(*(int *)(DAT_0005ff28 + 0x5fefa) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  uVar1 = count_leading_zeroes(*(int *)((int)param_1 + 8) - iVar2);
  return uVar1 >> 5;
}

