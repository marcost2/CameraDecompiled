
/* std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool>
   std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__insert_unique<std::__1::pair<unsigned int, unsigned int>,
   void>(std::__1::pair<unsigned int, unsigned int>&&) */

pair std::__1::
     __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
     ::__insert_unique_std____1__pair_unsigned_int_unsigned_int__void_(pair *param_1)

{
  pair pVar1;
  AbstractUnwindCursor *in_r2;
  
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(in_r2);
  pVar1 = __emplace_unique_std____1__pair_unsigned_int_unsigned_int__(param_1);
  return pVar1;
}

