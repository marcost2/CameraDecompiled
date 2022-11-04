
/* qcamera::QCamera3PostProcessor::processJpegSettingData(qcamera::jpeg_settings_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processJpegSettingData
          (QCamera3PostProcessor *this,jpeg_settings_t *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (jpeg_settings_t *)0x0) {
    uVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x59c),param_1);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000a93e4 + 0xa93c0) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a93ec + 0xa93d8,0x30c,DAT_000a93e8 + 0xa93d0);
  }
  return 0xffffffea;
}

