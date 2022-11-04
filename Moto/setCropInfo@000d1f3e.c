
/* qcamera::QCameraStream::setCropInfo(cam_rect_t) */

undefined4 qcamera::QCameraStream::setCropInfo(cam_rect_t param_1)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
  *(undefined4 *)(param_1 + 0x2c4) = in_r1;
  *(undefined4 *)(param_1 + 0x2c8) = in_r2;
  *(undefined4 *)(param_1 + 0x2cc) = in_r3;
  *(undefined4 *)(param_1 + 0x2d0) = in_stack_00000000;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  return 0;
}

