
/* qcamera::QCamera3HardwareInterface::handleBatchMetadata(mm_camera_super_buf_t*, bool) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBatchMetadata
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1,bool param_2)

{
  longlong lVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar14;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  pthread_mutex_t *__mutex;
  uint *puVar23;
  int *piVar24;
  float fVar25;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  double dVar26;
  ulonglong uVar27;
  int local_7c;
  int local_78;
  uint local_70;
  uint local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  
  piVar24 = *(int **)(DAT_00084f50 + 0x84bb8);
  iVar8 = *piVar24;
  puVar21 = *(uint **)(DAT_00084f54 + 0x84bc6);
  if (1 < *puVar21) {
    if ((**(byte **)(DAT_00084f58 + 0x84bd2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00084f5c + 0x84be2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00085148 + 0x850c6);
    }
  }
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(*(int *)(DAT_0008514c + 0x850d4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00085154 + 0x850ec,0xca7,DAT_00085150 + 0x850e4);
    }
    goto LAB_000850ee;
  }
  puVar23 = *(uint **)(*(int *)(param_1 + 0x10) + 0x208);
  puVar9 = puVar23;
  if (puVar23 != (uint *)0x0) {
    puVar9 = puVar23 + 0x3162;
  }
  puVar22 = puVar23;
  puVar3 = puVar23;
  puVar4 = puVar23;
  puVar5 = puVar23;
  if (puVar23 != (uint *)0x0) {
    puVar22 = puVar23 + 0x314e;
    puVar3 = puVar23 + 0x31ca;
    puVar4 = puVar23 + 0x314f;
    puVar5 = puVar23 + 0x3161;
  }
  if (((puVar9 == (uint *)0x0 || puVar4 == (uint *)0x0) ||
      (puVar3 == (uint *)0x0 || puVar22 == (uint *)0x0)) || (puVar5 == (uint *)0x0)) {
    if (*(int *)(*(int *)(DAT_00084f60 + 0x84c72) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00084f68 + 0x84c8a,0xcc8,DAT_00084f64 + 0x84c82);
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
    bVar2 = true;
    uVar16 = 0;
    uVar20 = 0;
    uVar18 = 0;
    bVar7 = false;
    local_78 = 0;
    local_70 = 0;
    local_5c = 0;
    local_54 = 0;
    local_58 = 0;
    bVar6 = false;
    local_68 = 0;
    local_7c = 0;
  }
  else {
    local_54 = *puVar3;
    local_58 = puVar3[1];
    local_5c = *puVar9;
    uVar18 = *puVar5;
    uVar16 = *puVar4;
    uVar20 = *puVar22;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
    if (uVar16 == 0) {
      local_78 = 0;
      bVar6 = false;
      local_70 = 0;
    }
    else {
      iVar10 = android::SortedVectorImpl::indexOf(this + 0x210);
      uVar11 = extraout_s0;
      if (iVar10 < 0) goto LAB_00085134;
      local_78 = *(int *)(*(int *)(this + 0x214) + iVar10 * 8 + 4);
      local_70 = (local_5c + 1) - local_78;
      if (*(int *)(*(int *)(DAT_00085158 + 0x84fea) + 0x2c) == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
        mm_camera_debug_log(extraout_s0,1,4,DAT_00085160 + 0x8500e,0xcdf,DAT_0008515c + 0x84ff8,
                            uVar16,local_78,local_5c);
      }
    }
    if (uVar20 == 0) {
      uVar20 = 0;
      bVar7 = false;
      local_68 = 0;
      local_7c = 0;
    }
    else {
      iVar10 = android::SortedVectorImpl::indexOf(this + 0x210);
      uVar11 = extraout_s0_00;
      if (iVar10 < 0) {
LAB_00085134:
                    /* WARNING: Subroutine does not return */
        __android_log_assert
                  (uVar11,DAT_000851a4 + 0x85140,DAT_000851a8 + 0x85142,DAT_000851ac + 0x85144,
                   DAT_000851b0 + 0x85146);
      }
      local_7c = *(int *)(*(int *)(this + 0x214) + iVar10 * 8 + 4);
      android::SortedVectorImpl::remove((char *)(this + 0x210));
      local_68 = (uVar18 + 1) - local_7c;
      if (*(int *)(*(int *)(DAT_00085164 + 0x85066) + 0x2c) == 0) {
        bVar2 = false;
        bVar7 = true;
        goto LAB_00084cc6;
      }
      bVar7 = true;
      mm_camera_debug_log(1,4,DAT_0008516c + 0x8508a,0xcea,DAT_00085168 + 0x85078,uVar20,local_7c,
                          uVar18);
    }
    bVar2 = false;
  }
LAB_00084cc6:
  __mutex = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_unlock(__mutex);
  if ((uVar20 | uVar16) == 0) {
    uVar20 = 1;
LAB_00084d3c:
    uVar18 = local_54;
    __floatdidf(local_54,local_58);
    lVar1 = (ulonglong)(uVar20 - 1) * 1000000000;
    uVar16 = (uint)lVar1;
    __floatundidf(uVar16,(uint)((ulonglong)lVar1 >> 0x20));
    uVar19 = 0;
    iVar10 = *(int *)(DAT_00084f80 + 0x84d78);
    iVar17 = DAT_00084f84 + 0x84d80;
    do {
      if (!bVar2) {
        if (bVar6) {
          if (uVar19 < local_70) {
            if (*(int *)(iVar10 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,DAT_00084f8c + 0x84db2,0xd04,DAT_00084f88 + 0x84da8,
                                  local_78 + uVar19);
            }
            if (puVar23 == (uint *)0x0) {
              uVar11 = 0x70;
              iVar15 = DAT_00085170 + 0x84de8;
              iVar14 = iVar17;
LAB_00084df6:
              __android_log_print(6,iVar14,iVar15,0,uVar11);
            }
            else {
              puVar23[0x3162] = local_78 + uVar19;
              *(undefined *)(puVar23 + 0x1c) = 1;
            }
          }
          else {
            if (puVar23 == (uint *)0x0) {
              uVar11 = 0x68;
              iVar14 = DAT_00085174 + 0x84df6;
              iVar15 = DAT_00085178 + 0x84df8;
              goto LAB_00084df6;
            }
            puVar23[0x314f] = 0;
            *(undefined *)(puVar23 + 0x1a) = 1;
          }
        }
        if (bVar7) {
          if (uVar19 < local_68) {
            if (*(int *)(iVar10 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,DAT_00085180 + 0x84e26,0xd13,DAT_0008517c + 0x84e1c,
                                  local_7c + uVar19);
            }
            if (puVar23 == (uint *)0x0) {
              uVar11 = 0x6f;
LAB_00084e54:
              __android_log_print(6,DAT_00085184 + 0x84e62,DAT_00085188 + 0x84e64,0,uVar11);
            }
            else {
              puVar23[0x3161] = local_7c + uVar19;
              *(undefined *)((int)puVar23 + 0x6f) = 1;
            }
          }
          else {
            if (puVar23 == (uint *)0x0) {
              uVar11 = 0x67;
              goto LAB_00084e54;
            }
            puVar23[0x314e] = 0;
            *(undefined *)((int)puVar23 + 0x67) = 1;
          }
        }
        if ((local_54 | local_58) != 0) {
          fVar25 = *(float *)(this + 0x117f24);
          dVar26 = (double)CONCAT44(extraout_r1,uVar18) -
                   (double)CONCAT44(extraout_r1_00,uVar16) / (double)fVar25;
          uVar27 = __fixdfdi(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
          uVar12 = (uint)uVar27;
          __floatdidf(uVar12,(int)(uVar27 >> 0x20));
          uVar13 = (uint)((ulonglong)uVar19 * 1000000000);
          __floatundidf(uVar13,(uint)((ulonglong)uVar19 * 1000000000 >> 0x20));
          dVar26 = (double)CONCAT44(extraout_r1_02,uVar13) / (double)fVar25 +
                   (double)CONCAT44(extraout_r1_01,uVar12);
          uVar27 = __fixdfdi(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
          if (puVar23 == (uint *)0x0) {
            __android_log_print(6,DAT_0008518c + 0x84ee0,DAT_00085190 + 0x84ee2,0,0x94);
          }
          else {
            puVar23[0x31ca] = (uint)uVar27;
            puVar23[0x31cb] = (uint)(uVar27 >> 0x20);
            *(undefined *)(puVar23 + 0x25) = 1;
          }
          if (*(int *)(iVar10 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_00085198 + 0x84f0a,0xd26,DAT_00085194 + 0x84f02);
          }
        }
      }
      pthread_mutex_lock(__mutex);
      count_leading_zeroes(uVar19);
      handleMetadataWithLock((mm_camera_super_buf_t *)this,SUB41(param_1,0),false);
      pthread_mutex_unlock(__mutex);
      uVar19 = uVar19 + 1;
    } while (uVar20 != uVar19);
  }
  else {
    uVar20 = local_68;
    if (local_68 < local_70) {
      uVar20 = local_70;
    }
    iVar17 = *(int *)(DAT_00084f6c + 0x84ce6);
    iVar10 = *(int *)(iVar17 + 0x20);
    if ((8 < local_70) && (iVar10 != 0)) {
      mm_camera_debug_log(1,1,DAT_00084f74 + 0x84d08,0xcf3,DAT_00084f70 + 0x84cf8,local_70,local_5c)
      ;
      iVar10 = *(int *)(iVar17 + 0x20);
    }
    if ((8 < local_68) && (iVar10 != 0)) {
      mm_camera_debug_log(1,1,DAT_00084f7c + 0x84d2e,0xcf6,DAT_00084f78 + 0x84d20,local_68,uVar18);
    }
    if (uVar20 != 0) goto LAB_00084d3c;
  }
  if (param_2 != false) {
    QCamera3Channel::bufDone(*(QCamera3Channel **)(this + 0x8c),param_1);
    free(param_1);
  }
LAB_000850ee:
  if (1 < *puVar21) {
    if ((**(byte **)(DAT_0008519c + 0x850fa) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000851a0 + 0x85108) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar24 != iVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

