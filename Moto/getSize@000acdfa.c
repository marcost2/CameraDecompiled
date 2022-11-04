
/* qcamera::QCamera3StreamMem::getSize(unsigned int) */

undefined4 __thiscall qcamera::QCamera3StreamMem::getSize(QCamera3StreamMem *this,uint param_1)

{
  QCamera3Memory *this_00;
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  this_00 = (QCamera3Memory *)(this + 0x614);
  if (param_1 < *(uint *)(this + 0xe24)) {
    this_00 = (QCamera3Memory *)(this + 4);
  }
  uVar1 = QCamera3Memory::getSize(this_00,param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

