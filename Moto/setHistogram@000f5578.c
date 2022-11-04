
/* qcamera::QCameraParameters::setHistogram(bool) */

int __thiscall qcamera::QCameraParameters::setHistogram(QCameraParameters *this,bool param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined *puVar3;
  undefined4 uVar4;
  MotParamStateMachine *this_00;
  void *pvVar5;
  
  if ((uint)(byte)this[0x215] == (uint)param_1) {
    if (*(int *)(*(int *)(DAT_000f5754 + 0xf558c) + 0x28) != 0) {
      uVar4 = 0x30ad;
      iVar1 = DAT_000f5758 + 0xf559c;
      puVar3 = (undefined *)(DAT_000f575c + 0xf55a4);
LAB_000f55a2:
      mm_camera_debug_log(1,3,puVar3,uVar4,iVar1);
    }
LAB_000f55a6:
    iVar1 = 0;
  }
  else {
    pvVar5 = *(void **)(this + 0x1e0);
    if (pvVar5 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000f5760 + 0xf56aa) + 0x20) == 0) {
        return -0x7fffffff;
      }
      mm_camera_debug_log(1,1,DAT_000f5768 + 0xf56c2,0x30b3,DAT_000f5764 + 0xf56ba);
      return -0x7fffffff;
    }
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar5,0x10f);
      *(undefined *)((int)pvVar5 + 0x117aec) = 0;
      *(undefined *)((int)pvVar5 + 0x106974) = 0;
      *(undefined *)((int)pvVar5 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar5 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar5 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar5 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar5 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar5 + 0xb7340) = 0;
      *(undefined *)((int)pvVar5 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar5 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("%s: Failed to set LED eeprom/otp data!\n" + iVar1 + 0x14) = (uint)param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x29) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 != 0) {
          if (*(int *)(*(int *)(DAT_000f5784 + 0xf5680) + 0x20) == 0) {
            return iVar1;
          }
          mm_camera_debug_log(1,1,DAT_000f578c + 0xf569a,0x30c0,DAT_000f5788 + 0xf5692);
          return iVar1;
        }
        this[0x215] = (QCameraParameters)param_1;
        if (*(int *)(*(int *)(DAT_000f5790 + 0xf5726) + 0x28) != 0) {
          uVar4 = 0x30c6;
          iVar1 = DAT_000f579c + 0xf5746;
          puVar3 = &UNK_000f5752 + DAT_000f57a0;
          goto LAB_000f55a2;
        }
        goto LAB_000f55a6;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f576c + 0xf56ec,DAT_000f5770 + 0xf56ee,DAT_000f5774 + 0xf56f0,
                        0x30b9,uVar4,0x29);
    if (*(int *)(*(int *)(DAT_000f5778 + 0xf56f8) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5780 + 0xf5710,0x30ba,DAT_000f577c + 0xf5708);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

