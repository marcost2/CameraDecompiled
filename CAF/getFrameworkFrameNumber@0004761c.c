
/* qcamera::FrameNumberRegistry::getFrameworkFrameNumber(unsigned int, unsigned int&) */

undefined4 __thiscall
qcamera::FrameNumberRegistry::getFrameworkFrameNumber
          (FrameNumberRegistry *this,uint param_1,uint *param_2)

{
  int iVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  Mutex *extraout_r1_00;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  Autolock aAStack28 [4];
  uint local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_000476ac + 0x4762c);
  local_14 = *piVar4;
  local_18 = param_1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x10));
  local_20 = std::__1::
             map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
             ::find((map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
                     *)this,&local_18);
  local_24 = std::__1::
             map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
             ::end();
  uVar5 = std::__1::operator__((__map_iterator *)&local_20,(__map_iterator *)&local_24);
  pMVar2 = (Mutex *)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar1 = std::__1::
            __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>>
            ::operator__((__map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__
                          *)&local_20);
    *param_2 = *(uint *)(iVar1 + 4);
    purgeOldEntriesLocked(this);
    uVar3 = 0;
    pMVar2 = extraout_r1_00;
  }
  else {
    if (*(int *)(*(int *)(DAT_000476b0 + 0x4765c) + 0x20) != 0) {
      mm_camera_debug_log();
      pMVar2 = extraout_r1;
    }
    uVar3 = 0xfffffffe;
  }
  android::Mutex::Autolock::_Autolock(aAStack28,pMVar2);
  if (*piVar4 == local_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

