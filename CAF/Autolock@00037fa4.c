
/* android::Mutex::Autolock::Autolock(android::Mutex&) */

Autolock * __thiscall android::Mutex::Autolock::Autolock(Autolock *this,Mutex *param_1)

{
  *(Mutex **)this = param_1;
  lock(param_1);
  return this;
}

