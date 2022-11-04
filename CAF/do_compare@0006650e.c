
/* android::SortedVector<android::key_value_pair_t<unsigned int, android::String8>>::do_compare(void
   const*, void const*) const */

uint __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,android::String8>>::do_compare
          (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *this,
          void *param_1,void *param_2)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = uVar1 - 1;
  }
  return uVar1;
}

