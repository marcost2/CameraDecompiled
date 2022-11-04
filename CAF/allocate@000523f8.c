
/* std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>>::allocate(unsigned int, void const*) */

void std::__1::
     allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>::
     allocate(allocator *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = max_size();
  if (param_2 <= uVar1) {
    __libcpp_allocate(param_2 * 0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error((char *)(DAT_0005241c + 0x5241a));
}

