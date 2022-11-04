
/* qcamera::QCamera3Stream::releaseFrameData(void*, void*) */

void qcamera::QCamera3Stream::releaseFrameData(void *param_1,void *param_2)

{
  int iVar1;
  uint in_r3;
  int unaff_r4;
  uint in_lr;
  void *in_stack_00000000;
  int in_stack_fffffff0;
  uint in_stack_fffffff4;
  
  if (param_2 != (void *)0x0) {
    if (*(int *)((int)param_2 + 0x284) == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x000551b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(*(int *)((int)param_1 + 0x10) + 0xc));
      return;
    }
    iVar1 = QCameraQueue::enqueue
                      ((QCameraQueue *)((int)param_2 + 0x29c),
                       *(cam_mapping_buf_type *)((int)param_1 + 0x10),
                       *(cam_mapping_buf_type *)((int)param_1 + 0x10),in_r3,in_stack_fffffff0,
                       in_stack_fffffff4,unaff_r4,in_lr,in_stack_00000000);
    if ((*(int *)(*(int *)(DAT_000551f4 + 0x551c8) + 0x3c) != 0) && (iVar1 == 0)) {
      mm_camera_debug_log();
      return;
    }
  }
  return;
}

