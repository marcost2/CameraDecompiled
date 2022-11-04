
/* qcamera::QCameraParameters::setAndCommitZoom(int) */

int __thiscall qcamera::QCameraParameters::setAndCommitZoom(QCameraParameters *this,int param_1)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  MotParamStateMachine *this_00;
  void *pvVar7;
  
  iVar6 = *(int *)(DAT_000f319c + 0xf3000);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f31a4 + 0xf3018,0x2797,DAT_000f31a0 + 0xf3010);
  }
  pvVar7 = *(void **)(this + 0x1e0);
  if (pvVar7 == (void *)0x0) {
    iVar1 = -0x7fffffff;
    if (*(int *)(iVar6 + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar4 = 1;
    uVar5 = 0x279a;
    iVar6 = DAT_000f31a8 + 0xf313c;
    iVar3 = DAT_000f31ac + 0xf3144;
LAB_000f3142:
    mm_camera_debug_log(1,uVar4,iVar3,uVar5,iVar6);
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar1 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar7,0x10f);
      *(undefined *)((int)pvVar7 + 0x117aec) = 0;
      *(undefined *)((int)pvVar7 + 0x106974) = 0;
      *(undefined *)((int)pvVar7 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar7 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar7 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar7 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar7 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar7 + 0xb7340) = 0;
      *(undefined *)((int)pvVar7 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar7 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(int *)("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar1 + 1) = param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1b) = 1;
        iVar1 = commitSetBatch(this);
        iVar3 = iVar1;
        if (iVar1 != 0) {
          iVar3 = *(int *)(iVar6 + 0x20);
        }
        if (iVar1 != 0 && iVar3 != 0) {
          mm_camera_debug_log(1,1,DAT_000f31c0 + 0xf3106,0x27a5,DAT_000f31bc + 0xf30fe);
        }
        *(int *)(this + 0x378) = param_1;
        if (*(int *)(iVar6 + 0x28) == 0) {
          return iVar1;
        }
        uVar4 = 3;
        uVar5 = 0x27a9;
        iVar6 = DAT_000f31c4 + 0xf311e;
        iVar3 = DAT_000f31c8 + 0xf3126;
        goto LAB_000f3142;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f31b0 + 0xf316e,DAT_000f31b4 + 0xf3170,DAT_000f31b8 + 0xf3172,
                        0x279e,uVar4,0x1b);
    if (*(int *)(iVar6 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f31d0 + 0xf318c,0x279f,DAT_000f31cc + 0xf3184);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

