
/* WARNING: Unknown calling convention yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0006e45c)();
  return ptVar1;
}

