
/* android::SortedVector<android::key_value_pair_t<android::String8,
   android::String8>>::do_splat(void*, void const*, unsigned int) const */

SortedVector_android__key_value_pair_t_android__String8_android__String8__ * __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,android::String8>>::do_splat
          (SortedVector_android__key_value_pair_t_android__String8_android__String8__ *this,
          void *param_1,void *param_2,uint param_3)

{
  if (param_3 != 0) {
    do {
      android::String8::String8((String8 *)param_1,(String8 *)param_2);
      this = (SortedVector_android__key_value_pair_t_android__String8_android__String8__ *)
             android::String8::String8((String8 *)((int)param_1 + 4),(String8 *)((int)param_2 + 4));
      param_1 = (void *)((int)param_1 + 8);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return this;
}

