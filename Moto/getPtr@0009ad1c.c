
/* qcamera::QCamera3GrallocMemory::getPtr(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getPtr(QCamera3GrallocMemory *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  uVar1 = (**(code **)(*(int *)this + 0x24))(this,param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar1;
}

