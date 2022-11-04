
/* qcamera::QCamera3HardwareInterface::captureResultCb(mm_camera_super_buf_t*,
   camera3_stream_buffer*, unsigned int, bool) */

void qcamera::QCamera3HardwareInterface::captureResultCb
               (mm_camera_super_buf_t *param_1,camera3_stream_buffer *param_2,uint param_3,
               bool param_4,void *param_5)

{
  if (param_2 == (camera3_stream_buffer *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x388));
    if (param_5 == (void *)0x0) {
      handleBufferWithLock
                ((QCamera3HardwareInterface *)param_1,(camera3_stream_buffer *)param_3,(uint)param_4
                );
    }
    else {
      handleInputBufferWithLock((QCamera3HardwareInterface *)param_1,(uint)param_4);
    }
    __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x388));
    return;
  }
  if (param_1[0x117878] != (mm_camera_super_buf_t)0x0) {
    __ThumbV7PILongThunk__ZN7qcamera25QCamera3HardwareInterface19handleBatchMetadataEP21mm_camera_super_buf_tb
              ((QCamera3HardwareInterface *)param_1,(mm_camera_super_buf_t *)param_2,true);
    return;
  }
  hdrPlusPerfLock((QCamera3HardwareInterface *)param_1,(mm_camera_super_buf_t *)param_2);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x388));
  handleMetadataWithLock(param_1,SUB41(param_2,0),true);
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x388));
  return;
}

