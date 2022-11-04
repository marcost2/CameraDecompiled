
/* qcamera::MotMemThrottle::cancel() */

void __thiscall qcamera::MotMemThrottle::cancel(MotMemThrottle *this)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  this[0xc] = (MotMemThrottle)0x1;
  pthread_cond_broadcast((pthread_cond_t *)(this + 8));
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}

