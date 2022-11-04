
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__remove_node_pointer(std::__1::__tree_node<std::__1::__value_type<unsigned int,
   unsigned int>, void*>*) */

undefined4 __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__remove_node_pointer
          (__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
           *this,__tree_node *param_1)

{
  undefined4 uVar1;
  __tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
  *this_00;
  __tree_node **pp_Var2;
  undefined4 *puVar3;
  int *piVar4;
  __tree_node_base **pp_Var5;
  int *piVar6;
  undefined4 local_1c;
  int local_18;
  
  piVar6 = *(int **)(DAT_00051da0 + 0x51d4e);
  local_18 = *piVar6;
  this_00 = (__tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
             *)android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_1c,(_Node *)param_1);
  __tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>
  ::operator__(this_00);
  pp_Var2 = (__tree_node **)
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this);
  uVar1 = local_1c;
  if (*pp_Var2 == param_1) {
    puVar3 = (undefined4 *)
             libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this);
    *puVar3 = uVar1;
  }
  piVar4 = (int *)size(this);
  *piVar4 = *piVar4 + -1;
  pp_Var5 = (__tree_node_base **)__end_node(this);
  __tree_remove_std____1____tree_node_base_void____(*pp_Var5,(__tree_node_base *)param_1);
  if (*piVar6 == local_18) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

