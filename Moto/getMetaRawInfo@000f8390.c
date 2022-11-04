
/* qcamera::QCameraParameters::getMetaRawInfo() */

int __thiscall qcamera::QCameraParameters::getMetaRawInfo(QCameraParameters *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = *(void **)(this + 0x1e0);
  if (pvVar2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000f8540 + 0xf8442) + 0x20) == 0) {
      return -0x7fffffff;
    }
    mm_camera_debug_log(1,1,DAT_000f8548 + 0xf845c,0x3f0c,DAT_000f8544 + 0xf8454);
    return -0x7fffffff;
  }
  iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
  if (iVar1 == 0) {
    android::VectorImpl::clear();
    __aeabi_memclr8(pvVar2,0x10f);
    *(undefined *)((int)pvVar2 + 0x117aec) = 0;
    *(undefined *)((int)pvVar2 + 0x106974) = 0;
    *(undefined *)((int)pvVar2 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar2 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar2 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar2 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar2 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar2 + 0xb7340) = 0;
    *(undefined *)((int)pvVar2 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar2 + 0x772c8) = 0;
    MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
  }
  if (*(int *)(this + 0x1e0) == 0) {
    __android_log_print(6,DAT_000f854c + 0xf8472,DAT_000f8550 + 0xf8474,0,0x104);
  }
  else {
    *(undefined *)(*(int *)(this + 0x1e0) + 0x104) = 1;
  }
  iVar1 = commitGetBatch(this);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(DAT_000f8554 + 0xf8486) + 0x20) == 0) {
      return iVar1;
    }
    mm_camera_debug_log(1,1,DAT_000f855c + 0xf84a0,0x3f15,DAT_000f8558 + 0xf8498);
    return iVar1;
  }
  iVar1 = *(int *)(this + 0x1e0);
  if (iVar1 == 0) {
    __android_log_print(6,DAT_000f8560 + 0xf84d6,DAT_000f8564 + 0xf84d8,0,0x104);
  }
  else {
    iVar3 = *(int *)("Could not find input request for frame number %d" + iVar1 + 0x1b);
    if ((iVar3 != 0) &&
       (iVar1 = *(int *)("Could not find input request for frame number %d" + iVar1 + 0x1f),
       iVar1 != 0)) goto LAB_000f850a;
  }
  if (*(int *)(*(int *)(DAT_000f8568 + 0xf84e0) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000f8570 + 0xf84f8,0x3f1d,DAT_000f856c + 0xf84f0);
  }
  iVar1 = *(int *)(*(int *)(this + 0x1d4) + 0x56fc);
  iVar3 = *(int *)(*(int *)(this + 0x1d4) + 0x56f8);
LAB_000f850a:
  if (*(int *)(*(int *)(DAT_000f8574 + 0xf8510) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f857c + 0xf852a,0x3f21,DAT_000f8578 + 0xf8520,iVar3,iVar1);
  }
  *(int *)(this + 0x278) = iVar3;
  *(int *)(this + 0x27c) = iVar1;
  this[0x290] = (QCameraParameters)0x1;
  return 0;
}

