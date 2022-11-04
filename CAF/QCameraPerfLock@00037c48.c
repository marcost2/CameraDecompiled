
/* qcamera::QCameraPerfLock::QCameraPerfLock() */

QCameraPerfLock * __thiscall qcamera::QCameraPerfLock::QCameraPerfLock(QCameraPerfLock *this)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT816(0);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  android::Mutex::Mutex((Mutex *)(this + 0x10));
  *(longlong *)(this + 0x28) = SUB168(auVar1,0);
  *(longlong *)(this + 0x30) = SUB168(auVar1 >> 0x40,0);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  android::List<power_hint_t>::List((List_power_hint_t_ *)(this + 0x38));
  return this;
}

