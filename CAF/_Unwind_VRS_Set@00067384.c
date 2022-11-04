
int _Unwind_VRS_Set(int *param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  FILE **ppFVar2;
  
  if (param_2 == 1) {
    if ((param_4 | 4) == 5) {
      if (param_4 == 1) {
        if (0xf < param_3) {
          return 2;
        }
        unw_save_vfp_as_X(param_1);
      }
      else if (0x1f < param_3) {
        return 2;
      }
      iVar1 = unw_set_fpreg(param_1,param_3 + 0x100,*param_5,param_5[1]);
LAB_000673d8:
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      return iVar1 << 1;
    }
  }
  else {
    if (param_2 != 0) {
      ppFVar2 = *(FILE ***)(DAT_00067414 + 0x673ee);
      fprintf(*ppFVar2,(char *)(DAT_0006741c + 0x67402),DAT_00067420 + 0x67404,
              DAT_00067424 + 0x67406,0x326,DAT_00067418 + 0x673f6);
      fflush(*ppFVar2);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((param_3 < 0x10) && (param_4 == 0)) {
      iVar1 = unw_set_reg(param_1,param_3,*param_5);
      goto LAB_000673d8;
    }
  }
  return 2;
}

