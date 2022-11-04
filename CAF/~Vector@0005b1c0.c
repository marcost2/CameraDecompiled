
/* android::Vector<mm_camera_super_buf_t*>::~Vector() */

void __thiscall
android::Vector<mm_camera_super_buf_t*>::_Vector(Vector_mm_camera_super_buf_t__ *this)

{
  uint extraout_r1;
  uint in_r2;
  
  *(int *)this = *(int *)(DAT_0005b1e0 + 0x5b1ca) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::__ThumbV7PILongThunk__ZN7android10VectorImplD2Ev
            ((VectorImpl *)this,extraout_r1,in_r2);
  return;
}

