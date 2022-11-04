
/* qcamera::QCamera3PostProcessor::findJpegJobByJobId(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::findJpegJobByJobId(QCamera3PostProcessor *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x530),true);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000a97d8 + 0xa97b6) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a97e0 + 0xa97ce,0x3a9,DAT_000a97dc + 0xa97c6);
  }
  return 0;
}

