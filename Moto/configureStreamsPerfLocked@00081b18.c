
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: %0x00000384 : 0x00082c6e */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCamera3HardwareInterface::configureStreamsPerfLocked(camera3_stream_configuration*) */

int __thiscall
qcamera::QCamera3HardwareInterface::configureStreamsPerfLocked
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code cVar3;
  uint uVar4;
  QCamera3HardwareInterface QVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  QCamera3MetadataChannel *this_00;
  code *pcVar9;
  CameraMetadata *this_01;
  QCamera3RawChannel *this_02;
  QCamera3PicChannel *this_03;
  QCamera3YUVChannel *this_04;
  int iVar10;
  QCamera3RawDumpChannel *this_05;
  QCamera3SupportChannel *pQVar11;
  QCamera3RegularChannel *pQVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint **ppuVar17;
  code *pcVar18;
  FuncDef73 *pFVar19;
  FuncDef73 **ppFVar20;
  undefined4 *puVar21;
  void *pvVar22;
  void *pvVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined (*pauVar28) [16];
  FuncDef73 *pFVar29;
  ulonglong *puVar30;
  undefined4 uVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  mm_camera_ops_t *pmVar35;
  int **ppiVar36;
  void *pvVar37;
  int *piVar38;
  pthread_mutex_t *__mutex;
  FuncDef73 **ppFVar39;
  uint *puVar40;
  uint uVar41;
  QCamera3Channel *this_06;
  void *pvVar42;
  uint uVar43;
  uint *puVar44;
  int iVar45;
  int iVar46;
  int **ppiVar47;
  cam_stream_type_t cVar48;
  FuncDef73 *pFVar49;
  int iVar50;
  QCamera3HardwareInterface *pQVar51;
  uint uVar52;
  pthread_mutex_t *__mutex_00;
  uint uVar53;
  FuncDef73 *pFVar54;
  uint *puVar55;
  FuncDef73 **ppFVar56;
  undefined *puVar57;
  ulonglong *puVar58;
  undefined *puVar59;
  FuncDef73 **ppFVar60;
  ulonglong *puVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  undefined4 *puVar65;
  longlong lVar66;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  cam_stream_type_t cVar70;
  uint in_stack_fffffd04;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  int local_290;
  uint local_284;
  uint local_27c;
  uint local_278;
  uint local_26c;
  uint local_268;
  uint *local_264;
  uint local_260;
  byte bStack591;
  undefined auStack588 [8];
  cam_padding_info_t local_244 [28];
  int local_228;
  undefined4 local_218;
  undefined4 uStack532;
  undefined8 local_20c;
  undefined8 uStack516;
  int local_1ac [9];
  uint local_188 [64];
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
  
  puVar57 = &stack0xfffffcf8;
  puVar61 = (ulonglong *)&stack0xfffffcf8;
  puVar58 = (ulonglong *)&stack0xfffffcf8;
  ppFVar56 = (FuncDef73 **)&stack0xfffffcf8;
  ppFVar60 = (FuncDef73 **)&stack0xfffffcf8;
  puVar59 = &stack0xfffffcf8;
  piVar38 = *(int **)(DAT_00081eb0 + 0x81b2a);
  local_28 = *piVar38;
  puVar40 = *(uint **)(DAT_00081eb4 + 0x81b34);
  if (*puVar40 < 2) {
LAB_00081b58:
    if (param_1 != (camera3_stream_configuration *)0x0) goto LAB_00081b5e;
LAB_0008276c:
    if (*(int *)(*(int *)(DAT_00082a44 + 0x82772) + 0x20) != 0) {
      uVar31 = 0x6f8;
      iVar24 = DAT_00082a4c + 0x8278a;
      goto LAB_00082788;
    }
  }
  else {
    if ((**(byte **)(DAT_00081eb8 + 0x81b40) & 1) == 0) {
      atrace_setup();
    }
    if (-1 < (int)((uint)*(byte *)(*(int *)(DAT_00081ebc + 0x81b50) + 1) << 0x1d))
    goto LAB_00081b58;
    atrace_begin_body(DAT_00082a40 + 0x82764);
    if (param_1 == (camera3_stream_configuration *)0x0) goto LAB_0008276c;
LAB_00081b5e:
    if (*(int *)(param_1 + 4) != 0) {
      if (*(uint *)param_1 == 0) {
        if (*(int *)(*(int *)(DAT_00081ed8 + 0x81bbe) + 0x20) != 0) {
          uVar31 = 0x702;
          iVar24 = DAT_00081ee0 + 0x81bde;
          goto LAB_00082788;
        }
        goto LAB_0008278c;
      }
      if (7 < *(uint *)param_1) {
        if (*(int *)(*(int *)(DAT_00081ec0 + 0x81b70) + 0x20) != 0) {
          uVar31 = 0x708;
          iVar24 = DAT_00081ec8 + 0x81b92;
          goto LAB_00082788;
        }
        goto LAB_0008278c;
      }
      pQVar51 = this + 0x117f28;
      *pQVar51 = SUB41(*(undefined4 *)(param_1 + 8),0);
      iVar24 = *(int *)(DAT_00081ee4 + 0x81bf8);
      if (*(int *)(iVar24 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00081eec + 0x81c16,0x70d);
      }
      this[0x118011] = (QCamera3HardwareInterface)0x0;
      this[0x118014] = (QCamera3HardwareInterface)0x0;
      this[0x118012] = (QCamera3HardwareInterface)0x0;
      this[0x118016] = (QCamera3HardwareInterface)0x1;
      if (this + 0x118018 == (QCamera3HardwareInterface *)param_1) {
        if (*(int *)param_1 != 0) {
          uVar14 = 0;
          do {
            iVar45 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + iVar45) + 0x18) = 0;
          } while (uVar14 < *(uint *)param_1);
        }
      }
      else {
        auVar67 = *(undefined (*) [16])param_1;
        *(longlong *)(this + 0x118018) = SUB168(auVar67,0);
        *(longlong *)(this + 0x118020) = SUB168(auVar67 >> 0x40,0);
        pvVar6 = malloc(*(int *)param_1 << 2);
        *(void **)(this + 0x11801c) = pvVar6;
        __aeabi_memcpy8(pvVar6,*(void **)(param_1 + 4),*(int *)param_1 << 2);
      }
      ppiVar36 = (int **)(*(int ***)(this + 0x3fc))[2];
      if (ppiVar36 != *(int ***)(this + 0x3fc)) {
        do {
          piVar13 = *ppiVar36;
          if (*(int **)(*piVar13 + 0x18) != (int *)0x0) {
            (**(code **)(**(int **)(*piVar13 + 0x18) + 0x10))();
            piVar13 = *ppiVar36;
          }
          piVar13[4] = 0;
          ppiVar36 = (int **)ppiVar36[2];
        } while (ppiVar36 != *(int ***)(this + 0x3fc));
      }
      if (*(int **)(this + 0xa0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xa0) + 0x10))();
      }
      if (*(int **)(this + 0x98) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x98) + 0x10))();
      }
      if (*(int **)(this + 0x9c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x9c) + 0x10))();
      }
      if (*(int **)(this + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x8c) + 0x10))();
      }
      if ((*(int *)(this + 0xf4) != 0) &&
         ((**(code **)((*(undefined4 **)(this + 100))[1] + 0x68))(**(undefined4 **)(this + 100)),
         *(int *)(iVar24 + 0x2c) != 0)) {
        mm_camera_debug_log(1,4,DAT_00081ef4 + 0x81d22,0x742);
      }
      __mutex_00 = (pthread_mutex_t *)(this + 0x3f0);
      pthread_mutex_lock(__mutex_00);
      if (2 < *(int *)(this + 0x117fd8) - 2U) {
        if (*(int *)(iVar24 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_00081f00 + 0x81de4,0x74f);
        }
        pthread_mutex_unlock(__mutex_00);
        iVar45 = -0x13;
        goto LAB_00082790;
      }
      this[0x1dd] = (QCamera3HardwareInterface)0x0;
      this[0x1c6] = (QCamera3HardwareInterface)0x0;
      this[0x14] = (QCamera3HardwareInterface)0x0;
      *(undefined2 *)(this + 0x1c4) = 0;
      iVar32 = *(int *)(DAT_00081ef8 + 0x81d58);
      iVar45 = *(int *)(iVar32 + *(int *)(this + 0x60) * 4);
      uVar14 = *(uint *)(iVar45 + 0x3eb8);
      uVar15 = *(uint *)(iVar45 + 0x3ebc);
      local_218 = *(undefined4 *)(iVar45 + 0x3008);
      uStack532 = *(undefined4 *)(iVar45 + 0x300c);
      local_20c = SUB168(*(undefined (*) [16])(iVar45 + 0x3014),0);
      uStack516 = SUB168(*(undefined (*) [16])(iVar45 + 0x3014) >> 0x40,0);
      *(undefined8 *)(this + 0x1cc) = 0;
      *(undefined8 *)(this + 0x1d4) = 0;
      iVar45 = *(int *)(iVar32 + *(int *)(this + 0x60) * 4);
      uVar25 = (uint)*(byte *)(iVar45 + 0x3f6d);
      if (5 < uVar25) {
        uVar25 = 6;
      }
      if (uVar25 != 0) {
        uVar43 = 0;
        do {
          if ((*(uint *)(iVar45 + 0x3f70 + uVar43 * 4) & 0xfffffffe) == 4) {
            this[0x1c8] = (QCamera3HardwareInterface)0x1;
            iVar45 = *(int *)(iVar32 + *(int *)(this + 0x60) * 4);
            break;
          }
          uVar43 = uVar43 + 1;
        } while (uVar43 < uVar25);
      }
      uVar25 = (uint)*(byte *)(iVar45 + 0x304b);
      if (1 < uVar25) {
        uVar25 = 2;
      }
      if (uVar25 != 0) {
        uVar43 = 0;
        do {
          if (*(char *)(iVar45 + 0x3049 + uVar43) == '\x01') {
            bVar63 = true;
            goto LAB_00081e2c;
          }
          uVar43 = uVar43 + 1;
        } while (uVar43 < uVar25);
      }
      bVar63 = false;
LAB_00081e2c:
      uVar43 = (uint)(byte)this[0x1c8];
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
      property_get(DAT_00081f04 + 0x81e6c,&local_88,DAT_00081f08 + 0x81e6e);
      uVar25 = uVar43;
      if (uVar43 != 0) {
        uVar25 = 0x780;
        uVar43 = 0x438;
      }
      uVar7 = atoi((char *)&local_88);
      QVar5 = (QCamera3HardwareInterface)0x0;
      if ((!bVar63) && ((uVar7 & 0xff) != 0)) {
        if (this[0x1c8] == (QCamera3HardwareInterface)0x0) {
          QVar5 = (QCamera3HardwareInterface)0x0;
        }
        else {
          iVar45 = (byte)*pQVar51 - 1;
          if (iVar45 != 0) {
            iVar45 = 1;
          }
          QVar5 = SUB41(iVar45,0);
        }
      }
      this[0x1c7] = QVar5;
      if (*(int *)(iVar24 + 0x2c) != 0) {
        in_stack_fffffd04 = (uint)(byte)this[0x1c8];
        mm_camera_debug_log(1,4,DAT_00082268 + 0x81f3c,0x7a3);
      }
      if (*(int *)param_1 == 0) {
        uVar7 = 0;
        uVar41 = 0;
        puVar55 = (uint *)0x0;
        uVar52 = 0;
        local_29c = 0;
        local_260 = 0;
        local_2a4 = 0;
        local_2a0 = 0;
        local_290 = 0;
        local_26c = 0;
        local_264 = (uint *)0x0;
        local_284 = 0;
        local_268 = 0;
        local_278 = 0;
        local_27c = 0;
      }
      else {
        uVar52 = 0;
        puVar55 = (uint *)0x0;
        uVar41 = 0;
        uVar7 = 0;
        uVar53 = 0;
        local_27c = 0;
        local_278 = 0;
        local_268 = 0;
        local_284 = 0;
        local_264 = (uint *)0x0;
        local_26c = 0;
        local_290 = 0;
        local_2a0 = 0;
        local_2a4 = 0;
        local_260 = 0;
        local_29c = 0;
        do {
          puVar44 = *(uint **)(*(int *)(param_1 + 4) + uVar53 * 4);
          if (*(int *)(iVar24 + 0x34) != 0) {
            in_stack_fffffd04 = puVar44[3];
            mm_camera_debug_log(1,6,DAT_00082270 + 0x81fe8,0x7ac);
          }
          if (((this[0x1c5] != (QCamera3HardwareInterface)0x0) && (puVar44[3] == 0x21)) &&
             ((0xf00 < puVar44[1] || (0x870 < puVar44[2])))) {
            puVar44[1] = 0xf00;
            puVar44[2] = 0x870;
            if (*(int *)(iVar24 + 0x24) != 0) {
              mm_camera_debug_log(1,2,DAT_00082278 + 0x8202c,0x7b2);
            }
          }
          uVar8 = *puVar44;
          if (uVar8 == 1) {
            puVar55 = puVar44;
          }
          uVar26 = uVar8 - 1;
          if (puVar44[3] == 0x22) {
            if ((*(byte *)((int)puVar44 + 0x12) & 1) != 0) {
              this[0x1c4] = (QCamera3HardwareInterface)0x1;
              local_27c = puVar44[1];
              local_278 = puVar44[2];
              if ((0xe < local_27c >> 8) || (uVar8 = local_27c, 0x86f < local_278)) {
                this[0x14] = (QCamera3HardwareInterface)0x1;
                this[0x1c5] = (QCamera3HardwareInterface)0x1;
                uVar8 = puVar44[1];
              }
              if (uVar25 < uVar8) {
                QVar5 = (QCamera3HardwareInterface)0x0;
              }
              else {
                QVar5 = (QCamera3HardwareInterface)0x0;
                if (puVar44[2] <= uVar43) {
                  QVar5 = (QCamera3HardwareInterface)0x1;
                }
              }
              this[0x1c6] = QVar5;
              uVar8 = *puVar44;
            }
          }
          else if (puVar44[3] == 0x21) {
            uVar7 = puVar44[1];
            uVar41 = puVar44[2];
            local_260 = local_260 | (0x870 < uVar41 || 0xf00 < uVar7);
          }
          uVar4 = (uint)local_264;
          if ((uVar8 | 2) != 2) goto LAB_00082248;
          switch(puVar44[3]) {
          case 0x20:
          case 0x24:
          case 0x25:
            local_268 = local_268 + 1;
            break;
          case 0x21:
            uVar8 = puVar44[1];
            uVar16 = puVar44[2];
            if (((uVar14 < uVar8) || (0x870 < uVar16)) || ((0xf00 < uVar8 || (uVar15 < uVar16)))) {
              local_26c = local_26c + 1;
              local_29c = 1;
            }
            iVar45 = *(int *)(iVar32 + *(int *)(this + 0x60) * 4);
            uVar27 = (uint)*(byte *)(iVar45 + 0x2ae4);
            if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              __android_log_assert
                        (DAT_00083f08 + 0x83ece,DAT_00083f0c + 0x83ed0,DAT_00083f10 + 0x83ed2);
            }
            local_284 = local_284 + 1;
            if (((uVar27 < ((*(int *)(iVar45 + 0x3424) + uVar16) - 1) / uVar16) ||
                (uVar27 < ((*(int *)(iVar45 + 0x3420) + uVar8) - 1) / uVar8)) &&
               (*(int *)(iVar24 + 0x28) != 0)) {
              mm_camera_debug_log(1,3,DAT_00082280 + 0x821fc,0x7ed);
            }
            break;
          case 0x22:
            uVar8 = puVar44[1];
            if (uVar8 <= uVar14) {
              uVar16 = puVar44[2];
joined_r0x0008221e:
              if (((uVar16 < 0x871) && (uVar8 < 0xf01)) &&
                 (uVar4 = (int)local_264 + 1, uVar16 <= uVar15)) break;
            }
            goto LAB_00082184;
          case 0x23:
            uVar8 = puVar44[1];
            uVar16 = puVar44[2];
            uVar4 = (int)local_264 + 1;
            if ((((uVar14 < uVar8) || (0x870 < uVar16)) || (0xf00 < uVar8)) || (uVar15 < uVar16)) {
              local_290 = local_290 + 1;
              local_26c = local_26c + 1;
              local_2a4 = uVar8;
              local_2a0 = uVar16;
            }
            break;
          default:
            uVar8 = puVar44[1];
            if (uVar8 <= uVar14) {
              uVar16 = puVar44[2];
              goto joined_r0x0008221e;
            }
LAB_00082184:
            local_264 = (uint *)((int)local_264 + 1);
            local_26c = local_26c + 1;
            uVar4 = (uint)local_264;
          }
LAB_00082248:
          local_264 = (uint *)uVar4;
          uVar53 = uVar53 + 1;
          uVar52 = uVar52 | uVar26 < 2;
        } while (uVar53 < *(uint *)param_1);
      }
      if (((*(uint *)(*(int *)(iVar32 + *(int *)(this + 0x60) * 4) + 4) | 2) == 3) ||
         (this[0x1c4] == (QCamera3HardwareInterface)0x0)) {
        this[0x1c7] = (QCamera3HardwareInterface)0x0;
      }
      if (((((this[0x1df] != (QCamera3HardwareInterface)0x0) ||
            (this[0x1e0] != (QCamera3HardwareInterface)0x0)) &&
           (this[0x1c4] != (QCamera3HardwareInterface)0x0)) &&
          (((local_278 == 0x438 && (local_27c == 0x780)) ||
           ((local_278 == 0x2d0 && (local_27c == 0x500)))))) &&
         (*pQVar51 != (QCamera3HardwareInterface)0x1)) {
        this[0x1dd] = (QCamera3HardwareInterface)0x1;
      }
      if ((local_264 < 4) && ((local_284 | local_268) < 2)) {
        if ((uVar52 != 0) && (this[0x1c5] != (QCamera3HardwareInterface)0x0)) {
          ppFVar56 = (FuncDef73 **)&stack0xfffffcf8;
          if (*(int *)(iVar24 + 0x20) != 0) {
            uVar31 = 0x837;
            iVar24 = DAT_00082654 + 0x82362;
            ppFVar60 = (FuncDef73 **)&stack0xfffffcf8;
            goto LAB_000823a6;
          }
          goto LAB_000823ac;
        }
        if (2 < local_26c) {
          ppFVar56 = (FuncDef73 **)&stack0xfffffcf8;
          if (*(int *)(iVar24 + 0x20) != 0) {
            uVar31 = 0x83d;
            iVar24 = DAT_00082664 + 0x823a8;
            ppFVar60 = (FuncDef73 **)&stack0xfffffcf8;
            goto LAB_000823a6;
          }
          goto LAB_000823ac;
        }
        if (local_26c == 2) {
          if (*(int *)(iVar24 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_0008266c + 0x823dc,0x842);
          }
          bVar63 = true;
        }
        else {
          bVar63 = false;
        }
        if ((this[0x1c5] != (QCamera3HardwareInterface)0x0) && ((local_260 ^ 1) == 0)) {
          if (*(int *)(iVar24 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_00082674 + 0x82414,0x847);
          }
          pthread_mutex_unlock(__mutex_00);
          goto LAB_0008278c;
        }
        if (((local_260 ^ 1 | uVar52 | ~local_29c & 1) == 0) && (bVar63)) {
          __android_log_print(6,DAT_00082678 + 0x8243c,DAT_0008267c + 0x8243e,DAT_00082680 + 0x82440
                             );
          ppFVar56 = (FuncDef73 **)&stack0xfffffcf8;
          goto LAB_000823ac;
        }
        if (local_290 == 0) {
LAB_00082488:
          count_leading_zeroes(local_26c - 2);
        }
        else {
          if (uVar14 < uVar7) {
            bVar63 = true;
          }
          else {
            bVar63 = 0x870 < uVar41 || (uVar15 < uVar41 || 0xf00 < uVar7);
          }
          bVar64 = SBORROW4(local_2a0,uVar41);
          iVar45 = local_2a0 - uVar41;
          bVar62 = local_2a0 == uVar41;
          if ((int)uVar41 < (int)local_2a0) {
            bVar64 = SBORROW4(local_2a4,uVar7);
            iVar45 = local_2a4 - uVar7;
            bVar62 = local_2a4 == uVar7;
          }
          if ((bVar62 || iVar45 < 0 != bVar64) || (!bVar63)) goto LAB_00082488;
        }
        if ((*(int *)(iVar24 + 0x28) != 0) &&
           (in_stack_fffffd04 = uVar52, mm_camera_debug_log(1,3,DAT_00082688 + 0x824e8,0x869),
           *(int *)(iVar24 + 0x28) != 0)) {
          mm_camera_debug_log(1,3,DAT_00082690 + 0x82518,0x86b);
          in_stack_fffffd04 = local_284;
        }
        iVar45 = validateStreamDimensions(this,param_1);
        if ((iVar45 == 0) &&
           (iVar45 = validateStreamRotations((QCamera3HardwareInterface *)0x0,param_1), iVar45 == 0)
           ) {
          if (*(int *)param_1 != 0) {
            uVar14 = 0;
            local_264 = (uint *)0x0;
            do {
              puVar40 = *(uint **)(*(int *)(param_1 + 4) + uVar14 * 4);
              if (*(int *)(iVar24 + 0x28) != 0) {
                in_stack_fffffd04 = puVar40[1];
                mm_camera_debug_log(1,3,DAT_000826a0 + 0x825a2,0x87d);
              }
              ppiVar47 = *(int ***)(this + 0x3fc);
              ppiVar36 = (int **)ppiVar47[2];
              if (ppiVar36 == ppiVar47) {
LAB_000825e6:
                if (*puVar40 != 1) {
                  ppuVar17 = (uint **)malloc(0x1c);
                  if (ppuVar17 == (uint **)0x0) {
                    if (*(int *)(iVar24 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_00082a64 + 0x82812,0x893);
                    }
                    pthread_mutex_unlock(__mutex_00);
                    iVar45 = -0xc;
                    goto LAB_000823b4;
                  }
                  ppuVar17[6] = (uint *)0x0;
                  ppuVar17[4] = (uint *)0x1;
                  *ppuVar17 = puVar40;
                  piVar38 = (int *)operator_new(0xc);
                  piVar38[2] = (int)ppiVar47;
                  *piVar38 = (int)ppuVar17;
                  piVar38[1] = (int)ppiVar47[1];
                  ppiVar47[1][2] = (int)piVar38;
                  ppiVar47[1] = piVar38;
                }
              }
              else {
                bVar63 = false;
                do {
                  ppuVar17 = (uint **)*ppiVar36;
                  if (*ppuVar17 == puVar40) {
                    if ((int *)puVar40[6] != (int *)0x0) {
                      (**(code **)(*(int *)puVar40[6] + 4))();
                      ppuVar17 = (uint **)*ppiVar36;
                    }
                    bVar63 = true;
                    ppuVar17[4] = (uint *)0x1;
                    *(undefined4 *)(**ppiVar36 + 0x18) = 0;
                    (*ppiVar36)[6] = 0;
                    ppiVar47 = *(int ***)(this + 0x3fc);
                  }
                  ppiVar36 = (int **)ppiVar36[2];
                } while (ppiVar36 != ppiVar47);
                if (!bVar63) goto LAB_000825e6;
              }
              uVar15 = puVar40[4] & 0x60000;
              bVar63 = uVar15 != 0x60000;
              if (bVar63) {
                uVar15 = *puVar40;
              }
              if ((!bVar63 || uVar15 == 2) &&
                 (bVar63 = local_264 != (uint *)0x0, local_264 = puVar40, bVar63)) {
                ppFVar56 = (FuncDef73 **)&stack0xfffffcf8;
                if (*(int *)(iVar24 + 0x20) == 0) goto LAB_000823ac;
                uVar31 = 0x8a1;
                iVar24 = DAT_00082a5c + 0x827f2;
                ppFVar60 = (FuncDef73 **)&stack0xfffffcf8;
                goto LAB_000823a6;
              }
              if ((((puVar55 != (uint *)0x0) && (*puVar40 == 0)) && (puVar40[3] == 0x23)) &&
                 (((puVar55[3] == 0x23 && (puVar55[1] == puVar40[1])) && (puVar55[2] == puVar40[2]))
                 )) {
                bVar63 = local_264 != (uint *)0x0;
                if (bVar63) {
                  local_264 = *(uint **)(iVar24 + 0x28);
                }
                bVar62 = local_264 != (uint *)0x0;
                local_264 = puVar40;
                if (bVar63 && bVar62) {
                  mm_camera_debug_log(1,3,DAT_00082a34 + 0x826fa,0x8b6);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)param_1);
            if (local_264 != (uint *)0x0) {
              *(uint *)(this + 0x1cc) = local_264[1];
              *(uint *)(this + 0x1d0) = local_264[2];
              uVar14 = local_264[3];
              *(uint *)(this + 0x1d4) = uVar14;
              *(uint *)(this + 0x1d8) = local_264[4];
              if (*(int *)(iVar24 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_00082a3c + 0x82752,0x8c7);
                in_stack_fffffd04 = uVar14;
              }
            }
          }
          cleanAndSortStreamInfo(this);
          if (*(int **)(this + 0x8c) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x8c) + 4))();
            *(undefined4 *)(this + 0x8c) = 0;
          }
          if (*(int **)(this + 0x98) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x98) + 4))();
            *(undefined4 *)(this + 0x98) = 0;
          }
          if (*(int **)(this + 0x9c) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x9c) + 4))();
            *(undefined4 *)(this + 0x9c) = 0;
          }
          if (*(int **)(this + 0xa4) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0xa4) + 4))();
            *(undefined4 *)(this + 0xa4) = 0;
          }
          if (*(int **)(this + 0xa0) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0xa0) + 4))();
            *(undefined4 *)(this + 0xa0) = 0;
          }
          if (*(int *)(iVar24 + 0x2c) != 0) {
            iVar46 = *(int *)(*(int *)(iVar32 + *(int *)(this + 0x60) * 4) + 0x33e0);
            in_stack_fffffd04 = 0;
            iVar45 = mm_camera_debug_log(1,4,DAT_00082a6c + 0x828ba,0x35bf);
            bVar63 = iVar46 != 7;
            if (bVar63) {
              iVar45 = *(int *)(iVar24 + 0x2c);
            }
            if (bVar63 && iVar45 != 0) {
              mm_camera_debug_log(1,4,DAT_00082a74 + 0x828e2,0x35ca);
            }
          }
          this_00 = (QCamera3MetadataChannel *)operator_new(0x98);
          piVar38 = (int *)QCamera3MetadataChannel::QCamera3MetadataChannel
                                     (this_00,**(uint **)(this + 100),*(uint *)(this + 0xf4),
                                      (mm_camera_ops_t *)(*(uint **)(this + 100))[1],
                                      *(FuncDef69 **)(DAT_00082a7c + 0x82916),
                                      *(FuncDef70 **)(DAT_00082a78 + 0x8290c),
                                      (cam_padding_info_t *)&local_218,(ulonglong)in_stack_fffffd04,
                                      (void *)0x0,(uint)this);
          *(int **)(this + 0x8c) = piVar38;
          iVar45 = (**(code **)(*piVar38 + 0x24))(piVar38,0);
          if (-1 < iVar45) {
            if (this[0x1c4] == (QCamera3HardwareInterface)0x0) {
              iVar46 = *(int *)(*(int *)(iVar32 + *(int *)(this + 0x60) * 4) + 0x33e0);
              if (*(int *)(iVar24 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_00082a84 + 0x82990,0x35bf);
              }
              if (iVar46 == 7) {
                cVar48 = 1;
              }
              else {
                cVar48 = 0;
                if (*(int *)(iVar24 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_00082a94 + 0x829ec,0x35ca);
                  cVar48 = 0;
                }
              }
              cVar70 = cVar48;
              iVar46 = QCameraCommon::getAnalysisInfo
                                 ((bool)((char)this + -0x10),false,CONCAT44(cVar48,0x100068e),
                                  (cam_analysis_info_t *)0x1);
              if (iVar46 == 0) {
                pQVar11 = (QCamera3SupportChannel *)operator_new(0xa8);
                if (local_228 != 0x65) {
                  local_228 = 2;
                }
                uVar31 = QCamera3SupportChannel::QCamera3SupportChannel
                                   (pQVar11,**(uint **)(this + 100),*(uint *)(this + 0xf4),
                                    (mm_camera_ops_t *)(*(uint **)(this + 100))[1],local_244,
                                    CONCAT44(0x100068e,cVar70),cVar48,(cam_dimension_t *)0xb,
                                    (cam_format_t)auStack588,(uchar)local_228,(uint)bStack591,
                                    *(void **)(*(int *)(iVar32 + *(int *)(this + 0x60) * 4) + 0x33e0
                                              ),(uint)this);
                *(undefined4 *)(this + 0x9c) = uVar31;
              }
              else if (*(int *)(iVar24 + 0x24) != 0) {
                mm_camera_debug_log(1,2,DAT_00082a9c + 0x82a2c,0x919);
              }
              if ((*(int *)(this + 0x9c) == 0) && (*(int *)(iVar24 + 0x24) != 0)) {
                mm_camera_debug_log(1,2,DAT_00082eb4 + 0x82b26,0x91c);
              }
            }
            __aeabi_memclr8(this + 0x288,0x168);
            if (*(int *)param_1 != 0) {
              pQVar51 = this + 0x38c;
              pcVar18 = (code *)0x0;
              ppFVar60 = (FuncDef73 **)&stack0xfffffcf8;
              do {
                pcVar9 = *(code **)((int)param_1 + 4);
                ((int *)ppFVar60)[0x27] = (int)pcVar18;
                iVar24 = ((int *)ppFVar60)[0x2a];
                __mutex = (pthread_mutex_t *)((int *)ppFVar60)[0x21];
                piVar38 = *(int **)(pcVar9 + (int)pcVar18 * 4);
                iVar32 = piVar38[4];
                *(int *)(iVar24 + *(int *)(this + 0x2c8) * 8) = piVar38[1];
                *(int *)(iVar24 + *(int *)(this + 0x2c8) * 8 + 4) = piVar38[2];
                pthread_mutex_lock(__mutex);
                get_cam_info(*(undefined4 *)(this + 0x60),pQVar51);
                pthread_mutex_unlock(__mutex);
                iVar24 = *piVar38;
                ((int *)ppFVar60)[0x28] = (int)piVar38;
                if (((iVar24 == 2) || ((piVar38[4] & 0x60000U) == 0x60000)) && (piVar38[3] == 0x22))
                {
                  iVar46 = ((int *)ppFVar60)[0x2c];
                  iVar24 = ((int *)ppFVar60)[0x2a];
                  *(undefined4 *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 4 + 0x44) = 3;
                  iVar24 = iVar24 + *(int *)(iVar46 + 0x2c8) * 8;
                  if (((int *)ppFVar60)[0x25] == 0) {
                    *(int *)(iVar24 + 0x68) = 0;
                    *(undefined4 *)(iVar24 + 0x6c) = 0;
                  }
                  else {
                    iVar32 = ((int *)ppFVar60)[0x13];
                    *(int *)(iVar24 + 0x68) = ((int *)ppFVar60)[0x22];
                    *(int *)(iVar24 + 0x6c) = iVar32;
                  }
                  goto LAB_0008314a;
                }
                if (iVar24 == 1) {
                  if (*(int *)(((int *)ppFVar60)[0x2d] + 0x28) == 0) {
                    iVar46 = ((int *)ppFVar60)[0x2c];
                  }
                  else {
                    *ppFVar60 = (FuncDef73 *)(DAT_00082ebc + 0x82da4);
                    mm_camera_debug_log(1,3,DAT_00082ec0 + 0x82dac,0x939);
                    iVar46 = ((int *)ppFVar60)[0x2c];
                  }
                  goto LAB_0008314a;
                }
                switch(piVar38[3]) {
                case 0x20:
                case 0x24:
                case 0x25:
                  iVar46 = ((int *)ppFVar60)[0x2c];
                  iVar24 = ((int *)ppFVar60)[0x2a];
                  *(undefined4 *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 4 + 0x44) = 8;
                  iVar24 = iVar24 + *(int *)(iVar46 + 0x2c8) * 8;
                  *(undefined4 *)(iVar24 + 0x68) = 0;
                  *(undefined4 *)(iVar24 + 0x6c) = 0;
                  ((int *)ppFVar60)[0x14] = 1;
                  goto LAB_0008314a;
                case 0x21:
                  iVar46 = ((int *)ppFVar60)[0x2c];
                  *(undefined4 *)(iVar46 + *(int *)(iVar46 + 0x2c8) * 4 + 0x2cc) = 3;
                  uVar14 = count_leading_zeroes((uint)*(byte *)(iVar46 + 0x1c5));
                  iVar32 = 0;
                  iVar24 = ((int *)ppFVar60)[0x1c];
                  if (((uVar14 >> 5 & ((int *)ppFVar60)[0xf] | uVar52) & 1) != 0) {
                    if (((int *)ppFVar60)[0x25] == 0) {
LAB_00082e76:
                      iVar24 = 0;
                      iVar32 = 0;
                    }
                    else {
                      iVar32 = ((int *)ppFVar60)[0x13];
                      iVar24 = ((int *)ppFVar60)[0x22];
                      if (*(uint *)(((int *)ppFVar60)[0x28] + 4) <= (uint)((int *)ppFVar60)[0x26]) {
                        iVar32 = ((int *)ppFVar60)[0x13];
                        iVar24 = ((int *)ppFVar60)[0x22];
                        if (*(uint *)(((int *)ppFVar60)[0x28] + 8) < 0x871) {
                          iVar24 = ((int *)ppFVar60)[0x22];
                          iVar32 = ((int *)ppFVar60)[0x13];
                          if (*(uint *)(((int *)ppFVar60)[0x28] + 4) < 0xf01) {
                            iVar32 = ((int *)ppFVar60)[0x13];
                            iVar24 = ((int *)ppFVar60)[0x22];
                            if (*(uint *)(((int *)ppFVar60)[0x28] + 8) <=
                                (uint)((int *)ppFVar60)[0x1d]) goto LAB_00082e76;
                          }
                        }
                      }
                    }
                  }
                  iVar46 = iVar46 + *(int *)(iVar46 + 0x2c8) * 8;
                  *(int *)(iVar46 + 0x2f0) = iVar24;
                  *(int *)(iVar46 + 0x2f4) = iVar32;
                  if (((int *)ppFVar60)[0x20] == 0) {
                    if (*(char *)(((int *)ppFVar60)[0x15] + 0xed) != '\0') goto LAB_0008309c;
                    if (*(char *)(((int *)ppFVar60)[0x2c] + 0x1c5) == '\0') {
                      if (((int *)ppFVar60)[0x1e] == 0) goto LAB_0008308c;
                      iVar46 = ((int *)ppFVar60)[0x2c];
                      iVar32 = ((int *)ppFVar60)[0x2a];
                      *(int *)(iVar32 + *(int *)(iVar46 + 0x2c8) * 8) = ((int *)ppFVar60)[0x19];
                      iVar24 = ((int *)ppFVar60)[0x1a];
                    }
                    else {
                      iVar46 = ((int *)ppFVar60)[0x2c];
                      iVar32 = ((int *)ppFVar60)[0x2a];
                      *(int *)(iVar32 + *(int *)(iVar46 + 0x2c8) * 8) = ((int *)ppFVar60)[0x23];
                      iVar24 = ((int *)ppFVar60)[0x24];
                    }
                    iVar50 = *(int *)(iVar46 + 0x2c8);
                  }
                  else {
                    if (((int *)ppFVar60)[0x10] == 0) {
                      if (*(char *)(((int *)ppFVar60)[0x15] + 0xec) != '\0') {
LAB_0008309c:
                        iVar46 = ((int *)ppFVar60)[0x2c];
                        iVar32 = ((int *)ppFVar60)[0x1f];
                        iVar24 = ((int *)ppFVar60)[0x2a];
                        *(undefined4 *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) =
                             *(undefined4 *)(*(int *)(iVar32 + *(int *)(iVar46 + 0x60) * 4) + 0x5cc)
                        ;
                        iVar24 = iVar24 + *(int *)(iVar46 + 0x2c8) * 8;
                        uVar31 = *(undefined4 *)
                                  (*(int *)(iVar32 + *(int *)(iVar46 + 0x60) * 4) + 0x5d0);
                        *(undefined4 *)(iVar24 + 0x68) = 0;
                        *(undefined4 *)(iVar24 + 0x6c) = 0;
                        *(undefined4 *)(iVar24 + 4) = uVar31;
                        break;
                      }
                      ppFVar56 = ppFVar60;
                      if (*(int *)(((int *)ppFVar60)[0x2d] + 0x20) != 0) {
                        *ppFVar60 = (FuncDef73 *)(DAT_00083ed4 + 0x83eb4);
                        mm_camera_debug_log(1,1,DAT_00083ed8 + 0x83ebc,0x9bf);
                      }
                      goto LAB_000823ac;
                    }
                    iVar46 = ((int *)ppFVar60)[0x2c];
                    iVar24 = ((int *)ppFVar60)[0x29];
                    iVar32 = ((int *)ppFVar60)[0x2a];
                    *(undefined4 *)(iVar32 + *(int *)(iVar46 + 0x2c8) * 8) =
                         *(undefined4 *)(iVar24 + 4);
                    iVar50 = *(int *)(iVar46 + 0x2c8);
                    iVar24 = *(int *)(iVar24 + 8);
                  }
                  *(int *)(iVar32 + iVar50 * 8 + 4) = iVar24;
                  break;
                case 0x22:
                  pQVar51 = (QCamera3HardwareInterface *)((int *)ppFVar60)[0x2c];
                  iVar24 = *(int *)(pQVar51 + 0x2c8);
                  *(int *)(pQVar51 + iVar24 * 8 + 0x2f0) = ((int *)ppFVar60)[0x1c];
                  *(undefined4 *)(pQVar51 + iVar24 * 8 + 0x2f4) = 0;
                  addToPPFeatureMask(pQVar51,0x22,*(uint *)(pQVar51 + 0x2c8));
                  this_01 = (CameraMetadata *)
                            android::hardware::camera::common::V1_0::helper::CameraMetadata::
                            CameraMetadata((CameraMetadata *)((int *)ppFVar60 + 0x44));
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                            (this_01,*(camera_metadata **)
                                      (*(int *)(DAT_00083268 + 0x82ef0) +
                                      *(int *)(pQVar51 + 0x60) * 4));
                  if (((((int *)ppFVar60)[0x12] == 0) &&
                      (*(char *)(((int *)ppFVar60)[0x2c] + 0x1c5) == '\0')) &&
                     ((*(char *)(((int *)ppFVar60)[0x2c] + 0x1c4) != '\0' &&
                      (android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                                 ((uint)((int *)ppFVar60 + 0x2e)), 1 < (uint)((int *)ppFVar60)[0x31]
                      )))) {
                    if (*(int *)(((int *)ppFVar60)[0x2d] + 0x34) != 0) {
                      *ppFVar60 = (FuncDef73 *)(DAT_0008326c + 0x83104);
                      mm_camera_debug_log(1,6,DAT_00083270 + 0x8310c,0x94d);
                    }
                    iVar24 = ((int *)ppFVar60)[0x2c] + *(int *)(((int *)ppFVar60)[0x2c] + 0x2c8) * 8
                    ;
                    *(uint *)(iVar24 + 0x2f4) = *(uint *)(iVar24 + 0x2f4) | 0x10;
                  }
                  iVar46 = ((int *)ppFVar60)[0x2c];
                  puVar21 = (undefined4 *)(iVar46 + *(int *)(iVar46 + 0x2c8) * 4 + 0x2cc);
                  if (iVar32 << 0xf < 0) {
                    *puVar21 = 4;
                    if ((*(char *)(iVar46 + 0x1dd) != '\0') && (*(char *)(iVar46 + 0x1e0) != '\0'))
                    {
                      iVar24 = iVar46 + 0x2f0;
                      *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) =
                           *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) | 0x20000;
                      *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) =
                           *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) & 0xfeffffff;
                    }
                  }
                  else {
                    *puVar21 = 1;
                    if ((*(char *)(iVar46 + 0x1dd) != '\0') && (*(char *)(iVar46 + 0x1df) != '\0'))
                    {
                      iVar24 = iVar46 + 0x2f0;
                      *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) =
                           *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) | 0x20000;
                      *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) =
                           *(uint *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 8) & 0xfeffffff;
                    }
                    ((int *)ppFVar60)[0x3c] = *(int *)(((int *)ppFVar60)[0x15] + 0xac);
                    ((int *)ppFVar60)[0x3d] = 2;
                  }
                  iVar24 = ((int *)ppFVar60)[0x28];
                  if ((*(uint *)(iVar24 + 0x20) | 2) == 3) {
                    iVar32 = ((int *)ppFVar60)[0x2a];
                    *(undefined4 *)(iVar32 + *(int *)(iVar46 + 0x2c8) * 8) =
                         *(undefined4 *)(iVar24 + 8);
                    *(undefined4 *)(iVar32 + *(int *)(iVar46 + 0x2c8) * 8 + 4) =
                         *(undefined4 *)(iVar24 + 4);
                  }
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                            ((CameraMetadata *)((int *)ppFVar60 + 0x44));
                  break;
                case 0x23:
                  iVar24 = ((int *)ppFVar60)[0x2c];
                  *(undefined4 *)(iVar24 + *(int *)(iVar24 + 0x2c8) * 4 + 0x2cc) = 5;
                  if ((uint)((int *)ppFVar60)[0x26] < (uint)piVar38[1]) {
                    piVar13 = (int *)(iVar24 + *(int *)(iVar24 + 0x2c8) * 8 + 0x2f0);
LAB_00082f86:
                    if (((int *)ppFVar60)[0x25] == 0) {
                      *piVar13 = 0;
                      piVar13[1] = 0;
                    }
                    else {
                      iVar24 = ((int *)ppFVar60)[0x13];
                      *piVar13 = ((int *)ppFVar60)[0x22];
                      piVar13[1] = iVar24;
                    }
                  }
                  else {
                    iVar24 = iVar24 + *(int *)(iVar24 + 0x2c8) * 8;
                    piVar13 = (int *)(iVar24 + 0x2f0);
                    if (((0x870 < (uint)piVar38[2]) || (0xf00 < (uint)piVar38[1])) ||
                       ((uint)((int *)ppFVar60)[0x1d] < (uint)piVar38[2])) goto LAB_00082f86;
                    *piVar13 = ((int *)ppFVar60)[0x1c];
                    *(undefined4 *)(iVar24 + 0x2f4) = 0;
                    iVar24 = *(int *)(((int *)ppFVar60)[0x1f] +
                                     *(int *)(((int *)ppFVar60)[0x2c] + 0x60) * 4);
                    iVar32 = *(int *)(iVar24 + 4);
                    if (iVar32 == 1) {
                      uVar14 = *(uint *)(((int *)ppFVar60)[0x28] + 4);
                      if (((uVar14 < 0x781) ||
                          (uVar15 = *(uint *)(((int *)ppFVar60)[0x28] + 8), uVar15 < 0x441)) ||
                         (uVar25 = *(uint *)(((int *)ppFVar60)[0x2c] + 0x2c8), uVar25 == 0))
                      goto LAB_0008308c;
                      if (uVar25 < 4) {
                        uVar43 = 0;
                        uVar41 = 0;
                        uVar7 = 0;
LAB_00082c88:
                        do {
                          uVar53 = *(uint *)(*(int *)((int)ppFVar60 + 0xb0) + uVar43 * 8 + 0x288);
                          uVar8 = *(uint *)(*(int *)((int)ppFVar60 + 0xb0) + uVar43 * 8 + 0x28c);
                          if ((int)uVar7 < (int)uVar8) {
                            uVar7 = uVar8;
                          }
                          if ((int)uVar41 < (int)uVar53) {
                            uVar41 = uVar53;
                          }
                          uVar43 = uVar43 + 1;
                        } while (uVar43 < uVar25);
                      }
                      else {
                        puVar21 = (undefined4 *)((int *)ppFVar60)[0x2a];
                        uVar7 = uVar25 & 0xfffffffc;
                        auVar67 = ZEXT816(0);
                        auVar69 = ZEXT816(0);
                        uVar43 = uVar7;
                        do {
                          puVar1 = (undefined4 *)0x3a0;
                          puVar2 = (undefined4 *)0x3b0;
                          lVar66 = 2;
                          puVar65 = puVar21;
                          while( true ) {
                            *puVar1 = *puVar65;
                            puVar65 = puVar65 + 1;
                            *puVar2 = *puVar65;
                            puVar65 = puVar65 + 1;
                            lVar66 = lVar66 + -1;
                            if (lVar66 == 0) break;
                            puVar1 = puVar1 + 1;
                            puVar2 = puVar2 + 1;
                          }
                          puVar1 = (undefined4 *)0x3a8;
                          puVar2 = (undefined4 *)0x3b8;
                          lVar66 = 2;
                          while( true ) {
                            *puVar1 = *puVar65;
                            puVar65 = puVar65 + 1;
                            *puVar2 = *puVar65;
                            puVar65 = puVar65 + 1;
                            lVar66 = lVar66 + -1;
                            if (lVar66 == 0) break;
                            puVar1 = puVar1 + 1;
                            puVar2 = puVar2 + 1;
                          }
                          puVar21 = puVar21 + 8;
                          uVar7 = uVar7 - 4;
                          auVar69 = VectorMax(in_q11,auVar69,4,0);
                          auVar67 = VectorMax(in_q10,auVar67,4,0);
                        } while (uVar7 != 0);
                        auVar68 = VectorMax(auVar67,SUB3216(CONCAT1616(auVar67,auVar67) >> 0x40,0),4
                                            ,0);
                        auVar69 = VectorMax(auVar69,SUB3216(CONCAT1616(auVar67,auVar69) >> 0x40,0),4
                                            ,0);
                        uVar31 = SUB164(auVar68 >> 0x20,0);
                        in_q10 = ZEXT816(CONCAT44(uVar31,uVar31));
                        in_q10 = in_q10 & in_q10 << 0x40;
                        uVar31 = SUB164(auVar69 >> 0x20,0);
                        in_q11 = ZEXT816(CONCAT44(uVar31,uVar31));
                        in_q11 = in_q11 & in_q11 << 0x40;
                        auVar67 = VectorMax(auVar68,in_q10,4,0);
                        auVar69 = VectorMax(auVar69,in_q11,4,0);
                        uVar41 = VectorGetElement(SUB168(auVar67,0),0,4,0);
                        uVar7 = VectorGetElement(SUB168(auVar69,0),0,4,0);
                        if (uVar25 != uVar43) goto LAB_00082c88;
                      }
                      if (uVar15 != uVar7 || uVar14 != uVar41) goto LAB_0008308c;
                      iVar32 = *(int *)((int)ppFVar60 + 0xb0);
                      iVar24 = iVar32 + uVar25 * 8;
                      *(undefined4 *)(iVar24 + 0x2f0) = 0;
                      *(undefined4 *)(iVar24 + 0x2f4) = 0;
                      iVar24 = *(int *)(*(int *)((int)ppFVar60 + 0x7c) + *(int *)(iVar32 + 0x60) * 4
                                       );
                      iVar32 = *(int *)(iVar24 + 4);
                    }
                    if ((((iVar32 == 2) && (0x63f < *(uint *)(*(int *)((int)ppFVar60 + 0xa0) + 4)))
                        && (0x4af < *(uint *)(*(int *)((int)ppFVar60 + 0xa0) + 8))) &&
                       ((*(uint *)(*(int *)((int)ppFVar60 + 0xa0) + 4) == *(uint *)(iVar24 + 0x5cc)
                        && (*(uint *)(*(int *)((int)ppFVar60 + 0xa0) + 8) ==
                            *(uint *)(iVar24 + 0x5d0))))) {
                      iVar46 = *(int *)((int)ppFVar60 + 0xb0);
                      iVar24 = iVar46 + *(int *)(iVar46 + 0x2c8) * 8;
                      *(undefined4 *)(iVar24 + 0x2f0) = 0;
                      *(undefined4 *)(iVar24 + 0x2f4) = 0;
                      break;
                    }
                  }
LAB_0008308c:
                  iVar46 = *(int *)((int)ppFVar60 + 0xb0);
                  break;
                default:
                  iVar46 = ((int *)ppFVar60)[0x2c];
                  iVar24 = ((int *)ppFVar60)[0x2a];
                  *(undefined4 *)(iVar24 + *(int *)(iVar46 + 0x2c8) * 4 + 0x44) = 0;
                  iVar24 = iVar24 + *(int *)(iVar46 + 0x2c8) * 8;
                  *(undefined4 *)(iVar24 + 0x68) = 0;
                  *(undefined4 *)(iVar24 + 0x6c) = 0;
                  goto LAB_0008314a;
                }
                pQVar51 = *(QCamera3HardwareInterface **)((int)ppFVar60 + 0x58);
LAB_0008314a:
                pFVar29 = ppFVar60[0x2a];
                pFVar49 = *(FuncDef73 **)
                           (*(int *)(ppFVar60[0x1f] + *(int *)(iVar46 + 0x60) * 4) + 0x33e0);
                iVar24 = *(int *)(iVar46 + 0x2c8);
                pFVar54 = *(FuncDef73 **)(pFVar29 + iVar24 * 4 + 0x44);
                if (*(int *)(ppFVar60[0x2d] + 0x2c) != 0) {
                  pFVar19 = *(FuncDef73 **)(pFVar29 + iVar24 * 8 + 0x6c);
                  ppFVar60[2] = *(FuncDef73 **)(pFVar29 + iVar24 * 8 + 0x68);
                  ppFVar60[3] = pFVar19;
                  ppFVar60[4] = pFVar54;
                  ppFVar60[5] = pFVar49;
                  *ppFVar60 = (FuncDef73 *)(DAT_00083274 + 0x83190);
                  mm_camera_debug_log(1,4,DAT_00083278 + 0x83198,0x35bf);
                }
                param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                if (pFVar49 == (FuncDef73 *)0x7) {
                  if ((pFVar54 < &DAT_0000000c) && ((1 << ((uint)pFVar54 & 0xff) & 0x812U) != 0)) {
                    *(uint *)(pFVar29 + iVar24 * 8 + 0x6c) =
                         *(uint *)(pFVar29 + iVar24 * 8 + 0x6c) | 1;
                  }
                }
                else if (*(int *)(ppFVar60[0x2d] + 0x2c) != 0) {
                  *ppFVar60 = (FuncDef73 *)(DAT_0008327c + 0x831d2);
                  ppFVar60[1] = pFVar49;
                  mm_camera_debug_log(1,4,DAT_00083280 + 0x831dc,0x35ca);
                }
                ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                this = (QCamera3HardwareInterface *)ppFVar60[0x2c];
                if (ppFVar39[6] != (FuncDef73 *)0x0) goto LAB_00083522;
                pFVar29 = *ppFVar39;
                ppFVar56 = ppFVar60;
                if (pFVar29 != (FuncDef73 *)0x0) {
                  if (pFVar29 == (FuncDef73 *)0x2) {
                    ppFVar39[4] = (FuncDef73 *)((uint)ppFVar39[4] | 0x60000);
                    goto LAB_000832c6;
                  }
                  if (pFVar29 != (FuncDef73 *)0x1) {
                    if (*(int *)(ppFVar60[0x2d] + 0x20) != 0) {
                      uVar34 = 0xa05;
                      *ppFVar60 = (FuncDef73 *)(DAT_0008328c + 0x8324a);
                      ppFVar60[1] = pFVar29;
                      uVar31 = 1;
                      iVar24 = DAT_00083290 + 0x83256;
                      goto LAB_00083254;
                    }
                    goto LAB_000832b8;
                  }
                  ppFVar39[4] = (FuncDef73 *)((uint)ppFVar39[4] | 0x60000);
LAB_0008330e:
                  ppFVar39[5] = (FuncDef73 *)0x1;
                  goto LAB_000834e0;
                }
                pFVar29 = ppFVar39[4];
                if ((int)pFVar29 << 0xf < 0) {
                  ppFVar39[4] = (FuncDef73 *)((uint)pFVar29 | 0x20022);
                }
                else if (((uint)pFVar29 & 0x60000) == 0x60000) {
                  if (*(int *)(ppFVar60[0x2d] + 0x2c) != 0) {
                    uVar31 = 4;
                    uVar34 = 0x9fc;
                    *ppFVar60 = (FuncDef73 *)(DAT_00083284 + 0x83228);
                    iVar24 = DAT_00083288 + 0x83230;
LAB_00083254:
                    mm_camera_debug_log(1,uVar31,iVar24,uVar34);
                  }
                }
                else {
                  ppFVar20 = (FuncDef73 **)ppFVar60[0x29];
                  bVar63 = ppFVar39 != ppFVar20;
                  if (bVar63) {
                    ppFVar20 = (FuncDef73 **)ppFVar39[3];
                  }
                  if (bVar63 && ppFVar20 != (FuncDef73 **)0x23) {
                    pFVar29 = (FuncDef73 *)((uint)pFVar29 | 0x20000);
                  }
                  else {
                    pFVar29 = (FuncDef73 *)((uint)pFVar29 | 0x60000);
                  }
                  ppFVar39[4] = pFVar29;
                  param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                  this = (QCamera3HardwareInterface *)ppFVar60[0x2c];
                  pQVar51 = (QCamera3HardwareInterface *)ppFVar60[0x16];
                }
                pFVar29 = *ppFVar39;
LAB_000832b8:
                if (pFVar29 != (FuncDef73 *)0x2) {
                  if (pFVar29 == (FuncDef73 *)0x1) goto LAB_0008330e;
                  if (pFVar29 != (FuncDef73 *)0x0) {
                    if (*(int *)(ppFVar60[0x2d] + 0x20) == 0) goto LAB_000823ac;
                    uVar31 = 0xa90;
                    *ppFVar60 = (FuncDef73 *)(DAT_00083edc + 0x83b96);
                    iVar24 = DAT_00083ee0 + 0x83b9e;
                    goto LAB_000823a6;
                  }
                }
LAB_000832c6:
                pFVar29 = ppFVar39[3];
                switch(pFVar29) {
                case (FuncDef73 *)0x20:
                case (FuncDef73 *)0x24:
                case (FuncDef73 *)0x25:
                  this_02 = (QCamera3RawChannel *)operator_new(0x3180);
                  pFVar49 = *(FuncDef73 **)(this + *(int *)(this + 0x2c8) * 8 + 0x2f4);
                  pFVar29 = *(FuncDef73 **)(this + 0x8c);
                  uVar15 = *(uint *)(this + 0xf4);
                  uVar14 = **(uint **)(this + 100);
                  pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
                  if (ppFVar60[0x15][0xec] == (FuncDef73)0x0) {
                    uVar25 = count_leading_zeroes(ppFVar39[3] + -0x20);
                    pFVar54 = (FuncDef73 *)(uVar25 >> 5);
                  }
                  else {
                    pFVar54 = (FuncDef73 *)0x0;
                  }
                  param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                  ppFVar60[6] = *(FuncDef73 **)(this + *(int *)(this + 0x2c8) * 8 + 0x2f0);
                  ppFVar60[7] = pFVar49;
                  ppFVar60[8] = pFVar29;
                  ppFVar60[9] = pFVar54;
                  ppFVar60[10] = (FuncDef73 *)&DAT_00000008;
                  *ppFVar60 = ppFVar60[0x11];
                  ppFVar60[1] = ppFVar60[0x1b];
                  this = (QCamera3HardwareInterface *)ppFVar60[0x2c];
                  ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                  ppFVar60[2] = (FuncDef73 *)(ppFVar60 + 0x3c);
                  ppFVar60[3] = (FuncDef73 *)this;
                  ppFVar60[4] = (FuncDef73 *)ppFVar39;
                  iVar24 = QCamera3RawChannel::QCamera3RawChannel
                                     (this_02,uVar14,uVar15,pmVar35,(FuncDef71 *)*ppFVar60,
                                      (FuncDef72 *)ppFVar60[1],(cam_padding_info_t *)ppFVar60[2],
                                      ppFVar60[3],(camera3_stream *)ppFVar60[4],
                                      *(ulonglong *)(ppFVar60 + 5),(QCamera3Channel *)ppFVar60[7],
                                      *(bool *)(ppFVar60 + 8),(uint)ppFVar60[9]);
                  *(int *)(this + 0x94) = iVar24;
                  ppFVar39[5] = *(FuncDef73 **)(iVar24 + 0x78);
                  pFVar29 = *(FuncDef73 **)(this + 0x94);
                  goto LAB_000834de;
                case (FuncDef73 *)0x21:
                  this_03 = (QCamera3PicChannel *)operator_new(0x31a8);
                  pFVar49 = ppFVar60[0x2a];
                  pFVar29 = (FuncDef73 *)0x1;
                  pFVar54 = *(FuncDef73 **)(pFVar49 + *(int *)(this + 0x2c8) * 8 + 0x6c);
                  if (this[0x1c4] == (QCamera3HardwareInterface)0x0) {
                    pFVar29 = (FuncDef73 *)0x6;
                  }
                  pFVar19 = *(FuncDef73 **)(ppFVar60[0x2c] + 0x8c);
                  uVar15 = *(uint *)(ppFVar60[0x2c] + 0xf4);
                  uVar14 = **(uint **)(this + 100);
                  pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
                  cVar3 = ppFVar60[0x2c][0x1c5];
                  ppFVar60[6] = *(FuncDef73 **)(pFVar49 + *(int *)(this + 0x2c8) * 8 + 0x68);
                  ppFVar60[7] = pFVar54;
                  ppFVar60[8] = (FuncDef73 *)(uint)(byte)cVar3;
                  ppFVar60[9] = (FuncDef73 *)(uVar52 & 1);
                  ppFVar60[10] = pFVar19;
                  ppFVar60[0xb] = pFVar29;
                  ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                  this = (QCamera3HardwareInterface *)ppFVar60[0x2c];
                  param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                  *ppFVar60 = ppFVar60[0x11];
                  ppFVar60[1] = ppFVar60[0x1b];
                  ppFVar60[2] = (FuncDef73 *)(ppFVar60 + 0x3c);
                  ppFVar60[3] = (FuncDef73 *)this;
                  ppFVar60[4] = (FuncDef73 *)ppFVar39;
                  pFVar29 = (FuncDef73 *)
                            QCamera3PicChannel::QCamera3PicChannel
                                      (this_03,uVar14,uVar15,pmVar35,(FuncDef75 *)*ppFVar60,
                                       (FuncDef76 *)ppFVar60[1],(cam_padding_info_t *)ppFVar60[2],
                                       ppFVar60[3],(camera3_stream *)ppFVar60[4],
                                       *(ulonglong *)(ppFVar60 + 5),*(bool *)(ppFVar60 + 7),
                                       *(bool *)(ppFVar60 + 8),(QCamera3Channel *)ppFVar60[9],
                                       (uint)ppFVar60[10]);
                  *(FuncDef73 **)(this + 0x90) = pFVar29;
                  ppFVar39[6] = pFVar29;
                  ppFVar39[5] = *(FuncDef73 **)(*(int *)(this + 0x90) + 0x78);
                  pQVar51 = (QCamera3HardwareInterface *)ppFVar60[0x16];
                  QCamera3PicChannel::overrideYuvSize
                            (*(QCamera3PicChannel **)(this + 0x90),
                             *(uint *)(pFVar49 + *(int *)(this + 0x2c8) * 8),
                             *(uint *)(pFVar49 + *(int *)(this + 0x2c8) * 8 + 4));
                  break;
                case (FuncDef73 *)0x22:
                  if ((((byte)*(code *)((int)ppFVar39 + 0x12) & 1) == 0) ||
                     (*(code **)((int)param_1 + 8) != (code *)0x1)) {
                    if ((this[0x1c4] == (QCamera3HardwareInterface)0x0) &&
                       (*(int *)(ppFVar60[0x2b] + 8) == 1)) {
                      pauVar28 = (undefined (*) [16])ppFVar60[0x28];
                      puVar33 = (undefined8 *)ppFVar60[0xd];
                      auVar67 = *pauVar28;
                      auVar69 = pauVar28[2];
                      in_q10 = pauVar28[1];
                      in_q11 = pauVar28[3];
                      puVar33[4] = SUB168(auVar69,0);
                      puVar33[5] = SUB168(auVar69 >> 0x40,0);
                      pFVar29 = ppFVar60[0x15];
                      puVar33[2] = SUB168(in_q10,0);
                      puVar33[3] = SUB168(in_q10 >> 0x40,0);
                      *puVar33 = SUB168(auVar67,0);
                      puVar33[1] = SUB168(auVar67 >> 0x40,0);
                      puVar33[6] = SUB168(in_q11,0);
                      puVar33[7] = SUB168(in_q11 >> 0x40,0);
                      *(uint *)(pFVar29 + 0x24) = *(uint *)(pFVar29 + 0x24) | 0x10000;
                    }
                    pQVar12 = (QCamera3RegularChannel *)operator_new(0x3180);
                    this = (QCamera3HardwareInterface *)ppFVar60[0x2c];
                    uVar15 = *(uint *)(this + 0xf4);
                    iVar32 = *(int *)(ppFVar60[0x1f] + *(int *)(this + 0x60) * 4);
                    iVar24 = *(int *)(this + 0x2c8);
                    pFVar49 = ppFVar60[0x2a];
                    pFVar54 = *(FuncDef73 **)(pFVar49 + iVar24 * 4 + 0x44);
                    pFVar29 = *(FuncDef73 **)(pFVar49 + iVar24 * 8 + 0x68);
                    pFVar49 = *(FuncDef73 **)(pFVar49 + iVar24 * 8 + 0x6c);
                    uVar14 = **(uint **)(this + 100);
                    pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
                    ppFVar60[8] = *(FuncDef73 **)(this + 0x8c);
                    ppFVar60[9] = (FuncDef73 *)&DAT_00000008;
                    *ppFVar60 = ppFVar60[0x11];
                    ppFVar60[1] = ppFVar60[0x1b];
                    ppFVar60[2] = (FuncDef73 *)(iVar32 + 0x3008);
                    ppFVar60[3] = (FuncDef73 *)this;
                    ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                    ppFVar60[4] = (FuncDef73 *)ppFVar39;
                    ppFVar60[5] = pFVar54;
                    ppFVar60[6] = pFVar29;
                    ppFVar60[7] = pFVar49;
                    pFVar29 = (FuncDef73 *)
                              QCamera3RegularChannel::QCamera3RegularChannel
                                        (pQVar12,uVar14,uVar15,pmVar35,(FuncDef67 *)*ppFVar60,
                                         (FuncDef68 *)ppFVar60[1],(cam_padding_info_t *)ppFVar60[2],
                                         ppFVar60[3],(camera3_stream *)ppFVar60[4],
                                         (cam_stream_type_t)ppFVar60[5],*(ulonglong *)(ppFVar60 + 6)
                                         ,(QCamera3Channel *)ppFVar60[8],(uint)ppFVar60[9]);
                    ppFVar39[5] = *(FuncDef73 **)(pFVar29 + 0x78);
                    ppFVar39[6] = pFVar29;
                    param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                    pQVar51 = (QCamera3HardwareInterface *)ppFVar60[0x16];
                  }
                  else {
                    pQVar12 = (QCamera3RegularChannel *)operator_new(0x3180);
                    uVar15 = *(uint *)(this + 0xf4);
                    iVar32 = *(int *)(ppFVar60[0x1f] + *(int *)(this + 0x60) * 4);
                    iVar24 = *(int *)(this + 0x2c8);
                    pFVar49 = ppFVar60[0x2a];
                    pFVar54 = *(FuncDef73 **)(pFVar49 + iVar24 * 4 + 0x44);
                    pFVar29 = *(FuncDef73 **)(pFVar49 + iVar24 * 8 + 0x68);
                    pFVar49 = *(FuncDef73 **)(pFVar49 + iVar24 * 8 + 0x6c);
                    uVar14 = **(uint **)(this + 100);
                    pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
                    ppFVar60[8] = *(FuncDef73 **)(this + 0x8c);
                    ppFVar60[9] = (FuncDef73 *)0x0;
                    *ppFVar60 = ppFVar60[0x11];
                    ppFVar60[1] = ppFVar60[0x1b];
                    ppFVar60[2] = (FuncDef73 *)(iVar32 + 0x3008);
                    ppFVar60[3] = (FuncDef73 *)this;
                    ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                    ppFVar60[4] = (FuncDef73 *)ppFVar39;
                    ppFVar60[5] = pFVar54;
                    ppFVar60[6] = pFVar29;
                    ppFVar60[7] = pFVar49;
                    param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                    pFVar29 = (FuncDef73 *)
                              QCamera3RegularChannel::QCamera3RegularChannel
                                        (pQVar12,uVar14,uVar15,pmVar35,(FuncDef67 *)*ppFVar60,
                                         (FuncDef68 *)ppFVar60[1],(cam_padding_info_t *)ppFVar60[2],
                                         ppFVar60[3],(camera3_stream *)ppFVar60[4],
                                         (cam_stream_type_t)ppFVar60[5],*(ulonglong *)(ppFVar60 + 6)
                                         ,(QCamera3Channel *)ppFVar60[8],(uint)ppFVar60[9]);
                    ppFVar39[5] = (FuncDef73 *)0x30;
                    ppFVar39[6] = pFVar29;
                    pQVar51 = (QCamera3HardwareInterface *)ppFVar60[0x16];
                    if (*(int *)(ppFVar60[0x2d] + 0x34) != 0) {
                      *ppFVar60 = (FuncDef73 *)(DAT_00083758 + 0x83478);
                      ppFVar60[1] = (FuncDef73 *)0x30;
                      mm_camera_debug_log(1,6,DAT_0008375c + 0x83484,0xa27);
                    }
                  }
                  break;
                case (FuncDef73 *)0x23:
                  this_04 = (QCamera3YUVChannel *)operator_new(0x31b0);
                  iVar24 = *(int *)(this + 0x2c8);
                  pFVar29 = ppFVar60[0x2a];
                  pFVar54 = *(FuncDef73 **)(pFVar29 + iVar24 * 4 + 0x44);
                  pFVar49 = *(FuncDef73 **)(pFVar29 + iVar24 * 8 + 0x68);
                  pFVar29 = *(FuncDef73 **)(pFVar29 + iVar24 * 8 + 0x6c);
                  uVar15 = *(uint *)(this + 0xf4);
                  uVar14 = **(uint **)(this + 100);
                  pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
                  ppFVar60[8] = *(FuncDef73 **)(this + 0x8c);
                  param_1 = (camera3_stream_configuration *)ppFVar60[0x2b];
                  *ppFVar60 = ppFVar60[0x11];
                  ppFVar60[1] = ppFVar60[0x1b];
                  ppFVar60[2] = (FuncDef73 *)(ppFVar60 + 0x3c);
                  ppFVar60[3] = (FuncDef73 *)this;
                  ppFVar60[4] = ppFVar60[0x28];
                  ppFVar60[5] = pFVar54;
                  ppFVar60[6] = pFVar49;
                  ppFVar60[7] = pFVar29;
                  ppFVar39 = (FuncDef73 **)ppFVar60[0x28];
                  pFVar29 = (FuncDef73 *)
                            QCamera3YUVChannel::QCamera3YUVChannel
                                      (this_04,uVar14,uVar15,pmVar35,*ppFVar60,
                                       (FuncDef74 *)ppFVar60[1],(cam_padding_info_t *)ppFVar60[2],
                                       ppFVar60[3],(camera3_stream *)ppFVar60[4],
                                       (cam_stream_type_t)ppFVar60[5],*(ulonglong *)(ppFVar60 + 6),
                                       (QCamera3Channel *)ppFVar60[8]);
                  ppFVar39[5] = *(FuncDef73 **)(pFVar29 + 0x78);
LAB_000834de:
                  ppFVar39[6] = pFVar29;
                  break;
                default:
                  if (*(int *)(ppFVar60[0x2d] + 0x20) == 0) goto LAB_000823ac;
                  uVar31 = 0xa89;
                  *ppFVar60 = (FuncDef73 *)(DAT_00083be0 + 0x83b2e);
                  ppFVar60[1] = pFVar29;
                  iVar24 = DAT_00083be4 + 0x83b3a;
                  goto LAB_000823a6;
                }
LAB_000834e0:
                this_06 = (QCamera3Channel *)ppFVar39[6];
                if (((this_06 != (QCamera3Channel *)0x0) &&
                    (iVar24 = QCamera3Channel::isUBWCEnabled(), iVar24 != 0)) &&
                   (iVar24 = QCamera3Channel::getStreamDefaultFormat
                                       (this_06,*(cam_stream_type_t *)
                                                 (this + *(int *)(this + 0x2c8) * 4 + 0x2cc)),
                   iVar24 == 0x66)) {
                  ppFVar39[4] = (FuncDef73 *)((uint)ppFVar39[4] | 0x10000000);
                }
                puVar21 = *(undefined4 **)(this + 0x3fc);
                do {
                  puVar21 = (undefined4 *)puVar21[2];
                  if (puVar21 == *(undefined4 **)(this + 0x3fc)) goto LAB_00083522;
                } while (*(FuncDef73 ***)(FuncDef73 **)*puVar21 != ppFVar39);
                ((FuncDef73 **)*puVar21)[6] = ppFVar39[6];
LAB_00083522:
                auVar67 = *(undefined (*) [16])
                           (*(int *)(ppFVar60[0x1f] + *(int *)(this + 0x60) * 4) + 0x3008);
                auVar69 = *(undefined (*) [16])
                           (*(int *)(ppFVar60[0x1f] + *(int *)(this + 0x60) * 4) + 0x3014);
                *(longlong *)(ppFVar60 + 0x3c) = SUB168(auVar67,0);
                *(longlong *)(ppFVar60 + 0x3e) = SUB168(auVar67 >> 0x40,0);
                *(longlong *)(ppFVar60 + 0x3f) = SUB168(auVar69,0);
                *(longlong *)(ppFVar60 + 0x41) = SUB168(auVar69 >> 0x40,0);
                if (*ppFVar39 != (FuncDef73 *)0x1) {
                  *(int *)(this + 0x2c8) = *(int *)(this + 0x2c8) + 1;
                }
                pcVar18 = ppFVar60[0x27] + 1;
                puVar61 = (ulonglong *)ppFVar60;
              } while (pcVar18 < *(code **)param_1);
            }
            if (((*(uint *)(puVar61 + 10) & 1) == 0) &&
               (this[0x1ab] != (QCamera3HardwareInterface)0x0)) {
              iVar32 = *(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(this + 0x60) * 4);
              iVar24 = *(int *)(iVar32 + 0x2ae8);
              if (iVar24 == 0) {
                iVar50 = 0;
                iVar46 = 0;
              }
              else {
                iVar50 = 0;
                iVar46 = 0;
                piVar38 = (int *)(iVar32 + 0x2aec);
                iVar10 = 0;
                do {
                  if (iVar10 < *piVar38) {
                    iVar50 = *piVar38;
                    iVar46 = piVar38[1];
                    iVar10 = *piVar38;
                  }
                  piVar38 = piVar38 + 2;
                  iVar24 = iVar24 + -1;
                } while (iVar24 != 0);
              }
              if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
                iVar32 = *(int *)(iVar32 + 0x33e0);
                *(undefined4 *)(puVar61 + 1) = 0;
                *(undefined4 *)((int)puVar61 + 0xc) = 0;
                *(undefined4 *)(puVar61 + 2) = 8;
                *(int *)((int)puVar61 + 0x14) = iVar32;
                *(int *)puVar61 = DAT_00083760 + 0x835da;
                iVar24 = mm_camera_debug_log(1,4,DAT_00083764 + 0x835e2,0x35bf);
                if (iVar32 != 7) {
                  iVar24 = *(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c);
                }
                if (iVar32 != 7 && iVar24 != 0) {
                  *(int *)puVar61 = DAT_00083768 + 0x83600;
                  *(int *)((int)puVar61 + 4) = iVar32;
                  mm_camera_debug_log(1,4,DAT_0008376c + 0x8360a,0x35ca);
                }
              }
              this_05 = (QCamera3RawDumpChannel *)operator_new(0xa8);
              this = *(QCamera3HardwareInterface **)(puVar61 + 0x16);
              uVar15 = *(uint *)(this + 0xf4);
              uVar14 = **(uint **)(this + 100);
              pmVar35 = (mm_camera_ops_t *)(*(uint **)(this + 100))[1];
              *(int *)puVar61 = iVar50;
              *(int *)((int)puVar61 + 4) = iVar46;
              *(ulonglong **)(puVar61 + 1) = puVar61 + 0x1e;
              *(QCamera3HardwareInterface **)((int)puVar61 + 0xc) = this;
              *(undefined4 *)(puVar61 + 2) = 0;
              *(undefined4 *)((int)puVar61 + 0x14) = 0;
              *(undefined4 *)(puVar61 + 3) = 3;
              uVar31 = QCamera3RawDumpChannel::QCamera3RawDumpChannel
                                 (this_05,uVar14,uVar15,pmVar35,*(cam_dimension_t *)puVar61,
                                  *(cam_padding_info_t **)((int)puVar61 + 4),*(void **)(puVar61 + 1)
                                  ,*(ulonglong *)((int)puVar61 + 0xc),*(uint *)((int)puVar61 + 0x14)
                                 );
              *(undefined4 *)(this + 0xa0) = uVar31;
            }
            puVar58 = puVar61;
            if (*(int *)(this + 0x9c) != 0) {
              iVar32 = *(int *)(puVar61 + 0x16);
              uVar31 = *(undefined4 *)(puVar61 + 0xe);
              puVar61[0x17] = 0;
              puVar61[0x18] = 0;
              *(undefined4 *)(puVar61 + 0x1d) = 0;
              puVar61[0x1b] = 0;
              puVar61[0x1c] = 0;
              puVar61[0x19] = 0;
              puVar61[0x1a] = 0;
              *(undefined4 *)(iVar32 + 0x2cc + *(int *)(iVar32 + 0x2c8) * 4) = 0xb;
              iVar45 = iVar32 + 0x2f0;
              iVar24 = *(int *)(iVar32 + 0x2c8);
              *(undefined4 *)(iVar45 + iVar24 * 8) = uVar31;
              *(undefined4 *)(iVar45 + iVar24 * 8 + 4) = 0;
              puVar21 = (undefined4 *)(iVar45 + *(int *)(iVar32 + 0x2c8) * 8);
              uVar14 = *(uint *)(iVar32 + 0x2cc + *(int *)(iVar32 + 0x2c8) * 4);
              iVar24 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar32 + 0x60) * 4
                                        ) + 0x33e0);
              if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
                uVar31 = puVar21[1];
                *(undefined4 *)(puVar61 + 1) = *puVar21;
                *(undefined4 *)((int)puVar61 + 0xc) = uVar31;
                *(uint *)(puVar61 + 2) = uVar14;
                *(int *)((int)puVar61 + 0x14) = iVar24;
                *(int *)puVar61 = DAT_00083770 + 0x836cc;
                mm_camera_debug_log(1,4,DAT_00083774 + 0x836d4,0x35bf);
              }
              if (iVar24 == 7) {
                if ((uVar14 < 0xc) && ((1 << (uVar14 & 0xff) & 0x812U) != 0)) {
                  puVar21[1] = puVar21[1] | 1;
                }
              }
              else if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
                *(int *)puVar61 = DAT_00083778 + 0x83706;
                *(int *)((int)puVar61 + 4) = iVar24;
                mm_camera_debug_log(1,4,DAT_0008377c + 0x83710,0x35ca);
              }
              iVar45 = *(int *)(puVar61 + 0x16);
              iVar24 = iVar45 + *(int *)(iVar45 + 0x2c8) * 8;
              uVar31 = *(undefined4 *)(iVar24 + 0x2f4);
              *(undefined4 *)puVar61 = *(undefined4 *)(iVar24 + 0x2f0);
              *(undefined4 *)((int)puVar61 + 4) = uVar31;
              *(ulonglong **)(puVar61 + 1) = puVar61 + 0x17;
              iVar45 = QCameraCommon::getAnalysisInfo
                                 ((bool)((char)iVar45 + -0x10),false,*puVar61,
                                  (cam_analysis_info_t *)0x1);
              if (iVar45 != 0) {
                if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x20) != 0) {
                  uVar31 = 0xad6;
                  *(int *)puVar61 = DAT_00083780 + 0x8374a;
                  *(int *)((int)puVar61 + 4) = iVar45;
                  iVar24 = DAT_00083784 + 0x83754;
                  goto LAB_0008254a;
                }
                goto LAB_0008254e;
              }
              iVar32 = *(int *)(puVar61 + 0x16);
              iVar45 = 0;
              uVar31 = *(undefined4 *)(puVar61 + 0x18);
              iVar24 = iVar32 + *(int *)(iVar32 + 0x2c8) * 8;
              *(undefined4 *)(iVar24 + 0x288) = *(undefined4 *)((int)puVar61 + 0xbc);
              *(undefined4 *)(iVar24 + 0x28c) = uVar31;
              *(int *)(iVar32 + 0x2c8) = *(int *)(iVar32 + 0x2c8) + 1;
            }
            __aeabi_memcpy8(puVar61 + 0x23,*(void **)(puVar61 + 0x15),0x168);
            if (*(uint *)(puVar61 + 0x2b) != 0) {
              puVar30 = puVar61 + 0x30;
              uVar14 = 0;
              do {
                if ((*(int *)((int)puVar61 + uVar14 * 4 + 0x15c) != 0xb) &&
                   ((*(uint *)puVar30 | *(uint *)((int)puVar30 + 4)) != 0)) {
                  if (**(uint **)((int)puVar61 + 0xac) != 0) {
                    uVar14 = 0;
                    goto LAB_00083af8;
                  }
                  break;
                }
                puVar30 = puVar30 + 1;
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(uint *)(puVar61 + 0x2b));
            }
            goto LAB_000837dc;
          }
          if (*(int *)(iVar24 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_00082a8c + 0x829b6,0x8f4);
          }
          if (*(int **)(this + 0x8c) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x8c) + 4))();
          }
          *(undefined4 *)(this + 0x8c) = 0;
        }
        else {
          puVar58 = (ulonglong *)&stack0xfffffcf8;
          if (*(int *)(iVar24 + 0x20) != 0) {
            uVar31 = 0x872;
            iVar24 = DAT_00082698 + 0x8254c;
            puVar61 = (ulonglong *)&stack0xfffffcf8;
LAB_0008254a:
            mm_camera_debug_log(1,1,iVar24,uVar31);
            puVar58 = puVar61;
          }
        }
        goto LAB_0008254e;
      }
      if (*(int *)(iVar24 + 0x20) != 0) {
        uVar31 = 0x831;
        iVar24 = DAT_0008265c + 0x82388;
LAB_000823a6:
        mm_camera_debug_log(1,1,iVar24,uVar31);
        ppFVar56 = ppFVar60;
      }
LAB_000823ac:
      pthread_mutex_unlock(__mutex_00);
      iVar45 = -0x16;
      puVar57 = (undefined *)ppFVar56;
      goto LAB_000823b4;
    }
    if (*(int *)(*(int *)(DAT_00081ecc + 0x81b9a) + 0x20) != 0) {
      uVar31 = 0x6fc;
      iVar24 = DAT_00081ed4 + 0x81bb6;
LAB_00082788:
      mm_camera_debug_log(1,1,iVar24,uVar31);
    }
  }
LAB_0008278c:
  iVar45 = -0x16;
  puVar59 = &stack0xfffffcf8;
  goto LAB_00082790;
  while (uVar14 = uVar14 + 1, uVar14 < **(uint **)((int)puVar61 + 0xac)) {
LAB_00083af8:
    uVar15 = *(int *)(*(int *)(*(int *)(*(int *)((int)puVar61 + 0xac) + 4) + uVar14 * 4) + 0xc) -
             0x20;
    if ((5 < uVar15) || ((1 << (uVar15 & 0xff) & 0x33U) == 0)) {
      iVar24 = *(int *)(puVar61 + 0x16);
      if (*(int *)(iVar24 + 0x98) == 0) goto LAB_000839ce;
      goto LAB_00083906;
    }
  }
LAB_000837dc:
  puVar61[0x17] = 0;
  puVar61[0x18] = 0;
  puVar61[0x1b] = 0;
  puVar61[0x1c] = 0;
  *(undefined4 *)(puVar61 + 0x1d) = 0;
  puVar61[0x19] = 0;
  puVar61[0x1a] = 0;
  if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
    iVar32 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) +
                              *(int *)(*(int *)(puVar61 + 0x16) + 0x60) * 4) + 0x33e0);
    *(undefined4 *)(puVar61 + 1) = *(undefined4 *)(puVar61 + 0xe);
    *(undefined4 *)((int)puVar61 + 0xc) = 0;
    *(undefined4 *)(puVar61 + 2) = 5;
    *(int *)((int)puVar61 + 0x14) = iVar32;
    *(int *)puVar61 = DAT_00083ba0 + 0x83830;
    iVar24 = mm_camera_debug_log(1,4,DAT_00083ba4 + 0x83838,0x35bf);
    if (iVar32 != 7) {
      iVar24 = *(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c);
    }
    if (iVar32 != 7 && iVar24 != 0) {
      *(int *)puVar61 = DAT_00083ba8 + 0x83856;
      *(int *)((int)puVar61 + 4) = iVar32;
      mm_camera_debug_log(1,4,DAT_00083bac + 0x83860,0x35ca);
    }
  }
  *(undefined4 *)puVar61 = *(undefined4 *)(puVar61 + 0xe);
  *(undefined4 *)((int)puVar61 + 4) = 0;
  *(ulonglong **)(puVar61 + 1) = puVar61 + 0x17;
  iVar24 = *(int *)(puVar61 + 0x16);
  iVar32 = QCameraCommon::getAnalysisInfo
                     ((bool)((char)iVar24 + -0x10),false,*puVar61,(cam_analysis_info_t *)0x1);
  if (iVar32 != 0) {
    iVar46 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4) + 0x33e0
                     );
    bVar63 = iVar46 != 7;
    if (bVar63) {
      iVar46 = *(int *)(*(int *)((int)puVar61 + 0xb4) + 0x24);
    }
    if (bVar63 && iVar46 != 0) {
      *(int *)puVar61 = DAT_00083bb0 + 0x838a6;
      *(int *)((int)puVar61 + 4) = iVar32;
      mm_camera_debug_log(1,2,DAT_00083bb4 + 0x838b2,0xaee);
    }
  }
  pQVar11 = (QCamera3SupportChannel *)operator_new(0xa8);
  uVar15 = *(uint *)(iVar24 + 0xf4);
  iVar32 = *(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4);
  uVar31 = *(undefined4 *)(iVar32 + 0x33e0);
  uVar14 = **(uint **)(iVar24 + 100);
  pmVar35 = (mm_camera_ops_t *)(*(uint **)(iVar24 + 100))[1];
  *(uint *)((int)puVar61 + 0x1c) = (uint)(byte)*(cam_dimension_t *)((int)puVar61 + 0xb9);
  *(undefined4 *)(puVar61 + 4) = uVar31;
  *(undefined4 *)(puVar61 + 3) = 2;
  uVar31 = *(undefined4 *)(DAT_00083bb8 + 0x838e4);
  *(int *)((int)puVar61 + 0x24) = iVar24;
  *(undefined4 *)(puVar61 + 5) = 0;
  *(undefined4 *)((int)puVar61 + 0x14) = uVar31;
  *(undefined4 *)((int)puVar61 + 0xc) = 0;
  *(undefined4 *)(puVar61 + 2) = 5;
  *(undefined4 *)(puVar61 + 1) = *(undefined4 *)(puVar61 + 0xe);
  *(int *)puVar61 = iVar32 + 0x3008;
  uVar31 = QCamera3SupportChannel::QCamera3SupportChannel
                     (pQVar11,uVar14,uVar15,pmVar35,*(cam_padding_info_t **)puVar61,
                      *(ulonglong *)((int)puVar61 + 4),*(cam_stream_type_t *)((int)puVar61 + 0xc),
                      *(cam_dimension_t **)(puVar61 + 2),*(cam_format_t *)((int)puVar61 + 0x14),
                      (uchar)*(cam_dimension_t *)(puVar61 + 3),
                      *(cam_color_filter_arrangement_t *)((int)puVar61 + 0x1c),
                      *(void **)(puVar61 + 4),*(uint *)((int)puVar61 + 0x24));
  *(undefined4 *)(iVar24 + 0x98) = uVar31;
LAB_00083906:
  iVar32 = iVar24 + *(int *)(iVar24 + 0x2c8) * 8;
  uVar31 = (*(undefined4 **)(DAT_00083bbc + 0x83910))[1];
  *(undefined4 *)(iVar32 + 0x288) = **(undefined4 **)(DAT_00083bbc + 0x83910);
  *(undefined4 *)(iVar32 + 0x28c) = uVar31;
  uVar31 = *(undefined4 *)(puVar61 + 0xe);
  *(undefined4 *)(iVar24 + 0x2cc + *(int *)(iVar24 + 0x2c8) * 4) = 5;
  iVar46 = iVar24 + 0x2f0;
  iVar32 = *(int *)(iVar24 + 0x2c8);
  *(undefined4 *)(iVar46 + iVar32 * 8) = uVar31;
  *(undefined4 *)(iVar46 + iVar32 * 8 + 4) = 0;
  uVar14 = *(uint *)(iVar24 + 0x2cc + *(int *)(iVar24 + 0x2c8) * 4);
  puVar21 = (undefined4 *)(iVar46 + *(int *)(iVar24 + 0x2c8) * 8);
  iVar24 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4) + 0x33e0);
  if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
    uVar31 = puVar21[1];
    *(undefined4 *)(puVar61 + 1) = *puVar21;
    *(undefined4 *)((int)puVar61 + 0xc) = uVar31;
    *(uint *)(puVar61 + 2) = uVar14;
    *(int *)((int)puVar61 + 0x14) = iVar24;
    *(int *)puVar61 = DAT_00083bc0 + 0x83976;
    mm_camera_debug_log(1,4,DAT_00083bc4 + 0x8397e,0x35bf);
  }
  if (iVar24 == 7) {
    if ((uVar14 < 0xc) && ((1 << (uVar14 & 0xff) & 0x812U) != 0)) {
      puVar21[1] = puVar21[1] | 1;
    }
  }
  else if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
    *(int *)puVar61 = DAT_00083bc8 + 0x839b4;
    *(int *)((int)puVar61 + 4) = iVar24;
    mm_camera_debug_log(1,4,DAT_00083bcc + 0x839be,0x35ca);
  }
  iVar24 = *(int *)(puVar61 + 0x16);
  *(int *)(iVar24 + 0x2c8) = *(int *)(iVar24 + 0x2c8) + 1;
LAB_000839ce:
  if (*(int *)(iVar24 + 0xa0) != 0) {
    iVar24 = *(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4);
    iVar32 = *(int *)(iVar24 + 0x2ae8);
    if (iVar32 == 0) {
      iVar24 = 0;
      iVar46 = 0;
    }
    else {
      iVar46 = 0;
      piVar38 = (int *)(iVar24 + 0x2aec);
      iVar24 = 0;
      iVar50 = 0;
      do {
        if (iVar50 < *piVar38) {
          iVar24 = *piVar38;
          iVar46 = piVar38[1];
          iVar50 = *piVar38;
        }
        piVar38 = piVar38 + 2;
        iVar32 = iVar32 + -1;
      } while (iVar32 != 0);
    }
    iVar50 = *(int *)(puVar61 + 0x16);
    iVar32 = iVar50 + *(int *)(iVar50 + 0x2c8) * 8;
    *(int *)(iVar32 + 0x288) = iVar24;
    *(int *)(iVar32 + 0x28c) = iVar46;
    *(undefined4 *)(iVar50 + 0x2cc + *(int *)(iVar50 + 0x2c8) * 4) = 8;
    iVar32 = iVar50 + 0x2f0;
    iVar24 = *(int *)(iVar50 + 0x2c8);
    *(undefined4 *)(iVar32 + iVar24 * 8) = 0;
    *(undefined4 *)(iVar32 + iVar24 * 8 + 4) = 0;
    uVar14 = *(uint *)(iVar50 + 0x2cc + *(int *)(iVar50 + 0x2c8) * 4);
    puVar21 = (undefined4 *)(iVar32 + *(int *)(iVar50 + 0x2c8) * 8);
    iVar24 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar50 + 0x60) * 4) + 0x33e0
                     );
    if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      uVar31 = puVar21[1];
      *(undefined4 *)(puVar61 + 1) = *puVar21;
      *(undefined4 *)((int)puVar61 + 0xc) = uVar31;
      *(uint *)(puVar61 + 2) = uVar14;
      *(int *)((int)puVar61 + 0x14) = iVar24;
      *(int *)puVar61 = DAT_00083bd0 + 0x83a74;
      mm_camera_debug_log(1,4,DAT_00083bd4 + 0x83a7c,0x35bf);
    }
    if (iVar24 == 7) {
      if ((uVar14 < 0xc) && ((1 << (uVar14 & 0xff) & 0x812U) != 0)) {
        puVar21[1] = puVar21[1] | 1;
      }
    }
    else if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      *(int *)puVar61 = DAT_00083bd8 + 0x83ab2;
      *(int *)((int)puVar61 + 4) = iVar24;
      mm_camera_debug_log(1,4,DAT_00083bdc + 0x83abc,0x35ca);
    }
    iVar24 = *(int *)(puVar61 + 0x16);
    *(int *)(iVar24 + 0x2c8) = *(int *)(iVar24 + 0x2c8) + 1;
  }
  if ((**(char **)((int)puVar61 + 0x54) == '\x01') && (*(char *)(iVar24 + 0x1c4) == '\0')) {
    iVar24 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4) + 0x33e0
                     );
    if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      *(undefined4 *)(puVar61 + 1) = *(undefined4 *)(puVar61 + 0xe);
      *(undefined4 *)((int)puVar61 + 0xc) = 0;
      *(undefined4 *)(puVar61 + 2) = 4;
      *(int *)((int)puVar61 + 0x14) = iVar24;
      *(int *)puVar61 = DAT_00083ee4 + 0x83b6c;
      mm_camera_debug_log(1,4,DAT_00083ee8 + 0x83b74,0x35bf);
    }
    if (iVar24 == 7) {
      *(undefined4 *)(puVar61 + 7) = 1;
    }
    else if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      *(int *)puVar61 = DAT_00083eec + 0x83bfa;
      *(int *)((int)puVar61 + 4) = iVar24;
      mm_camera_debug_log(1,4,DAT_00083ef0 + 0x83c04,0x35ca);
    }
    pQVar12 = (QCamera3RegularChannel *)operator_new(0x3180);
    iVar24 = *(int *)(puVar61 + 0x16);
    uVar15 = *(uint *)(iVar24 + 0xf4);
    iVar32 = *(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4);
    uVar14 = **(uint **)(iVar24 + 100);
    pmVar35 = (mm_camera_ops_t *)(*(uint **)(iVar24 + 100))[1];
    *(undefined4 *)(puVar61 + 4) = *(undefined4 *)(iVar24 + 0x8c);
    *(undefined4 *)((int)puVar61 + 0x24) = 8;
    *(undefined4 *)puVar61 = *(undefined4 *)((int)puVar61 + 0x44);
    *(undefined4 *)((int)puVar61 + 4) = *(undefined4 *)((int)puVar61 + 0x6c);
    *(int *)(puVar61 + 1) = iVar32 + 0x3008;
    *(int *)((int)puVar61 + 0xc) = iVar24;
    *(int *)(puVar61 + 2) = iVar24 + 0x117f3c;
    *(undefined4 *)((int)puVar61 + 0x14) = 4;
    *(undefined4 *)(puVar61 + 3) = *(undefined4 *)(puVar61 + 0xe);
    *(undefined4 *)((int)puVar61 + 0x1c) = *(undefined4 *)(puVar61 + 7);
    uVar31 = QCamera3RegularChannel::QCamera3RegularChannel
                       (pQVar12,uVar14,uVar15,pmVar35,*(FuncDef67 **)puVar61,
                        *(FuncDef68 **)((int)puVar61 + 4),*(cam_padding_info_t **)(puVar61 + 1),
                        *(void **)((int)puVar61 + 0xc),*(camera3_stream **)(puVar61 + 2),
                        *(cam_stream_type_t *)((int)puVar61 + 0x14),puVar61[3],
                        *(QCamera3Channel **)(puVar61 + 4),*(uint *)((int)puVar61 + 0x24));
    *(undefined4 *)(iVar24 + 0xa4) = uVar31;
LAB_00083c64:
    iVar46 = *(int *)(puVar61 + 0x15);
    uVar31 = *(undefined4 *)(puVar61 + 0xe);
    *(undefined4 *)(iVar46 + *(int *)(iVar24 + 0x2c8) * 8) =
         *(undefined4 *)(QCameraParameters::FOCUS_MODES_MAP + iVar24 + 0x2c);
    iVar32 = *(int *)(iVar24 + 0x2c8);
    *(undefined4 *)(iVar46 + iVar32 * 8 + 4) =
         *(undefined4 *)(QCameraParameters::FOCUS_MODES_MAP + iVar24 + 0x30);
    *(undefined4 *)(iVar24 + 0x2cc + iVar32 * 4) = 4;
    iVar46 = iVar24 + 0x2f0;
    iVar32 = *(int *)(iVar24 + 0x2c8);
    *(undefined4 *)(iVar46 + iVar32 * 8) = uVar31;
    *(undefined4 *)(iVar46 + iVar32 * 8 + 4) = 0;
    uVar14 = *(uint *)(iVar24 + 0x2cc + *(int *)(iVar24 + 0x2c8) * 4);
    puVar21 = (undefined4 *)(iVar46 + *(int *)(iVar24 + 0x2c8) * 8);
    iVar24 = *(int *)(*(int *)(*(int *)((int)puVar61 + 0x7c) + *(int *)(iVar24 + 0x60) * 4) + 0x33e0
                     );
    if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      uVar31 = puVar21[1];
      *(undefined4 *)(puVar61 + 1) = *puVar21;
      *(undefined4 *)((int)puVar61 + 0xc) = uVar31;
      *(uint *)(puVar61 + 2) = uVar14;
      *(int *)((int)puVar61 + 0x14) = iVar24;
      *(int *)puVar61 = DAT_00083ef4 + 0x83ce6;
      mm_camera_debug_log(1,4,DAT_00083ef8 + 0x83cee,0x35bf);
    }
    if (iVar24 == 7) {
      if ((uVar14 < 0xc) && ((1 << (uVar14 & 0xff) & 0x812U) != 0)) {
        puVar21[1] = puVar21[1] | 1;
      }
    }
    else if (*(int *)(*(int *)((int)puVar61 + 0xb4) + 0x2c) != 0) {
      *(int *)puVar61 = DAT_00083efc + 0x83d24;
      *(int *)((int)puVar61 + 4) = iVar24;
      mm_camera_debug_log(1,4,DAT_00083f00 + 0x83d2e,0x35ca);
    }
    iVar24 = *(int *)(puVar61 + 0x16);
    *(int *)(iVar24 + 0x2c8) = *(int *)(iVar24 + 0x2c8) + 1;
  }
  else if (*(int *)(iVar24 + 0xa4) != 0) goto LAB_00083c64;
  uVar14 = count_leading_zeroes((uint)*(byte *)(iVar24 + 0x1c5));
  *(undefined4 *)(iVar24 + 0x330) = 6;
  *(uint *)(iVar24 + 0x334) = (uVar14 >> 5) << 3;
  iVar32 = *(int *)(*(int *)(iVar24 + 0x204) + 0x54);
  if (iVar32 != *(int *)(iVar24 + 0x204)) {
    do {
      if (*(void **)(iVar32 + 0x30) != (void *)0x0) {
        free(*(void **)(iVar32 + 0x30));
        *(undefined4 *)(iVar32 + 0x30) = 0;
      }
      if (*(int *)(iVar32 + 0x34) != 0) {
        free_camera_metadata();
      }
      iVar46 = *(int *)(iVar32 + 0x50);
      iVar50 = *(int *)(iVar32 + 0x54);
      *(int *)(iVar46 + 0x54) = iVar50;
      *(int *)(iVar50 + 0x50) = iVar46;
      pvVar6 = (void *)FUN_00098ffc(iVar32);
      operator_delete(pvVar6);
      iVar32 = iVar50;
    } while (iVar50 != *(int *)(iVar24 + 0x204));
  }
  pvVar22 = *(void **)(iVar24 + 0x20c);
  pvVar6 = *(void **)((int)pvVar22 + 0xc);
  pvVar37 = pvVar22;
  if (*(void **)((int)pvVar22 + 0xc) != pvVar22) {
    do {
      pvVar37 = *(void **)((int)pvVar6 + 0xc);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar22 = *(void **)(iVar24 + 0x20c);
      }
      pvVar6 = pvVar37;
    } while (pvVar37 != pvVar22);
  }
  *(void **)((int)pvVar37 + 8) = pvVar37;
  *(int *)(*(int *)(iVar24 + 0x20c) + 0xc) = *(int *)(iVar24 + 0x20c);
  pvVar37 = *(void **)(iVar24 + 0x270);
  pvVar6 = *(void **)((int)pvVar37 + 0x1c);
  if (pvVar6 != pvVar37) {
    do {
      pvVar23 = *(void **)((int)pvVar6 + 0x14);
      pvVar22 = *(void **)((int)pvVar23 + 0x10);
      pvVar42 = pvVar23;
      if (*(void **)((int)pvVar23 + 0x10) != pvVar23) {
        do {
          pvVar42 = *(void **)((int)pvVar22 + 0x10);
          if (pvVar22 != (void *)0x0) {
            operator_delete(pvVar22);
            pvVar23 = *(void **)((int)pvVar6 + 0x14);
          }
          pvVar22 = pvVar42;
        } while (pvVar42 != pvVar23);
      }
      *(void **)((int)pvVar42 + 0xc) = pvVar42;
      *(int *)(*(int *)((int)pvVar6 + 0x14) + 0x10) = *(int *)((int)pvVar6 + 0x14);
      pvVar6 = *(void **)((int)pvVar6 + 0x1c);
    } while (pvVar6 != pvVar37);
    pvVar6 = *(void **)(*(int *)(puVar61 + 0x16) + 0x270);
    pvVar37 = *(void **)((int)pvVar6 + 0x1c);
    if (pvVar37 != pvVar6) {
      iVar24 = *(int *)(DAT_00083f04 + 0x83df6);
      pvVar22 = pvVar37;
      do {
        pvVar37 = *(void **)((int)pvVar22 + 0x1c);
        if (pvVar22 != (void *)0x0) {
          *(int *)((int)pvVar22 + 0x10) = iVar24 + 8;
          pvVar23 = *(void **)((int)pvVar22 + 0x14);
          pvVar6 = *(void **)((int)pvVar23 + 0x10);
          pvVar42 = pvVar23;
          if (*(void **)((int)pvVar23 + 0x10) != pvVar23) {
            do {
              pvVar42 = *(void **)((int)pvVar6 + 0x10);
              if (pvVar6 != (void *)0x0) {
                operator_delete(pvVar6);
                pvVar23 = *(void **)((int)pvVar22 + 0x14);
              }
              pvVar6 = pvVar42;
            } while (pvVar42 != pvVar23);
          }
          *(void **)((int)pvVar42 + 0xc) = pvVar42;
          *(int *)(*(int *)((int)pvVar22 + 0x14) + 0x10) = *(int *)((int)pvVar22 + 0x14);
          if (*(void **)((int)pvVar22 + 0x14) != (void *)0x0) {
            operator_delete__(*(void **)((int)pvVar22 + 0x14));
          }
          operator_delete(pvVar22);
          pvVar6 = *(void **)(*(int *)(puVar61 + 0x16) + 0x270);
        }
        pvVar22 = pvVar37;
      } while (pvVar37 != pvVar6);
    }
  }
  *(void **)((int)pvVar37 + 0x18) = pvVar37;
  pQVar51 = *(QCamera3HardwareInterface **)(puVar61 + 0x16);
  *(int *)(*(int *)(pQVar51 + 0x270) + 0x1c) = *(int *)(pQVar51 + 0x270);
  pvVar22 = *(void **)(pQVar51 + 0x1fc);
  pvVar6 = *(void **)((int)pvVar22 + 0x44);
  pvVar37 = pvVar22;
  if (*(void **)((int)pvVar22 + 0x44) != pvVar22) {
    do {
      pvVar37 = *(void **)((int)pvVar6 + 0x44);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar22 = *(void **)(pQVar51 + 0x1fc);
      }
      pvVar6 = pvVar37;
    } while (pvVar37 != pvVar22);
  }
  *(void **)((int)pvVar37 + 0x40) = pvVar37;
  *(int *)(*(int *)(pQVar51 + 0x1fc) + 0x44) = *(int *)(pQVar51 + 0x1fc);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::clear
            ((CameraMetadata *)(pQVar51 + 0x1bc));
  deriveMinFrameDuration(pQVar51);
  *(undefined4 *)(*(int *)((int)puVar61 + 0x54) + 0xb0) = 3;
LAB_0008254e:
  pthread_mutex_unlock(__mutex_00);
  puVar57 = (undefined *)puVar58;
LAB_000823b4:
  puVar40 = *(uint **)(puVar57 + 0x5c);
  piVar38 = *(int **)(puVar57 + 0x60);
  puVar59 = puVar57;
LAB_00082790:
  if (1 < *puVar40) {
    if ((**(byte **)(DAT_00082a50 + 0x8279c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00082a54 + 0x827aa) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar38 != *(int *)(puVar59 + 0x2e0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar45;
}

