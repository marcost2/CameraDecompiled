
/* qcamera::QCameraStream::~QCameraStream() */

QCameraStream * __thiscall qcamera::QCameraStream::_QCameraStream(QCameraStream *this)

{
  uint uVar1;
  
  *(int *)this = *(int *)(DAT_000cfcb8 + 0xcfb20) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x2d8));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x2dc));
  (**(code **)(**(int **)(this + 0x114) + 0x1c))(*(int **)(this + 0x114),this + 0x10074);
  (**(code **)(**(int **)(this + 0x114) + 0x1c))(*(int **)(this + 0x114),this + 0x10080);
  if (*(int *)(this + 0x2e4) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
    if (this[0x10061] != (QCameraStream)0x0) {
      this[0x10061] = (QCameraStream)0x0;
      this[0x8e] = (QCameraStream)0x0;
      pthread_cond_signal((pthread_cond_t *)(this + 0x10068));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
    if (*(int *)(*(int *)(DAT_000cfcbc + 0xcfb96) + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000cfcc4 + 0xcfbae,0x19b,DAT_000cfcc0 + 0xcfba6);
    }
    pthread_join(*(pthread_t *)(this + 0x2e4),(void **)0x0);
    *(undefined4 *)(this + 0x2e4) = 0;
  }
  if (this[0x10060] != (QCameraStream)0x0) {
    this[0x2e0] = (QCameraStream)0x0;
    (**(code **)(*(int *)this + 0x2c))(this);
  }
  if (*(int *)(this + 0x104) != 0) {
    uVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x58))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),4,0,0xffffffff);
    if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000cfcc8 + 0xcfc00) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000cfcd0 + 0xcfc18,0x1cf,DAT_000cfccc + 0xcfc10);
    }
    if (*(int **)(this + 0x104) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x104) + 0xc))();
      if (*(int **)(this + 0x104) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x104) + 0x2c))();
      }
      *(undefined4 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0x104) = 0;
    }
  }
  if (*(cam_mapping_buf_type *)(this + 0x108) != 0) {
    unMapBuf((QCameraMemory *)this,*(cam_mapping_buf_type *)(this + 0x108),
             (mm_camera_map_unmap_ops_tbl_t *)0x7);
    if (*(int **)(this + 0x108) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x108) + 0xc))();
      if (*(int **)(this + 0x108) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x108) + 0x2c))();
      }
      *(undefined4 *)(this + 0x108) = 0;
    }
  }
  if (*(int *)(this + 0x68) != 0) {
    (**(code **)(*(int *)(this + 0x6c) + 0x44))
              (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100));
    *(undefined4 *)(this + 0x68) = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10064));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x10068));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x10098));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10094));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0xc4));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0xa0));
  return this;
}

