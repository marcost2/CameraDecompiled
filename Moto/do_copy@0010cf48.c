
/* android::SortedVector<android::key_value_pair_t<android::String8,
   android::KeyedVector<android::String8, unsigned int>*>>::do_copy(void*, void const*, unsigned
   int) const */

SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
* __thiscall
android::
SortedVector<android::key_value_pair_t<android::String8,android::KeyedVector<android::String8,unsigned_int>*>>
::do_copy(SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
          *this,void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    do {
      iVar2 = android::String8::String8((String8 *)param_1,(String8 *)param_2);
      puVar1 = (undefined4 *)((int)param_2 + 4);
      param_2 = (void *)((int)param_2 + 8);
      *(undefined4 *)(iVar2 + 4) = *puVar1;
      this = (SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
              *)(iVar2 + 8);
      param_3 = param_3 - 1;
      param_1 = this;
    } while (param_3 != 0);
  }
  return this;
}

