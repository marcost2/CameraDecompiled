
/* qcamera::QCamera3PostProcessor::flush() */

uint __thiscall qcamera::QCamera3PostProcessor::flush(QCamera3PostProcessor *this)

{
  undefined4 *__ptr;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x530),true);
  while (__ptr != (undefined4 *)0x0) {
    (**(code **)(this + 0x14))(*__ptr);
    releaseJpegJobData(this,(qcamera_hal3_jpeg_data_t *)__ptr);
    free(__ptr);
    __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x530),true);
  }
  uVar2 = (uint)(char)this[0x470];
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
    do {
      if (*(QCamera3ReprocessChannel **)(this + iVar4 * 4 + 0x474) !=
          (QCamera3ReprocessChannel *)0x0) {
        uVar1 = QCamera3ReprocessChannel::unmapOfflineBuffers
                          (*(QCamera3ReprocessChannel **)(this + iVar4 * 4 + 0x474),true);
        uVar2 = (uint)(byte)this[0x470];
        uVar3 = uVar3 | uVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (char)uVar2);
  }
  return uVar3;
}

