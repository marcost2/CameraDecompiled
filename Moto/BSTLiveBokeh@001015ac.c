
/* qcamera::BSTLiveBokeh::BSTLiveBokeh(int) */

BSTLiveBokeh * __thiscall qcamera::BSTLiveBokeh::BSTLiveBokeh(BSTLiveBokeh *this,int param_1)

{
  int iVar1;
  int *piVar2;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_0010160c + 0x1015b8);
  local_14 = *piVar2;
  BaseBSTBokeh::BaseBSTBokeh((BaseBSTBokeh *)this,param_1);
  *(undefined4 *)(this + 0xcc) = 0;
  *(int *)this = *(int *)(DAT_00101610 + 0x1015d0) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xd0),(pthread_mutexattr_t *)0x0);
  property_get(DAT_00101614 + 0x1015e8,acStack112,DAT_00101618 + 0x1015ea);
  iVar1 = atoi(acStack112);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[9] = SUB41(iVar1,0);
  if (*piVar2 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

