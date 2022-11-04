
/* qcamera::QCamera3Stream::putBatchBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCamera3Stream::putBatchBufs(QCamera3Stream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  uint uVar1;
  uint uVar2;
  __tree_node *p_Var3;
  uint in_r2;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar5 = *(int **)(DAT_00054d28 + 0x54c6c);
  local_28 = *piVar5;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x27c));
  if (*(int *)(this + 0x28c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar7 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
    p_Var3 = (__tree_node *)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      uVar2 = 0;
    }
    else {
      uVar4 = 0;
      iVar6 = *(int *)(DAT_00054d2c + 0x54c98);
      uVar1 = DAT_00054d34 + 0x54ca6;
      do {
        in_r2 = 8;
        uVar2 = (**(code **)(param_1 + 8))(uVar4,0xffffffff,8,*(undefined4 *)(param_1 + 0xc));
        if ((0x7fffffff < uVar2) && (*(int *)(iVar6 + 0x3c) != 0)) {
          in_r2 = uVar1;
          mm_camera_debug_log();
        }
        uVar4 = uVar4 + 1;
        uVar7 = QCamera3Memory::getCnt(*(QCamera3Memory **)(this + 0x28c));
        p_Var3 = (__tree_node *)((ulonglong)uVar7 >> 0x20);
      } while (uVar4 < (uint)uVar7);
    }
    QCamera3HeapMemory::deallocate(*(allocator **)(this + 0x28c),p_Var3,in_r2);
    if (*(int **)(this + 0x28c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28c) + 0x20))();
    }
    *(undefined4 *)(this + 0x28c) = 0;
  }
  *(undefined4 *)(this + 0x290) = 0;
  android::Mutex::Autolock::_Autolock(aAStack44,(Mutex *)0x0);
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

