
/* qcamera::BokehSyncNode::pushBuf(qcamera::camera_stereo_buf_info*) */

undefined4 __thiscall
qcamera::BokehSyncNode::pushBuf(BokehSyncNode *this,camera_stereo_buf_info *param_1)

{
  int iVar1;
  int iVar2;
  BokehSyncNode *pBVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  QCameraQueue *this_00;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (param_1 != (camera_stereo_buf_info *)0x0) {
    if (*this == (BokehSyncNode)0x0) {
      iVar4 = *(int *)param_1;
      if (iVar4 == 2) {
        iVar4 = *(int *)(this + 0x3c);
        this_00 = (QCameraQueue *)(this + 0x2c);
      }
      else {
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(DAT_001024bc + 0x10247a) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_001024c0 + 0x10248a,0xc0,DAT_001024c8 + 0x10248e,
                                DAT_001024c4 + 0x10248c,DAT_001024c0 + 0x10248a,iVar4);
          }
          goto LAB_00102414;
        }
        iVar4 = *(int *)(this + 0x18);
        this_00 = (QCameraQueue *)(this + 8);
      }
      if (1 < iVar4) {
        pBVar3 = (BokehSyncNode *)QCameraQueue::dequeue(this_00,true);
        dropSuperFrame(pBVar3,(camera_stereo_buf_info *)pBVar3);
        if (pBVar3 != (BokehSyncNode *)0x0) {
          operator_delete(pBVar3);
        }
      }
      QCameraQueue::enqueue(this_00,param_1);
      syncBuf(this);
      uVar5 = 0;
      goto LAB_00102418;
    }
    iVar4 = *(int *)(DAT_001024a0 + 0x102358);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_001024a4 + 0x10236c,0x99,DAT_001024ac + 0x10236a,
                          DAT_001024a8 + 0x102368,DAT_001024a4 + 0x10236c);
    }
    iVar1 = BSTLiveBokeh::getStatus(*(BSTLiveBokeh **)(this + 4));
    if (iVar1 != 0) {
      iVar7 = DAT_001024b0 + 0x10238c;
      iVar1 = DAT_001024b4 + 0x10238e;
      iVar6 = DAT_001024b8 + 0x102390;
      do {
        if (*(int *)(iVar4 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,iVar7,0x9b,iVar6,iVar1,iVar7);
        }
        usleep(5000);
        iVar2 = BSTLiveBokeh::getStatus(*(BSTLiveBokeh **)(this + 4));
      } while (iVar2 != 0);
    }
    while (iVar4 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x2c)), iVar4 == 0) {
      pBVar3 = (BokehSyncNode *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x2c),true);
      dropSuperFrame(pBVar3,(camera_stereo_buf_info *)pBVar3);
      if (pBVar3 != (BokehSyncNode *)0x0) {
        operator_delete(pBVar3);
      }
    }
    while (pBVar3 = (BokehSyncNode *)QCameraQueue::isEmpty((QCameraQueue *)(this + 8)),
          pBVar3 == (BokehSyncNode *)0x0) {
      pBVar3 = (BokehSyncNode *)QCameraQueue::dequeue((QCameraQueue *)(this + 8),true);
      dropSuperFrame(pBVar3,(camera_stereo_buf_info *)pBVar3);
      if (pBVar3 != (BokehSyncNode *)0x0) {
        operator_delete(pBVar3);
      }
    }
    dropSuperFrame(pBVar3,param_1);
    operator_delete(param_1);
  }
LAB_00102414:
  uVar5 = 0xffffffff;
LAB_00102418:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return uVar5;
}

