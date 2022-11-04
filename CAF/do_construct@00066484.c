
/* android::SortedVector<android::key_value_pair_t<unsigned int,
   android::String8>>::do_construct(void*, unsigned int) const */

void * android::SortedVector<android::key_value_pair_t<unsigned_int,android::String8>>::do_construct
                 (void *param_1,uint param_2)

{
  int in_r2;
  undefined8 uVar1;
  
  if (in_r2 != 0) {
    param_1 = (void *)(param_2 + 4);
    do {
      uVar1 = android::String8::String8((String8 *)param_1,(char *)param_2);
      param_2 = (uint)((ulonglong)uVar1 >> 0x20);
      param_1 = (void *)((int)uVar1 + 8);
      in_r2 = in_r2 + -1;
    } while (in_r2 != 0);
  }
  return param_1;
}

