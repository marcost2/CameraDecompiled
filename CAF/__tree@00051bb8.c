
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__tree(std::__1::__map_value_compare<unsigned int,
   std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> const&)
    */

__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
* __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__tree(__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
         *this,__map_value_compare *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_00051c04 + 0x51bc6);
  local_14 = *piVar3;
  __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>,std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
  ::__compressed_pair_true_void_
            ((__compressed_pair_std____1____tree_end_node_std____1____tree_node_base_void_____std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
              *)(this + 4));
  local_18 = 0;
  __compressed_pair<unsigned_int,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>>
  ::
  __compressed_pair_int_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_const__
            ((__compressed_pair_unsigned_int_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__
              *)(this + 8),&local_18,param_1);
  uVar1 = __end_node(this);
  puVar2 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this);
  *puVar2 = uVar1;
  if (*piVar3 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

