
/* qcamera::MotSmoothZoom::stopZoom() */

void __thiscall qcamera::MotSmoothZoom::stopZoom(MotSmoothZoom *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  this[0x38] = (MotSmoothZoom)0x1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  return;
}

