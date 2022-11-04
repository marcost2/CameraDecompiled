
/* WARNING: Unknown calling convention yet parameter storage is locked */

int __ThumbV7PILongThunk_pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

