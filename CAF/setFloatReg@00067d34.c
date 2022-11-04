
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace, libunwind::Registers_arm>::setFloatReg(int,
   unsigned long long) */

void libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::setFloatReg
               (int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  uint in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  FILE **ppFVar2;
  
  if ((in_r1 & 0xfffffff0) == 0x110) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      *(undefined *)(param_1 + 0x4a) = 1;
      Registers_arm::saveVFPv3((void *)(param_1 + 0xd8));
    }
    puVar1 = (undefined4 *)(param_1 + in_r1 * 8 + -0x7a8);
  }
  else {
    if ((in_r1 & 0xfffffff0) != 0x100) {
      ppFVar2 = *(FILE ***)(DAT_00067dcc + 0x67da8);
      fprintf(*ppFVar2,(char *)(DAT_00067dd4 + 0x67dbc),DAT_00067dd8 + 0x67dbe,
              DAT_00067ddc + 0x67dc0,0x9ce,DAT_00067dd0 + 0x67db0);
      fflush(*ppFVar2);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)(param_1 + 0x49) == '\0') {
      *(undefined *)(param_1 + 0x49) = 1;
      if (*(char *)(param_1 + 0x48) == '\0') {
        Registers_arm::saveVFPWithFSTMD((void *)(param_1 + 0x50));
      }
      else {
        Registers_arm::saveVFPWithFSTMX((void *)(param_1 + 0x50));
      }
    }
    puVar1 = (undefined4 *)(param_1 + in_r1 * 8 + -0x7b0);
  }
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  return;
}

