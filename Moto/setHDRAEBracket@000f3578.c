
/* qcamera::QCameraParameters::setHDRAEBracket(cam_exp_bracketing_t) */

int qcamera::QCameraParameters::setHDRAEBracket(cam_exp_bracketing_t param_1)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  int iVar4;
  undefined4 in_r3;
  undefined4 uVar5;
  MotParamStateMachine *this;
  void *pvVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  pvVar6 = *(void **)(param_1 + 0x1e0);
  if (pvVar6 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f375c + 0xf36e6) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar5 = 0x2972;
    iVar3 = DAT_000f3760 + 0xf36f6;
    iVar4 = DAT_000f3764 + 0xf36fe;
  }
  else {
    this = (MotParamStateMachine *)(param_1 + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this);
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar6,0x10f);
      *(undefined *)((int)pvVar6 + 0x117aec) = 0;
      *(undefined *)((int)pvVar6 + 0x106974) = 0;
      *(undefined *)((int)pvVar6 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar6 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar6 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar6 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar6 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar6 + 0xb7340) = 0;
      *(undefined *)((int)pvVar6 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar6 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this);
    }
    iVar1 = *(int *)(param_1 + 0x1e0);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(param_1 + 0xd34))) {
        *(undefined4 *)(&DAT_000735e4 + iVar1) = in_stack_00000014;
        *(undefined4 *)(&DAT_000735e0 + iVar1) = in_stack_00000010;
        *(undefined4 *)(&DAT_000735dc + iVar1) = in_stack_0000000c;
        *(undefined4 *)(&DAT_000735d8 + iVar1) = in_stack_00000008;
        *(undefined4 *)(s_get_oisgea_000735cc + iVar1 + 8) = in_stack_00000004;
        *(undefined4 *)(s_get_oisgea_000735cc + iVar1 + 4) = in_stack_00000000;
        *(undefined4 *)(s_get_oisgea_000735cc + iVar1) = in_r3;
        *(undefined4 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar1 + 0x24) = in_r2;
        *(undefined4 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar1 + 0x20) = in_r1;
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x2c) = 1;
        iVar1 = commitSetBatch((QCameraParameters *)param_1);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f3780 + 0xf36c0) + 0x20) == 0) {
          return iVar1;
        }
        uVar5 = 0x297d;
        iVar3 = DAT_000f3784 + 0xf36d2;
        iVar4 = DAT_000f3788 + 0xf36da;
        goto LAB_000f374c;
      }
      MotParamStateMachine::paramWriteError(this);
      uVar5 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000f3768 + 0xf3724,DAT_000f376c + 0xf3726,DAT_000f3770 + 0xf3728,
                        0x2976,uVar5,0x2c);
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f3774 + 0xf3736) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar5 = 0x2977;
    iVar3 = DAT_000f3778 + 0xf3746;
    iVar4 = DAT_000f377c + 0xf374e;
  }
LAB_000f374c:
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
  return iVar1;
}

