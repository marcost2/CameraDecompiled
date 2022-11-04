
/* qcamera::MotExif::~MotExif() */

MotExif * __thiscall qcamera::MotExif::_MotExif(MotExif *this)

{
  *(int *)this = *(int *)(DAT_00105488 + 0x105476) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 4));
  return this;
}

