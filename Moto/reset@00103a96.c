
/* qcamera::MotMemThrottle::reset() */

void __thiscall qcamera::MotMemThrottle::reset(MotMemThrottle *this)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0xc] = (MotMemThrottle)0x0;
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}

