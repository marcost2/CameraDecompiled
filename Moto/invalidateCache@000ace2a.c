
/* qcamera::QCamera3StreamMem::invalidateCache(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::invalidateCache(QCamera3StreamMem *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xe28));
  if (param_1 < *(uint *)(this + 0xe24)) {
    puVar1 = (undefined4 *)(this + 4);
    pcVar3 = *(code **)*puVar1;
  }
  else {
    pcVar3 = **(code ***)(this + 0x614);
    puVar1 = (undefined4 *)(this + 0x614);
  }
  uVar2 = (*pcVar3)(puVar1,param_1,0xc0144d01);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xe28));
  return uVar2;
}

