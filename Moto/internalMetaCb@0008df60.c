
/* qcamera::QCamera3HardwareInterface::internalMetaCb(mm_camera_super_buf_t*,
   camera3_stream_buffer*, unsigned int, bool, void*) */

void qcamera::QCamera3HardwareInterface::internalMetaCb
               (mm_camera_super_buf_t *param_1,camera3_stream_buffer *param_2,uint param_3,
               bool param_4,void *param_5)

{
  if (param_5 != (void *)0x0) {
    (*(code *)PTR_internalMetaCb_001195e4)(param_5,param_1,param_3,param_4);
    return;
  }
  if (*(int *)(*(int *)(DAT_0008dfa0 + 0x8df7a) + 0x20) == 0) {
    return;
  }
  mm_camera_debug_log(1,1,DAT_0008dfa8 + 0x8df96,0x3061,DAT_0008dfa4 + 0x8df8a,0);
  return;
}

