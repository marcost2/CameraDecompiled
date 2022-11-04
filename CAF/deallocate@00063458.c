
/* qcamera::QCamera3StreamMem::deallocate() */

void qcamera::QCamera3StreamMem::deallocate(allocator *param_1,__tree_node *param_2,uint param_3)

{
  __tree_node *extraout_r1;
  Mutex *extraout_r1_00;
  int *piVar1;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_00063490 + 0x63464);
  local_14 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(param_1 + 0xe28));
  QCamera3HeapMemory::deallocate(param_1 + 4,extraout_r1,param_3);
  android::Mutex::Autolock::_Autolock(aAStack24,extraout_r1_00);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

