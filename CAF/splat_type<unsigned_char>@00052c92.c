
/* void android::splat_type<unsigned char>(unsigned char*, unsigned char const*, unsigned int) */

void android::splat_type_unsigned_char_(uchar *param_1,uchar *param_2,uint param_3)

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

