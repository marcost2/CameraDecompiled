
/* qcamera::QCameraMemoryPool::allocateBuffer(qcamera::QCameraMemory::QCameraMemInfo&, unsigned int,
   unsigned int, bool, cam_stream_type_t, unsigned int) */

int __thiscall
qcamera::QCameraMemoryPool::allocateBuffer
          (QCameraMemoryPool *this,QCameraMemInfo *param_1,uint param_2,uint param_3,bool param_4,
          cam_stream_type_t param_5,uint param_6)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 100));
  iVar1 = findBufferLocked(this,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == -2) {
    if (*(int *)(*(int *)(DAT_000c5a24 + 0xc59ea) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c5a2c + 0xc5a02,0x2f3,DAT_000c5a28 + 0xc59fa);
    }
    iVar1 = QCameraMemory::allocOneBuffer(param_1,param_2,param_3,param_4,param_6);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 100));
  return iVar1;
}

