
/* android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<int>::do_move_forward(Vector_int_ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memmove(param_1,param_2,param_3 << 2);
  return;
}

