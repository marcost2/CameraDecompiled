
/* android::Mutex::~Mutex() */

Mutex * __thiscall android::Mutex::_Mutex(Mutex *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}

