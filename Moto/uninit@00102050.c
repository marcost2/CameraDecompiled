
/* qcamera::BokehSyncNode::uninit() */

void __thiscall qcamera::BokehSyncNode::uninit(BokehSyncNode *this)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  iVar1 = *(int *)(DAT_001020d0 + 0x102066);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_001020d4 + 0x10207a,0x44,DAT_001020dc + 0x102078,
                        DAT_001020d8 + 0x102076,DAT_001020d4 + 0x10207a);
  }
  if (this[1] != (BokehSyncNode)0x0) {
    QCameraQueue::flush((QCameraQueue *)(this + 8),true);
    QCameraQueue::flush((QCameraQueue *)(this + 0x2c),true);
    *(undefined2 *)this = 0;
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_001020e0 + 0x1020b6,0x4a,DAT_001020e8 + 0x1020b4,
                          DAT_001020e4 + 0x1020b2,DAT_001020e0 + 0x1020b6);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}

