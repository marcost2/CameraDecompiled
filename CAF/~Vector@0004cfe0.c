
/* android::Vector<long long>::~Vector() */

void __thiscall android::Vector<long_long>::_Vector(Vector_long_long_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0004d000 + 0x4cfea) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::__ThumbV7PILongThunk__ZN7android10VectorImplD2Ev
            ((VectorImpl *)this,extraout_r1,in_r2);
  return;
}

