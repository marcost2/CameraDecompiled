
/* android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int>>::~SortedVector() */

void __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::_SortedVector
          (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0005153c + 0x51526) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::__ThumbV7PILongThunk__ZN7android16SortedVectorImplD2Ev
            ((SortedVectorImpl *)this,extraout_r1,in_r2);
  return;
}

