
/* android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */

void __thiscall
android::Vector<unsigned_char>::do_copy
          (Vector_unsigned_char_ *this,void *param_1,void *param_2,uint param_3)

{
  __aeabi_memcpy8(param_1,param_2,param_3);
  return;
}

