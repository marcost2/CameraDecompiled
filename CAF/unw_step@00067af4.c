
void unw_step(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00067af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

