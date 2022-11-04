
/* android::Mutex::lock() */

int __thiscall android::Mutex::lock(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  return -iVar1;
}

