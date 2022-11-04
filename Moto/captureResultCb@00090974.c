
/* qcamera::QCamera3HardwareInterface::captureResultCb(mm_camera_super_buf_t*,
   camera3_stream_buffer*, unsigned int, bool) */

void __thiscall
qcamera::QCamera3HardwareInterface::captureResultCb
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1,
          camera3_stream_buffer *param_2,uint param_3,bool param_4)

{
  undefined3 in_stack_00000001;
  
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
    if (_param_4 == 0) {
      handleBufferWithLock(this,param_2,param_3);
    }
    else {
      handleInputBufferWithLock(this,param_3);
    }
  }
  else {
    if (this[0x117f20] != (QCamera3HardwareInterface)0x0) {
      (*(code *)PTR_handleBatchMetadata_0011960c)(this,param_1,1);
      return;
    }
    hdrPlusPerfLock(this,param_1);
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
    handleMetadataWithLock((mm_camera_super_buf_t *)this,SUB41(param_1,0),true);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3f0));
  return;
}

