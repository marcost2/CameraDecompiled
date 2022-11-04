
/* qcamera::QCameraPostProcessor::findJpegJobByJobId(unsigned int) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::findJpegJobByJobId(QCameraPostProcessor *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x1d8),true);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000d5900 + 0xd58de) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d5908 + 0xd58f6,0x6dc,DAT_000d5904 + 0xd58ee);
  }
  return 0;
}

