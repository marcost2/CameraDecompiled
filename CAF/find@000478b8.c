
/* std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, unsigned int>>>::find(unsigned int const&)
    */

undefined4 __thiscall
std::__1::
map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
::find(map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
       *this,uint *param_1)

{
  __tree_iterator _Var1;
  int *piVar2;
  undefined4 local_10;
  int local_c;
  
  piVar2 = *(int **)(DAT_000478e4 + 0x478c2);
  local_c = *piVar2;
  _Var1 = __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
          ::find_unsigned_int_
                    ((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                      *)this,param_1);
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)&local_10,(_Node *)(uint)(byte)_Var1);
  if (*piVar2 == local_c) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

