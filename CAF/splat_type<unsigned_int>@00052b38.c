
/* void android::splat_type<unsigned int>(unsigned int*, unsigned int const*, unsigned int) */

void android::splat_type_unsigned_int_(uint *param_1,uint *param_2,uint param_3)

{
  if (param_3 != 0) {
    do {
      *param_1 = *param_2;
      param_3 = param_3 - 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

