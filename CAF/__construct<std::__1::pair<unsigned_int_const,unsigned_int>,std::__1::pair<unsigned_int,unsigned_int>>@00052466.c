
/* void 
   std::__1::allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>::__construct<std::__1::pair<unsigned int const, unsigned int>,
   std::__1::pair<unsigned int, unsigned int>>(std::__1::integral_constant<bool, true>,
   std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>>&, std::__1::pair<unsigned int const, unsigned int>*, std::__1::pair<unsigned int,
   unsigned int>&&) */

void std::__1::
     allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
     ::
     __construct_std____1__pair_unsigned_int_const_unsigned_int__std____1__pair_unsigned_int_unsigned_int__
               (integral_constant param_1,allocator *param_2,pair *param_3,pair *param_4)

{
  pair *ppVar1;
  
  ppVar1 = (pair *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                             ((AbstractUnwindCursor *)param_3);
  allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>::
  construct_std____1__pair_unsigned_int_const_unsigned_int__std____1__pair_unsigned_int_unsigned_int__
            ((allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___
              *)param_1,(pair *)param_2,ppVar1);
  return;
}

