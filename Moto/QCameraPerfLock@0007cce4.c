
/* qcamera::QCameraPerfLock::QCameraPerfLock() */

QCameraPerfLock * __thiscall qcamera::QCameraPerfLock::QCameraPerfLock(QCameraPerfLock *this)

{
  void *pvVar1;
  undefined auVar2 [16];
  
  auVar2 = ZEXT816(0);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  *(longlong *)(this + 0x28) = SUB168(auVar2,0);
  *(longlong *)(this + 0x30) = SUB168(auVar2 >> 0x40,0);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(int *)(this + 0x38) = *(int *)(DAT_0007cd34 + 0x7cd18) + 8;
  pvVar1 = operator_new__(0xc);
  *(void **)(this + 0x3c) = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  return this;
}

