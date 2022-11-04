
/* qcamera::QCamera3HeapMemory::getBufferIndex(unsigned int) */

uint __thiscall qcamera::QCamera3HeapMemory::getBufferIndex(QCamera3HeapMemory *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (*(uint *)(this + 4) != 0) {
    piVar1 = (int *)(this + 0x10);
    uVar2 = 0;
    do {
      if ((*piVar1 != 0) && (*(uint *)(this + uVar2 * 4 + 0x508) == param_1)) goto LAB_00099f2a;
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 4));
  }
  uVar2 = 0xffffffff;
LAB_00099f2a:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar2;
}

