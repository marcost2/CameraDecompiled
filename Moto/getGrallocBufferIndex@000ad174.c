
/* qcamera::QCamera3StreamMem::getGrallocBufferIndex(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::getGrallocBufferIndex(QCamera3StreamMem *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  uVar1 = QCamera3GrallocMemory::getBufferIndex((QCamera3GrallocMemory *)(this + 0x614),param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar1;
}

