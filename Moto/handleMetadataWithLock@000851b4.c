
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::handleMetadataWithLock(mm_camera_super_buf_t*, bool, bool) */

void qcamera::QCamera3HardwareInterface::handleMetadataWithLock
               (mm_camera_super_buf_t *param_1,bool param_2,bool param_3)

{
  undefined auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  metadata_buffer_t mVar5;
  int iVar6;
  QCamera3HardwareInterface *pQVar7;
  uint uVar8;
  QCamera3HardwareInterface *this;
  QCamera3Stream *this_00;
  int iVar9;
  uint uVar10;
  FrameNumberRegistry *this_01;
  QCamera3HardwareInterface *pQVar11;
  QCamera3HardwareInterface *pQVar12;
  QCamera3HardwareInterface **ppQVar13;
  CameraMetadata *this_02;
  void *pvVar14;
  undefined (*pauVar15) [16];
  mm_camera_super_buf_t *__ptr;
  uint *puVar16;
  undefined4 uVar17;
  QCamera3HardwareInterface *pQVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int *piVar25;
  int *piVar26;
  uint *puVar27;
  uint *puVar28;
  QCamera3Stream **ppQVar29;
  int iVar30;
  int *this_03;
  QCamera3HardwareInterface **ppQVar31;
  int iVar32;
  uchar uVar33;
  metadata_buffer_t *pmVar34;
  QCamera3Stream *pQVar35;
  QCamera3HardwareInterface *pQVar36;
  QCamera3HardwareInterface **ppQVar37;
  undefined4 *puVar38;
  QCamera3Stream **ppQVar39;
  ulonglong *puVar40;
  undefined4 *puVar41;
  bool bVar42;
  undefined auVar43 [16];
  longlong lVar44;
  uint *local_118;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong uStack216;
  undefined4 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong uStack176;
  ulonglong local_a8;
  ulonglong uStack160;
  ulonglong local_98;
  ulonglong uStack144;
  ulonglong local_88;
  undefined4 uStack128;
  undefined4 local_7c;
  undefined4 uStack120;
  ulonglong uStack116;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong uStack88;
  ulonglong uStack80;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  
  __ptr = (mm_camera_super_buf_t *)(uint)param_2;
  piVar25 = *(int **)(DAT_0008542c + 0x851ce);
  local_3c = *piVar25;
  puVar27 = *(uint **)(DAT_00085430 + 0x851d8);
  if (1 < *puVar27) {
    if ((**(byte **)(DAT_00085434 + 0x851e4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00085438 + 0x851f4) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00086084 + 0x86066);
    }
  }
  if ((param_1[0x1aa] != (mm_camera_super_buf_t)0x0) || (*(int *)(param_1 + 0x117fd8) - 5U < 2)) {
    if (*(int *)(*(int *)(DAT_0008543c + 0x8521a) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00085444 + 0x85232,0xd59,DAT_00085440 + 0x8522a);
    }
    if (param_3 != false) {
      QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x8c),__ptr);
      free(__ptr);
    }
    goto LAB_0008535c;
  }
  pmVar34 = *(metadata_buffer_t **)(*(int *)(__ptr + 0x10) + 0x208);
  if (pmVar34 == (metadata_buffer_t *)0x0) {
LAB_000852d6:
    if (*(int *)(*(int *)(DAT_0008544c + 0x852dc) + 0x20) != 0) {
      uVar17 = 1;
      uVar23 = 0xd7f;
      iVar6 = DAT_00085450 + 0x852ec;
      iVar21 = DAT_00085454 + 0x852f4;
LAB_000852f2:
      mm_camera_debug_log(1,uVar17,iVar21,uVar23,iVar6);
    }
LAB_000852f6:
    if (param_3 != false) {
      QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x8c),__ptr);
      free(__ptr);
    }
  }
  else {
    puVar28 = (uint *)(pmVar34 + 0xc588);
    puVar40 = (ulonglong *)(pmVar34 + 0xc728);
    ppQVar37 = (QCamera3HardwareInterface **)(pmVar34 + 0xc584);
    piVar26 = (int *)(pmVar34 + 0xc538);
    puVar16 = (uint *)(uint)(byte)pmVar34[0x69];
    if (puVar16 != (uint *)0x0) {
      puVar16 = (uint *)(pmVar34 + 0xc540);
    }
    local_118 = puVar16;
    if (puVar16 != (uint *)0x0) {
      local_118 = (uint *)0x1;
    }
    if (*(int *)(*(int *)(DAT_00085448 + 0x852b8) + 0x2c) != 0 && puVar16 != (uint *)0x0) {
      local_118 = (uint *)0x1;
      mm_camera_debug_log(1,4,DAT_00085830 + 0x855d6,0xd7a,DAT_0008582c + 0x855c4,*piVar26,*ppQVar37
                         );
      if (puVar28 != (uint *)0x0) goto LAB_000852c6;
      goto LAB_000852d6;
    }
    if (puVar28 == (uint *)0x0) goto LAB_000852d6;
LAB_000852c6:
    if ((((int *)(pmVar34 + 0xc53c) == (int *)0x0) ||
        (puVar40 == (ulonglong *)0x0 || piVar26 == (int *)0x0)) ||
       (ppQVar37 == (QCamera3HardwareInterface **)0x0)) goto LAB_000852d6;
    pQVar7 = *(QCamera3HardwareInterface **)puVar40;
    pQVar18 = *(QCamera3HardwareInterface **)(pmVar34 + 0xc72c);
    uVar3 = *puVar40;
    uVar2 = *puVar40;
    uVar8 = *puVar28;
    iVar6 = *(int *)(pmVar34 + 0xc53c);
    this = *ppQVar37;
    iVar21 = *piVar26;
    lVar44 = systemTime(1);
    puVar38 = *(undefined4 **)(param_1 + 0x270);
    for (puVar41 = (undefined4 *)puVar38[7]; puVar41 != puVar38; puVar41 = (undefined4 *)puVar41[7])
    {
      iVar19 = (int)((ulonglong)(lVar44 - *(longlong *)(puVar41 + 2)) >> 0x20);
      bVar42 = (uint)(lVar44 - *(longlong *)(puVar41 + 2)) < 0xb2d05e01;
      if (((int)(iVar19 - (uint)bVar42) < 0 == (SBORROW4(iVar19,(uint)bVar42) != false)) &&
         (ppQVar39 = (QCamera3Stream **)((QCamera3Stream **)puVar41[5])[4],
         (QCamera3Stream **)puVar41[5] != ppQVar39)) {
        do {
          while (this_00 = *ppQVar39, this_00 == (QCamera3Stream *)0x0) {
LAB_0008541c:
            ppQVar29 = ppQVar39 + 4;
            ppQVar39 = (QCamera3Stream **)*ppQVar29;
            if ((QCamera3Stream **)puVar41[5] == (QCamera3Stream **)*ppQVar29) goto LAB_000854fc;
          }
          piVar26 = *(int **)(this_00 + 0x18);
          if (piVar26 != (int *)0x0) {
            this_00 = (QCamera3Stream *)piVar26[9];
          }
          if (piVar26 == (int *)0x0 || this_00 == (QCamera3Stream *)0x0) goto LAB_0008541c;
          iVar19 = *(int *)(DAT_00085800 + 0x85472);
          if (*(int *)(iVar19 + 0x20) != 0) {
            uVar23 = *puVar41;
            pQVar35 = ppQVar39[1];
            uVar17 = QCamera3Stream::getMyType(this_00);
            mm_camera_debug_log(1,1,DAT_00085808 + 0x854aa,0xd9b,DAT_00085804 + 0x85496,uVar23,
                                pQVar35,uVar17,*(undefined4 *)(*ppQVar39 + 0xc),
                                *(undefined4 *)(param_1 + 0x60));
          }
          iVar9 = (**(code **)(*piVar26 + 0x44))(piVar26,*puVar41);
          if (iVar9 == 0) goto LAB_0008541c;
          ppQVar29 = (QCamera3Stream **)ppQVar39[4];
          if (*(int *)(iVar19 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_00085810 + 0x854e4,0xda0,DAT_0008580c + 0x854d6,ppQVar39[1],
                                ppQVar29[1]);
          }
          notifyErrorForBuffer((QCamera3HardwareInterface *)param_1,(native_handle **)ppQVar39[1]);
          ppQVar39 = ppQVar29;
        } while ((QCamera3Stream **)puVar41[5] != ppQVar29);
      }
LAB_000854fc:
    }
    if (iVar6 != 0) {
      iVar6 = *(int *)(DAT_00085814 + 0x85518);
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008581c + 0x8553e,0xdc3,DAT_00085818 + 0x8552c,uVar8,pQVar7,
                            pQVar18);
      }
      puVar28 = (uint *)(*(uint **)(param_1 + 0x204))[0x15];
      if (puVar28 != *(uint **)(param_1 + 0x204)) {
        iVar19 = DAT_00085820 + 0x85554;
        iVar30 = DAT_00085824 + 0x85556;
        iVar9 = DAT_00085828 + 0x8555c;
        do {
          if (*(int *)(iVar6 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,iVar30,0xdca,iVar9,*puVar28,uVar8);
          }
          if (((puVar28[0xc] == 0) && (*puVar28 < uVar8)) &&
             ((puVar28[0x11] == 0 && (*(int *)(iVar6 + 0x20) != 0)))) {
            mm_camera_debug_log(1,1,iVar30,0xdcf,iVar19,*puVar28);
          }
          if ((*puVar28 == uVar8) && (*(char *)(puVar28 + 8) == '\0')) {
            local_a8 = local_a8 & 0xffffffff00000000;
            local_b8 = 0;
            uStack176 = 0;
            *(undefined *)(puVar28 + 8) = 1;
            uVar10 = puVar28[0x11];
            puVar28[0x11] = (uint)(QCamera3HardwareInterface *)(uVar10 + 1);
            uVar17 = translateCbUrgentMetadataToResultMetadata
                               ((QCamera3HardwareInterface *)(uVar10 + 1),pmVar34);
            local_c0 = 0;
            local_c8 = CONCAT44(uVar17,uVar8);
            local_b8 = local_b8 & 0xffffffff | (ulonglong)puVar28[0x11] << 0x20;
            iVar19 = FrameNumberRegistry::getFrameworkFrameNumber
                               ((FrameNumberRegistry *)(param_1 + 0x1e4),uVar8,(uint *)&local_68);
            if (iVar19 == 0) {
              if ((int)local_68 != -1) {
                local_c8 = local_c8 & 0xffffffff00000000 | local_68 & 0xffffffff;
                (***(code ***)(param_1 + 0x88))(*(code ***)(param_1 + 0x88),&local_c8);
                goto LAB_0008564e;
              }
              if (*(int *)(iVar6 + 0x2c) != 0) {
                uVar17 = 4;
                uVar23 = 0x10ef;
                iVar19 = DAT_00086088 + 0x8604e;
                iVar9 = DAT_0008608c + 0x86056;
                goto LAB_00085634;
              }
            }
            else {
              if (*(int *)(iVar6 + 0x20) != 0) {
                uVar17 = 1;
                uVar23 = 0x10eb;
                iVar19 = DAT_00085834 + 0x8562e;
                iVar9 = DAT_00085838 + 0x85636;
LAB_00085634:
                mm_camera_debug_log(1,uVar17,iVar9,uVar23,iVar19);
              }
LAB_0008564e:
              if (*(int *)(iVar6 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_00085840 + 0x85674,0xde5,DAT_0008583c + 0x85660,
                                    (int)local_c8,pQVar7,pQVar18);
              }
            }
            free_camera_metadata(local_c8._4_4_);
            break;
          }
          puVar28 = (uint *)puVar28[0x15];
        } while (puVar28 != *(uint **)(param_1 + 0x204));
      }
    }
    if (iVar21 == 0) {
      if (*(int *)(*(int *)(DAT_00086090 + 0x8601a) + 0x2c) != 0) {
        uVar17 = 4;
        uVar23 = 0xded;
        iVar6 = DAT_00086094 + 0x8602e;
        iVar21 = DAT_00086098 + 0x86036;
        goto LAB_000852f2;
      }
      goto LAB_000852f6;
    }
    iVar6 = *(int *)(DAT_00085844 + 0x8568a);
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0008584c + 0x856b2,0xdf5,DAT_00085848 + 0x8569e,this,pQVar7,
                          pQVar18);
    }
    ppQVar37 = (QCamera3HardwareInterface **)
               (*(QCamera3HardwareInterface ***)(param_1 + 0x204))[0x15];
    if (*(QCamera3HardwareInterface ***)(param_1 + 0x204) != ppQVar37) {
      auVar43 = ZEXT816(0);
      this_01 = (FrameNumberRegistry *)(param_1 + 0x1e4);
      do {
        if (this < *ppQVar37) break;
        local_f0 = SUB168(auVar43,0);
        local_e8 = SUB168(auVar43 >> 0x40,0);
        local_d0 = 0;
        local_e0 = local_f0;
        uStack216 = local_e8;
        if (*(int *)(iVar6 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_00085854 + 0x8574c,0xdfe,DAT_00085850 + 0x85740,*ppQVar37);
        }
        pQVar11 = ppQVar37[0x11];
        ppQVar37[0x11] = pQVar11 + 1;
        local_e0 = local_e0 & 0xffffffff | ZEXT48(pQVar11 + 1) << 0x20;
        if (local_118 != (uint *)0x0) {
          local_c8 = SUB168(auVar43,0);
          local_c0 = SUB168(auVar43 >> 0x40,0);
          local_a8 = 0;
          piVar26 = *(int **)((int)ppQVar37[4] + 0x10);
          local_b8 = local_c8;
          uStack176 = local_c0;
          if (piVar26 != (int *)ppQVar37[4]) {
            do {
              this_03 = *(int **)(*piVar26 + 0x18);
              uVar8 = (**(code **)(*this_03 + 0x20))(this_03);
              pQVar11 = (QCamera3HardwareInterface *)
                        QCamera3Channel::getStreamID((QCamera3Channel *)this_03,uVar8);
              if (*puVar16 != 0) {
                uVar8 = 0;
                do {
                  if (pQVar11 == (QCamera3HardwareInterface *)puVar16[uVar8 * 2 + 1]) {
                    if (*(int *)(iVar6 + 0x20) != 0) {
                      pQVar12 = *ppQVar37;
                      uVar17 = *(undefined4 *)(param_1 + 0x60);
                      uVar24 = 0xe10;
                      iVar21 = DAT_00085860 + 0x857ee;
                      uVar23 = 1;
                      puVar22 = &UNK_000857fe + DAT_00085864;
LAB_0008588e:
                      mm_camera_debug_log(1,uVar23,puVar22,uVar24,iVar21,pQVar12,pQVar11,uVar17);
                    }
                  }
                  else if (*(int *)(iVar6 + 0x28) != 0) {
                    pQVar12 = *ppQVar37;
                    uVar17 = *(undefined4 *)(param_1 + 0x60);
                    uVar24 = 0xe15;
                    iVar21 = DAT_00085a7c + 0x85880;
                    uVar23 = 3;
                    puVar22 = (undefined *)(DAT_00085a80 + 0x85890);
                    goto LAB_0008588e;
                  }
                  local_c8 = CONCAT44(local_c8._4_4_,1);
                  local_b8 = CONCAT44(local_b8._4_4_,4);
                  local_c0 = CONCAT44(*piVar26,*ppQVar37);
                  iVar21 = FrameNumberRegistry::getFrameworkFrameNumber
                                     (this_01,(uint)*ppQVar37,(uint *)&local_68);
                  if (iVar21 == 0) {
                    if ((int)local_68 != -1) {
                      local_c0 = local_c0 & 0xffffffff00000000 | local_68 & 0xffffffff;
                      (**(code **)(*(int *)(param_1 + 0x88) + 4))
                                (*(int *)(param_1 + 0x88),&local_c8);
                      goto LAB_000858e2;
                    }
                    if (*(int *)(iVar6 + 0x20) != 0) {
                      uVar17 = 0x110d;
                      iVar21 = DAT_00085858 + 0x857c2;
                      iVar19 = DAT_0008585c + 0x857ca;
                      goto LAB_000858c8;
                    }
                  }
                  else if (*(int *)(iVar6 + 0x20) != 0) {
                    uVar17 = 0x1109;
                    iVar21 = DAT_00085a84 + 0x858c2;
                    iVar19 = DAT_00085a88 + 0x858ca;
LAB_000858c8:
                    mm_camera_debug_log(1,1,iVar19,uVar17,iVar21);
LAB_000858e2:
                    if (*(int *)(iVar6 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_00085a90 + 0x8590a,0xe1f,DAT_00085a8c + 0x858fa,
                                          *ppQVar37,pQVar11,*(undefined4 *)(param_1 + 0x60));
                    }
                  }
                  pQVar12 = *(QCamera3HardwareInterface **)(param_1 + 0x20c);
                  pQVar36 = *ppQVar37;
                  ppQVar13 = (QCamera3HardwareInterface **)operator_new(0x10);
                  *ppQVar13 = pQVar36;
                  ppQVar13[1] = pQVar11;
                  ppQVar13[3] = pQVar12;
                  uVar8 = uVar8 + 1;
                  ppQVar13[2] = *(QCamera3HardwareInterface **)(pQVar12 + 8);
                  *(QCamera3HardwareInterface ***)(*(int *)(pQVar12 + 8) + 0xc) = ppQVar13;
                  *(QCamera3HardwareInterface ***)(pQVar12 + 8) = ppQVar13;
                } while (uVar8 < *puVar16);
              }
              piVar26 = (int *)piVar26[4];
            } while (piVar26 != (int *)ppQVar37[4]);
          }
        }
        if (*ppQVar37 < this) {
          if (ppQVar37[0xc] == (QCamera3HardwareInterface *)0x0) {
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -1;
            this_02 = (CameraMetadata *)
                      android::hardware::camera::common::V1_0::helper::CameraMetadata::
                      CameraMetadata((CameraMetadata *)&local_c8);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      (this_02,0xc0001,(int *)(ppQVar37 + 2),1);
            uVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                              ((CameraMetadata *)&local_c8);
            local_f0 = local_f0 & 0xffffffff | (ulonglong)uVar8 << 0x20;
            notifyError((QCamera3HardwareInterface *)param_1,(uint)*ppQVar37,3);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                      ((CameraMetadata *)&local_c8);
            goto LAB_00085ba0;
          }
          ppQVar13 = (QCamera3HardwareInterface **)ppQVar37[0x15];
        }
        else {
          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -1;
          uStack80 = SUB168(auVar43 >> 0x40,0);
          local_48 = 0;
          local_44 = 0;
          local_68 = CONCAT44(SUB164(auVar43 >> 0x20,0),2);
          local_60 = uStack80 & 0xffffffff00000000 | ZEXT48(*ppQVar37);
          uStack88 = uVar3;
          iVar21 = FrameNumberRegistry::getFrameworkFrameNumber
                             (this_01,(uint)*ppQVar37,(uint *)&local_c8);
          if (iVar21 == 0) {
            if ((int)local_c8 == -1) {
              if (*(int *)(iVar6 + 0x20) != 0) {
                uVar17 = 0x110d;
                iVar21 = DAT_0008609c + 0x85fd4;
                iVar19 = DAT_000860a0 + 0x85fdc;
                goto LAB_000859b2;
              }
            }
            else {
              local_60 = local_60 & 0xffffffff00000000 | local_c8 & 0xffffffff;
              (**(code **)(*(int *)(param_1 + 0x88) + 4))(*(int *)(param_1 + 0x88),&local_68);
            }
          }
          else if (*(int *)(iVar6 + 0x20) != 0) {
            uVar17 = 0x1109;
            iVar21 = DAT_00085a94 + 0x859ac;
            iVar19 = DAT_00085a98 + 0x859b4;
LAB_000859b2:
            mm_camera_debug_log(1,1,iVar19,uVar17,iVar21);
          }
          ppQVar37[0xb] = pQVar18;
          ppQVar37[10] = pQVar7;
          pQVar11 = *ppQVar37;
          ppQVar13 = *(QCamera3HardwareInterface ***)(param_1 + 0x270);
          ppQVar31 = (QCamera3HardwareInterface **)ppQVar13[7];
          local_c8 = uVar2;
          if (ppQVar31 != ppQVar13) {
            do {
              if ((*ppQVar31 == pQVar11) &&
                 (pQVar12 = *(QCamera3HardwareInterface **)(ppQVar31[5] + 0x10),
                 pQVar12 != ppQVar31[5])) {
                do {
                  setMetaData(**(undefined4 **)(pQVar12 + 4),1,&local_c8);
                  pQVar12 = *(QCamera3HardwareInterface **)(pQVar12 + 0x10);
                } while (pQVar12 != ppQVar31[5]);
                ppQVar13 = *(QCamera3HardwareInterface ***)(param_1 + 0x270);
              }
              ppQVar31 = (QCamera3HardwareInterface **)ppQVar31[7];
            } while (ppQVar31 != ppQVar13);
          }
          piVar26 = (int *)ppQVar37[4];
          do {
            piVar26 = (int *)piVar26[4];
            if (piVar26 == (int *)ppQVar37[4]) {
              uVar33 = '\0';
              goto LAB_00085a9e;
            }
          } while (*(QCamera3HardwareInterface *)(piVar26 + 2) == (QCamera3HardwareInterface)0x0);
          QCamera3ProcessingChannel::queueReprocMetadata
                    (*(mm_camera_super_buf_t **)(*piVar26 + 0x18));
          uVar33 = '\x01';
LAB_00085a9e:
          piVar26 = (int *)ppQVar37[6];
          do {
            piVar26 = (int *)piVar26[3];
            if (piVar26 == (int *)ppQVar37[6]) goto LAB_00085abc;
          } while (*(QCamera3HardwareInterface *)(piVar26 + 1) == (QCamera3HardwareInterface)0x0);
          QCamera3ProcessingChannel::queueReprocMetadata
                    (*(mm_camera_super_buf_t **)(*piVar26 + 0x18));
          uVar33 = '\x01';
LAB_00085abc:
          pQVar11 = (QCamera3HardwareInterface *)
                    translateFromHalMetadata
                              ((metadata_buffer_t *)param_1,CONCAT44(ppQVar37 + 0xe,ppQVar37[2]),
                               (int)pmVar34,(CameraMetadata *)ppQVar37[10],(uchar)ppQVar37[0xb],
                               *(uchar *)(ppQVar37 + 0x10),*(bool *)(ppQVar37 + 0x12),uVar33,
                               *(bool *)((int)ppQVar37 + 0x49));
          local_f0 = local_f0 & 0xffffffff | ZEXT48(pQVar11) << 0x20;
          restoreHdrScene(pQVar11,*(uchar *)((int)ppQVar37 + 0x4b),(camera_metadata *)pQVar11);
          saveExifParams((QCamera3HardwareInterface *)param_1,pmVar34);
          if (ppQVar37[7] != (QCamera3HardwareInterface *)0x0) {
            local_c8 = SUB168(auVar43,0);
            local_c0 = SUB168(auVar43 >> 0x40,0);
            uStack120 = SUB164(auVar43 >> 0x20,0);
            uStack128 = SUB164(auVar43 >> 0x40,0);
            local_7c = SUB164(auVar43 >> 0x60,0);
            local_b8 = local_c8;
            uStack176 = local_c0;
            local_a8 = local_c8;
            uStack160 = local_c0;
            local_98 = local_c8;
            uStack144 = local_c0;
            local_88 = local_c8;
            uStack116 = local_c0;
            property_get(DAT_00085e98 + 0x85b46,&local_c8,DAT_00085e9c + 0x85b48);
            iVar21 = atoi((char *)&local_c8);
            if ((iVar21 != 0) && (pmVar34[0x772c8] != (metadata_buffer_t)0x0)) {
              dumpMetadataToFile(this,(tuning_params_t *)(pmVar34 + 0x772cc),
                                 (uint *)(param_1 + 0x418),true,(char *)(DAT_00085ea0 + 0x85b60),
                                 (uint)this);
            }
          }
          if (uVar33 == '\0') {
            if (*(int *)(iVar6 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,DAT_00085ea8 + 0x85b88,0xe89,DAT_00085ea4 + 0x85b80);
            }
            if (param_3 != false) {
              QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x8c),__ptr);
              free(__ptr);
            }
          }
LAB_00085ba0:
          if ((local_f0._4_4_ == 0) && (*(int *)(iVar6 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,DAT_00085eb0 + 0x85bbe,0xe92,DAT_00085eac + 0x85bb6);
          }
          local_f0 = local_f0 & 0xffffffff00000000 | ZEXT48(*ppQVar37);
          local_e8._0_4_ = 0;
          local_e8 = 0;
          local_e0 = local_e0 & 0xffffffff00000000 | ZEXT48(ppQVar37[0xc]);
          pQVar11 = ppQVar37[4];
          pQVar12 = *(QCamera3HardwareInterface **)(pQVar11 + 0x10);
          if (pQVar12 != pQVar11) {
            local_e8._0_4_ = 0;
            do {
              if (*(int *)(pQVar12 + 4) != 0) {
                local_e8._0_4_ = (uint)local_e8 + 1;
                local_e8 = (ulonglong)(uint)local_e8;
              }
              pQVar12 = *(QCamera3HardwareInterface **)(pQVar12 + 0x10);
            } while (pQVar12 != pQVar11);
          }
          ppQVar13 = *(QCamera3HardwareInterface ***)(param_1 + 0x270);
          ppQVar31 = (QCamera3HardwareInterface **)ppQVar13[7];
          if (ppQVar31 != ppQVar13) {
            pQVar11 = *ppQVar37;
            do {
              piVar26 = *(int **)((int)ppQVar31[5] + 0x10);
              if (piVar26 != (int *)ppQVar31[5]) {
                do {
                  if ((*ppQVar31 == pQVar11) &&
                     (bVar4 = (**(code **)(**(int **)(*piVar26 + 0x18) + 0x20))(),
                     pmVar34 != (metadata_buffer_t *)0x0)) {
                    mVar5 = (metadata_buffer_t)(bVar4 & 2);
                    bVar42 = mVar5 != (metadata_buffer_t)0x0;
                    if (bVar42) {
                      mVar5 = pmVar34[10];
                    }
                    if (bVar42 && mVar5 != (metadata_buffer_t)0x0) {
                      local_c8 = local_c8 & 0xffffffff00000000 |
                                 (ulonglong)*(uint *)(pmVar34 + 0x72ea0);
                      setMetaData(*(undefined4 *)piVar26[1],0x100,&local_c8);
                    }
                  }
                  piVar26 = (int *)piVar26[4];
                } while (piVar26 != (int *)ppQVar31[5]);
                ppQVar13 = *(QCamera3HardwareInterface ***)(param_1 + 0x270);
              }
              ppQVar31 = (QCamera3HardwareInterface **)ppQVar31[7];
            } while (ppQVar31 != ppQVar13);
          }
          if ((uint)local_e8 == 0) {
            iVar21 = FrameNumberRegistry::getFrameworkFrameNumber
                               (this_01,(uint)local_f0,(uint *)&local_c8);
            if (iVar21 == 0) {
              if ((int)local_c8 != -1) {
                local_f0 = local_f0 & 0xffffffff00000000 | local_c8 & 0xffffffff;
                (***(code ***)(param_1 + 0x88))(*(code ***)(param_1 + 0x88),&local_f0);
                goto LAB_00085f44;
              }
              if (*(int *)(iVar6 + 0x2c) != 0) {
                uVar17 = 4;
                uVar23 = 0x10ef;
                iVar21 = DAT_000860e0 + 0x8600c;
                iVar19 = DAT_000860e4 + 0x86014;
                goto LAB_00085ee0;
              }
            }
            else {
              if (*(int *)(iVar6 + 0x20) != 0) {
                uVar17 = 1;
                uVar23 = 0x10eb;
                iVar21 = DAT_000860d8 + 0x85eda;
                iVar19 = DAT_000860dc + 0x85ee2;
LAB_00085ee0:
                mm_camera_debug_log(1,uVar17,iVar19,uVar23,iVar21);
              }
LAB_00085f44:
              if (*(int *)(iVar6 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000860ec + 0x85f6a,0xed3,DAT_000860e8 + 0x85f56,
                                    (uint)local_f0,ppQVar37[10],ppQVar37[0xb]);
              }
            }
            free_camera_metadata(local_f0._4_4_);
          }
          else {
            uVar8 = (uint)((ulonglong)(uint)local_e8 * 0x14);
            iVar21 = (int)((ulonglong)(uint)local_e8 * 0x14 >> 0x20);
            if (iVar21 != 0) {
              iVar21 = 1;
            }
            if (iVar21 != 0) {
              uVar8 = 0xffffffff;
            }
            pvVar14 = operator_new__(uVar8);
            puVar41 = (undefined4 *)ppQVar37[4];
            puVar38 = (undefined4 *)puVar41[4];
            if (puVar38 != puVar41) {
              iVar21 = 0;
              do {
                piVar26 = (int *)puVar38[1];
                if (piVar26 != (int *)0x0) {
                  ppQVar13 = (QCamera3HardwareInterface **)
                             (*(QCamera3HardwareInterface ***)(param_1 + 0x20c))[3];
                  if (ppQVar13 != *(QCamera3HardwareInterface ***)(param_1 + 0x20c)) {
                    while( true ) {
                      piVar26 = *(int **)(*piVar26 + 0x18);
                      uVar8 = (**(code **)(*piVar26 + 0x20))(piVar26);
                      pQVar12 = (QCamera3HardwareInterface *)
                                QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar8);
                      pQVar11 = ppQVar13[1];
                      bVar42 = pQVar11 == pQVar12;
                      if (bVar42) {
                        pQVar11 = *ppQVar13;
                      }
                      if (bVar42 && pQVar11 == this) break;
                      ppQVar13 = (QCamera3HardwareInterface **)ppQVar13[3];
                      if (ppQVar13 == *(QCamera3HardwareInterface ***)(param_1 + 0x20c))
                      goto LAB_00085d24;
                      piVar26 = (int *)puVar38[1];
                    }
                    *(undefined4 *)(puVar38[1] + 8) = 1;
                    if (*(int *)(iVar6 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_000860a4 + 0x85d14,0xeb0,DAT_00086080 + 0x85d04,
                                          this,pQVar12,*(undefined4 *)(param_1 + 0x60));
                    }
                    pQVar11 = ppQVar13[2];
                    pQVar12 = ppQVar13[3];
                    *(QCamera3HardwareInterface **)(pQVar11 + 0xc) = pQVar12;
                    *(QCamera3HardwareInterface **)(pQVar12 + 8) = pQVar11;
                    operator_delete(ppQVar13);
                  }
LAB_00085d24:
                  iVar9 = *(int *)(param_1 + 0x270);
                  iVar19 = puVar38[1];
                  iVar30 = *(int *)(iVar9 + 0x1c);
                  if (iVar30 == iVar9) {
                    uVar8 = 0;
                  }
                  else {
                    do {
                      iVar32 = *(int *)(iVar30 + 0x14);
                      while (iVar32 = *(int *)(iVar32 + 0x10), iVar32 != *(int *)(iVar30 + 0x14)) {
                        if (*(int *)(iVar32 + 4) == *(int *)(iVar19 + 4)) {
                          uVar8 = *(uint *)(iVar32 + 8);
                          if (((uVar8 & 1) != 0) && (*(int *)(iVar6 + 0x28) != 0)) {
                            mm_camera_debug_log(1,3,DAT_000860ac + 0x85d76,0x35a3,
                                                DAT_000860a8 + 0x85d6a,*(int *)(iVar19 + 4));
                            iVar19 = puVar38[1];
                            uVar8 = *(uint *)(iVar32 + 8);
                          }
                          goto LAB_00085d82;
                        }
                      }
                      iVar30 = *(int *)(iVar30 + 0x1c);
                    } while (iVar30 != iVar9);
                    uVar8 = 0;
                  }
LAB_00085d82:
                  *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) | uVar8;
                  iVar19 = puVar38[1];
                  if ((*(byte *)(iVar19 + 8) & 1) != 0) {
                    if (*(int *)(iVar6 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_000860cc + 0x85dbe,0xeb8,DAT_000860c8 + 0x85dae,
                                          this,*(undefined4 *)(iVar19 + 4),
                                          *(undefined4 *)(param_1 + 0x60));
                    }
                    uStack176 = SUB168(auVar43 >> 0x40,0);
                    local_a8 = 0;
                    local_c8._4_4_ = SUB164(auVar43 >> 0x20,0);
                    local_c8 = CONCAT44(local_c8._4_4_,1);
                    local_b8 = CONCAT44(local_c8._4_4_,4);
                    local_c0 = CONCAT44(*puVar38,this);
                    iVar19 = FrameNumberRegistry::getFrameworkFrameNumber
                                       (this_01,(uint)this,(uint *)&local_68);
                    if (iVar19 == 0) {
                      if ((int)local_68 == -1) {
                        if (*(int *)(iVar6 + 0x20) != 0) {
                          uVar17 = 0x110d;
                          iVar19 = DAT_00085eb4 + 0x85c96;
                          iVar9 = DAT_00085eb8 + 0x85c9e;
                          goto LAB_00085e0a;
                        }
                      }
                      else {
                        local_c0 = local_c0 & 0xffffffff00000000 | local_68 & 0xffffffff;
                        (**(code **)(*(int *)(param_1 + 0x88) + 4))
                                  (*(int *)(param_1 + 0x88),&local_c8);
                      }
                    }
                    else if (*(int *)(iVar6 + 0x20) != 0) {
                      uVar17 = 0x1109;
                      iVar19 = DAT_000860d0 + 0x85e04;
                      iVar9 = DAT_000860d4 + 0x85e0c;
LAB_00085e0a:
                      mm_camera_debug_log(1,1,iVar9,uVar17,iVar19);
                    }
                    iVar19 = puVar38[1];
                  }
                  PendingBuffersMap::removeBuf
                            ((PendingBuffersMap *)(param_1 + 0x268),*(native_handle ***)(iVar19 + 4)
                            );
                  pauVar15 = (undefined (*) [16])puVar38[1];
                  auVar1 = *pauVar15;
                  puVar20 = (undefined8 *)((int)pvVar14 + iVar21 * 0x14);
                  *puVar20 = SUB168(auVar1,0);
                  puVar20[1] = SUB168(auVar1 >> 0x40,0);
                  *(undefined4 *)(puVar20 + 2) = *(undefined4 *)pauVar15[1];
                  free((void *)puVar38[1]);
                  puVar38[1] = 0;
                  iVar21 = iVar21 + 1;
                  puVar41 = (undefined4 *)ppQVar37[4];
                }
                puVar38 = (undefined4 *)puVar38[4];
              } while (puVar38 != puVar41);
            }
            local_e8 = local_e8 & 0xffffffff | ZEXT48(pvVar14) << 0x20;
            iVar21 = FrameNumberRegistry::getFrameworkFrameNumber
                               (this_01,(uint)local_f0,(uint *)&local_c8);
            if (iVar21 == 0) {
              if ((int)local_c8 != -1) {
                local_f0 = local_f0 & 0xffffffff00000000 | local_c8 & 0xffffffff;
                (***(code ***)(param_1 + 0x88))(*(code ***)(param_1 + 0x88),&local_f0);
                goto LAB_00085efc;
              }
              if (*(int *)(iVar6 + 0x2c) != 0) {
                uVar17 = 4;
                uVar23 = 0x10ef;
                iVar21 = DAT_000860b8 + 0x85ff0;
                iVar19 = DAT_000860bc + 0x85ff8;
                goto LAB_00085e92;
              }
            }
            else {
              if (*(int *)(iVar6 + 0x20) != 0) {
                uVar17 = 1;
                uVar23 = 0x10eb;
                iVar21 = DAT_000860b0 + 0x85e8c;
                iVar19 = DAT_000860b4 + 0x85e94;
LAB_00085e92:
                mm_camera_debug_log(1,uVar17,iVar19,uVar23,iVar21);
              }
LAB_00085efc:
              if (*(int *)(iVar6 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000860c4 + 0x85f22,0xeca,DAT_000860c0 + 0x85f0e,
                                    (uint)local_f0,ppQVar37[10],ppQVar37[0xb]);
              }
            }
            free_camera_metadata(local_f0._4_4_);
            operator_delete__(pvVar14);
          }
          if (ppQVar37[0xc] != (QCamera3HardwareInterface *)0x0) {
            free(ppQVar37[0xc]);
            ppQVar37[0xc] = (QCamera3HardwareInterface *)0x0;
          }
          if (ppQVar37[0xd] != (QCamera3HardwareInterface *)0x0) {
            free_camera_metadata();
          }
          pQVar11 = ppQVar37[0x14];
          ppQVar13 = (QCamera3HardwareInterface **)ppQVar37[0x15];
          *(QCamera3HardwareInterface ***)(pQVar11 + 0x54) = ppQVar13;
          ppQVar13[0x14] = pQVar11;
          pvVar14 = (void *)FUN_00098ffc((int)ppQVar37);
          operator_delete(pvVar14);
          if (*(int *)(*(int *)(param_1 + 0x1fc) + 0x44) != *(int *)(param_1 + 0x1fc)) {
            handlePendingReprocResults((QCamera3HardwareInterface *)param_1,(uint)(this + 1));
          }
        }
        ppQVar37 = ppQVar13;
      } while (*(QCamera3HardwareInterface ***)(param_1 + 0x204) != ppQVar13);
    }
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x204) + 0x54);
  if (iVar6 != *(int *)(param_1 + 0x204)) {
    do {
      *(char *)(iVar6 + 0x40) = *(char *)(iVar6 + 0x40) + '\x01';
      iVar6 = *(int *)(iVar6 + 0x54);
    } while (iVar6 != *(int *)(param_1 + 0x204));
  }
  if (*(int *)(*(int *)(DAT_00085458 + 0x85330) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00085460 + 0x85352,0xee3,DAT_0008545c + 0x85346,
                        *(undefined4 *)(param_1 + 0x278));
  }
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x274));
LAB_0008535c:
  if (1 < *puVar27) {
    if ((**(byte **)(DAT_00085464 + 0x85368) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00085468 + 0x85378) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar25 == local_3c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

