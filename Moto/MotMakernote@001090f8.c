
/* qcamera::MotMakernote::MotMakernote() */

MotMakernote * __thiscall qcamera::MotMakernote::MotMakernote(MotMakernote *this)

{
  pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  this[0x10] = (MotMakernote)0x0;
  return this;
}

