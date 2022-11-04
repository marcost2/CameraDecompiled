
/* std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, unsigned int>>>::begin() */

undefined4
std::__1::
map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
::begin(void)

{
  _Node *p_Var1;
  int *piVar2;
  undefined4 local_10;
  int local_c;
  
  piVar2 = *(int **)(DAT_000477d4 + 0x477b2);
  local_c = *piVar2;
  p_Var1 = (_Node *)__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
                    ::begin();
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

