
/* std::__1::__tree_key_value_types<std::__1::__value_type<unsigned int, unsigned
   int>>::__get_ptr(std::__1::__value_type<unsigned int, unsigned int>&) */

void std::__1::__tree_key_value_types<std::__1::__value_type<unsigned_int,unsigned_int>>::__get_ptr
               (__value_type *param_1)

{
  AbstractUnwindCursor *this;
  
  this = (AbstractUnwindCursor *)
         __value_type<unsigned_int,unsigned_int>::__get_value
                   ((__value_type_unsigned_int_unsigned_int_ *)param_1);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(this);
  return;
}

