
/* qcamera::QCamera3StreamMem::getPtr(unsigned int) */

undefined4 __thiscall qcamera::QCamera3StreamMem::getPtr(QCamera3StreamMem *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    uVar1 = QCamera3HeapMemory::getPtr((uint)(this + 4));
  }
  else {
    uVar1 = QCamera3GrallocMemory::getPtr((QCamera3GrallocMemory *)(this + 0x614),param_1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

