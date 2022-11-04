
/* qcamera::QCamera3StreamMem::valid(unsigned int) */

bool __thiscall qcamera::QCamera3StreamMem::valid(QCamera3StreamMem *this,uint param_1)

{
  QCamera3Memory *this_00;
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  this_00 = (QCamera3Memory *)(this + 0x614);
  if (param_1 < *(uint *)(this + 0xe24)) {
    this_00 = (QCamera3Memory *)(this + 4);
  }
  iVar1 = QCamera3Memory::getSize(this_00,param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return 0 < iVar1;
}

