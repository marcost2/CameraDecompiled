
/* qcamera::MotCtrl::MotCtrl() */

MotCtrl * __thiscall qcamera::MotCtrl::MotCtrl(MotCtrl *this)

{
  *(int *)this = *(int *)(DAT_00104d98 + 0x104d82) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 8),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  return this;
}

