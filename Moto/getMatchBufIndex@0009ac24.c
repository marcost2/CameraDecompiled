
/* qcamera::QCamera3GrallocMemory::getMatchBufIndex(void*) */

uint __thiscall
qcamera::QCamera3GrallocMemory::getMatchBufIndex(QCamera3GrallocMemory *this,void *param_1)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    for (uVar1 = *(uint *)(this + 0x80c); uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if (*(void **)(this + uVar1 * 4 + 0x60c) == param_1) goto LAB_0009ac5c;
    }
    uVar1 = 0xffffffff;
  }
LAB_0009ac5c:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar1;
}

