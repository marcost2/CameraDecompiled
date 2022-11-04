
/* qcamera::MotMemThrottle::MotMemThrottle() */

MotMemThrottle * __thiscall qcamera::MotMemThrottle::MotMemThrottle(MotMemThrottle *this)

{
  undefined8 uVar1;
  int *piVar2;
  pthread_condattr_t pStack32;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00103540 + 0x1034a2);
  local_1c = *piVar2;
  pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 4),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init(&pStack32);
  pthread_condattr_setclock(&pStack32,1);
  pthread_cond_init((pthread_cond_t *)(this + 8),&pStack32);
  pthread_condattr_destroy(&pStack32);
  this[0x30] = (MotMemThrottle)0x0;
  uVar1 = DAT_00103538;
  *(undefined8 *)(this + 0x20) = DAT_00103530;
  *(undefined8 *)(this + 0x28) = uVar1;
  this[0x18] = (MotMemThrottle)0x1;
  *(undefined4 *)(this + 0x10) = 0x208;
  *(undefined4 *)(this + 0x14) = 0xa00000;
  this[0xc] = (MotMemThrottle)0x0;
  *(undefined8 *)(this + 0x51) = 0;
  *(undefined8 *)(this + 0x59) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (*piVar2 == local_1c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

