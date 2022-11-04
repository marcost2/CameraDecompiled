
/* qcamera::MotMemThrottle::disable() */

void __thiscall qcamera::MotMemThrottle::disable(MotMemThrottle *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  this[0x30] = (MotMemThrottle)0x0;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
  return;
}

