
/* qcamera::FrameNumberRegistry::purgeOldEntriesLocked() */

void __thiscall qcamera::FrameNumberRegistry::purgeOldEntriesLocked(FrameNumberRegistry *this)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_000477a0 + 0x47730);
  local_18 = *piVar3;
  local_1c = std::__1::
             map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
             ::begin();
  local_20 = std::__1::
             map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
             ::end();
  iVar1 = std::__1::operator__((__map_iterator *)&local_1c,(__map_iterator *)&local_20);
  if (iVar1 != 0) {
    do {
      local_1c = std::__1::
                 map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
                 ::begin();
      puVar2 = (uint *)std::__1::
                       __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>>
                       ::operator__((__map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__
                                     *)&local_1c);
      if (*(int *)(this + 0xc) - 0x100U <= *puVar2) break;
      std::__1::
      map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
      ::erase((_ListIterator)this);
      local_1c = std::__1::
                 map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
                 ::begin();
      local_20 = std::__1::
                 map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
                 ::end();
      iVar1 = std::__1::operator__((__map_iterator *)&local_1c,(__map_iterator *)&local_20);
    } while (iVar1 != 0);
  }
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

