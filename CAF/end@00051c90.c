
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::end() */

undefined4
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::end(void)

{
  __tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
  *in_r0;
  _Node *p_Var1;
  int *piVar2;
  undefined4 local_10;
  int local_c;
  
  piVar2 = *(int **)(DAT_00051cbc + 0x51c9a);
  local_c = *piVar2;
  p_Var1 = (_Node *)__end_node(in_r0);
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)&local_10,p_Var1);
  if (*piVar2 == local_c) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

