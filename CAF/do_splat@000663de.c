
/* android::SortedVector<android::key_value_pair_t<android::String8, unsigned int>>::do_splat(void*,
   void const*, unsigned int) const */

SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ * __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,unsigned_int>>::do_splat
          (SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ *this,
          void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    do {
      iVar1 = android::String8::String8((String8 *)param_1,(char *)param_2);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)param_2 + 4);
      this = (SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ *)(iVar1 + 8);
      param_3 = param_3 - 1;
      param_1 = this;
    } while (param_3 != 0);
  }
  return this;
}

