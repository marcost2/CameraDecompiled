
/* qcamera::QCamera3Stream::putBatchBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCamera3Stream::putBatchBufs(QCamera3Stream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if (*(QCamera3Memory **)(this + 0x288) == (QCamera3Memory *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = 0;
      iVar6 = *(int *)(DAT_0009b840 + 0x9b7be);
      iVar1 = DAT_0009b844 + 0x9b7c6;
      iVar2 = DAT_0009b848 + 0x9b7cc;
      do {
        uVar3 = (**(code **)(param_1 + 8))(uVar5,0xffffffff,8,*(undefined4 *)(param_1 + 0xc));
        if ((0x7fffffff < uVar3) && (*(int *)(iVar6 + 0x3c) != 0)) {
          mm_camera_debug_log(2,1,iVar2,0x582,iVar1,uVar3);
        }
        uVar5 = uVar5 + 1;
        uVar4 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x288));
      } while (uVar5 < uVar4);
    }
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x288));
    if (*(int **)(this + 0x288) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x288) + 0x20))();
    }
    *(undefined4 *)(this + 0x288) = 0;
  }
  *(undefined4 *)(this + 0x28c) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return uVar3;
}

