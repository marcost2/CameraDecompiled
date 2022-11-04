
/* android::Mutex::unlock() */

void __thiscall android::Mutex::unlock(Mutex *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}

