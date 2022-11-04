
/* qcamera::QCameraParameters::setAEBracketing() */

int __thiscall qcamera::QCameraParameters::setAEBracketing(QCameraParameters *this)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  MotParamStateMachine *this_00;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pvVar6 = *(void **)(this + 0x1e0);
  if (pvVar6 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f3548 + 0xf34d2) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar5 = 0x2950;
    iVar3 = DAT_000f354c + 0xf34e2;
    iVar4 = DAT_000f3550 + 0xf34ea;
LAB_000f34e8:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this_00);
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
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        uVar7 = *(undefined8 *)(this + 0x250);
        uVar8 = *(undefined8 *)(this + 600);
        uVar9 = *(undefined8 *)(this + 0x240);
        uVar10 = *(undefined8 *)(this + 0x248);
        *(undefined4 *)(&DAT_000735e4 + iVar1) = *(undefined4 *)(this + 0x260);
        *(undefined8 *)(s_get_oisgea_000735cc + iVar1 + 8) = uVar7;
        *(undefined8 *)(&DAT_000735dc + iVar1) = uVar8;
        *(undefined8 *)("%s: Failed to set LED eeprom/otp data!\n" + iVar1 + 0x20) = uVar9;
        *(undefined8 *)(s_get_oisgea_000735cc + iVar1) = uVar10;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x2c) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f356c + 0xf34ac) + 0x20) == 0) {
          return iVar1;
        }
        uVar5 = 0x295b;
        iVar3 = DAT_000f3570 + 0xf34be;
        iVar4 = DAT_000f3574 + 0xf34c6;
        goto LAB_000f34e8;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar5 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f3554 + 0xf3514,DAT_000f3558 + 0xf3516,DAT_000f355c + 0xf3518,
                        0x2954,uVar5,0x2c);
    if (*(int *)(*(int *)(DAT_000f3560 + 0xf3520) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f3568 + 0xf3538,0x2955,DAT_000f3564 + 0xf3530);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

