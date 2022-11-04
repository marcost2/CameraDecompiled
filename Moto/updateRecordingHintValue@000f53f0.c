
/* qcamera::QCameraParameters::updateRecordingHintValue(int) */

int __thiscall
qcamera::QCameraParameters::updateRecordingHintValue(QCameraParameters *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x1e0);
  if (pvVar5 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f5550 + 0xf54c2) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar4 = 0x3086;
    iVar2 = DAT_000f5554 + 0xf54d2;
    iVar3 = DAT_000f5558 + 0xf54da;
  }
  else {
    iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
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
      MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
    }
    iVar1 = setRecordingHintValue(this,param_1);
    if (iVar1 == 0) {
      if ((param_1 == 1) && (this[0x28b] != (QCameraParameters)0x0)) {
        if (*(int *)(*(int *)(DAT_000f555c + 0xf54ea) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f5564 + 0xf5502,0x3091,DAT_000f5560 + 0xf54fa);
        }
        setDISValue(this,*(char **)(DAT_000f5568 + 0xf550a));
      }
      iVar1 = commitSetBatch(this);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(*(int *)(DAT_000f556c + 0xf5520) + 0x20) == 0) {
        return iVar1;
      }
      uVar4 = 0x3097;
      iVar2 = DAT_000f5570 + 0xf5530;
      iVar3 = DAT_000f5574 + 0xf5538;
    }
    else {
      if (*(int *)(*(int *)(DAT_000f5544 + 0xf549c) + 0x20) == 0) {
        return iVar1;
      }
      uVar4 = 0x308c;
      iVar2 = DAT_000f5548 + 0xf54ae;
      iVar3 = DAT_000f554c + 0xf54b6;
    }
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  return iVar1;
}

