
/* void android::splat_type<android::key_value_pair_t<unsigned int, unsigned
   int>>(android::key_value_pair_t<unsigned int, unsigned int>*, android::key_value_pair_t<unsigned
   int, unsigned int> const*, unsigned int) */

void android::splat_type_android__key_value_pair_t_unsigned_int_unsigned_int__
               (key_value_pair_t *param_1,key_value_pair_t *param_2,uint param_3)

{
  if (param_3 != 0) {
    do {
      key_value_pair_t<unsigned_int,unsigned_int>::operator_
                ((key_value_pair_t_unsigned_int_unsigned_int_ *)param_1,param_2);
      param_1 = (key_value_pair_t *)((key_value_pair_t_unsigned_int_unsigned_int_ *)param_1 + 8);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

