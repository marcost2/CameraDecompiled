
ulonglong __aeabi_d2ulz(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if (dVar1 <= 0.0) {
    return 0;
  }
  return (ulonglong)
         ROUND(dVar1 + (double)((ulonglong)ROUND(dVar1 * DAT_0010da38) & 0xffffffff) * DAT_0010da40)
         & 0xffffffff | (longlong)ROUND(dVar1 * DAT_0010da38) << 0x20;
}

