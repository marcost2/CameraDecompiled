
/* android::SortedVector<android::String8>::~SortedVector() */

void __thiscall
android::SortedVector<android::String8>::_SortedVector(SortedVector_android__String8_ *this)

{
  void *pvVar1;
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_00066648 + 0x6662e) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl
                             ((SortedVectorImpl *)this,extraout_r1,in_r2);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

