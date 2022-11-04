
/* qcamera::QCameraParameters::UpdateHFRFrameRate(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::UpdateHFRFrameRate(QCameraParameters *this,QCameraParameters *param_1)

{
  int *piVar1;
  char *__s1;
  char *__s1_00;
  char *__s2;
  char *__s2_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  float fVar9;
  int local_38;
  int iStack52;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar1 = *(int **)(DAT_000e0ad8 + 0xe0748);
  local_28 = *piVar1;
  android::CameraParameters::getPreviewFpsRange((CameraParameters *)this,&iStack52,&local_38);
  android::CameraParameters::getPreviewFpsRange((CameraParameters *)param_1,&local_2c,&local_30);
  iVar8 = *(int *)(DAT_000e0adc + 0xe0768);
  if ((*(int *)(iVar8 + 0x28) != 0) &&
     (mm_camera_debug_log(1,3,DAT_000e0ae4 + 0xe078c,0xa39,DAT_000e0ae0 + 0xe077e,iStack52,local_38)
     , *(int *)(iVar8 + 0x28) != 0)) {
    mm_camera_debug_log(1,3,DAT_000e0aec + 0xe07b0,0xa3b,DAT_000e0ae8 + 0xe07a2,local_2c,local_30);
  }
  pcVar5 = *(char **)(DAT_000e0af0 + 0xe07b8);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar7 = *(char **)(DAT_000e0b50 + 0xe07c8);
  __s1_00 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  __s2_00 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0 && __s2 != (char *)0x0) && (iVar2 = strcmp(__s1,__s2), iVar2 != 0)) {
    updateParamEntry(this,pcVar5,__s1);
  }
  if ((__s1_00 == (char *)0x0 || __s2_00 == (char *)0x0) ||
     (iVar2 = strcmp(__s1_00,__s2_00), iVar2 == 0)) {
    if (__s1 != (char *)0x0) goto LAB_000e0800;
LAB_000e08ec:
    if ((__s1_00 == (char *)0x0) ||
       (iVar2 = strcmp(__s1_00,*(char **)(DAT_000e0b60 + 0xe08f8)), iVar2 == 0)) {
LAB_000e09a2:
      iVar2 = 0;
      goto LAB_000e09b8;
    }
    iVar2 = strcmp(*(char **)(DAT_000e0b64 + 0xe090a),__s1_00);
    if (iVar2 == 0) {
LAB_000e09a8:
      iVar2 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e0b68 + 0xe091a),__s1_00);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000e0b94 + 0xe092c),__s1_00);
        if (iVar2 == 0) {
          iVar2 = 2;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000e0b98 + 0xe093e),__s1_00);
          if (iVar2 == 0) {
            iVar2 = 3;
          }
          else {
            iVar2 = strcmp(*(char **)(DAT_000e0b9c + 0xe0950),__s1_00);
            if (iVar2 == 0) {
              iVar2 = 4;
            }
            else {
              iVar2 = strcmp(*(char **)(DAT_000e0ba0 + 0xe0962),__s1_00);
              if (iVar2 == 0) {
                iVar2 = 5;
              }
              else {
                iVar2 = strcmp(*(char **)(DAT_000e0ba4 + 0xe0974),__s1_00);
                if (iVar2 == 0) {
                  iVar2 = 6;
                }
                else {
                  iVar2 = strcmp(*(char **)(DAT_000e0ba8 + 0xe0986),__s1_00);
                  if (iVar2 == 0) {
                    iVar2 = 7;
                  }
                  else {
                    iVar2 = strcmp(*(char **)(DAT_000e0bac + 0xe0998),__s1_00);
                    if (iVar2 != 0) goto LAB_000e09a2;
                    iVar2 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    updateParamEntry(this,pcVar7,__s1_00);
    if (__s1 == (char *)0x0) goto LAB_000e08ec;
LAB_000e0800:
    iVar2 = strcmp(__s1,*(char **)(DAT_000e0b54 + 0xe0806));
    if (iVar2 == 0) goto LAB_000e08ec;
    iVar2 = strcmp(*(char **)(DAT_000e0b58 + 0xe0818),__s1);
    if (iVar2 == 0) goto LAB_000e09a8;
    iVar2 = strcmp(*(char **)(DAT_000e0b5c + 0xe082a),__s1);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e0bb0 + 0xe083e),__s1);
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000e0bb4 + 0xe0850),__s1);
        if (iVar2 == 0) {
          iVar2 = 3;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000e0bb8 + 0xe0862),__s1);
          if (iVar2 == 0) {
            iVar2 = 4;
          }
          else {
            iVar2 = strcmp(*(char **)(DAT_000e0bbc + 0xe0874),__s1);
            if (iVar2 == 0) {
              iVar2 = 5;
            }
            else {
              iVar2 = strcmp(*(char **)(DAT_000e0bc0 + 0xe0886),__s1);
              if (iVar2 == 0) {
                iVar2 = 6;
              }
              else {
                iVar2 = strcmp(*(char **)(DAT_000e0bc4 + 0xe0898),__s1);
                if (iVar2 == 0) {
                  iVar2 = 7;
                }
                else {
                  iVar2 = strcmp(*(char **)(DAT_000e0bc8 + 0xe08aa),__s1);
                  if (iVar2 != 0) {
                    iVar2 = 0;
                    goto LAB_000e09b8;
                  }
                  iVar2 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_000e0b6c + 0xe09b2) + iVar2 * 8 + 4);
LAB_000e09b8:
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0b74 + 0xe09da,0xa57,DAT_000e0b70 + 0xe09cc,
                        *(undefined4 *)(this + 0x2fc),iVar2);
  }
  if (*(int *)(this + 0x2fc) == iVar2) {
    uVar6 = 0;
  }
  else {
    *(int *)(this + 0x2fc) = iVar2;
    if (iVar2 - 1U < 8) {
      iVar3 = *(int *)(DAT_000e0b78 + 0xe09f8 + (iVar2 - 1U) * 4);
    }
    else {
      iVar3 = 0;
    }
    *(float *)(this + 0x2e4) = (float)(longlong)iVar3;
    *(float *)(this + 0x2e8) = (float)(longlong)iVar3;
    if (*(int *)(iVar8 + 0x28) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
      mm_camera_debug_log(1,3,DAT_000e0b80 + 0xe0a30,0xa88,DAT_000e0b7c + 0xe0a20,iVar2,iVar3,iVar3)
      ;
      iVar2 = *(int *)(this + 0x2fc);
    }
  }
  if (iVar2 - 1U < 8) {
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e0b88 + 0xe0a5a,0xa8d,DAT_000e0b84 + 0xe0a52);
    }
    this[0x2ec] = (QCameraParameters)0x1;
    uVar4 = 0;
  }
  else {
    this[0x2ec] = (QCameraParameters)0x0;
    *(undefined4 *)(this + 0x2e4) = 0;
    *(undefined4 *)(this + 0x2e8) = 0;
    if (*(int *)(iVar8 + 0x28) == 0) {
      uVar4 = 1;
    }
    else {
      mm_camera_debug_log(1,3,DAT_000e0b90 + 0xe0a8a,0xa93,DAT_000e0b8c + 0xe0a82);
      uVar4 = count_leading_zeroes((uint)(byte)this[0x2ec]);
      uVar4 = uVar4 >> 5;
    }
  }
  *(float *)(this + 0x2dc) = (float)(longlong)local_2c;
  *(float *)(this + 0x2e0) = (float)(longlong)local_30;
  if (((uVar4 == 0) && (local_30 != 0)) && (3 < *(int *)(this + 0x2fc))) {
    fVar9 = ROUND(*(float *)(this + 0x2e8) / (float)(longlong)local_30);
  }
  else {
    fVar9 = 0.0;
  }
  setBufBatchCount(this,(signed)fVar9);
  if (*piVar1 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

