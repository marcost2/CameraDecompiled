
/* qcamera::QCameraParameters::configFrameCapture(bool) */

int __thiscall qcamera::QCameraParameters::configFrameCapture(QCameraParameters *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  pthread_t pVar3;
  int iVar4;
  char *__s1;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  cam_capture_frame_config_t *__src;
  void *pvVar8;
  
  __src = (cam_capture_frame_config_t *)(this + 0x390);
  __aeabi_memclr8(__src,0x408);
  if (param_1 == false) {
LAB_000f1b42:
    if (((((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) &&
         (this[0x2f0] == (QCameraParameters)0x0)) &&
        ((this[0x2c8] == (QCameraParameters)0x0 && (this[0x2cb] == (QCameraParameters)0x0)))) &&
       ((this[0x2c9] == (QCameraParameters)0x0 && (*(int *)(this + 0x7c0) == 0)))) {
      if (this[0x2ca] == (QCameraParameters)0x0) {
        iVar1 = *(int *)(this + 0x2f4);
        if (iVar1 != 2) goto LAB_000f1b74;
        goto LAB_000f1c10;
      }
LAB_000f1c12:
      configureFlash(this,__src);
    }
    else {
      iVar1 = 0;
LAB_000f1b74:
      if (*(int *)(this + 0x7a8) == 0) {
LAB_000f1c10:
        if (iVar1 != 0) goto LAB_000f1c12;
        if ((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) {
          __s1 = (char *)android::CameraParameters::get((char *)this);
          if ((__s1 == (char *)0x0) ||
             (iVar1 = strcmp(__s1,*(char **)(DAT_000f1d48 + 0xf1d04)), iVar1 == 0)) {
            if (1 < *(int *)(this + 0x7c0)) {
              configureManualCapture(this,__src);
              goto LAB_000f1bc0;
            }
          }
          else {
            configureAEBracketing(this,__src);
          }
        }
        else {
          configureHDRBracketing(this,__src);
        }
      }
      else {
        *(undefined4 *)(this + 0x390) = 1;
        uVar2 = android::CameraParameters::getInt((char *)this);
        uVar5 = 1;
        if (0 < (int)uVar2) {
          uVar5 = uVar2 & 0xff;
        }
        *(uint *)(this + 0x398) = uVar5;
        *(undefined4 *)(this + 0x39c) = 3;
        *(undefined4 *)(this + 0x3a0) = 1;
        if (*(int *)(*(int *)(DAT_000f1d38 + 0xf1ba4) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f1d40 + 0xf1bbe,0x212e,DAT_000f1d3c + 0xf1bb2,uVar5);
        }
LAB_000f1bc0:
        iVar1 = *(int *)(this + 0x390);
        *(undefined4 *)(__src + iVar1 * 0x20 + 8) = 0;
        *(undefined4 *)(__src + iVar1 * 0x20 + 0xc) = 4;
        *(int *)(this + 0x390) = iVar1 + 1;
      }
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar7 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        __aeabi_memmove("error: Ill formatted area string: %s" + iVar1 + 0x18,__src,0x408);
        *(undefined *)(*(int *)(this + 0x1e0) + 0x5d) = 1;
        if ((param_1 == false) || (iVar1 = commitSetBatch(this), iVar1 == 0)) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000f1d64 + 0xf1c7a) + 0x20) == 0) {
          return iVar1;
        }
        uVar7 = 0x21a3;
        iVar4 = DAT_000f1d68 + 0xf1c8a;
        iVar6 = DAT_000f1d6c + 0xf1c92;
        goto LAB_000f1bfc;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar7 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f1d4c + 0xf1cba,DAT_000f1d50 + 0xf1cbc,DAT_000f1d54 + 0xf1cbe,
                        0x2199,uVar7,0x5d);
    if (*(int *)(*(int *)(DAT_000f1d58 + 0xf1cc6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f1d60 + 0xf1cde,0x219c,DAT_000f1d5c + 0xf1cd6);
    }
    iVar1 = -0x16;
  }
  else {
    pvVar8 = *(void **)(this + 0x1e0);
    if (pvVar8 != (void *)0x0) {
      iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
      if (iVar1 == 0) {
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
        MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
      }
      goto LAB_000f1b42;
    }
    iVar1 = -0x7fffffff;
    if (*(int *)(*(int *)(DAT_000f1d28 + 0xf1be4) + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar7 = 0x2173;
    iVar4 = DAT_000f1d2c + 0xf1bf6;
    iVar6 = DAT_000f1d30 + 0xf1bfe;
LAB_000f1bfc:
    mm_camera_debug_log(1,1,iVar6,uVar7,iVar4);
  }
  return iVar1;
}

