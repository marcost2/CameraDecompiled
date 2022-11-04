
/* qcamera::QCameraPostProcessor::matchJobId(void*, void*, void*) */

uint qcamera::QCamera3PostProcessor::matchMetaFrameNum(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = count_leading_zeroes(*param_1 - *param_3);
  return uVar1 >> 5;
}

