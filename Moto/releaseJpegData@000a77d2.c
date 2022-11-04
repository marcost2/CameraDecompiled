
/* qcamera::QCamera3PostProcessor::releaseJpegData(void*, void*) */

void qcamera::QCamera3PostProcessor::releaseJpegData(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    releaseJpegJobData((QCamera3PostProcessor *)param_2,(qcamera_hal3_jpeg_data_t *)param_1);
    return;
  }
  return;
}

