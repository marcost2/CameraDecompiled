
/* qcamera::QCameraCmdThread::~QCameraCmdThread() */

void __thiscall qcamera::QCameraCmdThread::_QCameraCmdThread(QCameraCmdThread *this)

{
  exit(this);
  cam_sem_destroy((cam_semaphore_t *)(this + 0x34));
  cam_sem_destroy((cam_semaphore_t *)(this + 0x28));
  QCameraQueue::__ThumbV7PILongThunk__ZN7qcamera12QCameraQueueD1Ev((QCameraQueue *)this);
  return;
}

