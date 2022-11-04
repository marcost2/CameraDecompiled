
/* qcamera::QCamera3GrallocMemory::QCamera3GrallocMemory(unsigned int) */

QCamera3GrallocMemory * __thiscall
qcamera::QCamera3GrallocMemory::QCamera3GrallocMemory(QCamera3GrallocMemory *this,uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(int *)this = *(int *)(DAT_0009a3e0 + 0x9a380) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x608),(pthread_mutexattr_t *)0x0);
  iVar3 = 0x142;
  iVar4 = 8;
  *(undefined4 *)(this + 4) = 0;
  uVar2 = DAT_0009a3d8;
  uVar1 = DAT_0009a3d0;
  do {
    puVar5 = (undefined8 *)(this + iVar4);
    iVar4 = iVar4 + 0x10;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    *(undefined4 *)(this + iVar3 * 4) = 0xffffffff;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x182);
  *(uint *)(this + 0x80c) = param_1;
  *(int *)this = *(int *)(DAT_0009a3e4 + 0x9a3c0) + 8;
  __aeabi_memclr8(this + 0x60c,0x200);
  return this;
}

