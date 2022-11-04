
/* qcamera::QCameraParameters::resetFrameCapture(bool, bool) */

int __thiscall
qcamera::QCameraParameters::resetFrameCapture(QCameraParameters *this,bool param_1,bool param_2)

{
  int iVar1;
  pthread_t pVar2;
  int iVar3;
  char *__s1;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  bool bVar7;
  
  __aeabi_memclr8(this + 0x390,0x408);
  if (param_1 == false) {
LAB_000f1e50:
    if (((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) &&
       ((__s1 = (char *)android::CameraParameters::get((char *)this), __s1 == (char *)0x0 ||
        (iVar1 = strcmp(__s1,*(char **)(DAT_000f2030 + 0xf1f96)), iVar1 == 0)))) {
      if (((this[0x2ca] != (QCameraParameters)0x0) || (*(int *)(this + 0x2f4) != 0)) ||
         (param_2 != false)) {
        iVar1 = setToneMapMode(this,1,false);
        bVar7 = iVar1 != 0;
        iVar3 = *(int *)(DAT_000f204c + 0xf1fb8);
        if (bVar7) {
          iVar1 = *(int *)(iVar3 + 0x28);
        }
        if (bVar7 && iVar1 != 0) {
          mm_camera_debug_log(1,3,DAT_000f2054 + 0xf1fd6,0x21cd,DAT_000f2050 + 0xf1fce);
        }
        iVar1 = setCDSMode(this,*(int *)(this + 900),false);
        if (iVar1 != 0) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f205c + 0xf2004,0x21d2,DAT_000f2058 + 0xf1ffc);
          }
          if (param_1 == false) {
            return iVar1;
          }
          MotParamStateMachine::cancelSequence();
          return iVar1;
        }
      }
    }
    else {
      iVar1 = setToneMapMode(this,1,true);
      if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000f2034 + 0xf1e72) + 0x28) != 0)) {
        mm_camera_debug_log(1,3,DAT_000f203c + 0xf1e8a,0x21c6,DAT_000f2038 + 0xf1e82);
      }
      setHDRAEBracket((cam_exp_bracketing_t)this);
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        __aeabi_memmove("error: Ill formatted area string: %s" + iVar1 + 0x18,this + 0x390,0x408);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5d) = 1;
        if ((param_1 == false) || (iVar1 = commitSetBatch(this), iVar1 == 0)) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f2078 + 0xf1ee6) + 0x20) == 0) {
          return iVar1;
        }
        uVar5 = 0x21e6;
        iVar3 = DAT_000f207c + 0xf1ef6;
        iVar4 = DAT_000f2080 + 0xf1efe;
        goto LAB_000f1f7c;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar5 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f2060 + 0xf1f26,DAT_000f2064 + 0xf1f28,DAT_000f2068 + 0xf1f2a,
                        0x21dc,uVar5,0x5d);
    if (*(int *)(*(int *)(DAT_000f206c + 0xf1f32) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f2074 + 0xf1f4a,0x21df,DAT_000f2070 + 0xf1f42);
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
      goto LAB_000f1e50;
    }
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f2040 + 0xf1f64) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar5 = 0x21be;
    iVar3 = DAT_000f2044 + 0xf1f76;
    iVar4 = DAT_000f2048 + 0xf1f7e;
LAB_000f1f7c:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
  }
  return iVar1;
}

