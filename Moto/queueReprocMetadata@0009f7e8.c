
/* qcamera::QCamera3ProcessingChannel::queueReprocMetadata(mm_camera_super_buf_t*) */

void qcamera::QCamera3ProcessingChannel::queueReprocMetadata(mm_camera_super_buf_t *param_1)

{
  mm_camera_super_buf_t *in_r1;
  
  QCamera3PostProcessor::processPPMetadata((QCamera3PostProcessor *)(param_1 + 0x94),in_r1);
  return;
}

