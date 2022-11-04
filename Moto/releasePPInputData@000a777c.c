
/* qcamera::QCamera3PostProcessor::releasePPInputData(void*, void*) */

void qcamera::QCamera3PostProcessor::releasePPInputData(void *param_1,void *param_2)

{
  mm_camera_super_buf_t *__ptr;
  
                    /* WARNING: Load size is inaccurate */
  if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) &&
     (__ptr = *param_1, __ptr != (mm_camera_super_buf_t *)0x0)) {
    if (*(QCamera3Channel **)((int)param_2 + 4) != (QCamera3Channel *)0x0) {
      QCamera3Channel::bufDone(*(QCamera3Channel **)((int)param_2 + 4),__ptr);
                    /* WARNING: Load size is inaccurate */
      __ptr = *param_1;
    }
    free(__ptr);
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}

