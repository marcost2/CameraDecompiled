
/* android::Vector<int>::~Vector() */

void __thiscall android::Vector<int>::_Vector(Vector_int_ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0004a858 + 0x4a842) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::__ThumbV7PILongThunk__ZN7android10VectorImplD2Ev
            ((VectorImpl *)this,extraout_r1,in_r2);
  return;
}

