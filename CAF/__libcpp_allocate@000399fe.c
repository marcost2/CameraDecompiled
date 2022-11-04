
/* std::__1::__libcpp_allocate(unsigned int, unsigned int) */

void std::__1::__libcpp_allocate(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = __is_overaligned_for_new(param_2);
  if (iVar1 != 0) {
    __ThumbV7PILongThunk__ZnwjSt11align_val_t(param_1,param_2);
    return;
  }
  __ThumbV7PILongThunk__Znwj(param_1);
  return;
}

