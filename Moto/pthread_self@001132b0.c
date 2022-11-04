
/* WARNING: Unknown calling convention yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_0011a360)();
  return pVar1;
}

