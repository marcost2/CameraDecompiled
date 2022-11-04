
/* android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<unsigned_char>::do_move_backward
          (Vector_unsigned_char_ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3);
  return;
}

