
/* qcamera::BokehSyncNode::syncBuf() */

void __thiscall qcamera::BokehSyncNode::syncBuf(BokehSyncNode *this)

{
  int iVar1;
  BokehSyncNode *pBVar2;
  BokehSyncNode *pBVar3;
  BokehSyncNode *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  QCameraQueue *this_01;
  QCameraQueue *this_02;
  
  this_01 = (QCameraQueue *)(this + 8);
  iVar1 = QCameraQueue::isEmpty(this_01);
  if (iVar1 == 0) {
    this_02 = (QCameraQueue *)(this + 0x2c);
    do {
      iVar1 = QCameraQueue::isEmpty(this_02);
      if (iVar1 != 0) {
        return;
      }
      pBVar2 = (BokehSyncNode *)QCameraQueue::peek(this_01);
      if ((pBVar2 != (BokehSyncNode *)0x0) &&
         (pBVar3 = (BokehSyncNode *)QCameraQueue::peek(this_02), pBVar3 != (BokehSyncNode *)0x0)) {
        if (*(uint *)(pBVar2 + 4) < *(uint *)(pBVar3 + 4)) {
          this_00 = (BokehSyncNode *)QCameraQueue::dequeue(this_01,true);
          dropSuperFrame(this_00,(camera_stereo_buf_info *)this_00);
          pBVar2 = this_00;
LAB_001022e2:
          operator_delete(this_00);
        }
        else if (*(uint *)(pBVar2 + 4) != *(uint *)(pBVar3 + 4)) {
          this_00 = (BokehSyncNode *)QCameraQueue::dequeue(this_02,true);
          dropSuperFrame(this_00,(camera_stereo_buf_info *)this_00);
          pBVar3 = this_00;
          goto LAB_001022e2;
        }
        if (*(int *)(pBVar2 + 4) == *(int *)(pBVar3 + 4)) {
          uVar4 = QCameraQueue::dequeue(this_01,true);
          uVar5 = QCameraQueue::dequeue(this_02,true);
                    /* WARNING: Could not recover jumptable at 0x0010231e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(this + 4) + 0x24))(*(int **)(this + 4),uVar4,uVar5);
          return;
        }
      }
      iVar1 = QCameraQueue::isEmpty(this_01);
    } while (iVar1 == 0);
  }
  return;
}

