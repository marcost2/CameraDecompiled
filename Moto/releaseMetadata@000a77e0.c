
/* qcamera::QCamera3PostProcessor::releaseMetadata(void*, void*) */

void qcamera::QCamera3PostProcessor::releaseMetadata(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    QCamera3ProcessingChannel::metadataBufDone
              (*(QCamera3ProcessingChannel **)((int)param_2 + 4),(mm_camera_super_buf_t *)param_1);
    return;
  }
  return;
}

