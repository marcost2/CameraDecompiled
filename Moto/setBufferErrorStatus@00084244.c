
/* qcamera::QCamera3HardwareInterface::setBufferErrorStatus(qcamera::QCamera3Channel*, unsigned int,
   camera3_buffer_status, void*) */

void qcamera::QCamera3HardwareInterface::setBufferErrorStatus
               (QCamera3Channel *param_1,uint param_2,camera3_buffer_status param_3,void *param_4)

{
  if (param_4 != (void *)0x0) {
    (*(code *)PTR_setBufferErrorStatus_00119494)(param_4,param_1,param_2,param_3);
    return;
  }
  if (*(int *)(*(int *)(DAT_00084284 + 0x8425a) + 0x20) == 0) {
    return;
  }
  mm_camera_debug_log(1,1,DAT_0008428c + 0x8427a,0x307c,DAT_00084288 + 0x8426e,0);
  return;
}

