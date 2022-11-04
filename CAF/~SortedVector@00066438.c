
/* android::SortedVector<android::key_value_pair_t<unsigned int, android::String8>>::~SortedVector()
    */

void __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,android::String8>>::_SortedVector
          (SortedVector_android__key_value_pair_t_unsigned_int_android__String8__ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_00066458 + 0x66442) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::__ThumbV7PILongThunk__ZN7android16SortedVectorImplD2Ev
            ((SortedVectorImpl *)this,extraout_r1,in_r2);
  return;
}

