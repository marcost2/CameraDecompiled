
/* std::__1::pair<unsigned int, unsigned int>::pair<unsigned int&, unsigned int, false>(unsigned
   int&, unsigned int&&) */

pair_unsigned_int_unsigned_int_ * __thiscall
std::__1::pair<unsigned_int,unsigned_int>::pair_unsigned_int__unsigned_int_false_
          (pair_unsigned_int_unsigned_int_ *this,uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  *(undefined4 *)this = *puVar1;
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_2);
  *(undefined4 *)(this + 4) = *puVar1;
  return this;
}

