
/* android::SortedVector<android::key_value_pair_t<unsigned int, android::String8>>::do_copy(void*,
   void const*, unsigned int) const */

SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ * __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,android::String8>>::do_copy
          (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *this,
          void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 != 0) {
    this = (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *)
           ((int)param_1 + 4);
    pcVar2 = (char *)((int)param_2 + 4);
    do {
      *(undefined4 *)((String8 *)this + -4) = *(undefined4 *)(pcVar2 + -4);
      iVar1 = android::String8::String8((String8 *)this,pcVar2);
      this = (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *)(iVar1 + 8);
      pcVar2 = pcVar2 + 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return this;
}

