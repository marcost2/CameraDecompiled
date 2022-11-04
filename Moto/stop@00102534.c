
/* qcamera::BokehSyncNode::stop() */

void __thiscall qcamera::BokehSyncNode::stop(BokehSyncNode *this)

{
  int iVar1;
  BokehSyncNode *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  iVar6 = *(int *)(DAT_00102674 + 0x10254c);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00102678 + 0x102564,0xe4,DAT_00102680 + 0x102562,
                        DAT_0010267c + 0x102560,DAT_00102678 + 0x102564);
  }
  *this = (BokehSyncNode)0x1;
  if (*(int *)(iVar6 + 0x2c) != 0) {
    iVar4 = DAT_00102684 + 0x102588;
    iVar3 = DAT_00102688 + 0x10258c;
    mm_camera_debug_log(1,4,iVar4,0xde,DAT_0010268c + 0x10258a,iVar3,iVar4,
                        *(undefined4 *)(this + 0x18));
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,iVar4,0xdf,DAT_00102690 + 0x1025ac,iVar3,iVar4,
                          *(undefined4 *)(this + 0x3c));
    }
  }
  iVar3 = BSTLiveBokeh::getStatus(*(BSTLiveBokeh **)(this + 4));
  if (iVar3 != 0) {
    iVar4 = DAT_00102694 + 0x1025ca;
    iVar5 = DAT_00102698 + 0x1025cc;
    iVar3 = DAT_0010269c + 0x1025ce;
    do {
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,iVar4,0xe9,iVar3,iVar5,iVar4);
      }
      usleep(5000);
      iVar1 = BSTLiveBokeh::getStatus(*(BSTLiveBokeh **)(this + 4));
    } while (iVar1 != 0);
  }
  while (iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(this + 8)), iVar3 == 0) {
    pBVar2 = (BokehSyncNode *)QCameraQueue::dequeue((QCameraQueue *)(this + 8),true);
    dropSuperFrame(pBVar2,(camera_stereo_buf_info *)pBVar2);
    if (pBVar2 != (BokehSyncNode *)0x0) {
      operator_delete(pBVar2);
    }
  }
  while (iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x2c)), iVar3 == 0) {
    pBVar2 = (BokehSyncNode *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x2c),true);
    dropSuperFrame(pBVar2,(camera_stereo_buf_info *)pBVar2);
    if (pBVar2 != (BokehSyncNode *)0x0) {
      operator_delete(pBVar2);
    }
  }
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_001026a0 + 0x10265a,0xf6,DAT_001026a8 + 0x102658,
                        DAT_001026a4 + 0x102656,DAT_001026a0 + 0x10265a);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}

