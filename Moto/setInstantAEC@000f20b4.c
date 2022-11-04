
/* qcamera::QCameraParameters::setInstantAEC(unsigned char, bool) */

int __thiscall
qcamera::QCameraParameters::setInstantAEC(QCameraParameters *this,uchar param_1,bool param_2)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  if (param_2 != false) {
    pvVar4 = *(void **)(this + 0x1e0);
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000f2274 + 0xf2220) + 0x20) == 0) {
        return -0x7ffffffe;
      }
      mm_camera_debug_log(1,1,DAT_000f227c + 0xf223a,0x3eb2,DAT_000f2278 + 0xf2232);
      return -0x7ffffffe;
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
  }
  iVar1 = *(int *)(this + 0x1e0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      s_Use_offline_ISP_for_input_RAW_fo_00076fe0[iVar1 + 0x14] = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0xff) = 1;
      if ((param_2 != false) && (iVar1 = commitSetBatch(this), iVar1 != 0)) {
        if (*(int *)(*(int *)(DAT_000f2298 + 0xf219e) + 0x20) == 0) {
          return iVar1;
        }
        mm_camera_debug_log(1,1,DAT_000f22a0 + 0xf21b6,0x3ec0,DAT_000f229c + 0xf21ae);
        return iVar1;
      }
      if (*(int *)(*(int *)(DAT_000f22a4 + 0xf2244) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000f22ac + 0xf225e,0x3ec5,DAT_000f22a8 + 0xf2254,param_1);
      }
      if (param_1 != '\0') {
        param_1 = '\x01';
      }
      this[0x7fc] = (QCameraParameters)param_1;
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000f2280 + 0xf21e2,DAT_000f2284 + 0xf21e4,DAT_000f2288 + 0xf21e6,0x3eb8,
                      uVar3,0xff);
  if (*(int *)(*(int *)(DAT_000f228c + 0xf21ee) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000f2294 + 0xf2206,0x3eb9,DAT_000f2290 + 0xf21fe);
  }
  return -0x16;
}

