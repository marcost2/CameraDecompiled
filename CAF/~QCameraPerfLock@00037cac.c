
/* qcamera::QCameraPerfLock::~QCameraPerfLock() */

QCameraPerfLock * __thiscall qcamera::QCameraPerfLock::_QCameraPerfLock(QCameraPerfLock *this)

{
  lock_deinit(this);
  android::List<power_hint_t>::_List((List_power_hint_t_ *)(this + 0x38));
  android::Mutex::_Mutex((Mutex *)(this + 0x10));
  return this;
}

