
/* qcamera::QCamera3PostProcessor::releaseOngoingPPData(void*, void*) */

void qcamera::QCamera3PostProcessor::releaseOngoingPPData(void *param_1,void *param_2)

{
  mm_camera_super_buf_t *pmVar1;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  pmVar1 = (mm_camera_super_buf_t *)param_2;
  if (param_1 != (void *)0x0) {
    pmVar1 = *(mm_camera_super_buf_t **)((int)param_1 + 4);
  }
  if (param_1 != (void *)0x0 && pmVar1 != (mm_camera_super_buf_t *)0x0) {
    releaseSuperBuf((QCamera3PostProcessor *)param_2,pmVar1);
  }
  __ThumbV7PILongThunk__ZN7qcamera21QCamera3PostProcessor16releasePPJobDataEPNS_22qcamera_hal3_pp_data_tE
            ((QCamera3PostProcessor *)param_2,(qcamera_hal3_pp_data_t *)param_1);
  return;
}

