
/* qcamera::BSTLiveBokeh::createInstance() */

int * qcamera::BSTLiveBokeh::createInstance(void)

{
  int iVar1;
  int *this;
  int *piVar2;
  int **ppiVar3;
  char acStack116 [92];
  int local_18;
  
  piVar2 = *(int **)(DAT_001010b0 + 0x101046);
  local_18 = *piVar2;
  ppiVar3 = *(int ***)(DAT_001010b4 + 0x101050);
  this = *ppiVar3;
  if (this == (int *)0x0) {
    this = (int *)operator_new(0xd4);
    iVar1 = BaseBSTBokeh::BaseBSTBokeh((BaseBSTBokeh *)this,0);
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    *this = *(int *)(DAT_001010b8 + 0x101070) + 8;
    pthread_mutex_init((pthread_mutex_t *)(this + 0x34),(pthread_mutexattr_t *)0x0);
    property_get(DAT_001010bc + 0x101088,acStack116,DAT_001010c0 + 0x10108a);
    iVar1 = atoi(acStack116);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    *(BaseBSTBokeh *)((int)this + 9) = SUB41(iVar1,0);
    *ppiVar3 = this;
  }
  if (*piVar2 == local_18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

