
/* qcamera::BokehSyncNode::~BokehSyncNode() */

BokehSyncNode * __thiscall qcamera::BokehSyncNode::_BokehSyncNode(BokehSyncNode *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x50));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x2c));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 8));
  return this;
}

