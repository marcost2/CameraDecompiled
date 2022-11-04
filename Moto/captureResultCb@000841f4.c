
/* qcamera::QCamera3HardwareInterface::captureResultCb(mm_camera_super_buf_t*,
   camera3_stream_buffer*, unsigned int, bool, void*) */

void qcamera::QCamera3HardwareInterface::captureResultCb
               (mm_camera_super_buf_t *param_1,camera3_stream_buffer *param_2,uint param_3,
               bool param_4,void *param_5)

{
  if (param_5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_00084238 + 0x84214) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00084240 + 0x84232,0x3053,DAT_0008423c + 0x84226,0);
      return;
    }
  }
  else {
    captureResultCb((QCamera3HardwareInterface *)param_5,param_1,param_2,param_3,param_4);
  }
  return;
}

