
/* qcamera::QCameraParameters::set3ALock(bool) */

int __thiscall qcamera::QCameraParameters::set3ALock(QCameraParameters *this,bool param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  pthread_t pVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  uint uVar12;
  MotParamStateMachine *this_00;
  
  uVar6 = (uint)param_1;
  iVar9 = *(int *)(DAT_000f2e34 + 0xf2b6c);
  if (*(int *)(iVar9 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f2e3c + 0xf2b86,0x2756,DAT_000f2e38 + 0xf2b7c,uVar6);
  }
  pvVar10 = *(void **)(this + 0x1e0);
  if (pvVar10 == (void *)0x0) {
    iVar2 = -0x7fffffff;
    if (*(int *)(iVar9 + 0x20) == 0) {
      return -0x7fffffff;
    }
    uVar11 = 0x2758;
    iVar9 = DAT_000f2f80 + 0xf2d76;
    iVar5 = DAT_000f2f84 + 0xf2d7e;
    goto LAB_000f2d7c;
  }
  this_00 = (MotParamStateMachine *)(this + 0xd28);
  iVar2 = MotParamStateMachine::beginInitBatch(this_00);
  if (iVar2 == 0) {
    android::VectorImpl::clear();
    __aeabi_memclr8(pvVar10,0x10f);
    *(undefined *)((int)pvVar10 + 0x117aec) = 0;
    *(undefined *)((int)pvVar10 + 0x106974) = 0;
    *(undefined *)((int)pvVar10 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar10 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar10 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar10 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar10 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar10 + 0xb7340) = 0;
    *(undefined *)((int)pvVar10 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar10 + 0x772c8) = 0;
    MotParamStateMachine::endInitBatch(this_00);
  }
  pcVar3 = (char *)android::CameraParameters::get((char *)this);
  if (pcVar3 == (char *)0x0) {
LAB_000f2cbe:
    uVar11 = 1;
    if (uVar6 != 0) goto LAB_000f2dcc;
LAB_000f2cc8:
    pcVar3 = (char *)android::CameraParameters::get((char *)this);
    if (pcVar3 != (char *)0x0) {
      iVar2 = strcmp(*(char **)(DAT_000f2f9c + 0xf2ce0),pcVar3);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000f2fa0 + 0xf2cf0),pcVar3);
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000f2fc4 + 0xf2d00),pcVar3);
          if (iVar2 == 0) {
            iVar2 = 2;
          }
          else {
            iVar2 = strcmp(*(char **)(DAT_000f2fc8 + 0xf2d10),pcVar3);
            if (iVar2 == 0) {
              iVar2 = 3;
            }
            else {
              iVar2 = strcmp(*(char **)(DAT_000f2fcc + 0xf2d20),pcVar3);
              if (iVar2 == 0) {
                iVar2 = 4;
              }
              else {
                iVar2 = strcmp(*(char **)(DAT_000f2fd0 + 0xf2d30),pcVar3);
                if (iVar2 == 0) {
                  iVar2 = 5;
                }
                else {
                  iVar2 = strcmp(*(char **)(DAT_000f2fd4 + 0xf2d3e),pcVar3);
                  if (iVar2 == 0) {
                    iVar2 = 6;
                  }
                  else {
                    iVar2 = strcmp(*(char **)(DAT_000f2fd8 + 0xf2d4e),pcVar3);
                    if (iVar2 != 0) goto LAB_000f2e6a;
                    iVar2 = 7;
                  }
                }
              }
            }
          }
        }
      }
      uVar11 = *(undefined4 *)(*(int *)(DAT_000f2fa4 + 0xf2e48) + iVar2 * 8 + 4);
      if (*(int *)(iVar9 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000f2fac + 0xf2e68,0x2773,DAT_000f2fa8 + 0xf2e5e,pcVar3);
      }
    }
  }
  else {
    iVar2 = strcmp(*(char **)(DAT_000f2f88 + 0xf2c38),pcVar3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000f2f8c + 0xf2c4a),pcVar3);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000f2f78 + 0xf2c5c),pcVar3);
        if (iVar2 == 0) {
          iVar2 = 2;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000f2fdc + 0xf2c6e),pcVar3);
          if (iVar2 == 0) {
            iVar2 = 3;
          }
          else {
            iVar2 = strcmp(*(char **)(DAT_000f2fe0 + 0xf2c80),pcVar3);
            if (iVar2 == 0) {
              iVar2 = 4;
            }
            else {
              iVar2 = strcmp(*(char **)(DAT_000f2fe4 + 0xf2c92),pcVar3);
              if (iVar2 == 0) {
                iVar2 = 5;
              }
              else {
                iVar2 = strcmp(*(char **)(DAT_000f2fe8 + 0xf2ca4),pcVar3);
                if (iVar2 == 0) {
                  iVar2 = 6;
                }
                else {
                  iVar2 = strcmp(*(char **)(DAT_000f2fec + 0xf2cb6),pcVar3);
                  if (iVar2 != 0) goto LAB_000f2cbe;
                  iVar2 = 7;
                }
              }
            }
          }
        }
      }
    }
    uVar11 = *(undefined4 *)(*(int *)(DAT_000f2f90 + 0xf2dbe) + iVar2 * 8 + 4);
    if (uVar6 == 0) goto LAB_000f2cc8;
LAB_000f2dcc:
    if (this[0x2c8] == (QCameraParameters)0x0) {
      if (this[0x2c9] != (QCameraParameters)0x0) goto LAB_000f2dde;
LAB_000f2df0:
      if ((this[0x2cb] == (QCameraParameters)0x0) ||
         (uVar12 = *(uint *)(this + 0x37c), (int)uVar12 < 0)) {
LAB_000f2e2a:
        if (this[0x2d9] == (QCameraParameters)0x0) goto LAB_000f2e6a;
      }
      else {
        bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
        if (*(int *)(iVar9 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f2f98 + 0xf2e24,0x27c0,DAT_000f2f94 + 0xf2e1a,uVar12,
                              (uint)bVar1);
        }
        if (uVar12 < bVar1) goto LAB_000f2e2a;
      }
      uVar11 = 4;
    }
    else {
      if (this[0x2c9] != (QCameraParameters)0x0) {
LAB_000f2dde:
        if (*(byte *)(*(int *)(this + 0x1d4) + 0x384f) < 2) goto LAB_000f2df0;
      }
      uVar11 = 2;
    }
  }
LAB_000f2e6a:
  iVar2 = *(int *)(this + 0x1e0);
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
      *(uint *)("Failed to queue CREATE_JPEG_SESSION" + iVar2 + 5) = uVar6;
      *(undefined *)(*(int *)(this + 0x1e0) + 0xb) = 1;
      if (*(int *)(this + 0x1e0) == 0) {
        uVar11 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) && (pVar4 == *(pthread_t *)(this + 0xd34))) {
          *(uint *)("No Advanced Capture feature enabled!" + *(int *)(this + 0x1e0) + 0x16) = uVar6;
          *(undefined *)(*(int *)(this + 0x1e0) + 9) = 1;
          if (*(int *)(this + 0x1e0) == 0) {
            uVar11 = 0;
          }
          else {
            if ((*(int *)(this + 0xd30) == 1) && (pVar4 == *(pthread_t *)(this + 0xd34))) {
              *(undefined4 *)(*(int *)(this + 0x1e0) + 0xc65c) = uVar11;
              *(undefined *)(*(int *)(this + 0x1e0) + 5) = 1;
              iVar2 = commitSetBatch(this);
              iVar5 = iVar2;
              if (iVar2 != 0) {
                iVar5 = *(int *)(iVar9 + 0x20);
              }
              if (iVar2 == 0 || iVar5 == 0) {
                return iVar2;
              }
              uVar11 = 0x2784;
              iVar9 = DAT_000f2fbc + 0xf2f0c;
              iVar5 = DAT_000f2fc0 + 0xf2f14;
LAB_000f2d7c:
              mm_camera_debug_log(1,1,iVar5,uVar11,iVar9);
              return iVar2;
            }
            MotParamStateMachine::paramWriteError(this_00);
            uVar11 = *(undefined4 *)(this + 0x1e0);
          }
          uVar7 = 5;
          uVar8 = 0x277e;
          goto LAB_000f2f28;
        }
        MotParamStateMachine::paramWriteError(this_00);
        uVar11 = *(undefined4 *)(this + 0x1e0);
      }
      uVar7 = 9;
      uVar8 = 0x277b;
      goto LAB_000f2f28;
    }
    MotParamStateMachine::paramWriteError(this_00);
    uVar11 = *(undefined4 *)(this + 0x1e0);
  }
  uVar7 = 0xb;
  uVar8 = 0x2777;
LAB_000f2f28:
  __android_log_print(6,DAT_000f2fb0 + 0xf2f3a,DAT_000f2fb4 + 0xf2f3c,DAT_000f2fb8 + 0xf2f3e,uVar8,
                      uVar11,uVar7);
  return -0x16;
}

