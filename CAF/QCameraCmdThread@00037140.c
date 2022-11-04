
/* qcamera::QCameraCmdThread::QCameraCmdThread() */

QCameraCmdThread * __thiscall qcamera::QCameraCmdThread::QCameraCmdThread(QCameraCmdThread *this)

{
  int extraout_r1;
  int extraout_r1_00;
  
  QCameraQueue::QCameraQueue((QCameraQueue *)this);
  *(undefined4 *)(this + 0x24) = 0;
  cam_sem_init((cam_semaphore_t *)(this + 0x34),extraout_r1);
  cam_sem_init((cam_semaphore_t *)(this + 0x28),extraout_r1_00);
  return this;
}

