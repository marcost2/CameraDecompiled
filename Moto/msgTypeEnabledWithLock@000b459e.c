
/* qcamera::QCamera2HardwareInterface::msgTypeEnabledWithLock(int) */

uint __thiscall
qcamera::QCamera2HardwareInterface::msgTypeEnabledWithLock
          (QCamera2HardwareInterface *this,int param_1)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
  uVar1 = *(uint *)(this + 0x4b4);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  return uVar1 & param_1;
}

