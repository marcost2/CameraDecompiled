
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   int>) */

undefined4
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::erase(_ListIterator param_1)

{
  __tree_node *p_Var1;
  undefined4 uVar2;
  pair *ppVar3;
  __value_type *p_Var4;
  int *piVar5;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  local_20 [4];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00051d3c + 0x51cec);
  local_1c = *piVar5;
  p_Var1 = (__tree_node *)
           android::List<qcamera::ReprocessBuffer>::
           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
           ::getNode(local_20);
  uVar2 = __remove_node_pointer
                    ((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                      *)param_1,p_Var1);
  ppVar3 = (pair *)__node_alloc((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                                 *)param_1);
  p_Var4 = (__value_type *)
           __tree_const_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>
           ::operator_((__tree_const_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
                        *)local_20);
  __tree_key_value_types<std::__1::__value_type<unsigned_int,unsigned_int>>::__get_ptr(p_Var4);
  launder_std____1__pair_unsigned_int_const_unsigned_int__(ppVar3);
  allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
  ::deallocate((allocator *)ppVar3,p_Var1,1);
  if (*piVar5 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

