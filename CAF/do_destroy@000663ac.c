
/* android::SortedVector<android::key_value_pair_t<android::String8, unsigned
   int>>::do_destroy(void*, unsigned int) const */

void * android::SortedVector<android::key_value_pair_t<android::String8,unsigned_int>>::do_destroy
                 (void *param_1,uint param_2)

{
  String8 *this;
  int in_r2;
  undefined8 uVar1;
  
  this = (String8 *)param_2;
  if (in_r2 != 0) {
    do {
      uVar1 = android::String8::_String8(this,(char *)param_2);
      param_2 = (uint)((ulonglong)uVar1 >> 0x20);
      param_1 = (void *)((int)uVar1 + 8);
      in_r2 = in_r2 + -1;
      this = (String8 *)param_1;
    } while (in_r2 != 0);
  }
  return param_1;
}

