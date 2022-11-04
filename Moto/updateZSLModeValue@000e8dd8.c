
/* qcamera::QCameraParameters::updateZSLModeValue(bool) */

int __thiscall qcamera::QCameraParameters::updateZSLModeValue(QCameraParameters *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x1e0);
  if (pvVar5 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000e8f00 + 0xe8ea8) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar4 = 0x1301;
    iVar2 = DAT_000e8f04 + 0xe8eb8;
    iVar3 = DAT_000e8f08 + 0xe8ec0;
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
    iVar1 = setZslMode(this,param_1);
    if (iVar1 == 0) {
      iVar1 = commitSetBatch(this);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(*(int *)(DAT_000e8f0c + 0xe8ed0) + 0x20) == 0) {
        return iVar1;
      }
      uVar4 = 0x130d;
      iVar2 = DAT_000e8f10 + 0xe8ee0;
      iVar3 = DAT_000e8f14 + 0xe8ee8;
    }
    else {
      if (*(int *)(*(int *)(DAT_000e8ef4 + 0xe8e84) + 0x20) == 0) {
        return iVar1;
      }
      uVar4 = 0x1307;
      iVar2 = DAT_000e8ef8 + 0xe8e94;
      iVar3 = DAT_000e8efc + 0xe8e9c;
    }
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  return iVar1;
}

