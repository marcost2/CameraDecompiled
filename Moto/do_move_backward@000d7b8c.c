
/* android::Vector<mm_camera_buf_def*>::do_move_backward(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<mm_camera_buf_def*>::do_move_backward
          (Vector_mm_camera_buf_def__ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3 << 2);
  return;
}

