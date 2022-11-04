
/* WARNING: Unknown calling convention yet parameter storage is locked */

int __ThumbV7PILongThunk_pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

