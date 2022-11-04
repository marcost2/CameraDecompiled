
/* qcamera::QCameraParameters::updateThermallLevelToDaemon(signed char) */

int __thiscall
qcamera::QCameraParameters::updateThermallLevelToDaemon(QCameraParameters *this,signed param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  int iVar4;
  MotParamStateMachine *this_00;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x1e0);
  if (pvVar5 == (void *)0x0) {
    __android_log_print(6,DAT_000face4 + 0xfac8e,DAT_000face8 + 0xfac90,param_1);
    iVar1 = -0x13;
  }
  else {
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
      uVar3 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        "camera %d resource cost is %d"[iVar1 + 0xc] = (char)param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xb5) = 1;
        iVar1 = commitSetBatch(this);
        if (iVar1 != 0) {
          __android_log_print(6,DAT_000facfc + 0xfac7a,DAT_000fad00 + 0xfac7c,DAT_000fad04 + 0xfac7e
                             );
          return iVar1;
        }
        return 0;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar3 = *(undefined4 *)(this + 0x1e0);
    }
    iVar1 = DAT_000facec + 0xfacbe;
    iVar4 = DAT_000facf4 + 0xfacc0;
    __android_log_print(6,iVar1,DAT_000facf0 + 0xfacc2,iVar4,0x98a,uVar3,0xb5);
    __android_log_print(6,iVar1,DAT_000facf8 + 0xfacd4,iVar4);
    iVar1 = -0x16;
  }
  return iVar1;
}

