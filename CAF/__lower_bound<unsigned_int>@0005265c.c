
/* WARNING: Could not reconcile some variable overlaps */
/* std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>
   std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__lower_bound<unsigned int>(unsigned int const&,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*) */

__tree_iterator __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__lower_bound_unsigned_int_
          (__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
           *this,uint *param_1,__tree_node *param_2,__tree_end_node *param_3)

{
  __tree_node **pp_Var1;
  __map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
  *this_00;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000526b8 + 0x5266c);
  local_1c = *piVar3;
  if (param_2 != (__tree_node *)0x0) {
    do {
      this_00 = (__map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
                 *)size(this);
      iVar2 = __map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>
              ::operator__(this_00,(__value_type *)((int)param_2 + 0x10),param_1);
      pp_Var1 = (__tree_node **)param_2;
      if (iVar2 != 0) {
        param_2 = (__tree_node *)((int)param_2 + 4);
        pp_Var1 = (__tree_node **)param_3;
      }
      param_3 = (__tree_end_node *)pp_Var1;
      param_2 = *(__tree_node **)param_2;
    } while ((__tree_node **)param_2 != (__tree_node **)0x0);
  }
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)&local_20,(_Node *)param_3);
  if (*piVar3 == local_1c) {
    return local_20._0_1_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

