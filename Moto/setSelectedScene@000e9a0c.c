
/* qcamera::QCameraParameters::setSelectedScene(cam_scene_mode_type) */

undefined4 __thiscall
qcamera::QCameraParameters::setSelectedScene(QCameraParameters *this,cam_scene_mode_type param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x2d0));
  *(cam_scene_mode_type *)(this + 0x2d4) = param_1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2d0));
  return 0;
}

