
/* qcamera::QCamera3PostProcessor::releaseOngoingPPData(void*, void*) */

void qcamera::QCamera3PostProcessor::releaseOngoingPPData(void *param_1,void *param_2)

{
  QCamera3Channel *this;
  mm_camera_super_buf_t *pmVar1;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  if (param_1 != (void *)0x0) {
    pmVar1 = *(mm_camera_super_buf_t **)((int)param_1 + 4);
    this = (QCamera3Channel *)param_1;
    if (pmVar1 != (mm_camera_super_buf_t *)0x0) {
      this = *(QCamera3Channel **)((int)param_2 + 4);
    }
    if (pmVar1 != (mm_camera_super_buf_t *)0x0 && this != (QCamera3Channel *)0x0) {
      QCamera3Channel::bufDone(this,pmVar1);
    }
  }
  releasePPJobData((QCamera3PostProcessor *)param_2,(qcamera_hal3_pp_data_t *)param_1);
  return;
}

