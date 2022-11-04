
/* qcamera::QCamera3PostProcessor::processJpegSettingData(qcamera::jpeg_settings_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processJpegSettingData
          (QCamera3PostProcessor *this,jpeg_settings_t *param_1)

{
  undefined4 uVar1;
  uint in_r2;
  uint in_r3;
  int unaff_r7;
  uint in_lr;
  void *in_stack_00000000;
  int in_stack_fffffff0;
  uint in_stack_fffffff4;
  
  if (param_1 != (jpeg_settings_t *)0x0) {
    uVar1 = QCameraQueue::enqueue
                      ((QCameraQueue *)(this + 0x2fc),(cam_mapping_buf_type)param_1,in_r2,in_r3,
                       in_stack_fffffff0,in_stack_fffffff4,unaff_r7,in_lr,in_stack_00000000);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_00060298 + 0x60274) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

