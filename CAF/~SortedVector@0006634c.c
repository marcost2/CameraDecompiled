
/* android::SortedVector<android::key_value_pair_t<android::String8, unsigned int>>::~SortedVector()
    */

void __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,unsigned_int>>::_SortedVector
          (SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0006636c + 0x66356) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::__ThumbV7PILongThunk__ZN7android16SortedVectorImplD2Ev
            ((SortedVectorImpl *)this,extraout_r1,in_r2);
  return;
}

