
/* qcamera::PendingBuffersMap::get_num_overall_buffers() */

int __thiscall qcamera::PendingBuffersMap::get_num_overall_buffers(PendingBuffersMap *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  for (iVar4 = *(int *)(*(int *)(this + 8) + 0x1c); iVar4 != *(int *)(this + 8);
      iVar4 = *(int *)(iVar4 + 0x1c)) {
    iVar3 = 0;
    for (iVar2 = *(int *)(*(int *)(iVar4 + 0x14) + 0x10); iVar2 != *(int *)(iVar4 + 0x14);
        iVar2 = *(int *)(iVar2 + 0x10)) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + iVar3;
  }
  return iVar1;
}

