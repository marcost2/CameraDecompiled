
/* qcamera::QCamera3PostProcessor::releasePPInputData(void*, void*) */

void qcamera::QCamera3PostProcessor::releasePPInputData(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
  if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) &&
     (*param_1 != (mm_camera_super_buf_t *)0x0)) {
    releaseSuperBuf((QCamera3PostProcessor *)param_2,*param_1);
                    /* WARNING: Load size is inaccurate */
    free(*param_1);
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}

