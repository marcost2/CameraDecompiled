
/* qcamera::QCamera3PostProcessor::findJpegJobByJobId(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::findJpegJobByJobId(QCamera3PostProcessor *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x290),true);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000604a4 + 0x60482) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0;
}

