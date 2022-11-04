
/* std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, unsigned int>>>::map() */

map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
* __thiscall
std::__1::
map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
::map(map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
      *this)

{
  int *piVar1;
  AbstractUnwindCursor aAStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_00047708 + 0x476e0);
  local_14 = *piVar1;
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack24);
  __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
  ::__tree((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
            *)this,(__map_value_compare *)aAStack24);
  if (*piVar1 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

