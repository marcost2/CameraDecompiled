
/* android::SortedVector<android::key_value_pair_t<android::String8,
   android::KeyedVector<android::String8, unsigned int>*>>::do_destroy(void*, unsigned int) const */

SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
* __thiscall
android::
SortedVector<android::key_value_pair_t<android::String8,android::KeyedVector<android::String8,unsigned_int>*>>
::do_destroy(SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
             *this,void *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = android::String8::_String8((String8 *)param_1);
      this = (SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
              *)(iVar1 + 8);
      param_2 = param_2 - 1;
      param_1 = this;
    } while (param_2 != 0);
  }
  return this;
}

