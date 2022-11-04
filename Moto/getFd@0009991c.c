
/* qcamera::QCamera3Memory::getFd(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Memory::getFd(QCamera3Memory *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if ((param_1 < 0x40) && (*(int *)(this + param_1 * 0x10 + 0x10) != 0)) {
    uVar1 = *(undefined4 *)(this + param_1 * 0x10 + 8);
  }
  else {
    uVar1 = 0xffffffb5;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar1;
}

