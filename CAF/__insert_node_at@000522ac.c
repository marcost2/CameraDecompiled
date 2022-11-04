
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*,
   std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */

void __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__insert_node_at(__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                   *this,__tree_end_node *param_1,__tree_node_base **param_2,
                  __tree_node_base *param_3)

{
  int **ppiVar1;
  undefined4 *puVar2;
  __tree_node_base **pp_Var3;
  int *piVar4;
  undefined4 uVar5;
  
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(__tree_end_node **)(param_3 + 8) = param_1;
  *param_2 = param_3;
  ppiVar1 = (int **)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                              ((AbstractUnwindCursor *)this);
  if (**ppiVar1 != 0) {
    puVar2 = (undefined4 *)
             libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this);
    uVar5 = *(undefined4 *)*puVar2;
    puVar2 = (undefined4 *)
             libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this);
    *puVar2 = uVar5;
  }
  pp_Var3 = (__tree_node_base **)__end_node(this);
  __tree_balance_after_insert_std____1____tree_node_base_void____(*pp_Var3,*param_2);
  piVar4 = (int *)size(this);
  *piVar4 = *piVar4 + 1;
  return;
}

