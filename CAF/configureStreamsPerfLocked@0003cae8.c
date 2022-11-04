
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::configureStreamsPerfLocked(camera3_stream_configuration*) */

QCamera3Channel * __thiscall
qcamera::QCamera3HardwareInterface::configureStreamsPerfLocked
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  QCamera3HardwareInterface QVar5;
  cam_dimension_t cVar6;
  cam_padding_info_t *pcVar7;
  QCamera3Channel *pQVar8;
  uint uVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined (**ppauVar17) [16];
  QCamera3MetadataChannel *this_00;
  QCamera3Channel *pQVar18;
  undefined8 *puVar19;
  QCamera3Channel *pQVar20;
  QCamera3YUVChannel *this_01;
  QCamera3PicChannel *this_02;
  QCamera3RawChannel *this_03;
  QCamera3RawDumpChannel *this_04;
  undefined4 uVar21;
  QCamera3Channel *pQVar22;
  QCamera3SupportChannel *pQVar23;
  QCamera3RegularChannel *pQVar24;
  char *extraout_r1;
  char *pcVar25;
  char *extraout_r1_00;
  QCamera3Channel *pQVar26;
  uint uVar27;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *extraout_r1_03;
  char *extraout_r1_04;
  char *extraout_r1_05;
  undefined8 *puVar28;
  char *extraout_r1_06;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  cam_padding_info_t *pcVar32;
  QCamera3Channel *pQVar33;
  uint uVar34;
  pthread_mutex_t *__mutex;
  uint *puVar35;
  uint *puVar36;
  undefined (*pauVar37) [16];
  void *pvVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  QCamera3Channel *in_stack_fffffd1c;
  QCamera3Channel *in_stack_fffffd24;
  int *local_174;
  uint local_170;
  uint local_16c;
  cam_padding_info_t *local_168;
  pthread_mutex_t *local_164;
  QCamera3HardwareInterface *local_160;
  int local_15c;
  int local_158;
  uint local_150;
  QCamera3HardwareInterface *local_14c;
  uint local_148;
  undefined4 local_144;
  cam_padding_info_t *local_140;
  uint local_13c;
  QCamera3Channel *local_138;
  uint local_134;
  uint local_130;
  QCamera3Channel *local_124;
  QCamera3HardwareInterface *local_120;
  uint local_11c;
  undefined (*local_118) [16];
  undefined8 *local_114;
  int local_110;
  _Node a_Stack264 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack260 [4];
  undefined8 local_100;
  undefined8 uStack248;
  undefined8 local_f0;
  undefined8 uStack232;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack180 [4];
  undefined8 local_b0;
  undefined4 uStack168;
  undefined4 local_a4;
  undefined4 uStack160;
  undefined8 uStack156;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack148 [4];
  ScopedTraceDbg aSStack144 [8];
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  puVar29 = (undefined8 *)&stack0xfffffd18;
  local_174 = *(int **)(DAT_0003ce10 + 0x3cafa);
  local_28 = *local_174;
  pcVar7 = (cam_padding_info_t *)(DAT_0003ce14 + 0x3cb08);
  ScopedTraceDbg::ScopedTraceDbg(aSStack144,CONCAT44(in_stack_fffffd1c,pcVar7),(char *)param_1);
  pcVar25 = extraout_r1;
  if (param_1 == (camera3_stream_configuration *)0x0) {
    if (*(int *)(*(int *)(DAT_0003ce24 + 0x3cb54) + 0x20) != 0) {
      pcVar7 = (cam_padding_info_t *)(DAT_0003ce28 + 0x3cb5e);
LAB_0003cba8:
      mm_camera_debug_log();
      pcVar25 = extraout_r1_00;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(*(int *)(DAT_0003ce30 + 0x3cb72) + 0x20) != 0) {
      pcVar7 = (cam_padding_info_t *)(DAT_0003ce34 + 0x3cb7c);
      goto LAB_0003cba8;
    }
  }
  else {
    pQVar8 = *(QCamera3Channel **)param_1;
    if (pQVar8 == (QCamera3Channel *)0x0) {
      pcVar25 = *(char **)(*(int *)(DAT_0003ce3c + 0x3cb90) + 0x20);
      if (pcVar25 != (char *)0x0) {
        pcVar7 = (cam_padding_info_t *)(DAT_0003ce40 + 0x3cb9a);
        in_stack_fffffd1c = pQVar8;
        goto LAB_0003cba8;
      }
    }
    else if (pQVar8 < (QCamera3Channel *)0x8) {
      local_14c = this + 0x117880;
      uVar9 = *(uint *)(param_1 + 8);
      *local_14c = SUB41(uVar9,0);
      local_110 = *(int *)(DAT_0003ce48 + 0x3cbe2);
      if (*(int *)(local_110 + 0x2c) != 0) {
        in_stack_fffffd1c = (QCamera3Channel *)(uVar9 & 0xff);
        pcVar7 = (cam_padding_info_t *)(DAT_0003ce4c + 0x3cbf0);
        mm_camera_debug_log();
      }
      *(undefined2 *)(this + 0x117941) = 0x100;
      android::List<unsigned_int>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar10 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)&local_88,(_ListIterator *)&local_100);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_100);
      if (iVar10 != 0) {
        do {
          ppiVar11 = (int **)android::List<unsigned_int>::
                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                             ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                          *)&local_88);
          if (*(int **)(**ppiVar11 + 0x18) != (int *)0x0) {
            (**(code **)(**(int **)(**ppiVar11 + 0x18) + 0xc))();
          }
          piVar12 = (int *)android::List<unsigned_int>::
                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                           ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                        *)&local_88);
          *(undefined4 *)(*piVar12 + 0x10) = 0;
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                    (a_Stack148,(int)&local_88);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack148)
          ;
          android::List<qcamera::ReprocessBuffer>::end();
          iVar10 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                 *)&local_88,(_ListIterator *)&local_100);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_100)
          ;
        } while (iVar10 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_88);
      if (*(int **)(this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x8c) + 0xc))();
        if (*(int **)(this + 0x8c) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x8c) + 4))();
        }
        *(undefined4 *)(this + 0x8c) = 0;
      }
      if (*(int **)(this + 0x84) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x84) + 0xc))();
      }
      if (*(int **)(this + 0x88) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x88) + 0xc))();
      }
      if (*(int **)(this + 0x78) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x78) + 0xc))();
      }
      if ((*(int *)(this + 0xdc) != 0) &&
         ((**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x68))(**(undefined4 **)(this + 0x50)),
         *(int *)(local_110 + 0x2c) != 0)) {
        in_stack_fffffd1c = *(QCamera3Channel **)(this + 0xdc);
        pcVar7 = (cam_padding_info_t *)(DAT_0003ce54 + 0x3cd02);
        mm_camera_debug_log();
      }
      local_164 = (pthread_mutex_t *)(this + 0x388);
      pthread_mutex_lock(local_164);
      pQVar8 = *(QCamera3Channel **)(this + 0x117910);
      if ((QCamera3Channel *)0x2 < pQVar8 + -2) {
        if (*(int *)(local_110 + 0x20) != 0) {
          pcVar7 = (cam_padding_info_t *)(DAT_0003ce60 + 0x3cdc0);
          mm_camera_debug_log();
          in_stack_fffffd1c = pQVar8;
        }
        pthread_mutex_unlock(local_164);
        pQVar8 = (QCamera3Channel *)0xffffffed;
        pcVar25 = extraout_r1_01;
        goto LAB_0003cbb0;
      }
      this[0x175] = (QCamera3HardwareInterface)0x0;
      this[0x15e] = (QCamera3HardwareInterface)0x0;
      *(undefined2 *)(this + 0x15c) = 0;
      local_158 = *(int *)(DAT_0003ce5c + 0x3cd42);
      iVar10 = *(int *)(local_158 + *(int *)(this + 0x4c) * 4);
      pQVar26 = *(QCamera3Channel **)(iVar10 + 0x3dc0);
      uVar9 = *(uint *)(iVar10 + 0x3dc4);
      uStack156 = *(undefined8 *)(iVar10 + 0x300c);
      local_b0 = SUB168(*(undefined (*) [16])(iVar10 + 0x2ff8),0);
      uStack168 = SUB164(*(undefined (*) [16])(iVar10 + 0x2ff8) >> 0x40,0);
      local_a4 = (undefined4)*(undefined8 *)(iVar10 + 0x3004);
      uStack160 = (undefined4)((ulonglong)*(undefined8 *)(iVar10 + 0x3004) >> 0x20);
      *(undefined8 *)(this + 0x164) = 0;
      *(undefined8 *)(this + 0x16c) = 0;
      iVar10 = *(int *)(local_158 + *(int *)(this + 0x4c) * 4);
      uVar27 = (uint)*(byte *)(iVar10 + 0x3e75);
      if (5 < uVar27) {
        uVar27 = 6;
      }
      if (uVar27 != 0) {
        uVar30 = 0;
        do {
          if ((*(uint *)(iVar10 + 0x3e78 + uVar30 * 4) & 0xfffffffe) == 4) {
            this[0x160] = (QCamera3HardwareInterface)0x1;
            break;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar27);
      }
      iVar10 = *(int *)(local_158 + *(int *)(this + 0x4c) * 4);
      uVar27 = (uint)*(byte *)(iVar10 + 0x303b);
      if (1 < uVar27) {
        uVar27 = 2;
      }
      if (uVar27 != 0) {
        uVar30 = 0;
        do {
          if (*(char *)(iVar10 + 0x3039 + uVar30) == '\x01') {
            bVar40 = true;
            goto LAB_0003ce6a;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar27);
      }
      bVar40 = false;
LAB_0003ce6a:
      uVar30 = (uint)(byte)this[0x160];
      local_48 = 0;
      uStack64 = 0;
      local_58 = 0;
      uStack80 = 0;
      local_68 = 0;
      uStack96 = 0;
      local_78 = 0;
      uStack112 = 0;
      local_88 = 0;
      uStack128 = 0;
      local_3c = 0;
      uStack56 = 0;
      uStack52 = 0;
      property_get();
      uVar27 = uVar30;
      if (uVar30 != 0) {
        uVar27 = 0x780;
        uVar30 = 0x438;
      }
      uVar13 = atoi((char *)&local_88);
      pQVar8 = (QCamera3Channel *)0x0;
      if ((!bVar40) && ((uVar13 & 0xff) != 0)) {
        if (this[0x160] == (QCamera3HardwareInterface)0x0) {
          pQVar8 = (QCamera3Channel *)0x0;
        }
        else {
          pQVar8 = (QCamera3Channel *)((byte)*local_14c - 1);
          if (pQVar8 != (QCamera3Channel *)0x0) {
            pQVar8 = (QCamera3Channel *)0x1;
          }
        }
      }
      this[0x15f] = SUB41(pQVar8,0);
      if (*(int *)(local_110 + 0x2c) != 0) {
        in_stack_fffffd24 = (QCamera3Channel *)(uint)(byte)this[0x160];
        pcVar7 = (cam_padding_info_t *)(DAT_0003d22c + 0x3cef8);
        mm_camera_debug_log();
        in_stack_fffffd1c = pQVar8;
      }
      if (*(int *)param_1 == 0) {
        local_130 = 0;
        local_138 = (QCamera3Channel *)0x0;
        local_134 = 0;
        puVar35 = (uint *)0x0;
        local_170 = 0;
        local_144 = 0;
        local_148 = 0;
        local_114 = (undefined8 *)0x0;
        local_16c = 0;
        local_168 = (cam_padding_info_t *)0x0;
        local_15c = 0;
        local_124 = (QCamera3Channel *)0x0;
        local_118 = (undefined (*) [16])0x0;
        local_140 = (cam_padding_info_t *)0x0;
        local_11c = 0;
        local_13c = 0;
        local_150 = 0;
        pQVar33 = (QCamera3Channel *)0x0;
      }
      else {
        pQVar33 = (QCamera3Channel *)0x0;
        local_150 = 0;
        local_13c = 0;
        local_11c = 0;
        local_140 = (cam_padding_info_t *)0x0;
        local_118 = (undefined (*) [16])0x0;
        local_124 = (QCamera3Channel *)0x0;
        local_15c = 0;
        local_168 = (cam_padding_info_t *)0x0;
        local_16c = 0;
        local_114 = (undefined8 *)0x0;
        local_148 = 0;
        local_144 = 0;
        local_170 = 0;
        puVar35 = (uint *)0x0;
        local_134 = 0;
        local_138 = (QCamera3Channel *)0x0;
        local_130 = 0;
        pQVar8 = (QCamera3Channel *)0x0;
        do {
          puVar36 = *(uint **)(*(int *)(param_1 + 4) + (int)pQVar8 * 4);
          if (*(int *)(local_110 + 0x34) != 0) {
            in_stack_fffffd24 = (QCamera3Channel *)puVar36[3];
            pcVar7 = (cam_padding_info_t *)(DAT_0003d234 + 0x3cfda);
            in_stack_fffffd1c = pQVar8;
            mm_camera_debug_log();
          }
          uVar13 = *puVar36;
          if (uVar13 == 1) {
            puVar35 = puVar36;
          }
          if (puVar36[3] == 0x22) {
            if ((*(byte *)((int)puVar36 + 0x12) & 1) != 0) {
              this[0x15c] = (QCamera3HardwareInterface)0x1;
              local_150 = puVar36[1];
              local_13c = puVar36[2];
              if ((0xeff < local_150) && (0x86f < local_13c)) {
                this[0x15d] = (QCamera3HardwareInterface)0x1;
              }
              if (uVar27 < puVar36[1]) {
                QVar5 = (QCamera3HardwareInterface)0x0;
              }
              else {
                QVar5 = (QCamera3HardwareInterface)0x0;
                if (puVar36[2] <= uVar30) {
                  QVar5 = (QCamera3HardwareInterface)0x1;
                }
              }
              this[0x15e] = QVar5;
            }
          }
          else if (puVar36[3] == 0x21) {
            local_130 = puVar36[1];
            local_138 = (QCamera3Channel *)puVar36[2];
            local_114 = (undefined8 *)
                        ((uint)local_114 |
                        (uint)((cam_padding_info_t *)0x870 < local_138 || 0xf00 < local_130));
            local_134 = 1;
          }
          uVar31 = *puVar36;
          uVar4 = (uint)local_118;
          if ((uVar31 | 2) == 2) {
            uVar14 = puVar36[3] - 0x20;
            if (uVar14 < 6) {
              cVar6 = SUB41(uVar14,0);
              switch(puVar36[3]) {
              default:
                local_11c = local_11c + 1;
                break;
              case 0x21:
                uVar34 = puVar36[1];
                pcVar32 = (cam_padding_info_t *)puVar36[2];
                pcVar7 = pcVar32;
                uVar31 = isOnEncoder(cVar6,(uint)pQVar26,uVar9);
                iVar10 = *(int *)(local_158 + *(int *)(this + 0x4c) * 4);
                uVar14 = (uint)*(byte *)(iVar10 + 0x2ad4);
                if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  __android_log_assert();
                }
                local_124 = local_124 + uVar31;
                local_148 = local_148 | uVar31;
                local_140 = local_140 + 1;
                if ((uVar14 < (uint)(pcVar32 + *(int *)(iVar10 + 0x3414) + -1) / (uint)pcVar32) ||
                   (uVar14 < ((*(int *)(iVar10 + 0x3410) + uVar34) - 1) / uVar34)) {
                  if (*(int *)(local_110 + 0x28) == 0) {
                    local_170 = 1;
                  }
                  else {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003d23c + 0x3d132);
                    local_170 = 1;
                    mm_camera_debug_log();
                  }
                }
                break;
              case 0x22:
                pcVar7 = (cam_padding_info_t *)puVar36[2];
                iVar10 = isOnEncoder(SUB41(pcVar7,0),(uint)pQVar26,uVar9);
                uVar4 = (int)local_118 + 1;
                if (iVar10 != 0) {
                  if ((uVar31 != 2) && ((puVar36[4] & 0x60000) != 0x60000)) {
                    local_144 = 0x100068e;
                  }
                  goto LAB_0003d1e8;
                }
                break;
              case 0x23:
                uVar31 = puVar36[1];
                pcVar32 = (cam_padding_info_t *)puVar36[2];
                pcVar7 = pcVar32;
                iVar10 = isOnEncoder(cVar6,(uint)pQVar26,uVar9);
                uVar4 = (int)local_118 + 1;
                if (iVar10 != 0) {
                  if ((uVar31 < 0xf01) && (pcVar32 < (cam_padding_info_t *)0x871)) {
                    local_144 = 0x100068e;
                  }
                  local_15c = local_15c + 1;
                  local_124 = local_124 + 1;
                  local_16c = uVar31;
                  local_168 = pcVar32;
                }
              }
            }
            else {
              pcVar7 = (cam_padding_info_t *)puVar36[2];
              iVar10 = isOnEncoder(SUB41(pcVar7,0),(uint)pQVar26,uVar9);
              uVar4 = (int)local_118 + 1;
              if (iVar10 != 0) {
                local_144 = 0x100068e;
LAB_0003d1e8:
                local_118 = (undefined (*) [16])((int)local_118 + 1);
                local_124 = local_124 + 1;
                uVar4 = (uint)local_118;
              }
            }
          }
          local_118 = (undefined (*) [16])uVar4;
          pQVar33 = (QCamera3Channel *)((uint)pQVar33 | (uint)(uVar13 - 1 < 2));
          pQVar8 = pQVar8 + 1;
        } while (pQVar8 < *(QCamera3Channel **)param_1);
      }
      if (((*(uint *)(*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 4) | 2) == 3) ||
         (this[0x15c] == (QCamera3HardwareInterface)0x0)) {
        this[0x15f] = (QCamera3HardwareInterface)0x0;
      }
      if (((((this[0x177] != (QCamera3HardwareInterface)0x0) ||
            (this[0x178] != (QCamera3HardwareInterface)0x0)) &&
           (this[0x15c] != (QCamera3HardwareInterface)0x0)) &&
          (((local_13c == 0x438 && (local_150 == 0x780)) ||
           ((local_13c == 0x2d0 && (local_150 == 0x500)))))) &&
         (*local_14c != (QCamera3HardwareInterface)0x1)) {
        this[0x175] = (QCamera3HardwareInterface)0x1;
      }
      if ((local_118 < 4) && (((uint)local_140 | local_11c) < 2)) {
        if ((pQVar33 == (QCamera3Channel *)0x0) || (this[0x15c] == (QCamera3HardwareInterface)0x0))
        {
          if (local_124 < (QCamera3Channel *)0x3) {
            if (local_124 == (QCamera3Channel *)0x2) {
              if (*(int *)(local_110 + 0x28) == 0) {
                bVar40 = true;
              }
              else {
                pcVar7 = (cam_padding_info_t *)(DAT_0003d5b0 + 0x3d316);
                bVar40 = true;
                mm_camera_debug_log();
              }
            }
            else {
              bVar40 = false;
            }
            if ((this[0x15d] == (QCamera3HardwareInterface)0x0) || (((uint)local_114 ^ 1) != 0)) {
              if ((((uint)local_114 ^ 1 | (uint)pQVar33 | ~local_148 & 1) != 0) || (!bVar40)) {
                if (local_15c == 0) {
LAB_0003d3b8:
                  uVar27 = count_leading_zeroes(local_124 + -2);
                  if (((local_134 ^ 1) & uVar27 >> 5) != 0) {
                    local_144 = 0x100068e;
                  }
                  bVar39 = false;
                }
                else {
                  pcVar7 = (cam_padding_info_t *)local_138;
                  iVar15 = isOnEncoder(SUB41(local_15c,0),(uint)pQVar26,uVar9);
                  bVar41 = SBORROW4((int)local_168,(int)local_138);
                  iVar10 = (int)local_168 - (int)local_138;
                  bVar39 = local_168 == (cam_padding_info_t *)local_138;
                  if ((int)local_138 < (int)local_168) {
                    bVar41 = SBORROW4(local_16c,local_130);
                    iVar10 = local_16c - local_130;
                    bVar39 = local_16c == local_130;
                  }
                  if ((bVar39 || iVar10 < 0 != bVar41) || (iVar15 == 0)) goto LAB_0003d3b8;
                  bVar39 = true;
                }
                pQVar22 = in_stack_fffffd1c;
                if (*(int *)(local_110 + 0x28) != 0) {
                  pcVar7 = (cam_padding_info_t *)(DAT_0003d5cc + 0x3d402);
                  pQVar22 = pQVar26;
                  in_stack_fffffd24 = pQVar33;
                  mm_camera_debug_log();
                  if (*(int *)(local_110 + 0x28) != 0) {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003d5d4 + 0x3d430);
                    mm_camera_debug_log();
                    pQVar22 = local_124;
                    in_stack_fffffd24 = (QCamera3Channel *)local_140;
                  }
                }
                pQVar8 = (QCamera3Channel *)validateStreamDimensions(this,param_1);
                if ((pQVar8 != (QCamera3Channel *)0x0) ||
                   (pQVar8 = (QCamera3Channel *)
                             validateStreamRotations((QCamera3HardwareInterface *)0x0,param_1),
                   pQVar8 != (QCamera3Channel *)0x0)) {
                  if (*(int *)(local_110 + 0x20) != 0) {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003d5dc + 0x3d470);
                    mm_camera_debug_log();
                  }
                  pthread_mutex_unlock(local_164);
                  pcVar25 = extraout_r1_03;
                  in_stack_fffffd1c = pQVar22;
                  goto LAB_0003cbb0;
                }
                bVar41 = false;
                if (*(int *)param_1 == 0) {
                  local_118 = (undefined (*) [16])0x0;
                }
                else {
                  uVar27 = 0;
                  local_118 = (undefined (*) [16])0x0;
                  do {
                    pauVar37 = *(undefined (**) [16])(*(int *)(param_1 + 4) + uVar27 * 4);
                    in_stack_fffffd1c = pQVar22;
                    if (*(int *)(local_110 + 0x28) != 0) {
                      in_stack_fffffd1c = *(QCamera3Channel **)*pauVar37;
                      in_stack_fffffd24 = *(QCamera3Channel **)(*pauVar37 + 4);
                      pcVar7 = (cam_padding_info_t *)(DAT_0003d5e4 + 0x3d4d0);
                      mm_camera_debug_log();
                    }
                    android::List<unsigned_int>::begin();
                    android::List<qcamera::ReprocessBuffer>::end();
                    iVar10 = android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                           *)&local_100,(_ListIterator *)&local_c0);
                    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                              ((AbstractUnwindCursor *)&local_c0);
                    if (iVar10 == 0) {
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_100);
LAB_0003d5f2:
                      pQVar22 = in_stack_fffffd1c;
                      if (*(int *)*pauVar37 != 1) {
                        ppauVar17 = (undefined (**) [16])malloc(0x1c);
                        local_100 = local_100 & 0xffffffff00000000 | ZEXT48(ppauVar17);
                        if (ppauVar17 == (undefined (**) [16])0x0) {
                          if (*(int *)(local_110 + 0x20) != 0) {
                            pcVar7 = (cam_padding_info_t *)(DAT_0003da44 + 0x3d738);
                            mm_camera_debug_log();
                          }
                          pthread_mutex_unlock(local_164);
                          pQVar8 = (QCamera3Channel *)0xfffffff4;
                          pcVar25 = extraout_r1_05;
                          goto LAB_0003cbb0;
                        }
                        *ppauVar17 = pauVar37;
                        ppauVar17[6] = (undefined (*) [16])0x0;
                        ppauVar17[4] = (undefined (*) [16])0x1;
                        android::List<unsigned_int>::push_back((uint *)(this + 0x390));
                        pQVar22 = in_stack_fffffd1c;
                      }
                    }
                    else {
                      bVar41 = false;
                      do {
                        puVar16 = (undefined4 *)
                                  android::List<unsigned_int>::
                                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                  ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                               *)&local_100);
                        if (*(undefined (**) [16])*puVar16 == pauVar37) {
                          ppiVar11 = (int **)android::List<unsigned_int>::
                                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                             ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_100);
                          if (*(int **)(**ppiVar11 + 0x18) != (int *)0x0) {
                            (**(code **)(**(int **)(**ppiVar11 + 0x18) + 4))();
                          }
                          piVar12 = (int *)android::List<unsigned_int>::
                                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                           ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_100);
                          bVar41 = true;
                          *(undefined4 *)(*piVar12 + 0x10) = 1;
                          ppiVar11 = (int **)android::List<unsigned_int>::
                                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                             ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_100);
                          *(undefined4 *)(**ppiVar11 + 0x18) = 0;
                          piVar12 = (int *)android::List<unsigned_int>::
                                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                           ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_100);
                          *(undefined4 *)(*piVar12 + 0x18) = 0;
                        }
                        android::List<unsigned_int>::
                        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                        ::operator__(a_Stack180,(int)&local_100);
                        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                  ((AbstractUnwindCursor *)a_Stack180);
                        android::List<qcamera::ReprocessBuffer>::end();
                        iVar10 = android::List<qcamera::ReprocessBuffer>::
                                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                               *)&local_100,(_ListIterator *)&local_c0);
                        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                  ((AbstractUnwindCursor *)&local_c0);
                      } while (iVar10 != 0);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_100);
                      pQVar22 = in_stack_fffffd1c;
                      if (!bVar41) goto LAB_0003d5f2;
                    }
                    if ((((*(uint *)pauVar37[1] & 0x60000) == 0x60000) || (*(int *)*pauVar37 == 2))
                       && (bVar41 = local_118 != (undefined (*) [16])0x0, local_118 = pauVar37,
                          bVar41)) {
                      in_stack_fffffd1c = pQVar22;
                      if (*(int *)(local_110 + 0x20) == 0) goto LAB_0003d71a;
                      pcVar7 = (cam_padding_info_t *)(DAT_0003da3c + 0x3d70a);
                      goto LAB_0003d716;
                    }
                    if ((((puVar35 != (uint *)0x0) && (*(int *)*pauVar37 == 0)) &&
                        ((*(int *)(*pauVar37 + 0xc) == 0x23 &&
                         ((puVar35[3] == 0x23 && (puVar35[1] == *(uint *)(*pauVar37 + 4))))))) &&
                       (puVar35[2] == *(uint *)(*pauVar37 + 8))) {
                      bVar41 = local_118 != (undefined (*) [16])0x0;
                      if (bVar41) {
                        local_118 = *(undefined (**) [16])(local_110 + 0x28);
                      }
                      bVar2 = local_118 != (undefined (*) [16])0x0;
                      local_118 = pauVar37;
                      if (bVar41 && bVar2) {
                        pcVar7 = (cam_padding_info_t *)(DAT_0003da2c + 0x3d68a);
                        mm_camera_debug_log();
                      }
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 < *(uint *)param_1);
                  if (local_118 == (undefined (*) [16])0x0) {
                    bVar41 = false;
                    local_118 = (undefined (*) [16])0x0;
                  }
                  else {
                    *(undefined4 *)(this + 0x164) = *(undefined4 *)(*local_118 + 4);
                    *(undefined4 *)(this + 0x168) = *(undefined4 *)(*local_118 + 8);
                    pQVar8 = *(QCamera3Channel **)(*local_118 + 0xc);
                    *(QCamera3Channel **)(this + 0x16c) = pQVar8;
                    *(undefined4 *)(this + 0x170) = *(undefined4 *)local_118[1];
                    if (*(int *)(local_110 + 0x2c) == 0) {
                      bVar41 = true;
                    }
                    else {
                      bVar41 = true;
                      mm_camera_debug_log();
                      in_stack_fffffd24 = pQVar8;
                    }
                  }
                }
                cleanAndSortStreamInfo(this);
                if (*(int **)(this + 0x78) != (int *)0x0) {
                  (**(code **)(**(int **)(this + 0x78) + 4))();
                  *(undefined4 *)(this + 0x78) = 0;
                }
                if (*(int **)(this + 0x84) != (int *)0x0) {
                  (**(code **)(**(int **)(this + 0x84) + 4))();
                  *(undefined4 *)(this + 0x84) = 0;
                }
                if (*(int **)(this + 0x88) != (int *)0x0) {
                  (**(code **)(**(int **)(this + 0x88) + 4))();
                  *(undefined4 *)(this + 0x88) = 0;
                }
                if (*(int **)(this + 0x90) != (int *)0x0) {
                  (**(code **)(**(int **)(this + 0x90) + 4))();
                  *(undefined4 *)(this + 0x90) = 0;
                }
                local_c0._0_4_ = 0;
                local_c0._4_4_ = (void *)0x0;
                setPAAFSupport(&local_c0,7,
                               *(cam_color_filter_arrangement_t *)
                                (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 0x33d0));
                this_00 = (QCamera3MetadataChannel *)operator_new(0x98);
                local_138 = *(QCamera3Channel **)(DAT_0003da4c + 0x3d80a);
                local_140 = *(cam_padding_info_t **)(DAT_0003da50 + 0x3d814);
                pcVar7 = local_140;
                pQVar22 = local_138;
                pvVar38 = local_c0._4_4_;
                piVar12 = (int *)QCamera3MetadataChannel::QCamera3MetadataChannel
                                           (this_00,**(uint **)(this + 0x50),*(uint *)(this + 0xdc),
                                            (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                            (FuncDef12 *)local_140,(FuncDef13 *)local_138,
                                            (cam_padding_info_t *)&local_b0,
                                            CONCAT44((undefined4)local_c0,in_stack_fffffd24),
                                            local_c0._4_4_,(uint)this);
                *(int **)(this + 0x78) = piVar12;
                pQVar8 = (QCamera3Channel *)(**(code **)(*piVar12 + 0x20))(piVar12,0);
                if ((int)pQVar8 < 0) {
                  if (*(int *)(local_110 + 0x20) != 0) {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003da5c + 0x3d89e);
                    mm_camera_debug_log();
                  }
                  if (*(int **)(this + 0x78) != (int *)0x0) {
                    (**(code **)(**(int **)(this + 0x78) + 4))();
                  }
                  *(undefined4 *)(this + 0x78) = 0;
                }
                else {
                  local_c8._4_4_ = (QCamera3Channel *)0x0;
                  local_c8._0_4_ = (cam_padding_info_t *)0x100068e;
                  setPAAFSupport(&local_c8,0xb,
                                 *(cam_color_filter_arrangement_t *)
                                  (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 0x33d0));
                  pQVar20 = local_c8._4_4_;
                  pcVar32 = (cam_padding_info_t *)local_c8;
                  local_160 = this + 0xd8;
                  pcVar7 = (cam_padding_info_t *)local_c8;
                  pQVar22 = local_c8._4_4_;
                  pQVar18 = (QCamera3Channel *)
                            QCameraCommon::getAnalysisInfo
                                      (SUB41(local_160,0),false,
                                       CONCAT44(local_c8._4_4_,(cam_padding_info_t *)local_c8),
                                       (cam_analysis_info_t *)0x1);
                  if (pQVar18 == (QCamera3Channel *)0x0) {
                    pQVar23 = (QCamera3SupportChannel *)operator_new(0xa8);
                    if ((int)local_d8 != 0x65) {
                      local_d8._0_4_ = 2;
                    }
                    pvVar38 = (void *)((int)&local_100 + 4);
                    pcVar7 = (cam_padding_info_t *)((int)&uStack248 + 4);
                    uVar21 = QCamera3SupportChannel::QCamera3SupportChannel
                                       (pQVar23,**(uint **)(this + 0x50),*(uint *)(this + 0xdc),
                                        (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],pcVar7,
                                        CONCAT44(pcVar32,pQVar22),(cam_stream_type_t)pQVar20,
                                        (cam_dimension_t *)0xb,(cam_format_t)pvVar38,
                                        (uchar)(int)local_d8,(uint)local_100._1_1_,
                                        *(void **)(*(int *)(local_158 + *(int *)(this + 0x4c) * 4) +
                                                  0x33d0),(uint)this);
                    *(undefined4 *)(this + 0x88) = uVar21;
                  }
                  else if (*(int *)(local_110 + 0x24) != 0) {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003da54 + 0x3d87e);
                    mm_camera_debug_log();
                    pQVar22 = pQVar18;
                  }
                  if ((*(int *)(this + 0x88) == 0) && (*(int *)(local_110 + 0x24) != 0)) {
                    pcVar7 = (cam_padding_info_t *)(DAT_0003da64 + 0x3d93a);
                    mm_camera_debug_log();
                  }
                  puVar19 = (undefined8 *)(this + 0x220);
                  __aeabi_memclr4(puVar19,0x168);
                  if (*(int *)param_1 != 0) {
                    uVar27 = 0;
                    bVar2 = false;
LAB_0003db3c:
                    pauVar37 = *(undefined (**) [16])(*(int *)(param_1 + 4) + uVar27 * 4);
                    iVar10 = *(int *)pauVar37[1];
                    *(undefined4 *)(puVar19 + *(int *)(this + 0x260)) =
                         *(undefined4 *)(*pauVar37 + 4);
                    *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 8 + 4) =
                         *(undefined4 *)(*pauVar37 + 8);
                    __mutex = *(pthread_mutex_t **)(DAT_0003ded0 + 0x3db6c);
                    pthread_mutex_lock(__mutex);
                    get_cam_info();
                    pthread_mutex_unlock(__mutex);
                    if (((*(int *)*pauVar37 == 2) || ((*(uint *)pauVar37[1] & 0x60000) == 0x60000))
                       && (*(int *)(*pauVar37 + 0xc) == 0x22)) {
                      *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44) = 3;
                      iVar10 = *(int *)(this + 0x260);
                      if (bVar40) {
                        *(undefined4 *)(puVar19 + iVar10 + 0xd) = local_144;
                        *(undefined4 *)((int)puVar19 + iVar10 * 8 + 0x6c) = 0;
                      }
                      else {
                        *(undefined4 *)(puVar19 + iVar10 + 0xd) = 0;
                        *(undefined4 *)((int)puVar19 + iVar10 * 8 + 0x6c) = 0;
                      }
                    }
                    else if (*(int *)*pauVar37 == 1) {
                      if (*(int *)(local_110 + 0x28) != 0) {
                        pcVar7 = (cam_padding_info_t *)(DAT_0003ded4 + 0x3dbe2);
                        mm_camera_debug_log();
                      }
                    }
                    else {
                      switch(*(undefined4 *)(*pauVar37 + 0xc)) {
                      case 0x20:
                      case 0x24:
                      case 0x25:
                        *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44) = 8;
                        iVar10 = *(int *)(this + 0x260);
                        *(undefined4 *)(puVar19 + iVar10 + 0xd) = 0;
                        *(undefined4 *)((int)puVar19 + iVar10 * 8 + 0x6c) = 0;
                        bVar2 = true;
                        break;
                      case 0x21:
                        *(undefined4 *)(this + *(int *)(this + 0x260) * 4 + 0x264) = 3;
                        uVar30 = count_leading_zeroes((uint)(byte)this[0x15d]);
                        uVar21 = 0x100068e;
                        if ((uVar30 >> 5 & (local_170 ^ 1) | (uint)pQVar33) != 0) {
                          if (bVar40) {
                            pcVar7 = *(cam_padding_info_t **)(*pauVar37 + 8);
                            iVar10 = isOnEncoder(SUB41(pcVar7,0),(uint)pQVar26,uVar9);
                            uVar21 = local_144;
                            if (iVar10 != 0) goto LAB_0003dc98;
                          }
                          uVar21 = 0;
                        }
LAB_0003dc98:
                        iVar10 = *(int *)(this + 0x260);
                        *(undefined4 *)(this + iVar10 * 8 + 0x288) = uVar21;
                        *(undefined4 *)(this + iVar10 * 8 + 0x28c) = 0;
                        if (pQVar33 == (QCamera3Channel *)0x0) {
                          if (this[0x15d] == (QCamera3HardwareInterface)0x0) {
                            if (bVar39) {
                              *(uint *)(puVar19 + *(int *)(this + 0x260)) = local_16c;
                              *(cam_padding_info_t **)
                               ((int)puVar19 + *(int *)(this + 0x260) * 8 + 4) = local_168;
                            }
                          }
                          else {
                            *(uint *)(puVar19 + *(int *)(this + 0x260)) = local_150;
                            *(uint *)((int)puVar19 + *(int *)(this + 0x260) * 8 + 4) = local_13c;
                          }
                        }
                        else {
                          if (!bVar41) {
                            in_stack_fffffd1c = pQVar22;
                            if (*(int *)(local_110 + 0x20) == 0) goto LAB_0003d71a;
                            pcVar7 = (cam_padding_info_t *)(DAT_0003e7b8 + 0x3e792);
                            goto LAB_0003d716;
                          }
                          *(undefined4 *)(puVar19 + *(int *)(this + 0x260)) =
                               *(undefined4 *)(*local_118 + 4);
                          *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 8 + 4) =
                               *(undefined4 *)(*local_118 + 8);
                        }
                        break;
                      case 0x22:
                        iVar15 = *(int *)(this + 0x260);
                        *(undefined4 *)(puVar19 + iVar15 + 0xd) = 0x100068e;
                        *(undefined4 *)((int)puVar19 + iVar15 * 8 + 0x6c) = 0;
                        addToPPFeatureMask(this,0x22,*(uint *)(this + 0x260));
                        puVar16 = (undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44);
                        if (iVar10 << 0xf < 0) {
                          *puVar16 = 4;
                          if ((this[0x175] != (QCamera3HardwareInterface)0x0) &&
                             (this[0x178] != (QCamera3HardwareInterface)0x0)) {
                            *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) =
                                 *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) | 0x20000;
                            *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) =
                                 *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) & 0xfeffffff;
                          }
                        }
                        else {
                          *puVar16 = 1;
                          if ((this[0x175] != (QCamera3HardwareInterface)0x0) &&
                             (this[0x177] != (QCamera3HardwareInterface)0x0)) {
                            *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) =
                                 *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) | 0x20000;
                            *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) =
                                 *(uint *)(this + *(int *)(this + 0x260) * 8 + 0x288) & 0xfeffffff;
                          }
                          local_b0 = CONCAT44(2,*(undefined4 *)(this + 0x11790c));
                        }
                        if ((*(uint *)pauVar37[2] | 2) == 3) {
                          *(undefined4 *)(puVar19 + *(int *)(this + 0x260)) =
                               *(undefined4 *)(*pauVar37 + 8);
                          *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 8 + 4) =
                               *(undefined4 *)(*pauVar37 + 4);
                        }
                        break;
                      case 0x23:
                        *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44) = 5;
                        pcVar7 = *(cam_padding_info_t **)(*pauVar37 + 8);
                        iVar10 = isOnEncoder(SUB41(pcVar7,0),(uint)pQVar26,uVar9);
                        iVar15 = *(int *)(this + 0x260);
                        puVar28 = puVar19 + iVar15 + 0xd;
                        if (iVar10 == 0) {
                          *(undefined4 *)puVar28 = 0x100068e;
                          *(undefined4 *)((int)puVar19 + iVar15 * 8 + 0x6c) = 0;
                        }
                        else if (bVar40) {
                          *(undefined4 *)puVar28 = local_144;
                          *(undefined4 *)((int)puVar19 + iVar15 * 8 + 0x6c) = 0;
                        }
                        else {
                          *(undefined4 *)puVar28 = 0;
                          *(undefined4 *)((int)puVar19 + iVar15 * 8 + 0x6c) = 0;
                        }
                        break;
                      default:
                        *(undefined4 *)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44) = 0;
                        iVar10 = *(int *)(this + 0x260);
                        *(undefined4 *)(puVar19 + iVar10 + 0xd) = 0;
                        *(undefined4 *)((int)puVar19 + iVar10 * 8 + 0x6c) = 0;
                      }
                    }
                    setPAAFSupport(puVar19 + *(int *)(this + 0x260) + 0xd,
                                   *(cam_stream_type_t *)
                                    ((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44),
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 0x33d0));
                    if (*(int *)(pauVar37[1] + 8) == 0) {
                      pQVar20 = *(QCamera3Channel **)*pauVar37;
                      if (pQVar20 == (QCamera3Channel *)0x0) {
                        uVar30 = *(uint *)pauVar37[1];
                        if ((int)(uVar30 << 0xf) < 0) {
                          *(uint *)pauVar37[1] = uVar30 | 0x20022;
                        }
                        else if ((uVar30 & 0x60000) == 0x60000) {
                          if (*(int *)(local_110 + 0x2c) != 0) {
                            pcVar7 = (cam_padding_info_t *)(DAT_0003dedc + 0x3deb4);
                            goto LAB_0003defe;
                          }
                        }
                        else {
                          if ((pauVar37 == local_118) || (*(int *)(*pauVar37 + 0xc) == 0x23)) {
                            uVar30 = uVar30 | 0x60000;
                          }
                          else {
                            uVar30 = uVar30 | 0x20000;
                          }
                          *(uint *)pauVar37[1] = uVar30;
                        }
LAB_0003df32:
                        pQVar20 = *(QCamera3Channel **)*pauVar37;
LAB_0003df36:
                        in_stack_fffffd1c = pQVar22;
                        if (pQVar20 != (QCamera3Channel *)0x2) {
                          if (pQVar20 == (QCamera3Channel *)0x1) goto LAB_0003e0b8;
                          if (pQVar20 != (QCamera3Channel *)0x0) {
                            if (*(int *)(local_110 + 0x20) == 0) goto LAB_0003d71a;
                            pcVar7 = (cam_padding_info_t *)(DAT_0003e7c8 + 0x3e772);
LAB_0003d716:
                            mm_camera_debug_log();
                            in_stack_fffffd1c = pQVar22;
LAB_0003d71a:
                            pthread_mutex_unlock(local_164);
                            pQVar8 = (QCamera3Channel *)0xffffffea;
                            pcVar25 = extraout_r1_04;
                            goto LAB_0003cbb0;
                          }
                        }
LAB_0003df46:
                        pQVar22 = *(QCamera3Channel **)(*pauVar37 + 0xc);
                        switch(pQVar22) {
                        case (QCamera3Channel *)0x20:
                        case (QCamera3Channel *)0x24:
                        case (QCamera3Channel *)0x25:
                          this_03 = (QCamera3RawChannel *)operator_new(0x2ee8);
                          uVar30 = count_leading_zeroes(*(int *)(*pauVar37 + 0xc) + -0x20);
                          pcVar7 = local_140;
                          pQVar22 = local_138;
                          pQVar20 = (QCamera3Channel *)
                                    QCamera3RawChannel::QCamera3RawChannel
                                              (this_03,**(uint **)(this + 0x50),
                                               *(uint *)(this + 0xdc),
                                               (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                               (FuncDef14 *)local_140,(FuncDef15 *)local_138,
                                               (cam_padding_info_t *)&local_b0,this,
                                               (camera3_stream *)pauVar37,
                                               CONCAT44(*(undefined4 *)
                                                         (this + *(int *)(this + 0x260) * 8 + 0x288)
                                                        ,pvVar38),
                                               *(QCamera3Channel **)
                                                (this + *(int *)(this + 0x260) * 8 + 0x28c),
                                               SUB41(*(undefined4 *)(this + 0x78),0),uVar30 >> 5);
                          *(QCamera3Channel **)(this + 0x80) = pQVar20;
                          uVar21 = QCamera3Channel::getNumBuffers(pQVar20);
                          *(undefined4 *)(pauVar37[1] + 4) = uVar21;
                          *(undefined4 *)(pauVar37[1] + 8) = *(undefined4 *)(this + 0x80);
                          break;
                        case (QCamera3Channel *)0x21:
                          this_02 = (QCamera3PicChannel *)operator_new(0x2f08);
                          pcVar7 = local_140;
                          pQVar22 = local_138;
                          uVar21 = QCamera3PicChannel::QCamera3PicChannel
                                             (this_02,**(uint **)(this + 0x50),
                                              *(uint *)(this + 0xdc),
                                              (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                              (FuncDef18 *)local_140,(FuncDef19 *)local_138,
                                              (cam_padding_info_t *)&local_b0,this,
                                              (camera3_stream *)pauVar37,
                                              CONCAT44(*(undefined4 *)
                                                        (puVar19 + *(int *)(this + 0x260) + 0xd),
                                                       pvVar38),
                                              SUB41(*(undefined4 *)
                                                     ((int)puVar19 +
                                                     *(int *)(this + 0x260) * 8 + 0x6c),0),
                                              (bool)this[0x15d],pQVar33,*(uint *)(this + 0x78));
                          *(undefined4 *)(this + 0x7c) = uVar21;
                          *(undefined4 *)(pauVar37[1] + 8) = uVar21;
                          uVar21 = QCamera3Channel::getNumBuffers
                                             (*(QCamera3Channel **)(this + 0x7c));
                          *(undefined4 *)(pauVar37[1] + 4) = uVar21;
                          QCamera3PicChannel::overrideYuvSize
                                    (*(QCamera3PicChannel **)(this + 0x7c),
                                     *(uint *)(puVar19 + *(int *)(this + 0x260)),
                                     *(uint *)((int)puVar19 + *(int *)(this + 0x260) * 8 + 4));
                          break;
                        case (QCamera3Channel *)0x22:
                          if (((pauVar37[1][2] & 1) == 0) || (*(int *)(param_1 + 8) != 1)) {
                            if ((this[0x15c] == (QCamera3HardwareInterface)0x0) &&
                               (*(int *)(param_1 + 8) == 1)) {
                              auVar1 = *pauVar37;
                              uVar42 = *(undefined8 *)(pauVar37[2] + 8);
                              uVar43 = *(undefined8 *)pauVar37[1];
                              uVar44 = *(undefined8 *)(pauVar37[1] + 8);
                              uVar45 = *(undefined8 *)pauVar37[3];
                              uVar46 = *(undefined8 *)(pauVar37[3] + 8);
                              *(undefined8 *)(this + 0x1178a8) = *(undefined8 *)pauVar37[2];
                              *(undefined8 *)(this + 0x1178b0) = uVar42;
                              *(undefined8 *)(this + 0x117898) = uVar43;
                              *(undefined8 *)(this + 0x1178a0) = uVar44;
                              *(longlong *)(this + 0x117888) = SUB168(auVar1,0);
                              *(longlong *)(this + 0x117890) = SUB168(auVar1 >> 0x40,0);
                              *(undefined8 *)(this + 0x1178b8) = uVar45;
                              *(undefined8 *)(this + 0x1178c0) = uVar46;
                              *(uint *)(this + 0x117898) = *(uint *)(this + 0x117898) | 0x10000;
                            }
                            pQVar24 = (QCamera3RegularChannel *)operator_new(12000);
                            pvVar38 = *(void **)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44);
                            pcVar7 = local_140;
                            pQVar22 = local_138;
                            pQVar20 = (QCamera3Channel *)
                                      QCamera3RegularChannel::QCamera3RegularChannel
                                                (pQVar24,**(uint **)(this + 0x50),
                                                 *(uint *)(this + 0xdc),
                                                 (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                                 (FuncDef10 *)local_140,(FuncDef11 *)local_138,
                                                 (cam_padding_info_t *)
                                                 (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) +
                                                 0x2ff8),this,(camera3_stream *)pauVar37,
                                                 (cam_stream_type_t)pvVar38,
                                                 puVar19[*(int *)(this + 0x260) + 0xd],
                                                 *(QCamera3Channel **)(this + 0x78),6);
                            uVar21 = QCamera3Channel::getNumBuffers(pQVar20);
                            *(undefined4 *)(pauVar37[1] + 4) = uVar21;
                            *(QCamera3RegularChannel **)(pauVar37[1] + 8) = pQVar24;
                          }
                          else {
                            pQVar24 = (QCamera3RegularChannel *)operator_new(12000);
                            pvVar38 = *(void **)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44);
                            pcVar7 = local_140;
                            pQVar22 = local_138;
                            uVar21 = QCamera3RegularChannel::QCamera3RegularChannel
                                               (pQVar24,**(uint **)(this + 0x50),
                                                *(uint *)(this + 0xdc),
                                                (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                                (FuncDef10 *)local_140,(FuncDef11 *)local_138,
                                                (cam_padding_info_t *)
                                                (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) +
                                                0x2ff8),this,(camera3_stream *)pauVar37,
                                                (cam_stream_type_t)pvVar38,
                                                puVar19[*(int *)(this + 0x260) + 0xd],
                                                *(QCamera3Channel **)(this + 0x78),0);
                            *(undefined4 *)(pauVar37[1] + 4) = 0x30;
                            *(undefined4 *)(pauVar37[1] + 8) = uVar21;
                            if (*(int *)(local_110 + 0x34) != 0) {
                              pcVar7 = (cam_padding_info_t *)(DAT_0003da6c + 0x3da16);
                              pQVar22 = (QCamera3Channel *)0x30;
                              mm_camera_debug_log();
                            }
                          }
                          break;
                        case (QCamera3Channel *)0x23:
                          this_01 = (QCamera3YUVChannel *)operator_new(0x2f18);
                          pvVar38 = *(void **)((int)puVar19 + *(int *)(this + 0x260) * 4 + 0x44);
                          pcVar7 = local_140;
                          pQVar22 = local_138;
                          pQVar20 = (QCamera3Channel *)
                                    QCamera3YUVChannel::QCamera3YUVChannel
                                              (this_01,**(uint **)(this + 0x50),
                                               *(uint *)(this + 0xdc),
                                               (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                               (FuncDef16 *)local_140,(FuncDef17 *)local_138,
                                               (cam_padding_info_t *)&local_b0,this,
                                               (camera3_stream *)pauVar37,(cam_stream_type_t)pvVar38
                                               ,puVar19[*(int *)(this + 0x260) + 0xd],
                                               *(QCamera3Channel **)(this + 0x78));
                          uVar21 = QCamera3Channel::getNumBuffers(pQVar20);
                          *(undefined4 *)(pauVar37[1] + 4) = uVar21;
                          *(QCamera3YUVChannel **)(pauVar37[1] + 8) = this_01;
                          break;
                        default:
                          if (*(int *)(local_110 + 0x20) == 0) goto LAB_0003d71a;
                          pcVar7 = (cam_padding_info_t *)(DAT_0003e7c0 + 0x3e530);
                          goto LAB_0003d716;
                        }
                      }
                      else {
                        if (pQVar20 == (QCamera3Channel *)0x2) {
                          *(uint *)pauVar37[1] = *(uint *)pauVar37[1] | 0x60000;
                          in_stack_fffffd1c = pQVar22;
                          goto LAB_0003df46;
                        }
                        if (pQVar20 != (QCamera3Channel *)0x1) {
                          if (*(int *)(local_110 + 0x20) != 0) {
                            pcVar7 = (cam_padding_info_t *)(DAT_0003e1c4 + 0x3def0);
                            pQVar22 = pQVar20;
LAB_0003defe:
                            mm_camera_debug_log();
                            goto LAB_0003df32;
                          }
                          goto LAB_0003df36;
                        }
                        *(uint *)pauVar37[1] = *(uint *)pauVar37[1] | 0x60000;
LAB_0003e0b8:
                        *(undefined4 *)(pauVar37[1] + 4) = 1;
                      }
                      pQVar20 = *(QCamera3Channel **)(pauVar37[1] + 8);
                      if (((pQVar20 != (QCamera3Channel *)0x0) &&
                          (iVar10 = QCamera3Channel::isUBWCEnabled(), iVar10 != 0)) &&
                         (iVar10 = QCamera3Channel::getStreamDefaultFormat
                                             (pQVar20,*(cam_stream_type_t *)
                                                       (this + *(int *)(this + 0x260) * 4 + 0x264)),
                         iVar10 == 0x66)) {
                        *(uint *)pauVar37[1] = *(uint *)pauVar37[1] | 0x10000000;
                      }
                      android::List<unsigned_int>::begin();
                      android::List<qcamera::ReprocessBuffer>::end();
                      iVar10 = android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                             *)&local_100,(_ListIterator *)&local_c8);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_c8);
                      while (iVar10 != 0) {
                        puVar16 = (undefined4 *)
                                  android::List<unsigned_int>::
                                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                  ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                               *)&local_100);
                        if (*(undefined (**) [16])*puVar16 == pauVar37) {
                          uVar21 = *(undefined4 *)(pauVar37[1] + 8);
                          piVar12 = (int *)android::List<unsigned_int>::
                                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                           ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_100);
                          *(undefined4 *)(*piVar12 + 0x18) = uVar21;
                          break;
                        }
                        android::List<unsigned_int>::
                        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                        ::operator__(a_Stack260,(int)&local_100);
                        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                  ((AbstractUnwindCursor *)a_Stack260);
                        android::List<qcamera::ReprocessBuffer>::end();
                        iVar10 = android::List<qcamera::ReprocessBuffer>::
                                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                               *)&local_100,(_ListIterator *)&local_c8);
                        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                  ((AbstractUnwindCursor *)&local_c8);
                      }
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_100);
                    }
                    iVar10 = *(int *)(local_158 + *(int *)(this + 0x4c) * 4);
                    uStack156 = *(undefined8 *)(iVar10 + 0x300c);
                    local_b0 = SUB168(*(undefined (*) [16])(iVar10 + 0x2ff8),0);
                    uStack168 = SUB164(*(undefined (*) [16])(iVar10 + 0x2ff8) >> 0x40,0);
                    local_a4 = (undefined4)*(undefined8 *)(iVar10 + 0x3004);
                    uStack160 = (undefined4)((ulonglong)*(undefined8 *)(iVar10 + 0x3004) >> 0x20);
                    if (*(int *)*pauVar37 != 1) {
                      *(int *)(this + 0x260) = *(int *)(this + 0x260) + 1;
                    }
                    uVar27 = uVar27 + 1;
                    if (*(uint *)param_1 <= uVar27) goto LAB_0003e1d0;
                    goto LAB_0003db3c;
                  }
                  bVar2 = false;
LAB_0003e1d0:
                  if ((!bVar2) && (this[0x143] != (QCamera3HardwareInterface)0x0)) {
                    getMaxRawSize((uint)&local_100);
                    uVar3 = local_100;
                    pcVar7 = (cam_padding_info_t *)local_100;
                    pQVar22 = (QCamera3Channel *)local_100._4_4_;
                    local_100 = 0;
                    setPAAFSupport(&local_100,8,
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 0x33d0));
                    this_04 = (QCamera3RawDumpChannel *)operator_new(0xa0);
                    uVar21 = QCamera3RawDumpChannel::QCamera3RawDumpChannel
                                       (this_04,**(uint **)(this + 0x50),*(uint *)(this + 0xdc),
                                        (mm_camera_ops_t *)(*(uint **)(this + 0x50))[1],
                                        SUB81(uVar3,0),(cam_padding_info_t *)pQVar22,&local_b0,
                                        CONCAT44((cam_padding_info_t *)local_100,this),
                                        (uint)local_100._4_4_);
                    *(undefined4 *)(this + 0x8c) = uVar21;
                  }
                  if (*(int *)(this + 0x88) != 0) {
                    local_100 = 0;
                    uStack248 = 0;
                    local_d0 = 0;
                    local_e0 = 0;
                    local_d8 = 0;
                    local_f0 = 0;
                    uStack232 = 0;
                    *(undefined4 *)(this + *(int *)(this + 0x260) * 4 + 0x264) = 0xb;
                    iVar10 = *(int *)(this + 0x260);
                    *(undefined4 *)(this + iVar10 * 8 + 0x288) = 0x100068e;
                    *(undefined4 *)(this + iVar10 * 8 + 0x28c) = 0;
                    setPAAFSupport((ulonglong *)(this + *(int *)(this + 0x260) * 8 + 0x288),
                                   *(cam_stream_type_t *)(this + *(int *)(this + 0x260) * 4 + 0x264)
                                   ,*(cam_color_filter_arrangement_t *)
                                     (*(int *)(local_158 + *(int *)(this + 0x4c) * 4) + 0x33d0));
                    pcVar7 = *(cam_padding_info_t **)(this + *(int *)(this + 0x260) * 8 + 0x288);
                    pQVar22 = *(QCamera3Channel **)(this + *(int *)(this + 0x260) * 8 + 0x28c);
                    pQVar8 = (QCamera3Channel *)
                             QCameraCommon::getAnalysisInfo
                                       (SUB41(local_160,0),false,CONCAT44(pQVar22,pcVar7),
                                        (cam_analysis_info_t *)0x1);
                    if (pQVar8 != (QCamera3Channel *)0x0) {
                      if (*(int *)(local_110 + 0x20) != 0) {
                        pcVar7 = (cam_padding_info_t *)(DAT_0003e544 + 0x3e2e0);
                        pQVar22 = pQVar8;
                        mm_camera_debug_log();
                      }
                      goto LAB_0003e754;
                    }
                    iVar10 = *(int *)(this + 0x260);
                    *(cam_padding_info_t **)(this + iVar10 * 8 + 0x220) = local_100._4_4_;
                    *(undefined4 *)(this + iVar10 * 8 + 0x224) = (undefined4)uStack248;
                    *(int *)(this + 0x260) = *(int *)(this + 0x260) + 1;
                    pQVar8 = (QCamera3Channel *)0x0;
                  }
                  iVar10 = 0x160;
                  local_120 = this;
                  local_114 = puVar19;
                  do {
                    puVar19 = puVar19 + 1;
                    *puVar29 = *puVar19;
                    puVar29 = puVar29 + 1;
                    iVar10 = iVar10 + -8;
                  } while (iVar10 != 0);
                  iVar10 = isSupportChannelNeeded
                                     ((camera3_stream_configuration *)local_114,
                                      (cam_stream_size_info_t)param_1);
                  if (iVar10 == 0) {
                    if (*(int *)(local_120 + 0x84) != 0) goto LAB_0003e432;
                  }
                  else {
                    local_100 = 0;
                    uStack248 = 0;
                    local_d0 = 0;
                    local_e0 = 0;
                    local_d8 = 0;
                    local_f0 = 0;
                    uStack232 = 0;
                    local_c8._4_4_ = (QCamera3Channel *)0x0;
                    local_c8._0_4_ = (cam_padding_info_t *)0x100068e;
                    setPAAFSupport(&local_c8,5,
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) + 0x33d0))
                    ;
                    pQVar26 = local_c8._4_4_;
                    pcVar32 = (cam_padding_info_t *)local_c8;
                    pQVar22 = local_c8._4_4_;
                    pQVar33 = (QCamera3Channel *)
                              QCameraCommon::getAnalysisInfo
                                        (SUB41(local_160,0),false,
                                         CONCAT44(local_c8._4_4_,(cam_padding_info_t *)local_c8),
                                         (cam_analysis_info_t *)0x1);
                    if (pQVar33 != (QCamera3Channel *)0x0) {
                      iVar10 = *(int *)(*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) +
                                       0x33d0);
                      bVar40 = iVar10 != 7;
                      if (bVar40) {
                        iVar10 = *(int *)(local_110 + 0x24);
                      }
                      if (bVar40 && iVar10 != 0) {
                        mm_camera_debug_log();
                        pQVar22 = pQVar33;
                      }
                    }
                    pQVar23 = (QCamera3SupportChannel *)operator_new(0xa8);
                    iVar10 = *(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4);
                    pcVar7 = (cam_padding_info_t *)(iVar10 + 0x2ff8);
                    uVar21 = QCamera3SupportChannel::QCamera3SupportChannel
                                       (pQVar23,**(uint **)(local_120 + 0x50),
                                        *(uint *)(local_120 + 0xdc),
                                        (mm_camera_ops_t *)(*(uint **)(local_120 + 0x50))[1],pcVar7,
                                        CONCAT44(pcVar32,pQVar22),(cam_stream_type_t)pQVar26,
                                        (cam_dimension_t *)0x5,
                                        *(cam_format_t *)(DAT_0003e7d0 + 0x3e40c),'\x02',
                                        (uint)local_100._1_1_,*(void **)(iVar10 + 0x33d0),
                                        (uint)local_120);
                    *(undefined4 *)(local_120 + 0x84) = uVar21;
LAB_0003e432:
                    iVar10 = *(int *)(local_120 + 0x260);
                    uVar21 = (*(undefined4 **)(DAT_0003e7d4 + 0x3e440))[1];
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x220) =
                         **(undefined4 **)(DAT_0003e7d4 + 0x3e440);
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x224) = uVar21;
                    *(undefined4 *)(local_120 + *(int *)(local_120 + 0x260) * 4 + 0x264) = 5;
                    iVar10 = *(int *)(local_120 + 0x260);
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x288) = 0x100068e;
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x28c) = 0;
                    setPAAFSupport((ulonglong *)
                                   (local_120 + *(int *)(local_120 + 0x260) * 8 + 0x288),
                                   *(cam_stream_type_t *)
                                    (local_120 + *(int *)(local_120 + 0x260) * 4 + 0x264),
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) + 0x33d0))
                    ;
                    *(int *)(local_120 + 0x260) = *(int *)(local_120 + 0x260) + 1;
                  }
                  if (*(int *)(local_120 + 0x8c) != 0) {
                    getMaxRawSize((uint)&local_100);
                    iVar10 = *(int *)(local_120 + 0x260);
                    *(cam_padding_info_t **)(local_120 + iVar10 * 8 + 0x220) =
                         (cam_padding_info_t *)local_100;
                    *(cam_padding_info_t **)(local_120 + iVar10 * 8 + 0x224) = local_100._4_4_;
                    *(undefined4 *)(local_120 + *(int *)(local_120 + 0x260) * 4 + 0x264) = 8;
                    iVar10 = *(int *)(local_120 + 0x260);
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x288) = 0;
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x28c) = 0;
                    setPAAFSupport((ulonglong *)
                                   (local_120 + *(int *)(local_120 + 0x260) * 8 + 0x288),
                                   *(cam_stream_type_t *)
                                    (local_120 + *(int *)(local_120 + 0x260) * 4 + 0x264),
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) + 0x33d0))
                    ;
                    *(int *)(local_120 + 0x260) = *(int *)(local_120 + 0x260) + 1;
                  }
                  if ((*local_14c == (QCamera3HardwareInterface)0x1) &&
                     (local_120[0x15c] == (QCamera3HardwareInterface)0x0)) {
                    local_100 = 0x100068e;
                    setPAAFSupport(&local_100,4,
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) + 0x33d0))
                    ;
                    pQVar24 = (QCamera3RegularChannel *)operator_new(12000);
                    uVar21 = QCamera3RegularChannel::QCamera3RegularChannel
                                       (pQVar24,**(uint **)(local_120 + 0x50),
                                        *(uint *)(local_120 + 0xdc),
                                        (mm_camera_ops_t *)(*(uint **)(local_120 + 0x50))[1],
                                        (FuncDef10 *)local_140,(FuncDef11 *)local_138,
                                        (cam_padding_info_t *)
                                        (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) +
                                        0x2ff8),local_120,(camera3_stream *)(local_120 + 0x117888),4
                                        ,local_100,*(QCamera3Channel **)(local_120 + 0x78),6);
                    *(undefined4 *)(local_120 + 0x90) = uVar21;
LAB_0003e5d4:
                    *(undefined4 *)(local_114 + *(int *)(local_120 + 0x260)) =
                         *(undefined4 *)(local_120 + 0x11788c);
                    iVar10 = *(int *)(local_120 + 0x260);
                    *(undefined4 *)((int)local_114 + iVar10 * 8 + 4) =
                         *(undefined4 *)(local_120 + 0x117890);
                    *(undefined4 *)(local_120 + iVar10 * 4 + 0x264) = 4;
                    iVar10 = *(int *)(local_120 + 0x260);
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x288) = 0x100068e;
                    *(undefined4 *)(local_120 + iVar10 * 8 + 0x28c) = 0;
                    setPAAFSupport((ulonglong *)
                                   (local_120 + *(int *)(local_120 + 0x260) * 8 + 0x288),
                                   *(cam_stream_type_t *)
                                    (local_120 + *(int *)(local_120 + 0x260) * 4 + 0x264),
                                   *(cam_color_filter_arrangement_t *)
                                    (*(int *)(local_158 + *(int *)(local_120 + 0x4c) * 4) + 0x33d0))
                    ;
                    *(int *)(local_120 + 0x260) = *(int *)(local_120 + 0x260) + 1;
                    pcVar7 = local_140;
                    pQVar22 = local_138;
                  }
                  else {
                    local_140 = pcVar7;
                    local_138 = pQVar22;
                    if (*(int *)(local_120 + 0x90) != 0) goto LAB_0003e5d4;
                  }
                  uVar21 = 0;
                  if (local_120[0x15d] == (QCamera3HardwareInterface)0x0) {
                    uVar21 = 6;
                  }
                  *(undefined4 *)(local_120 + 0x2c8) = 3;
                  *(undefined4 *)(local_120 + 0x2cc) = uVar21;
                  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
                  android::List<qcamera::ReprocessBuffer>::end();
                  iVar10 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                         *)&local_100,(_ListIterator *)&local_c8);
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)&local_c8);
                  if (iVar10 != 0) {
                    do {
                      android::List<unsigned_int>::_Node::_Node(a_Stack264,(uint *)&local_100);
                      erasePendingRequest((_ListIterator)&local_c8);
                      local_100 = local_100 & 0xffffffff00000000 |
                                  ZEXT48((cam_padding_info_t *)local_c8);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_c8);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)a_Stack264);
                      android::List<qcamera::ReprocessBuffer>::end();
                      iVar10 = android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                             *)&local_100,(_ListIterator *)&local_c8);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_c8);
                    } while (iVar10 != 0);
                  }
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)&local_100);
                  android::List<qcamera::ReprocessBuffer>::clear
                            ((List_qcamera__ReprocessBuffer_ *)(local_120 + 0x1a0));
                  android::List<qcamera::PendingBuffersInRequest>::begin();
                  android::List<qcamera::ReprocessBuffer>::end();
                  iVar10 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                         *)&local_100,(_ListIterator *)&local_c8);
                  if (iVar10 != 0) {
                    do {
                      iVar10 = android::List<unsigned_int>::
                               _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                               ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                            *)&local_100);
                      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
                                ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)
                                 (iVar10 + 0x10));
                      android::List<qcamera::PendingBuffersInRequest>::
                      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                                    *)&local_100);
                      iVar10 = android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                             *)&local_100,(_ListIterator *)&local_c8);
                    } while (iVar10 != 0);
                  }
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)&local_c8);
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)&local_100);
                  android::List<qcamera::PendingBuffersInRequest>::clear
                            ((List_qcamera__PendingBuffersInRequest_ *)(local_120 + 0x204));
                  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::clear
                            ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)
                             (local_120 + 400));
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::clear
                            ((CameraMetadata *)(local_120 + 0x154));
                  deriveMinFrameDuration(local_120);
                  *(undefined4 *)(local_14c + 0x90) = 3;
                }
LAB_0003e754:
                pthread_mutex_unlock(local_164);
                pcVar25 = extraout_r1_06;
                in_stack_fffffd1c = pQVar22;
                goto LAB_0003cbb0;
              }
              __android_log_print();
            }
            else if (*(int *)(local_110 + 0x20) != 0) {
              pcVar7 = (cam_padding_info_t *)(DAT_0003d5b8 + 0x3d34c);
              goto LAB_0003d358;
            }
          }
          else if (*(int *)(local_110 + 0x20) != 0) {
            pcVar7 = (cam_padding_info_t *)(DAT_0003d5a8 + 0x3d2f8);
            goto LAB_0003d358;
          }
        }
        else if (*(int *)(local_110 + 0x20) != 0) {
          pcVar7 = (cam_padding_info_t *)(DAT_0003d598 + 0x3d2b0);
          goto LAB_0003d358;
        }
      }
      else if (*(int *)(local_110 + 0x20) != 0) {
        pcVar7 = (cam_padding_info_t *)(DAT_0003d5a0 + 0x3d2cc);
        in_stack_fffffd1c = (QCamera3Channel *)local_140;
LAB_0003d358:
        mm_camera_debug_log();
      }
      pthread_mutex_unlock(local_164);
      pcVar25 = extraout_r1_02;
    }
    else {
      pcVar25 = *(char **)(*(int *)(DAT_0003ce18 + 0x3cb30) + 0x20);
      if (pcVar25 != (char *)0x0) {
        pcVar7 = (cam_padding_info_t *)(DAT_0003ce1c + 0x3cb3c);
        in_stack_fffffd1c = (QCamera3Channel *)0x8;
        goto LAB_0003cba8;
      }
    }
  }
  pQVar8 = (QCamera3Channel *)0xffffffea;
LAB_0003cbb0:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack144,CONCAT44(in_stack_fffffd1c,pcVar7),pcVar25);
  if (*local_174 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pQVar8;
}

