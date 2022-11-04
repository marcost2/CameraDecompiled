
/* android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<unsigned_int>::do_move_backward
          (Vector_unsigned_int_ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3 << 2);
  return;
}

