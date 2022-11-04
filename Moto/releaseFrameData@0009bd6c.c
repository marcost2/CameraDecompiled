
/* qcamera::QCamera3Stream::releaseFrameData(void*, void*) */

void qcamera::QCamera3Stream::releaseFrameData(void *param_1,void *param_2)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
    if (*(int *)((int)param_2 + 0x280) == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0009bd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(*(int *)((int)param_1 + 0x10) + 0xc));
      return;
    }
    iVar1 = QCameraQueue::enqueue
                      ((QCameraQueue *)((int)param_2 + 0x298),*(void **)((int)param_1 + 0x10));
    if ((*(int *)(*(int *)(DAT_0009bdcc + 0x9bda0) + 0x3c) != 0) && (iVar1 == 0)) {
      mm_camera_debug_log(2,1,DAT_0009bdd4 + 0x9bdc0,0x4d6,DAT_0009bdd0 + 0x9bdb4,
                          *(undefined4 *)(*(int *)((int)param_1 + 0x10) + 0xc));
      return;
    }
  }
  return;
}

