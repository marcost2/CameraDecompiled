
void _Unwind_Resume(_Unwind_Control_Block *param_1,undefined4 param_2,undefined4 param_3,
                   undefined4 param_4)

{
  FILE **ppFVar1;
  unw_cursor_t auStack2784 [1432];
  unw_context_t auStack1352 [1336];
  
  unw_getcontext((int)auStack1352,param_2,param_3,param_4);
  unwind_phase2(auStack1352,auStack2784,param_1,true);
  ppFVar1 = *(FILE ***)(DAT_0006786c + 0x67846);
  fprintf(*ppFVar1,(char *)(DAT_00067874 + 0x6785a),DAT_00067878 + 0x6785c,DAT_0006787c + 0x6785e,
          0x2cc,DAT_00067870 + 0x6784e);
  fflush(*ppFVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

