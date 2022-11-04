
/* qcamera::QCamera2HardwareInterface::returnStreamBuffer(void*, void*, int) */

void qcamera::QCamera2HardwareInterface::returnStreamBuffer(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *param_1;
  if ((param_2 != (void *)0x0) && (-1 < iVar1)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x000bd0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,iVar1);
    return;
  }
  if (*(int *)(*(int *)(DAT_000bd0d4 + 0xbd0ac) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000bd0dc + 0xbd0cc,0x2b05,DAT_000bd0d8 + 0xbd0be,iVar1,param_2);
    return;
  }
  return;
}

