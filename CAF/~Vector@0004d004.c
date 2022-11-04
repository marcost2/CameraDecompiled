
/* android::Vector<unsigned char>::~Vector() */

void __thiscall android::Vector<unsigned_char>::_Vector(Vector_unsigned_char_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0004d024 + 0x4d00e) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::__ThumbV7PILongThunk__ZN7android10VectorImplD2Ev
            ((VectorImpl *)this,extraout_r1,in_r2);
  return;
}

