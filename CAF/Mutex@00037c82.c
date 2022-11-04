
/* android::Mutex::Mutex() */

Mutex * __thiscall android::Mutex::Mutex(Mutex *this)

{
  pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  return this;
}

