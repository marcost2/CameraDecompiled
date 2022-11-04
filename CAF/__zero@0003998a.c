
/* std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__zero() */

void __thiscall
std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::__zero
          (basic_string_char_std____1__char_traits_char__std____1__allocator_char__ *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)launder_std____1__pair_unsigned_int_const_unsigned_int__((pair *)this);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}

