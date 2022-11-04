
/* std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, unsigned
   int>>>::erase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned
   int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>*, int>>) */

undefined4
std::__1::
map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
::erase(_ListIterator param_1)

{
  _Node *p_Var1;
  _Node *in_r1;
  int *piVar2;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  local_1c [4];
  undefined4 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_00047854 + 0x47828);
  local_14 = *piVar2;
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator(local_1c,in_r1);
  p_Var1 = (_Node *)__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
                    ::erase(param_1);
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)&local_18,p_Var1);
  if (*piVar2 == local_14) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

