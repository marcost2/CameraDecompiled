
/* qcamera::QCamera3HeapMemory::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3HeapMemory::getOldestFrameNumber(QCamera3HeapMemory *this,uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  uVar2 = *(uint *)(this + 4);
  if (uVar2 != 0) {
    iVar5 = 0x7fffffff;
    bVar1 = true;
    uVar3 = 0;
    iVar4 = 0x10;
    do {
      if (*(int *)(this + iVar4) != 0) {
        iVar6 = *(int *)(this + uVar3 * 4 + 0x508);
        if (!bVar1) {
          bVar1 = false;
          if ((iVar5 <= iVar6) || (iVar6 == -1)) goto LAB_00099ed6;
        }
        *param_1 = uVar3;
        bVar1 = false;
        uVar2 = *(uint *)(this + 4);
        iVar5 = iVar6;
      }
LAB_00099ed6:
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    if (!bVar1) goto LAB_00099ee6;
  }
  iVar5 = -1;
LAB_00099ee6:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return iVar5;
}

