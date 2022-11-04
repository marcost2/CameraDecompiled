
/* android::SortedVector<android::String8>::do_move_backward(void*, void const*, unsigned int) const
    */

void __thiscall
android::SortedVector<android::String8>::do_move_backward
          (SortedVector_android__String8_ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3 << 2);
  return;
}

