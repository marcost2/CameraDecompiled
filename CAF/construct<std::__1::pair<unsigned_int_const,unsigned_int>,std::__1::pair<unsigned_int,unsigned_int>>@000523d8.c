
/* void 
   std::__1::allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>::construct<std::__1::pair<unsigned int const, unsigned int>,
   std::__1::pair<unsigned int, unsigned
   int>>(std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned
   int>, void*>>&, std::__1::pair<unsigned int const, unsigned int>*, std::__1::pair<unsigned int,
   unsigned int>&&) */

void __thiscall
std::__1::
allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
::
construct_std____1__pair_unsigned_int_const_unsigned_int__std____1__pair_unsigned_int_unsigned_int__
          (allocator_traits_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
           *this,allocator *param_1,pair *param_2,pair *param_3)

{
  pair *ppVar1;
  
  ppVar1 = (pair *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                             ((AbstractUnwindCursor *)param_2);
  __construct_std____1__pair_unsigned_int_const_unsigned_int__std____1__pair_unsigned_int_unsigned_int__
            ((integral_constant)this,param_1,ppVar1,param_3);
  return;
}

