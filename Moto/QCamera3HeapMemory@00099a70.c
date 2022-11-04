
/* qcamera::QCamera3HeapMemory::QCamera3HeapMemory(unsigned int) */

QCamera3HeapMemory * __thiscall
qcamera::QCamera3HeapMemory::QCamera3HeapMemory(QCamera3HeapMemory *this,uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  *(int *)this = *(int *)(DAT_00099b00 + 0x99a80) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x608),(pthread_mutexattr_t *)0x0);
  iVar3 = 0x142;
  iVar4 = 8;
  *(undefined4 *)(this + 4) = 0;
  uVar2 = DAT_00099af8;
  uVar1 = DAT_00099af0;
  do {
    puVar6 = (undefined8 *)(this + iVar4);
    iVar4 = iVar4 + 0x10;
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    *(undefined4 *)(this + iVar3 * 4) = 0xffffffff;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x182);
  if (0x3f < param_1) {
    param_1 = 0x40;
  }
  *(uint *)(this + 0x60c) = param_1;
  *(int *)this = *(int *)(DAT_00099b04 + 0x99ac2) + 8;
  if (param_1 != 0) {
    uVar5 = 0;
    do {
      *(undefined4 *)(this + uVar5 * 4 + 0x408) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x60c));
  }
  return this;
}

