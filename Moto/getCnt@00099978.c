
/* qcamera::QCamera3Memory::getCnt() */

undefined4 __thiscall qcamera::QCamera3Memory::getCnt(QCamera3Memory *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  uVar1 = *(undefined4 *)(this + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar1;
}

