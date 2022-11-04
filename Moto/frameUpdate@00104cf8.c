
/* qcamera::MotSmoothZoom::frameUpdate(unsigned int) */

void __thiscall qcamera::MotSmoothZoom::frameUpdate(MotSmoothZoom *this,uint param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  *(uint *)(this + 0x3c) = param_1;
  pthread_cond_signal((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  return;
}

