
/* qcamera::QCameraParameters::forceInitBatchUpdate() */

undefined4 __thiscall qcamera::QCameraParameters::forceInitBatchUpdate(QCameraParameters *this)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x1e0);
  if (pvVar3 == (void *)0x0) {
    __android_log_print(6,DAT_000fa058 + 0xfa048,DAT_000fa05c + 0xfa04a,DAT_000fa060 + 0xfa04c);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
    uVar2 = 0;
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar3,0x10f);
      *(undefined *)((int)pvVar3 + 0x117aec) = 0;
      *(undefined *)((int)pvVar3 + 0x106974) = 0;
      *(undefined *)((int)pvVar3 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar3 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar3 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar3 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar3 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar3 + 0xb7340) = 0;
      *(undefined *)((int)pvVar3 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar3 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
    }
  }
  return uVar2;
}

