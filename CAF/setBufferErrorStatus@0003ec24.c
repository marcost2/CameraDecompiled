
/* qcamera::QCamera3HardwareInterface::setBufferErrorStatus(qcamera::QCamera3Channel*, unsigned int,
   camera3_buffer_status, void*) */

void qcamera::QCamera3HardwareInterface::setBufferErrorStatus
               (QCamera3Channel *param_1,uint param_2,camera3_buffer_status param_3,void *param_4)

{
  if (param_4 != (void *)0x0) {
    __ThumbV7PILongThunk__ZN7qcamera25QCamera3HardwareInterface20setBufferErrorStatusEPNS_15QCamera3ChannelEj21camera3_buffer_status
              ((QCamera3Channel *)param_4,(uint)param_1,param_2,(void *)param_3);
    return;
  }
  if (*(int *)(*(int *)(DAT_0003ec64 + 0x3ec3a) + 0x20) != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

