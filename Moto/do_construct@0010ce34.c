
/* android::SortedVector<android::key_value_pair_t<unsigned int,
   android::String8>>::do_construct(void*, unsigned int) const */

SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ * __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,android::String8>>::do_construct
          (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *this,
          void *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    this = (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *)
           ((int)param_1 + 4);
    do {
      iVar1 = android::String8::String8((String8 *)this);
      this = (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *)(iVar1 + 8);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return this;
}

