
/* android::SortedVector<android::key_value_pair_t<unsigned int, unsigned
   int>>::do_move_backward(void*, void const*, unsigned int) const */

void __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::do_move_backward
          (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *this,void *param_1,
          void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3 << 3);
  return;
}

