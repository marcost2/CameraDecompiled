
/* std::__1::__compressed_pair_elem<unsigned int, 0, false>::__compressed_pair_elem<int,
   void>(int&&) */

__compressed_pair_elem_unsigned_int_0_false_ * __thiscall
std::__1::__compressed_pair_elem<unsigned_int,0,false>::__compressed_pair_elem_int_void_
          (__compressed_pair_elem_unsigned_int_0_false_ *this,int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  *(undefined4 *)this = *puVar1;
  return this;
}

