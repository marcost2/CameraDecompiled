
/* android::SortedVector<android::String8>::~SortedVector() */

void __thiscall
android::SortedVector<android::String8>::_SortedVector(SortedVector_android__String8_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_00064718 + 0x64702) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::__ThumbV7PILongThunk__ZN7android16SortedVectorImplD2Ev
            ((SortedVectorImpl *)this,extraout_r1,in_r2);
  return;
}

