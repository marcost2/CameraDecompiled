
/* qcamera::QCamera3StreamMem::registerBuffer(native_handle const**, cam_stream_type_t) */

undefined4
qcamera::QCamera3StreamMem::registerBuffer(native_handle **param_1,cam_stream_type_t param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38a));
  uVar1 = QCamera3GrallocMemory::registerBuffer(param_1 + 0x185,param_2);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38a));
  return uVar1;
}

