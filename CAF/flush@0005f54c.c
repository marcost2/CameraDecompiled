
/* qcamera::QCamera3PostProcessor::flush() */

void __thiscall qcamera::QCamera3PostProcessor::flush(QCamera3PostProcessor *this)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x290),true);
  while (__ptr != (undefined4 *)0x0) {
    (**(code **)(this + 0x14))(*__ptr);
    releaseJpegJobData(this,(qcamera_hal3_jpeg_data_t *)__ptr);
    free(__ptr);
    __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x290),true);
  }
  __ThumbV7PILongThunk__ZN7qcamera21QCamera3PostProcessor21releaseOfflineBuffersEb(this,true);
  return;
}

