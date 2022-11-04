
/* qcamera::QCamera3PostProcessor::dequeuePPJob(unsigned int) */

int __thiscall
qcamera::QCamera3PostProcessor::dequeuePPJob(QCamera3PostProcessor *this,uint param_1)

{
  int iVar1;
  
  iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x248),true);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_00060450 + 0x6042c) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    iVar1 = 0;
  }
  else if (((*(int *)(iVar1 + 8) != 0) && (*(uint *)(*(int *)(iVar1 + 8) + 0x600) != param_1)) &&
          (*(int *)(*(int *)(DAT_0006045c + 0x6040a) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  return iVar1;
}

