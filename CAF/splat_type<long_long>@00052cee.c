
/* void android::splat_type<long long>(long long*, long long const*, unsigned int) */

void android::splat_type_long_long_(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    do {
      uVar1 = *(undefined4 *)((int)param_2 + 4);
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)((int)param_1 + 4) = uVar1;
      param_3 = param_3 - 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

