
/* android::Vector<mm_camera_buf_def*>::do_copy(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<mm_camera_buf_def*>::do_copy
          (Vector_mm_camera_buf_def__ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memcpy8(param_1,param_2,param_3 << 2);
  return;
}

