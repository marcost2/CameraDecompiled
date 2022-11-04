
/* qcamera::QCamera3Stream::~QCamera3Stream() */

QCamera3Stream * __thiscall qcamera::QCamera3Stream::_QCamera3Stream(QCamera3Stream *this)

{
  int iVar1;
  uint uVar2;
  QCameraQueue *this_00;
  
  *(int *)this = *(int *)(DAT_0009bea8 + 0x9bde4) + 8;
  if (*(int *)(this + 0x280) != 0) {
    this_00 = (QCameraQueue *)(this + 0x298);
    while (iVar1 = QCameraQueue::isEmpty(this_00), iVar1 == 0) {
      QCameraQueue::dequeue(this_00,true);
    }
    QCameraQueue::flush(this_00,true);
  }
  if (*(int *)(this + 200) != 0) {
    uVar2 = (**(code **)(*(int *)(this + 0x10) + 0x58))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                       *(undefined4 *)(this + 0xc),4,0,0xffffffff);
    if ((0x7fffffff < uVar2) && (*(int *)(*(int *)(DAT_0009beac + 0x9be34) + 0x3c) != 0)) {
      mm_camera_debug_log(2,1,DAT_0009beb4 + 0x9be4c,0x123,DAT_0009beb0 + 0x9be44);
    }
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 200));
    if (*(int **)(this + 200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 200) + 0x20))();
    }
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    (**(code **)(*(int *)(this + 0x10) + 0x44))(*(undefined4 *)(this + 4),*(undefined4 *)(this + 8))
    ;
    *(undefined4 *)(this + 0xc) = 0;
  }
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x298));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x27c));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 100));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x40));
  return this;
}

