
/* android::SortedVector<android::key_value_pair_t<android::String8,
   android::KeyedVector<android::String8, unsigned int>*>>::~SortedVector() */

void __thiscall
android::
SortedVector<android::key_value_pair_t<android::String8,android::KeyedVector<android::String8,unsigned_int>*>>
::_SortedVector(SortedVector_android__key_value_pair_t_android__String8_android__KeyedVector_android__String8_unsigned_int____
                *this)

{
  void *pvVar1;
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0006656c + 0x66552) + 8;
  android::VectorImpl::finish_vector();
  pvVar1 = (void *)android::SortedVectorImpl::_SortedVectorImpl
                             ((SortedVectorImpl *)this,extraout_r1,in_r2);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

