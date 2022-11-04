
void _INIT_1(void)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  int iVar3;
  
  ppVar1 = (pthread_mutex_t *)(DAT_0010486c + 0x10483a);
  pthread_mutex_init(ppVar1,(pthread_mutexattr_t *)0x0);
  iVar2 = DAT_00104870 + 0x104848;
  iVar3 = DAT_00104874 + 0x10484a;
  __cxa_atexit(iVar2,ppVar1,iVar3);
  ppVar1 = *(pthread_mutex_t **)(DAT_00104878 + 0x104858);
  pthread_mutex_init(ppVar1,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(iVar2,ppVar1,iVar3);
  return;
}

