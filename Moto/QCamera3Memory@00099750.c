
/* qcamera::QCamera3Memory::QCamera3Memory() */

QCamera3Memory * __thiscall qcamera::QCamera3Memory::QCamera3Memory(QCamera3Memory *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(int *)this = *(int *)(DAT_000997b0 + 0x9975e) + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x608),(pthread_mutexattr_t *)0x0);
  iVar3 = 0x142;
  iVar4 = 8;
  *(undefined4 *)(this + 4) = 0;
  uVar2 = DAT_000997a8;
  uVar1 = DAT_000997a0;
  do {
    puVar5 = (undefined8 *)(this + iVar4);
    iVar4 = iVar4 + 0x10;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    *(undefined4 *)(this + iVar3 * 4) = 0xffffffff;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x182);
  return this;
}

