
/* qcamera::QCamera3PostProcessor::encodeData(qcamera::qcamera_hal3_jpeg_data_t*, unsigned char&) */

int __thiscall
qcamera::QCamera3PostProcessor::encodeData
          (QCamera3PostProcessor *this,qcamera_hal3_jpeg_data_t *param_1,uchar *param_2)

{
  int *piVar1;
  undefined auVar2 [16];
  void *pvVar3;
  int iVar4;
  QCamera3HardwareInterface *this_00;
  metadata_buffer_t *pmVar5;
  jpeg_settings_t *pjVar6;
  QCamera3Stream *this_01;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  QCamera3Channel *this_02;
  uint *puVar13;
  QCamera3Stream *this_03;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  int iVar18;
  bool bVar19;
  undefined4 uStack80288;
  undefined4 uStack80284;
  undefined4 uStack80280;
  undefined4 uStack80276;
  undefined4 uStack80272;
  undefined4 uStack80268;
  int iStack80264;
  int iStack80260;
  int iStack80256;
  int iStack80252;
  undefined4 uStack80244;
  undefined auStack80240 [176];
  undefined4 uStack80064;
  undefined4 uStack80060;
  undefined4 uStack80056;
  undefined4 uStack80052;
  int iStack80048;
  int iStack80044;
  undefined4 uStack80040;
  undefined4 uStack80036;
  undefined8 uStack80032;
  undefined8 uStack80024;
  int iStack80012;
  int iStack80008;
  int iStack80004;
  int iStack80000;
  undefined8 uStack79996;
  undefined8 uStack79988;
  undefined4 uStack79980;
  metadata_buffer_t *pmStack79968;
  undefined4 uStack79964;
  int iStack79960;
  undefined4 uStack79956;
  undefined4 uStack79952;
  undefined4 uStack79948;
  undefined auStack79944 [84];
  metadata_buffer_t mStack79860;
  void *pvStack79820;
  uint uStack79776;
  undefined4 uStack79640;
  uchar *puStack79604;
  uint uStack79600;
  undefined uStack79596;
  undefined4 uStack79592;
  QCamera3HardwareInterface QStack79588;
  undefined4 uStack79584;
  undefined uStack79580;
  undefined4 uStack53384;
  undefined4 uStack53376;
  undefined4 uStack53016;
  int iStack136;
  int iStack132;
  undefined4 uStack104;
  undefined4 uStack100;
  
  piVar17 = *(int **)(DAT_000ab2dc + 0xaaf50);
  iVar4 = *piVar17;
  puVar13 = *(uint **)(DAT_000ab2e0 + 0xaaf5e);
  if (1 < *puVar13) {
    if ((**(byte **)(DAT_000ab2e4 + 0xaaf6e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ab2e8 + 0xaaf7e) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000abb6c + 0xabb50);
    }
  }
  iVar11 = *(int *)(DAT_000ab2ec + 0xaaf8c);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ab2f4 + 0xaafa4,0x694,DAT_000ab2f0 + 0xaaf9c);
  }
  uStack80244 = 0;
  this_02 = *(QCamera3Channel **)(this + 4);
  if (this_02 == (QCamera3Channel *)0x0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ab30c + 0xab0da,0x6a7,DAT_000ab308 + 0xab0d2);
    }
    iVar15 = -0x16;
    goto LAB_000ab16c;
  }
  this_00 = *(QCamera3HardwareInterface **)(this_02 + 4);
  if (this_00 == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar9 = 0x6a3;
      iVar11 = DAT_000ab310 + 0xab0f2;
      iVar15 = DAT_000ab314 + 0xab0fa;
LAB_000ab13a:
      mm_camera_debug_log(1,1,iVar15,uVar9,iVar11);
    }
  }
  else {
    pmVar5 = *(metadata_buffer_t **)(param_1 + 0x1c);
    iVar15 = *(int *)(param_1 + 8);
    pjVar6 = *(jpeg_settings_t **)(param_1 + 0x24);
    if (*(int *)(iVar11 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000ab2fc + 0xaaff2,0x6b1,DAT_000ab2f8 + 0xaafe6,
                          *(undefined4 *)(*(int *)(iVar15 + 0x10) + 0xc));
      this_02 = *(QCamera3Channel **)(this + 4);
    }
    if ((this_02 != (QCamera3Channel *)0x0) && (*(int *)(this_02 + 0x54) == *(int *)(iVar15 + 4))) {
LAB_000ab006:
      if (*(int *)(iVar15 + 8) != 0) {
        this_03 = (QCamera3Stream *)0x0;
        iVar18 = 0;
        uVar12 = 0;
        do {
          this_01 = (QCamera3Stream *)
                    QCamera3Channel::getStreamByHandle
                              (this_02,**(uint **)(iVar15 + 0x10 + uVar12 * 4));
          if ((this_01 != (QCamera3Stream *)0x0) &&
             (iVar7 = QCamera3Stream::getMyType(this_01), iVar7 == 9 || iVar7 == 3)) {
            iVar18 = *(int *)(iVar15 + 0x10 + uVar12 * 4);
            this_03 = this_01;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(iVar15 + 8));
        if (iVar18 != 0) {
          if (*(QCamera3StreamMem **)(iVar18 + 0x210) == (QCamera3StreamMem *)0x0) {
            if (*(int *)(iVar11 + 0x20) == 0) {
LAB_000aba9e:
              iVar15 = -0xc;
              goto LAB_000ab16c;
            }
            uVar9 = 0x6e4;
            iVar11 = DAT_000ab330 + 0xab1c0;
            iVar15 = DAT_000ab334 + 0xab1c8;
LAB_000ab1c6:
            mm_camera_debug_log(1,1,iVar15,uVar9,iVar11);
            iVar15 = -0xc;
          }
          else {
            QCamera3StreamMem::cleanInvalidateCache
                      (*(QCamera3StreamMem **)(iVar18 + 0x210),*(uint *)(iVar18 + 0xc));
            if (*(int *)(this + 0x24) == 0) {
              if (*(int *)(iVar11 + 0x20) == 0) {
                iVar15 = -0x80000000;
              }
              else {
                mm_camera_debug_log(1,1,DAT_000ab33c + 0xab1ec,0x6ec,DAT_000ab338 + 0xab1e4);
                iVar15 = -0x80000000;
              }
              goto LAB_000ab16c;
            }
            iStack80256 = 0;
            iStack80252 = 0;
            QCamera3Stream::getFrameDimension(this_03,(cam_dimension_t *)&iStack80256);
            iStack80264 = 0;
            iStack80260 = 0;
            iVar15 = QCamera3ProcessingChannel::getStreamSize
                               (*(QCamera3ProcessingChannel **)(this + 4),
                                (cam_dimension_t *)&iStack80264);
            if (iVar15 != 0) {
              if (*(int *)(iVar11 + 0x20) == 0) {
                iVar15 = -0x80000000;
              }
              else {
                mm_camera_debug_log(1,1,DAT_000ab304 + 0xab0b8,0x6f6,DAT_000ab300 + 0xab0b0);
                iVar15 = -0x80000000;
              }
              goto LAB_000ab16c;
            }
            uStack80280 = 0;
            uStack80276 = 0;
            uStack80272 = 0;
            uStack80268 = 0;
            if (pmVar5 == (metadata_buffer_t *)0x0) {
              uVar12 = QCamera3HardwareInterface::needJpegExifRotation(this_00);
            }
            else {
              if (pmVar5[0x101] != (metadata_buffer_t)0x0) {
                auVar2 = *(undefined (*) [16])(pmVar5 + 0x76ffc);
                uStack80280 = SUB164(auVar2,0);
                uStack80276 = SUB164(auVar2 >> 0x20,0);
                uStack80272 = SUB164(auVar2 >> 0x40,0);
                uStack80268 = SUB164(auVar2 >> 0x60,0);
                if (*(int *)(iVar11 + 0x28) != 0) {
                  mm_camera_debug_log(1,3,DAT_000ab344 + 0xab246,0x706,DAT_000ab340 + 0xab232,
                                      uStack80280,uStack80276,uStack80272,uStack80268);
                }
              }
              if ((((pmVar5[0x102] != (metadata_buffer_t)0x0) &&
                   (iVar15 = *(int *)(pmVar5 + 0x7701c), iVar15 != 0)) &&
                  (iVar7 = *(int *)(pmVar5 + 0x77020), iVar7 != 0)) &&
                 (iStack80264 = iVar15, iStack80260 = iVar7, *(int *)(iVar11 + 0x28) != 0)) {
                mm_camera_debug_log(1,3,DAT_000ab34c + 0xab288,0x711,DAT_000ab348 + 0xab27a,iVar15,
                                    iVar7);
              }
              uVar12 = QCamera3HardwareInterface::needJpegExifRotation(this_00);
              uVar8 = (uint)(byte)pmVar5[0x38];
              bVar19 = uVar8 != 0;
              if (bVar19) {
                uVar8 = *(uint *)(pjVar6 + 4);
              }
              if ((bVar19 && uVar8 != 0) && (*(int *)(pmVar5 + 0x74ae4) == 1)) {
                if (*(int *)(iVar11 + 0x28) == 0) {
                  uVar12 = 1;
                }
                else {
                  uVar12 = 1;
                  mm_camera_debug_log(1,3,DAT_000ab354 + 0xab2d2,0x71a,DAT_000ab350 + 0xab2ca);
                }
              }
            }
            if ((iStack80252 == 0x870) && (iStack80256 == 0xf00)) {
              uVar8 = count_leading_zeroes((uint)(byte)this_00[0x14]);
              uVar12 = uVar12 & uVar8 >> 5;
            }
            if (pmVar5 == (metadata_buffer_t *)0x0) {
              __android_log_print(6,DAT_000ab748 + 0xab3b0,DAT_000ab74c + 0xab3b2,0,0xe7);
            }
            else {
              *(undefined4 *)(pmVar5 + 0x76f80) = 0;
              pmVar5[0xe7] = (metadata_buffer_t)0x1;
            }
            if (*(int *)(iVar11 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000ab754 + 0xab3d4,0x729,DAT_000ab750 + 0xab3c8,*param_2);
            }
            if (*param_2 == '\0') {
LAB_000ab62c:
              __aeabi_memclr8(&uStack80064,0x388);
              uStack79980 = *(undefined4 *)(this + 0x28);
              uStack80060 = *(undefined4 *)(iVar18 + 0xc);
              uStack80056 = 0;
              if ((uVar12 == 0) && (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a))
              {
                iStack80012 = iStack80252;
                iStack80008 = iStack80256;
                iStack80004 = iStack80260;
                iStack80000 = iStack80264;
                uStack79988 = CONCAT44(uStack80272,uStack80268);
                uStack79996 = CONCAT44(uStack80280,uStack80276);
              }
              else {
                uStack79996 = CONCAT44(uStack80276,uStack80280);
                uStack79988 = SUB168(CONCAT412(uStack80268,CONCAT48(uStack80272,uStack79996)) >>
                                     0x40,0);
                iStack80012 = iStack80256;
                iStack80008 = iStack80252;
                iStack80004 = iStack80264;
                iStack80000 = iStack80260;
              }
              uStack80288 = 0;
              uStack80284 = 0;
              QCamera3HardwareInterface::get3AVersion(this_00,(cam_q3a_version_t *)&uStack80288);
              iVar15 = getExifData(this,pmVar5,pjVar6,SUB41(uVar12,0));
              *(int *)(param_1 + 0x18) = iVar15;
              if (iVar15 != 0) {
                iStack79960 = iVar15 + 4;
                uStack79956 = *(undefined4 *)(iVar15 + 0x4b4);
                uStack79952 = uStack80288;
                uStack79948 = uStack80284;
              }
              QCamera3HardwareInterface::getMotCustomMetadata(this_00,&puStack79604,&uStack79600);
              *(uchar **)(param_1 + 0x28) = puStack79604;
              if (*(int *)(iVar11 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000ab784 + 0xab704,0x7b3,DAT_000ab780 + 0xab6f8,
                                    *(undefined4 *)(this + 0x468));
              }
              if (*(int *)(this + 0x468) == 1) {
                uStack80036 = *(undefined4 *)(pjVar6 + 0x10);
                if ((uVar12 == 0) && (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a)
                   ) {
                  uStack80024 = CONCAT44(uStack80272,uStack80268);
                  uStack80032 = CONCAT44(uStack80280,uStack80276);
                  uStack80040 = uStack80036;
                  iStack80044 = iStack80256;
                  iStack80048 = iStack80252;
                  uStack80036 = *(undefined4 *)(pjVar6 + 0xc);
                }
                else {
                  uStack80032 = CONCAT44(uStack80276,uStack80280);
                  uStack80024 = SUB168(CONCAT412(uStack80268,CONCAT48(uStack80272,uStack80032)) >>
                                       0x40,0);
                  uStack80040 = *(undefined4 *)(pjVar6 + 0xc);
                  iStack80044 = iStack80252;
                  iStack80048 = iStack80256;
                }
                uStack80052 = *(undefined4 *)(iVar18 + 0xc);
                if (*(int *)(iVar11 + 0x34) != 0) {
                  mm_camera_debug_log(1,6,DAT_000abb74 + 0xab7d2,0x7d3,DAT_000abb70 + 0xab7ba,
                                      uStack80052,iStack80048,iStack80044,uStack80040,uStack80036);
                  goto LAB_000ab7d4;
                }
              }
              else {
LAB_000ab7d4:
                if (*(int *)(iVar11 + 0x34) != 0) {
                  mm_camera_debug_log(1,6,DAT_000abb7c + 0xab7fa,0x7da,DAT_000abb78 + 0xab7e6,
                                      uStack80060,iStack80012,iStack80008,iStack80004,iStack80000);
                }
              }
              QCamera3HardwareInterface::get3AExifParams();
              __aeabi_memcpy8(auStack79944,auStack80240,0xb0);
              pvVar3 = pvStack79820;
              uStack79776 = count_leading_zeroes
                                      ((uint)*(byte *)(*(int *)(*(int *)(DAT_000abb80 + 0xab826) +
                                                               *(int *)(this_00 + 0x60) * 4) +
                                                      0x3831));
              uStack79776 = uStack79776 & 0xffffffe0;
              pvStack79820 = malloc((size_t)"sion");
              if (pvStack79820 == (void *)0x0) {
                if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000aba9e;
                uVar9 = 0x7e9;
                iVar11 = DAT_000abb84 + 0xaba94;
                iVar15 = DAT_000abb88 + 0xaba9c;
                goto LAB_000ab1c6;
              }
              uStack79596 = QCamera3HardwareInterface::getMobicatMask(this_00);
              if (pmVar5 == (metadata_buffer_t *)0x0) {
                if (*(int *)(iVar11 + 0x24) != 0) {
                  mm_camera_debug_log(1,2,DAT_000abb90 + 0xabac2,0x833,DAT_000abb8c + 0xababa);
                }
              }
              else {
                pmVar5[0xb72e8] = mStack79860;
                pmStack79968 = pmVar5;
                if (mStack79860 != (metadata_buffer_t)0x0) {
                  __aeabi_memcpy8(pmVar5 + 0xb72ec,auStack79944,0x54);
                }
                if (pvVar3 != (void *)0x0) {
                  __aeabi_memcpy8(pvStack79820,pvVar3,(size_t)"sion");
                  pvVar3 = pvStack79820;
                  pmVar5 = pmStack79968;
                  pmStack79968[0xb7340] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60794);
                  pcVar16 = (char *)((int)pvStack79820 + 0x60795);
                  pmStack79968[0xb86e0] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60795);
                  pcVar14 = (char *)((int)pvStack79820 + 0x60796);
                  pmStack79968[0xc36b0] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60796);
                  pmStack79968[0xcfa08] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60797);
                  pmStack79968[0xcfa74] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60798);
                  pmStack79968[0xe1f78] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60799);
                  pmStack79968[0x106974] = *(metadata_buffer_t *)((int)pvStack79820 + 0x6079a);
                  pmStack79968[0x117aec] = *(metadata_buffer_t *)((int)pvStack79820 + 0x6079b);
                  if (*(char *)((int)pvStack79820 + 0x60794) != '\0') {
                    __aeabi_memcpy8(pmStack79968 + 0xb7348,pvStack79820,0x1398);
                  }
                  if (*pcVar16 != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0xb86e4,(void *)((int)pvVar3 + 0x1398),0xafcc);
                  }
                  if (*pcVar14 != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0xc36b4,(void *)((int)pvVar3 + 0xc364),0xc354);
                  }
                  if (*(char *)((int)pvVar3 + 0x60797) != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0xcfa0c,(void *)((int)pvVar3 + 0x186b8),0x68);
                  }
                  if (*(char *)((int)pvVar3 + 0x60798) != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0xcfa78,(void *)((int)pvVar3 + 0x18720),
                                    (size_t)&DAT_00012500);
                  }
                  if (*(char *)((int)pvVar3 + 0x60799) != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0xe1f7c,(void *)((int)pvVar3 + 0x2ac20),0x249f8);
                  }
                  if (*(char *)((int)pvVar3 + 0x6079a) != '\0') {
                    __aeabi_memcpy8(pmVar5 + 0x106978,(void *)((int)pvVar3 + 0x4f618),
                                    (size_t)&DAT_00011174);
                  }
                  if (*(char *)((int)pvVar3 + 0x6079b) != '\0') {
                    uVar9 = *(undefined4 *)((int)pvVar3 + 0x6078c);
                    *(undefined4 *)(pmVar5 + 0x117af4) = *(undefined4 *)((int)pvVar3 + 0x60790);
                    *(undefined4 *)(pmVar5 + 0x117af0) = uVar9;
                  }
                }
              }
              if (this_00[0x117fe1] != (QCamera3HardwareInterface)0x0) {
                uStack79580 = 1;
                uStack79584 = 1;
                uStack79592 = 0;
                QStack79588 = this_00[0x117fe2];
              }
              uStack79964 = 3;
              iVar15 = (**(code **)(this + 0x10))(&uStack80064,&uStack80244);
              if (pvStack79820 != (void *)0x0) {
                free(pvStack79820);
              }
              if (iVar15 == 0) {
                *(undefined4 *)param_1 = uStack80244;
              }
              if (*(int *)(iVar11 + 0x2c) == 0) goto LAB_000ab16c;
              uVar9 = 4;
              uVar10 = 0x84e;
              iVar11 = DAT_000abb94 + 0xabb2c;
              iVar18 = DAT_000abb98 + 0xabb34;
            }
            else {
              piVar1 = (int *)(this + 0x28);
              if (*piVar1 != 0) {
                iVar15 = (**(code **)(this + 0x1c))();
                if (iVar15 != 0) {
                  if (*(int *)(iVar11 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_000ab75c + 0xab412,0x730,DAT_000ab758 + 0xab406,
                                        *piVar1);
                  }
                  goto LAB_000ab16c;
                }
                *piVar1 = 0;
              }
              __aeabi_memclr8(&uStack80064,(size_t)&DAT_00013890);
              getJpegEncodeConfig(this,(mm_jpeg_encode_params_t *)&uStack80064,this_03,pjVar6);
              if (*(int *)(iVar11 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000ab764 + 0xab45c,0x73a,DAT_000ab760 + 0xab448,
                                    uStack80064,uStack80060,uStack80056);
              }
              uVar9 = uStack53384;
              iVar15 = iStack80008;
              if ((uVar12 == 0) && (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a))
              {
                iStack132 = iStack80256;
                iStack136 = iStack80252;
                uStack53384 = uStack53376;
                uStack53376 = uVar9;
                iStack80008 = iStack80000;
                iStack80000 = iVar15;
              }
              else {
                iStack132 = iStack80252;
                iStack136 = iStack80256;
              }
              uVar9 = *(undefined4 *)(pjVar6 + 0xc);
              uVar10 = *(undefined4 *)(pjVar6 + 0x10);
              if ((*(int *)(iVar11 + 0x34) != 0) &&
                 (mm_camera_debug_log(1,6,DAT_000ab76c + 0xab576,0x75c,DAT_000ab768 + 0xab55c,
                                      uStack80064,iStack80008,iStack80000,uStack79640,uStack104,
                                      iStack80256,iStack80252,iStack80264,iStack80260),
                 *(int *)(iVar11 + 0x34) != 0)) {
                mm_camera_debug_log(1,6,DAT_000ab774 + 0xab5e8,0x767,DAT_000ab770 + 0xab5d0,
                                    uStack80060,uStack53384,uStack53376,uStack53016,uStack100,
                                    iStack136,iStack132,uVar9,uVar10);
              }
              iVar15 = (**(code **)(this + 0x18))(*(undefined4 *)(this + 0x24),&uStack80064,piVar1);
              if (iVar15 == 0) {
                *param_2 = '\0';
                goto LAB_000ab62c;
              }
              if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000ab16c;
              uVar9 = 1;
              uVar10 = 0x76a;
              iVar11 = DAT_000ab778 + 0xab616;
              iVar18 = DAT_000ab77c + 0xab620;
            }
            mm_camera_debug_log(1,uVar9,iVar18,uVar10,iVar11);
          }
          goto LAB_000ab16c;
        }
      }
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ab324 + 0xab160,0x6de,DAT_000ab320 + 0xab158);
      }
      iVar15 = -0x16;
      goto LAB_000ab16c;
    }
    if (0 < (char)this[0x470]) {
      iVar18 = 0;
      do {
        this_02 = *(QCamera3Channel **)(this + iVar18 * 4 + 0x474);
        if ((this_02 != (QCamera3Channel *)0x0) &&
           (*(int *)(this_02 + 0x54) == *(int *)(iVar15 + 4))) goto LAB_000ab006;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (char)this[0x470]);
    }
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar9 = 0x6c7;
      iVar11 = DAT_000ab318 + 0xab130;
      iVar15 = DAT_000ab31c + 0xab13c;
      goto LAB_000ab13a;
    }
  }
  iVar15 = -0x16;
LAB_000ab16c:
  if (1 < *puVar13) {
    if ((**(byte **)(DAT_000ab328 + 0xab17a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000ab32c + 0xab18a) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar17 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}

