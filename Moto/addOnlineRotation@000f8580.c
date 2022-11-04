
/* qcamera::QCameraParameters::addOnlineRotation(unsigned int, unsigned int, int) */

int __thiscall
qcamera::QCameraParameters::addOnlineRotation
          (QCameraParameters *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  pthread_t pVar5;
  int iVar6;
  int iVar7;
  MotParamStateMachine *this_00;
  void *pvVar8;
  int *piVar9;
  
  piVar9 = *(int **)(DAT_000f8768 + 0xf858c);
  iVar1 = *piVar9;
  if (param_1 == 0xb4) {
    uVar2 = 4;
  }
  else if (param_1 == 0x5a) {
    uVar2 = 2;
  }
  else if ((param_1 == 0) || (param_1 != 0x10e)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 8;
  }
  if (param_3 == 0xb4) {
    uVar3 = 4;
  }
  else if (param_3 == 0x5a) {
    uVar3 = 2;
  }
  else if ((param_3 == 0) || (param_3 != 0x10e)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 8;
  }
  pvVar8 = *(void **)(this + 0x1e0);
  if (pvVar8 == (void *)0x0) {
    iVar4 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f876c + 0xf86e6) + 0x20) == 0) goto LAB_000f8752;
    uVar2 = 0x392e;
    iVar6 = DAT_000f8770 + 0xf86f6;
    iVar7 = DAT_000f8774 + 0xf86fe;
LAB_000f86fc:
    mm_camera_debug_log(1,1,iVar7,uVar2,iVar6);
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar4 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar4 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar8,0x10f);
      *(undefined *)((int)pvVar8 + 0x117aec) = 0;
      *(undefined *)((int)pvVar8 + 0x106974) = 0;
      *(undefined *)((int)pvVar8 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar8 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar8 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar8 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar8 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar8 + 0xb7340) = 0;
      *(undefined *)((int)pvVar8 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar8 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("Memeory Obj of main frame is NULL" + iVar4 + 10) = param_2;
        *(ulonglong *)("Memeory Obj of main frame is NULL" + iVar4 + 2) = CONCAT44(uVar3,uVar2);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x38) = 1;
        iVar4 = commitSetBatch(this);
        if (iVar4 == 0) {
          iVar4 = 0;
          goto LAB_000f8752;
        }
        if (*(int *)(*(int *)(DAT_000f8790 + 0xf86c0) + 0x20) == 0) goto LAB_000f8752;
        uVar2 = 0x3939;
        iVar6 = DAT_000f8794 + 0xf86d2;
        iVar7 = DAT_000f8798 + 0xf86da;
        goto LAB_000f86fc;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar2 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f8778 + 0xf8728,DAT_000f877c + 0xf872a,DAT_000f8780 + 0xf872c,
                        0x3932,uVar2,0x38);
    if (*(int *)(*(int *)(DAT_000f8784 + 0xf8734) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f878c + 0xf874c,0x3933,DAT_000f8788 + 0xf8744);
    }
    iVar4 = -0x16;
  }
LAB_000f8752:
  if (*piVar9 == iVar1) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

