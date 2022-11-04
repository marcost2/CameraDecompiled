
/* android::Vector<unsigned int>::~Vector() */

void __thiscall android::Vector<unsigned_int>::_Vector(Vector_unsigned_int_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0005cbd8 + 0x5cbc2) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::__ThumbV7PILongThunk__ZN7android10VectorImplD2Ev
            ((VectorImpl *)this,extraout_r1,in_r2);
  return;
}

