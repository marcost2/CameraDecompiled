
/* qcamera::QCamera3HardwareInterface::captureResultCb(mm_camera_super_buf_t*,
   camera3_stream_buffer*, unsigned int, bool, void*) */

void qcamera::QCamera3HardwareInterface::captureResultCb
               (mm_camera_super_buf_t *param_1,camera3_stream_buffer *param_2,uint param_3,
               bool param_4,void *param_5)

{
  if (param_5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_0003ec18 + 0x3ebf4) + 0x20) != 0) {
      mm_camera_debug_log();
      return;
    }
  }
  else {
    captureResultCb((mm_camera_super_buf_t *)param_5,(camera3_stream_buffer *)param_1,(uint)param_2,
                    SUB41(param_3,0),(void *)(uint)param_4);
  }
  return;
}

