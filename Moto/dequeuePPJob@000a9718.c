
/* qcamera::QCamera3PostProcessor::dequeuePPJob(unsigned int) */

int __thiscall
qcamera::QCamera3PostProcessor::dequeuePPJob(QCamera3PostProcessor *this,uint param_1)

{
  int iVar1;
  
  iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x4e8),true);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000a9784 + 0xa9760) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a978c + 0xa9778,0x38d,DAT_000a9788 + 0xa9770);
    }
    iVar1 = 0;
  }
  else if (((*(int *)(iVar1 + 8) != 0) && (*(uint *)(*(int *)(iVar1 + 8) + 0x608) != param_1)) &&
          (*(int *)(*(int *)(DAT_000a9790 + 0xa973e) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a9798 + 0xa9756,0x392,DAT_000a9794 + 0xa974e);
  }
  return iVar1;
}

