
/* std::__1::__libcpp_deallocate(void*, unsigned int, unsigned int) */

void std::__1::__libcpp_deallocate(void *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_3;
  iVar1 = __is_overaligned_for_new(param_3);
  if (iVar1 != 0) {
    _DeallocateCaller::__do_deallocate_handle_size(param_1,param_2,param_3);
    return;
  }
  _DeallocateCaller::__do_deallocate_handle_size(param_1,param_2,uVar2);
  return;
}

