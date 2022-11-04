
/* std::__1::basic_string<char, std::__1::char_traits<char>,
   std::__1::allocator<char>>::basic_string<decltype(nullptr)>(char const*) */

basic_string_char_std____1__char_traits_char__std____1__allocator_char__ * __thiscall
std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
basic_string_decltype_nullptr__
          (basic_string_char_std____1__char_traits_char__std____1__allocator_char__ *this,
          char *param_1)

{
  __compressed_pair<std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::__rep,std::__1::allocator<char>>
  ::__compressed_pair_true_void_
            ((__compressed_pair_std____1__basic_string_char_std____1__char_traits_char__std____1__allocator_char______rep_std____1__allocator_char__
              *)this);
  char_traits<char>::length(param_1);
  std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::__init
            ((char *)this,(uint)param_1);
  return this;
}

