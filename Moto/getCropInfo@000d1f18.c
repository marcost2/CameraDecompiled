
/* qcamera::QCameraStream::getCropInfo(cam_rect_t&) */

undefined4 __thiscall qcamera::QCameraStream::getCropInfo(QCameraStream *this,cam_rect_t *param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x2d8));
  uVar1 = *(undefined8 *)(this + 0x2cc);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x2c4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2d8));
  return 0;
}

