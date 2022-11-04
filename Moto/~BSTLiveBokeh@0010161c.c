
/* qcamera::BSTLiveBokeh::~BSTLiveBokeh() */

void __thiscall qcamera::BSTLiveBokeh::_BSTLiveBokeh(BSTLiveBokeh *this)

{
  *(int *)this = *(int *)(DAT_00101640 + 0x101626) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xd0));
  BaseBSTBokeh::_BaseBSTBokeh((BaseBSTBokeh *)this);
  return;
}

