
/* std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool>
   std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__emplace_unique<std::__1::pair<unsigned int, unsigned
   int>>(std::__1::pair<unsigned int, unsigned int>&&) */

pair std::__1::
     __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
     ::__emplace_unique_std____1__pair_unsigned_int_unsigned_int__(pair *param_1)

{
  pair pVar1;
  __extract_key_first_tag _Var2;
  pair *in_r1;
  AbstractUnwindCursor *in_r2;
  
  _Var2 = libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(in_r2);
  pVar1 = __emplace_unique_extract_key_std____1__pair_unsigned_int_unsigned_int__
                    ((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                      *)param_1,in_r1,_Var2);
  return pVar1;
}

