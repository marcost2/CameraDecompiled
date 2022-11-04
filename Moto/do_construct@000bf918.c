
/* android::SortedVector<android::key_value_pair_t<android::String8,
   android::String8>>::do_construct(void*, unsigned int) const */

SortedVector_android__key_value_pair_t_android__String8_android__String8__ * __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,android::String8>>::do_construct
          (SortedVector_android__key_value_pair_t_android__String8_android__String8__ *this,
          void *param_1,uint param_2)

{
  if (param_2 != 0) {
    do {
      android::String8::String8((String8 *)param_1);
      this = (SortedVector_android__key_value_pair_t_android__String8_android__String8__ *)
             android::String8::String8((String8 *)((int)param_1 + 4));
      param_1 = (void *)((int)param_1 + 8);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return this;
}

