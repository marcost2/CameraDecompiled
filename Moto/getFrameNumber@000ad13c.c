
/* qcamera::QCamera3StreamMem::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::getFrameNumber(QCamera3StreamMem *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    uVar1 = QCamera3HeapMemory::getFrameNumber((QCamera3HeapMemory *)(this + 4),param_1);
  }
  else {
    uVar1 = QCamera3GrallocMemory::getFrameNumber((QCamera3GrallocMemory *)(this + 0x614),param_1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

