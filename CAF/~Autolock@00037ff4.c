
/* android::Mutex::Autolock::~Autolock() */

Autolock * __thiscall android::Mutex::Autolock::_Autolock(Autolock *this,Mutex *param_1)

{
  unlock(*(Mutex **)this);
  return this;
}

