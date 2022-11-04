
int _Unwind_VRS_Get(int *param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

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
      iVar1 = unw_get_fpreg(param_1,param_3 + 0x100,param_5);
LAB_00067336:
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      return iVar1 << 1;
    }
  }
  else {
    if (param_2 != 0) {
      ppFVar2 = *(FILE ***)(DAT_00067370 + 0x6734c);
      fprintf(*ppFVar2,(char *)(DAT_00067378 + 0x67360),DAT_0006737c + 0x67362,
              DAT_00067380 + 0x67364,0x35c,DAT_00067374 + 0x67354);
      fflush(*ppFVar2);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((param_3 < 0x10) && (param_4 == 0)) {
      iVar1 = unw_get_reg(param_1,param_3,param_5);
      goto LAB_00067336;
    }
  }
  return 2;
}

