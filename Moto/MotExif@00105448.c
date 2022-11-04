
/* qcamera::MotExif::MotExif() */

MotExif * __thiscall qcamera::MotExif::MotExif(MotExif *this)

{
  *(int *)this = *(int *)(DAT_00105468 + 0x105452) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 4),(pthread_mutexattr_t *)0x0);
  return this;
}

