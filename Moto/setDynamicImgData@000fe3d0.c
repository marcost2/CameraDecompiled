
/* qcamera::QCameraParametersIntf::setDynamicImgData(cam_dyn_img_data_t) */

void qcamera::QCameraParametersIntf::setDynamicImgData(cam_dyn_img_data_t param_1)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  iVar1 = *(int *)param_1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x7c8) = in_r2;
    *(undefined4 *)(iVar1 + 0x7cc) = in_r3;
    *(undefined4 *)(iVar1 + 2000) = in_stack_00000000;
    *(undefined4 *)(iVar1 + 0x7d4) = in_stack_00000004;
    *(undefined4 *)(iVar1 + 0x7d8) = in_stack_00000008;
    *(undefined4 *)(iVar1 + 0x7dc) = in_stack_0000000c;
    *(undefined4 *)(iVar1 + 0x7e0) = in_stack_00000010;
    *(undefined4 *)(iVar1 + 0x7e4) = in_stack_00000014;
    *(undefined4 *)(iVar1 + 0x7e8) = in_stack_00000018;
    *(undefined4 *)(iVar1 + 0x7ec) = in_stack_0000001c;
    *(undefined4 *)(iVar1 + 0x7f0) = in_stack_00000020;
    *(undefined4 *)(iVar1 + 0x7f4) = in_stack_00000024;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe448 + 0xfe442,DAT_000fe44c + 0xfe444,DAT_000fe450 + 0xfe446);
}

