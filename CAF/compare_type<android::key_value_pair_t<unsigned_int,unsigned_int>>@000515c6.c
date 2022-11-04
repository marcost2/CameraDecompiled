
/* int android::compare_type<android::key_value_pair_t<unsigned int, unsigned
   int>>(android::key_value_pair_t<unsigned int, unsigned int> const&,
   android::key_value_pair_t<unsigned int, unsigned int> const&) */

int android::compare_type_android__key_value_pair_t_unsigned_int_unsigned_int__
              (key_value_pair_t *param_1,key_value_pair_t *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strictly_order_type_android__key_value_pair_t_unsigned_int_unsigned_int__(param_2,param_1)
  ;
  iVar2 = strictly_order_type_android__key_value_pair_t_unsigned_int_unsigned_int__(param_1,param_2)
  ;
  return iVar1 - iVar2;
}

