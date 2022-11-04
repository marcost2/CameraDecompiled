
/* nanoseconds_to_milliseconds(long long) */

void nanoseconds_to_milliseconds(longlong param_1)

{
  uint in_r0;
  uint in_r1;
  
  __aeabi_ldivmod(in_r0,in_r1,1000000,0);
  return;
}

