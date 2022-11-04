
/* qcamera::QCameraParameters::setToneMapMode(unsigned int, bool) */

int __thiscall
qcamera::QCameraParameters::setToneMapMode(QCameraParameters *this,uint param_1,bool param_2)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar5 = *(int *)(DAT_000f0324 + 0xf019a);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f032c + 0xf01b4,0x3d3c,DAT_000f0328 + 0xf01aa,param_1);
  }
  if (param_2 == false) {
LAB_000f024e:
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("Could not find input request for frame number %d" + iVar1 + 7) = param_1;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5c) = 1;
        if ((param_2 == false) || (iVar1 = commitSetBatch(this), iVar1 == 0)) {
          return 0;
        }
        if (*(int *)(iVar5 + 0x20) == 0) {
          return iVar1;
        }
        uVar4 = 0x3d4d;
        iVar5 = DAT_000f034c + 0xf029e;
        iVar3 = DAT_000f0350 + 0xf02a6;
        goto LAB_000f0318;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f0338 + 0xf02ce,DAT_000f033c + 0xf02d0,DAT_000f0340 + 0xf02d2,
                        0x3d45,uVar4,0x5c);
    if (*(int *)(iVar5 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f0348 + 0xf02ec,0x3d46,DAT_000f0344 + 0xf02e4);
    }
    iVar1 = -0x16;
  }
  else {
    pvVar6 = *(void **)(this + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
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
        MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
      }
      goto LAB_000f024e;
    }
    iVar1 = -0x7ffffffe;
    if (*(int *)(iVar5 + 0x20) == 0) {
      return -0x7ffffffe;
    }
    uVar4 = 0x3d40;
    iVar5 = DAT_000f0330 + 0xf0312;
    iVar3 = DAT_000f0334 + 0xf031a;
LAB_000f0318:
    mm_camera_debug_log(1,1,iVar3,uVar4,iVar5);
  }
  return iVar1;
}

