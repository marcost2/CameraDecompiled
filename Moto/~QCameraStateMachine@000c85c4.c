
/* qcamera::QCameraStateMachine::~QCameraStateMachine() */

QCameraStateMachine * __thiscall
qcamera::QCameraStateMachine::_QCameraStateMachine(QCameraStateMachine *this)

{
  *(int *)this = *(int *)(DAT_000c85fc + 0xc85ce) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x5c));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x60));
  *(undefined4 *)(this + 0x58) = 0;
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x30));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0xc));
  return this;
}

