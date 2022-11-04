
/* std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned
   int>, void*>*) */

void __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::destroy(__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
          *this,__tree_node *param_1)

{
  pair *ppVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 4));
    ppVar1 = (pair *)__node_alloc(this);
    __tree_key_value_types<std::__1::__value_type<unsigned_int,unsigned_int>>::__get_ptr
              ((__value_type *)(param_1 + 0x10));
    launder_std____1__pair_unsigned_int_const_unsigned_int__(ppVar1);
    allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
    ::deallocate((allocator *)ppVar1,param_1,1);
    return;
  }
  return;
}

