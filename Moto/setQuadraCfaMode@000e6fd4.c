
/* qcamera::QCameraParameters::setQuadraCfaMode(unsigned int, bool) */

int __thiscall
qcamera::QCameraParameters::setQuadraCfaMode(QCameraParameters *this,uint param_1,bool param_2)

{
  pthread_t pVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  
  if (this[0x800] == (QCameraParameters)0x0) {
LAB_000e71ba:
    iVar4 = 0;
  }
  else {
    if (param_1 == 0) {
      setOfflineRAW(this,false);
    }
    else {
      this[0x301] = (QCameraParameters)0x1;
      if (*(int *)(*(int *)(DAT_000e71c4 + 0xe6ff8) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e71cc + 0xe7012,0x3a65,DAT_000e71c8 + 0xe7006,1);
      }
    }
    if (param_2 != false) {
      pvVar3 = *(void **)(this + 0x1e0);
      if (pvVar3 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000e71d0 + 0xe717c) + 0x20) == 0) {
          return -0x7ffffffe;
        }
        mm_camera_debug_log(1,1,DAT_000e71d8 + 0xe7194,0x10c9,DAT_000e71d4 + 0xe718c);
        return -0x7ffffffe;
      }
      iVar4 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
      if (iVar4 == 0) {
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
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("Could not find input request for frame number %d" + iVar4 + 0x17) = param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x103) = 1;
        if ((param_2 != false) && (iVar4 = commitSetBatch(this), iVar4 != 0)) {
          if (*(int *)(*(int *)(DAT_000e71f4 + 0xe70fc) + 0x20) == 0) {
            return iVar4;
          }
          mm_camera_debug_log(1,1,DAT_000e71fc + 0xe7116,0x10d4,DAT_000e71f8 + 0xe710e);
          return iVar4;
        }
        if (*(int *)(*(int *)(DAT_000e7200 + 0xe719e) + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_000e7208 + 0xe71b8,0x10d8,DAT_000e7204 + 0xe71ae,param_1);
        }
        goto LAB_000e71ba;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar2 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e71dc + 0xe7144,DAT_000e71e0 + 0xe7146,DAT_000e71e4 + 0xe7148,
                        0x10cd,uVar2,0x103);
    if (*(int *)(*(int *)(DAT_000e71e8 + 0xe7150) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e71f0 + 0xe7168,0x10ce,DAT_000e71ec + 0xe7160);
    }
    iVar4 = -0x16;
  }
  return iVar4;
}

