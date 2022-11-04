
/* std::__1::pair<unsigned int const, unsigned int>::pair<unsigned int, unsigned int,
   false>(std::__1::pair<unsigned int, unsigned int>&&) */

pair_unsigned_int_const_unsigned_int_ * __thiscall
std::__1::pair<unsigned_int_const,unsigned_int>::pair_unsigned_int_unsigned_int_false_
          (pair_unsigned_int_const_unsigned_int_ *this,pair *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  *(undefined4 *)this = *puVar1;
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                     ((AbstractUnwindCursor *)(param_1 + 4));
  *(undefined4 *)(this + 4) = *puVar1;
  return this;
}

