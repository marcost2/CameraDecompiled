
/* qcamera::QCameraParameters::getSelectedScene() */

undefined4 __thiscall qcamera::QCameraParameters::getSelectedScene(QCameraParameters *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x2d0));
  uVar1 = *(undefined4 *)(this + 0x2d4);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2d0));
  return uVar1;
}

