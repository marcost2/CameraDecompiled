
/* qcamera::BSTLiveBokeh::setDepthMapInterval(int) */

void qcamera::BSTLiveBokeh::setDepthMapInterval(int param_1)

{
  if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xcc) + 0x28))();
    return;
  }
  return;
}

