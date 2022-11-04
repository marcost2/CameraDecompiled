
/* android::KeyedVector<unsigned int, unsigned int>::~KeyedVector() */

void __thiscall
android::KeyedVector<unsigned_int,unsigned_int>::_KeyedVector
          (KeyedVector_unsigned_int_unsigned_int_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0005153c + 0x51526) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::__ThumbV7PILongThunk__ZN7android16SortedVectorImplD2Ev
            ((SortedVectorImpl *)this,extraout_r1,in_r2);
  return;
}

