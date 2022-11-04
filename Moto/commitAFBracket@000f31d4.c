
/* qcamera::QCameraParameters::commitAFBracket(cam_af_bracketing_t) */

int qcamera::QCameraParameters::commitAFBracket(cam_af_bracketing_t param_1)

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
  
  pvVar6 = *(void **)(param_1 + 0x1e0);
  if (pvVar6 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f3370 + 0xf32f6) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar5 = 0x27f9;
    iVar3 = DAT_000f3374 + 0xf3306;
    iVar4 = DAT_000f3378 + 0xf330e;
LAB_000f330c:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
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
        *(undefined4 *)("handleBatchBuffer" + iVar1 + 6) = in_r3;
        *(undefined4 *)("handleBatchBuffer" + iVar1 + 2) = in_r2;
        *(undefined4 *)("cam_sem_wait error (%s)" + iVar1 + 0x16) = in_r1;
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0xa4) = 1;
        iVar1 = commitSetBatch((QCameraParameters *)param_1);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f3394 + 0xf32d0) + 0x20) == 0) {
          return iVar1;
        }
        uVar5 = 0x2804;
        iVar3 = DAT_000f3398 + 0xf32e2;
        iVar4 = DAT_000f339c + 0xf32ea;
        goto LAB_000f330c;
      }
      MotParamStateMachine::paramWriteError(this);
      uVar5 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000f337c + 0xf3338,DAT_000f3380 + 0xf333a,DAT_000f3384 + 0xf333c,
                        0x27fd,uVar5,0xa4);
    if (*(int *)(*(int *)(DAT_000f3388 + 0xf3344) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f3390 + 0xf335c,0x27fe,DAT_000f338c + 0xf3354);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

