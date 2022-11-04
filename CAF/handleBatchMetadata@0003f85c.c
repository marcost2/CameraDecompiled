
/* qcamera::QCamera3HardwareInterface::handleBatchMetadata(mm_camera_super_buf_t*, bool) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBatchMetadata
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1,bool param_2)

{
  bool bVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char **ppcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  char *extraout_r1_07;
  char *extraout_r1_08;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  int iVar19;
  char **ppcVar20;
  pthread_mutex_t *__mutex;
  char **ppcVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  double dVar26;
  ulonglong uVar27;
  char *in_stack_ffffff44;
  char *local_7c;
  char *local_74;
  char *local_68;
  char *local_64;
  char *local_58;
  char *local_54;
  ScopedTraceDbg aSStack80 [12];
  int local_44;
  
  piVar18 = *(int **)(DAT_0003fbec + 0x3f874);
  local_44 = *piVar18;
  iVar7 = DAT_0003fbf0 + 0x3f87e;
  ScopedTraceDbg::ScopedTraceDbg(aSStack80,CONCAT44(in_stack_ffffff44,iVar7),(char *)param_1);
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    pcVar22 = extraout_r1;
    if (*(int *)(*(int *)(DAT_0003fc14 + 0x3f9de) + 0x20) != 0) {
      iVar7 = DAT_0003fc18 + 0x3f9ec;
      mm_camera_debug_log();
      pcVar22 = extraout_r1_02;
    }
    goto LAB_0003fcb2;
  }
  ppcVar21 = *(char ***)(*(int *)(param_1 + 0x10) + 0x208);
  local_58 = (char *)0x0;
  local_54 = (char *)0x0;
  ppcVar8 = ppcVar21;
  if (ppcVar21 != (char **)0x0) {
    ppcVar8 = ppcVar21 + 0x313e;
  }
  ppcVar20 = ppcVar21;
  ppcVar2 = ppcVar21;
  ppcVar3 = ppcVar21;
  ppcVar4 = ppcVar21;
  if (ppcVar21 != (char **)0x0) {
    ppcVar20 = ppcVar21 + 0x312a;
    ppcVar2 = ppcVar21 + 0x31a6;
    ppcVar3 = ppcVar21 + 0x312b;
    ppcVar4 = ppcVar21 + 0x313d;
  }
  if (((ppcVar8 == (char **)0x0 || ppcVar3 == (char **)0x0) ||
      (ppcVar2 == (char **)0x0 || ppcVar20 == (char **)0x0)) || (ppcVar4 == (char **)0x0)) {
    if (*(int *)(*(int *)(DAT_0003fbf4 + 0x3f914) + 0x20) != 0) {
      iVar7 = DAT_0003fbf8 + 0x3f91e;
      mm_camera_debug_log();
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x388));
    bVar1 = true;
    iVar23 = 0;
    local_7c = (char *)0x0;
    local_64 = (char *)0x0;
    local_68 = (char *)0x0;
    pcVar22 = (char *)0x0;
    bVar5 = false;
LAB_0003f958:
    bVar6 = false;
    pcVar15 = (char *)0x0;
    local_74 = (char *)0x0;
    iVar19 = 0;
  }
  else {
    pcVar15 = *ppcVar20;
    local_54 = *ppcVar4;
    pcVar22 = *ppcVar3;
    local_64 = *ppcVar2;
    local_68 = ppcVar2[1];
    local_58 = *ppcVar8;
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x388));
    if (pcVar22 == (char *)0x0) {
      bVar5 = false;
      local_7c = (char *)0x0;
      iVar23 = 0;
    }
    else {
      piVar13 = (int *)android::KeyedVector<unsigned_int,unsigned_int>::valueFor
                                 ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8),
                                  (uint *)&local_58);
      iVar23 = *piVar13;
      local_7c = local_58 + (1 - iVar23);
      if (*(int *)(*(int *)(DAT_0003fdd4 + 0x3fd18) + 0x2c) == 0) {
        bVar5 = true;
      }
      else {
        iVar7 = DAT_0003fdd8 + 0x3fd24;
        bVar5 = true;
        in_stack_ffffff44 = pcVar22;
        mm_camera_debug_log();
      }
    }
    if (pcVar15 == (char *)0x0) {
      bVar1 = false;
      goto LAB_0003f958;
    }
    piVar13 = (int *)android::KeyedVector<unsigned_int,unsigned_int>::valueFor
                               ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8),
                                (uint *)&local_54);
    local_74 = local_54;
    iVar19 = *piVar13;
    android::KeyedVector<unsigned_int,unsigned_int>::removeItem
              ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8),(uint *)&local_54);
    local_74 = local_74 + (1 - iVar19);
    if (*(int *)(*(int *)(DAT_0003fde0 + 0x3fd70) + 0x2c) != 0) {
      iVar7 = DAT_0003fde4 + 0x3fd7c;
      in_stack_ffffff44 = pcVar15;
      mm_camera_debug_log();
    }
    bVar1 = false;
    bVar6 = true;
  }
  __mutex = (pthread_mutex_t *)(this + 0x388);
  pthread_mutex_unlock(__mutex);
  if (((uint)pcVar15 | (uint)pcVar22) == 0) {
    pcVar15 = (char *)0x1;
LAB_0003fa02:
    pcVar9 = local_64;
    __floatdidf((uint)local_64,(int)local_68);
    uVar14 = (uint)(ZEXT48(pcVar15 + -1) * 1000000000);
    __floatundidf(uVar14,(uint)(ZEXT48(pcVar15 + -1) * 1000000000 >> 0x20));
    iVar24 = *(int *)(DAT_0003fc20 + 0x3fa3e);
    iVar16 = DAT_0003fc24 + 0x3fa46;
    pcVar17 = (char *)0x0;
    do {
      if (!bVar1) {
        if (bVar5) {
          if (pcVar17 < local_7c) {
            if (*(int *)(iVar24 + 0x2c) != 0) {
              iVar7 = DAT_0003fdec + 0x3fa74;
              in_stack_ffffff44 = pcVar17 + iVar23;
              mm_camera_debug_log();
            }
            if (ppcVar21 == (char **)0x0) {
              iVar10 = *(int *)(iVar24 + 0x20);
joined_r0x0003face:
              if (iVar10 != 0) {
                in_stack_ffffff44 = (char *)0x0;
                iVar7 = iVar16;
                mm_camera_debug_log();
              }
            }
            else {
              ppcVar21[0x313e] = pcVar17 + iVar23;
              *(undefined *)((int)ppcVar21 + 0x6f) = 1;
            }
          }
          else {
            if (ppcVar21 == (char **)0x0) {
              iVar10 = *(int *)(iVar24 + 0x20);
              goto joined_r0x0003face;
            }
            ppcVar21[0x312b] = (char *)0x0;
            *(undefined *)((int)ppcVar21 + 0x67) = 1;
          }
        }
        if (bVar6) {
          if (pcVar17 < local_74) {
            if (*(int *)(iVar24 + 0x2c) != 0) {
              iVar7 = DAT_0003fdf8 + 0x3fb08;
              in_stack_ffffff44 = pcVar17 + iVar19;
              mm_camera_debug_log();
            }
            if (ppcVar21 == (char **)0x0) {
              iVar10 = *(int *)(iVar24 + 0x20);
joined_r0x0003fb64:
              if (iVar10 != 0) {
                in_stack_ffffff44 = (char *)0x0;
                iVar7 = iVar16;
                mm_camera_debug_log();
              }
            }
            else {
              ppcVar21[0x313d] = pcVar17 + iVar19;
              *(undefined *)((int)ppcVar21 + 0x6e) = 1;
            }
          }
          else {
            if (ppcVar21 == (char **)0x0) {
              iVar10 = *(int *)(iVar24 + 0x20);
              goto joined_r0x0003fb64;
            }
            ppcVar21[0x312a] = (char *)0x0;
            *(undefined *)((int)ppcVar21 + 0x66) = 1;
          }
        }
        if (((uint)local_64 | (uint)local_68) != 0) {
          fVar25 = *(float *)(this + 0x11787c);
          dVar26 = (double)CONCAT44(extraout_r1_03,pcVar9) -
                   (double)CONCAT44(extraout_r1_04,uVar14) / (double)fVar25;
          uVar27 = __fixdfdi(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
          uVar11 = (uint)uVar27;
          __floatdidf(uVar11,(int)(uVar27 >> 0x20));
          uVar12 = (uint)(ZEXT48(pcVar17) * 1000000000);
          __floatundidf(uVar12,(uint)(ZEXT48(pcVar17) * 1000000000 >> 0x20));
          dVar26 = (double)CONCAT44(extraout_r1_06,uVar12) / (double)fVar25 +
                   (double)CONCAT44(extraout_r1_05,uVar11);
          uVar27 = __fixdfdi(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
          if (ppcVar21 == (char **)0x0) {
            if (*(int *)(iVar24 + 0x20) != 0) {
              in_stack_ffffff44 = (char *)0x0;
              iVar7 = iVar16;
              mm_camera_debug_log();
            }
          }
          else {
            ppcVar21[0x31a6] = (char *)uVar27;
            ppcVar21[0x31a7] = (char *)(uVar27 >> 0x20);
            *(undefined *)((int)ppcVar21 + 0x92) = 1;
          }
          if (*(int *)(iVar24 + 0x2c) != 0) {
            iVar7 = DAT_0003fe0c + 0x3fc66;
            mm_camera_debug_log();
          }
        }
      }
      pthread_mutex_lock(__mutex);
      count_leading_zeroes(pcVar17);
      handleMetadataWithLock((mm_camera_super_buf_t *)this,SUB41(param_1,0),false);
      pthread_mutex_unlock(__mutex);
      pcVar17 = pcVar17 + 1;
      pcVar22 = extraout_r1_07;
    } while (pcVar15 != pcVar17);
  }
  else {
    pcVar15 = local_74;
    if (local_74 < local_7c) {
      pcVar15 = local_7c;
    }
    iVar16 = *(int *)(DAT_0003fc00 + 0x3f982);
    pcVar22 = local_7c;
    if (((char *)0x8 < local_7c) && (*(int *)(iVar16 + 0x20) != 0)) {
      iVar7 = DAT_0003fc04 + 0x3f992;
      in_stack_ffffff44 = local_7c;
      mm_camera_debug_log();
      pcVar22 = extraout_r1_00;
    }
    if (((char *)0x8 < local_74) && (*(int *)(iVar16 + 0x20) != 0)) {
      iVar7 = DAT_0003fc0c + 0x3f9ba;
      in_stack_ffffff44 = local_74;
      mm_camera_debug_log();
      pcVar22 = extraout_r1_01;
    }
    if (pcVar15 != (char *)0x0) goto LAB_0003fa02;
  }
  if (param_2 != false) {
    QCamera3Channel::bufDone(*(QCamera3Channel **)(this + 0x78),(uint)param_1);
    free(param_1);
    pcVar22 = extraout_r1_08;
  }
LAB_0003fcb2:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack80,CONCAT44(in_stack_ffffff44,iVar7),pcVar22);
  if (*piVar18 != local_44) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

