
/* qcamera::QCameraParameters::updateZoomValue(int, bool) */

int __thiscall
qcamera::QCameraParameters::updateZoomValue(QCameraParameters *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  char acStack44 [16];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000faa18 + 0xfa8fa);
  local_1c = *piVar5;
  FUN_000be9c0(acStack44,0x10,DAT_000faa1c + 0xfa906,param_1);
  if (param_2 == false) {
    android::CameraParameters::set
              ((CameraParameters *)this,*(char **)(DAT_000faa34 + 0xfa9bc),acStack44);
LAB_000fa9c2:
    iVar1 = 0;
  }
  else {
    pvVar4 = *(void **)(this + 0x1e0);
    if (pvVar4 == (void *)0x0) {
      __android_log_print(6,DAT_000faa38 + 0xfa9d2,DAT_000faa3c + 0xfa9d4,DAT_000faa40 + 0xfa9d6);
      iVar1 = -0x7fffffff;
      goto LAB_000fa9fc;
    }
    iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar4,0x10f);
      *(undefined *)((int)pvVar4 + 0x117aec) = 0;
      *(undefined *)((int)pvVar4 + 0x106974) = 0;
      *(undefined *)((int)pvVar4 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar4 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar4 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar4 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar4 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar4 + 0xb7340) = 0;
      *(undefined *)((int)pvVar4 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar4 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
    }
    iVar1 = setZoom(this,param_1);
    if (iVar1 == 0) {
      iVar1 = commitSetBatch(this);
      if (iVar1 == 0) {
        *(int *)(this + 0x37c) = param_1;
        goto LAB_000fa9c2;
      }
      iVar2 = DAT_000faa2c + 0xfa9f2;
      iVar3 = DAT_000faa30 + 0xfa9f4;
    }
    else {
      iVar2 = DAT_000faa20 + 0xfa9b2;
      iVar3 = DAT_000faa24 + 0xfa9b4;
    }
    __android_log_print(6,iVar2,iVar3,DAT_000faa28 + 0xfa9fa);
  }
LAB_000fa9fc:
  if (*piVar5 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

