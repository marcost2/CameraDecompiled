
/* qcamera::QCameraParameters::getSensorOutputSize(cam_dimension_t, cam_dimension_t&) */

int qcamera::QCameraParameters::getSensorOutputSize
              (cam_dimension_t param_1,cam_dimension_t *param_2)

{
  QCameraParameters *this;
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r2;
  int *in_r3;
  int iVar4;
  void *pvVar5;
  MotParamStateMachine *this_00;
  int *piVar6;
  cam_dimension_t *local_2c;
  int iStack40;
  int local_24;
  
  this = (QCameraParameters *)(uint)(byte)param_1;
  piVar6 = *(int **)(DAT_000f5e14 + 0xf5ac6);
  local_24 = *piVar6;
  if (this[0x290] == (QCameraParameters)0x0) {
    if (this[0x301] != (QCameraParameters)0x0) {
      if (this[0x800] == (QCameraParameters)0x0) {
        getStreamDimension(this,3,(cam_dimension_t *)&local_2c);
        if (in_r2 < iStack40) {
          in_r2 = iStack40;
        }
        if ((int)param_2 < (int)local_2c) {
          param_2 = local_2c;
        }
      }
      else {
        in_r2 = *(int *)(*(int *)(this + 0x1d4) + 0x25b8);
        param_2 = *(cam_dimension_t **)(*(int *)(this + 0x1d4) + 0x25b4);
      }
    }
    if (param_2 == (cam_dimension_t *)0x0 || in_r2 == 0) {
      in_r2 = *(int *)(*(int *)(this + 0x1d4) + 0x2af0);
      param_2 = *(cam_dimension_t **)(*(int *)(this + 0x1d4) + 0x2aec);
    }
    pvVar5 = *(void **)(this + 0x1e0);
    if (pvVar5 == (void *)0x0) {
      iVar4 = -0x7fffffff;
      if (*(int *)(*(int *)(DAT_000f5eb4 + 0xf5c36) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f5ebc + 0xf5c4e,0x31b2,DAT_000f5eb8 + 0xf5c46);
      }
      goto LAB_000f5ca2;
    }
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar4 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar4 == 0) {
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
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
        *(int *)("updateImpl" + iVar4 + 9) = in_r2;
        *(cam_dimension_t **)("updateImpl" + iVar4 + 5) = param_2;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x2d) = 1;
        iVar4 = commitSetBatch(this);
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(DAT_000f5ed8 + 0xf5c0c) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f5ee0 + 0xf5c26,0x31bd,DAT_000f5edc + 0xf5c1e);
          }
          goto LAB_000f5ca2;
        }
        pvVar5 = *(void **)(this + 0x1e0);
        if (pvVar5 == (void *)0x0) {
          iVar4 = -0x7fffffff;
          if (*(int *)(*(int *)(DAT_000f5ef0 + 0xf5d84) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f5ef8 + 0xf5d9e,0x31c2,DAT_000f5ef4 + 0xf5d96);
          }
          goto LAB_000f5ca2;
        }
        iVar4 = MotParamStateMachine::beginInitBatch(this_00);
        if (iVar4 == 0) {
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
        if (0 < *(int *)(this + 0xd3c)) {
          if (*(int *)(*(int *)(DAT_000f5ee4 + 0xf5d52) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f5eec + 0xf5d6a,0x31c8,DAT_000f5ee8 + 0xf5d62);
          }
          commitSetBatch(this);
          iVar4 = -0x26;
          goto LAB_000f5ca2;
        }
        if (*(int *)(this + 0x1e0) == 0) {
          __android_log_print(6,DAT_000f5efc + 0xf5dc0,DAT_000f5f00 + 0xf5dc2,0,0x2e);
        }
        else {
          *(undefined *)(*(int *)(this + 0x1e0) + 0x2e) = 1;
        }
        iVar4 = commitGetBatch(this);
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(DAT_000f5f04 + 0xf5dd4) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f5f0c + 0xf5df0,0x31d2,DAT_000f5f08 + 0xf5de8);
          }
          goto LAB_000f5ca2;
        }
        iVar4 = *(int *)(this + 0x1e0);
        if (iVar4 == 0) {
          __android_log_print(6,DAT_000f5f10 + 0xf5e28,DAT_000f5f14 + 0xf5e2a,0,0x2e);
        }
        else {
          iVar3 = *(int *)("No memory for camera_cmd_t" + iVar4 + 1);
          *in_r3 = *(int *)(&DAT_00073628 + iVar4);
          in_r3[1] = iVar3;
        }
        MotParamStateMachine::endCommitBatch(this_00);
        iVar4 = *(int *)(DAT_000f5f18 + 0xf5e38);
        if (*(int *)(iVar4 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f5f20 + 0xf5e58,0x31dd,DAT_000f5f1c + 0xf5e4a,*in_r3,
                              in_r3[1]);
        }
        if ((*in_r3 == 0) || (in_r3[1] == 0)) {
          if (*(int *)(iVar4 + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000f5f28 + 0xf5e82,0x31df,DAT_000f5f24 + 0xf5e7a);
          }
          if (this[0x800] == (QCameraParameters)0x0) {
            iVar4 = 0x2aec;
            iVar3 = 0x2af0;
          }
          else {
            iVar4 = 0x25b4;
            iVar3 = 0x25b8;
          }
          iVar3 = *(int *)(*(int *)(this + 0x1d4) + iVar3);
          *in_r3 = *(int *)(*(int *)(this + 0x1d4) + iVar4);
          in_r3[1] = iVar3;
        }
        goto LAB_000f5ad4;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar2 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f5ec0 + 0xf5c78,DAT_000f5ec4 + 0xf5c7a,DAT_000f5ec8 + 0xf5c7c,
                        0x31b6,uVar2,0x2d);
    if (*(int *)(*(int *)(DAT_000f5ecc + 0xf5c84) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f5ed4 + 0xf5c9c,0x31b7,DAT_000f5ed0 + 0xf5c94);
    }
    iVar4 = -0x16;
  }
  else {
LAB_000f5ad4:
    iVar4 = 0;
  }
LAB_000f5ca2:
  if (*piVar6 == local_24) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

