
/* android::KeyedVector<unsigned int, unsigned int>::removeItem(unsigned int const&) */

void __thiscall
android::KeyedVector<unsigned_int,unsigned_int>::removeItem
          (KeyedVector_unsigned_int_unsigned_int_ *this,uint *param_1)

{
  int *piVar1;
  _Node a_Stack28 [8];
  int local_14;
  
  piVar1 = *(int **)(DAT_0003fe84 + 0x3fe60);
  local_14 = *piVar1;
  List<unsigned_int>::_Node::_Node(a_Stack28,param_1);
  SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::remove
            ((key_value_pair_t *)this);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

