
/* android::SortedVector<android::key_value_pair_t<android::String8, unsigned
   int>>::do_move_forward(void*, void const*, unsigned int) const */

void __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,unsigned_int>>::do_move_forward
          (SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ *this,
          void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove8(param_1,param_2,param_3 << 3);
  return;
}

