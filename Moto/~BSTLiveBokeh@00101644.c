
/* qcamera::BSTLiveBokeh::~BSTLiveBokeh() */

void __thiscall qcamera::BSTLiveBokeh::_BSTLiveBokeh(BSTLiveBokeh *this)

{
  void *pvVar1;
  
  *(int *)this = *(int *)(DAT_0010166c + 0x10164e) + 8;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xd0));
  pvVar1 = (void *)BaseBSTBokeh::_BaseBSTBokeh((BaseBSTBokeh *)this);
  operator_delete(pvVar1);
  return;
}

