
/* qcamera::QCamera3PostProcessor::matchMetaFrameNum(void*, void*, void*) */

uint qcamera::QCamera3PostProcessor::matchMetaFrameNum(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = count_leading_zeroes(*(int *)((int)param_1 + 4) - *param_3);
  return uVar1 >> 5;
}

