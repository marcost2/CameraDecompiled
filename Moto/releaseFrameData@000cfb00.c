
/* qcamera::QCameraStream::releaseFrameData(void*, void*) */

void qcamera::QCameraStream::releaseFrameData(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x000cfb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(*(int *)((int)param_1 + 0x10) + 0xc));
    return;
  }
  return;
}

