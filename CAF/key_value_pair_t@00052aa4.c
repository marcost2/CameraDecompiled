
/* android::key_value_pair_t<unsigned int, unsigned int>::key_value_pair_t(unsigned int const&,
   unsigned int const&) */

void __thiscall
android::key_value_pair_t<unsigned_int,unsigned_int>::key_value_pair_t
          (key_value_pair_t_unsigned_int_unsigned_int_ *this,uint *param_1,uint *param_2)

{
  *(uint *)this = *param_1;
  *(uint *)(this + 4) = *param_2;
  return;
}

