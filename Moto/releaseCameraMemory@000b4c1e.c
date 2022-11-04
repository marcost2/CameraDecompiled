
/* qcamera::QCamera2HardwareInterface::releaseCameraMemory(void*, void*, int) */

void qcamera::QCamera2HardwareInterface::releaseCameraMemory
               (void *param_1,void *param_2,int param_3)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000b4c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)param_1 + 0xc))();
    return;
  }
  return;
}

