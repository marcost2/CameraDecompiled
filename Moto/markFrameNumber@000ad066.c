
/* qcamera::QCamera3StreamMem::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::markFrameNumber(QCamera3StreamMem *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    uVar1 = QCamera3HeapMemory::markFrameNumber((QCamera3HeapMemory *)(this + 4),param_1,param_2);
  }
  else {
    uVar1 = QCamera3GrallocMemory::markFrameNumber
                      ((QCamera3GrallocMemory *)(this + 0x614),param_1,param_2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

