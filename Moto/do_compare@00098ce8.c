
/* android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int>>::do_compare(void
   const*, void const*) const */

uint __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::do_compare
          (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *this,void *param_1,
          void *param_2)

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

