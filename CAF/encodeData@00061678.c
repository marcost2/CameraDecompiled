
/* qcamera::QCamera3PostProcessor::encodeData(qcamera::qcamera_hal3_jpeg_data_t*, unsigned char&) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::encodeData
          (QCamera3PostProcessor *this,qcamera_hal3_jpeg_data_t *param_1,uchar *param_2)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  jpeg_settings_t *pjVar6;
  int iVar7;
  QCamera3Stream *this_00;
  QCamera3Exif *this_01;
  undefined4 uVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  undefined4 extraout_r1_01;
  int extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  int extraout_r1_05;
  uint extraout_r1_06;
  uint uVar10;
  undefined4 extraout_r1_07;
  QCamera3HardwareInterface *this_02;
  uint uVar11;
  QCamera3Channel *this_03;
  int iVar12;
  metadata_buffer_t *pmVar13;
  QCamera3Stream *this_04;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  bool bVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint in_stack_fffec664;
  undefined auStack80208 [96];
  undefined4 uStack80112;
  undefined4 uStack80108;
  undefined4 uStack80104;
  undefined4 uStack80100;
  undefined4 uStack80096;
  undefined4 uStack80092;
  undefined4 uStack80088;
  undefined4 uStack80084;
  undefined4 uStack80080;
  undefined4 uStack80076;
  undefined4 uStack80068;
  ScopedTraceDbg aSStack80064 [8];
  uint uStack80056;
  uint uStack80052;
  undefined4 uStack80048;
  uint uStack80044;
  undefined4 uStack80040;
  undefined4 uStack80036;
  undefined4 uStack80032;
  undefined4 uStack80028;
  undefined8 uStack80024;
  undefined8 uStack80016;
  undefined4 uStack80004;
  undefined4 uStack80000;
  undefined4 uStack79996;
  undefined4 uStack79992;
  undefined8 uStack79988;
  undefined8 uStack79980;
  undefined4 uStack79972;
  metadata_buffer_t *pmStack79960;
  undefined4 uStack79956;
  undefined4 uStack79952;
  undefined4 uStack79948;
  undefined4 uStack79944;
  undefined4 uStack79940;
  undefined auStack79936 [16];
  undefined8 uStack79920;
  undefined8 uStack79912;
  undefined8 uStack79904;
  undefined8 uStack79896;
  undefined8 uStack79888;
  metadata_buffer_t mStack79880;
  void *pvStack79844;
  undefined uStack79676;
  undefined4 uStack79672;
  undefined uStack79668;
  undefined4 uStack79664;
  undefined uStack79660;
  undefined4 uStack53376;
  undefined4 uStack53368;
  
  piVar17 = *(int **)(DAT_000619d4 + 0x6168e);
  iVar4 = *piVar17;
  iVar5 = DAT_000619d8 + 0x616a2;
  ScopedTraceDbg::ScopedTraceDbg(aSStack80064,CONCAT44(in_stack_fffec664,iVar5),(char *)param_1);
  iVar12 = *(int *)(DAT_000619dc + 0x616b6);
  iVar9 = extraout_r1;
  if (*(int *)(iVar12 + 0x2c) != 0) {
    iVar5 = DAT_000619e0 + 0x616c4;
    mm_camera_debug_log();
    iVar9 = extraout_r1_00;
  }
  uStack80068 = 0;
  if (*(int *)(this + 4) == 0) {
    if (*(int *)(iVar12 + 0x20) == 0) goto LAB_00061866;
    iVar5 = DAT_000619f8 + 0x61802;
LAB_00061862:
    mm_camera_debug_log();
    iVar9 = extraout_r1_02;
  }
  else {
    this_02 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
    if (this_02 == (QCamera3HardwareInterface *)0x0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        iVar5 = DAT_00061a00 + 0x6181c;
        goto LAB_00061862;
      }
    }
    else {
      iVar15 = *(int *)(param_1 + 8);
      pmVar13 = *(metadata_buffer_t **)(param_1 + 0x1c);
      pjVar6 = *(jpeg_settings_t **)(param_1 + 0x24);
      if (*(int *)(iVar12 + 0x2c) != 0) {
        in_stack_fffec664 = *(uint *)(*(int *)(iVar15 + 0x10) + 0xc);
        iVar5 = DAT_000619e8 + 0x61706;
        mm_camera_debug_log();
      }
      iVar7 = QCamera3Channel::getMyHandle(*(QCamera3Channel **)(this + 4));
      iVar9 = *(int *)(iVar15 + 4);
      if ((iVar7 == iVar9) &&
         (this_03 = *(QCamera3Channel **)(this + 4), this_03 != (QCamera3Channel *)0x0)) {
LAB_00061746:
        if (*(int *)(iVar15 + 8) != 0) {
          this_04 = (QCamera3Stream *)0x0;
          iVar9 = 0;
          uVar11 = 0;
          do {
            this_00 = (QCamera3Stream *)
                      QCamera3Channel::getStreamByHandle
                                (this_03,**(uint **)(iVar15 + 0x10 + uVar11 * 4));
            if ((this_00 != (QCamera3Stream *)0x0) &&
               (iVar7 = QCamera3Stream::getMyType(this_00), iVar7 == 9 || iVar7 == 3)) {
              iVar9 = *(int *)(iVar15 + 0x10 + uVar11 * 4);
              this_04 = this_00;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(iVar15 + 8));
          if (iVar9 != 0) {
            if (*(QCamera3StreamMem **)(iVar9 + 0x210) == (QCamera3StreamMem *)0x0) {
              if (*(int *)(iVar12 + 0x20) == 0) {
LAB_000620a8:
                uVar20 = CONCAT44(iVar9,0xfffffff4);
                goto LAB_0006186a;
              }
              iVar5 = DAT_00061a18 + 0x6189e;
LAB_000618aa:
              mm_camera_debug_log();
              uVar20 = CONCAT44(extraout_r1_03,0xfffffff4);
            }
            else {
              QCamera3StreamMem::cleanInvalidateCache
                        (*(QCamera3StreamMem **)(iVar9 + 0x210),*(uint *)(iVar9 + 0xc));
              if (*(int *)(this + 0x24) == 0) {
                uVar8 = extraout_r1_01;
                if (*(int *)(iVar12 + 0x20) == 0) {
LAB_000618d6:
                  uVar20 = CONCAT44(uVar8,0x80000000);
                  goto LAB_0006186a;
                }
                iVar5 = DAT_00061a20 + 0x618c0;
              }
              else {
                uStack80080 = 0;
                uStack80076 = 0;
                QCamera3Stream::getFrameDimension(this_04,(cam_dimension_t *)&uStack80080);
                uStack80088 = 0;
                uStack80084 = 0;
                uVar19 = QCamera3ProcessingChannel::getStreamSize
                                   (*(QCamera3ProcessingChannel **)(this + 4),
                                    (cam_dimension_t *)&uStack80088);
                uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
                if ((int)uVar19 == 0) {
                  iVar15 = QCamera3HardwareInterface::needJpegExifRotation(this_02);
                  if (pmVar13 == (metadata_buffer_t *)0x0) {
                    if (*(int *)(iVar12 + 0x20) != 0) {
                      iVar5 = DAT_00061a28 + 0x61928;
                      in_stack_fffec664 = 0;
                      mm_camera_debug_log();
                    }
                  }
                  else {
                    uVar11 = (uint)(byte)pmVar13[0x38];
                    bVar18 = uVar11 != 0;
                    if (bVar18) {
                      uVar11 = *(uint *)(pjVar6 + 4);
                    }
                    if ((bVar18 && uVar11 != 0) && (*(int *)(pmVar13 + 0x74754) == 1)) {
                      if (*(int *)(iVar12 + 0x28) == 0) {
                        iVar15 = 1;
                      }
                      else {
                        iVar5 = DAT_00061a40 + 0x619be;
                        iVar15 = 1;
                        mm_camera_debug_log();
                      }
                    }
                    *(undefined4 *)(pmVar13 + 0x76bf0) = 0;
                    pmVar13[0xc5] = (metadata_buffer_t)0x1;
                  }
                  if (*(int *)(iVar12 + 0x28) != 0) {
                    in_stack_fffec664 = (uint)*param_2;
                    iVar5 = DAT_00061a30 + 0x6194a;
                    mm_camera_debug_log();
                  }
                  if (*param_2 == '\0') {
LAB_00061c5c:
                    __aeabi_memclr4(&uStack80056,0x330);
                    uStack79972 = *(undefined4 *)(this + 0x28);
                    uStack80052 = *(uint *)(iVar9 + 0xc);
                    uStack80048 = 0;
                    uStack80104 = 0;
                    uStack80100 = 0;
                    uStack80096 = 0;
                    uStack80092 = 0;
                    if ((iVar15 == 0) &&
                       (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a)) {
                      uStack80004 = uStack80076;
                      uStack80000 = uStack80080;
                      uStack79996 = uStack80084;
                      uStack79992 = uStack80088;
                    }
                    else {
                      uStack80004 = uStack80080;
                      uStack80000 = uStack80076;
                      uStack79996 = uStack80088;
                      uStack79992 = uStack80084;
                    }
                    uStack79980 = 0;
                    uStack79988 = 0;
                    uStack80112 = 0;
                    uStack80108 = 0;
                    QCamera3HardwareInterface::get3AVersion
                              (this_02,(cam_q3a_version_t *)&uStack80112);
                    this_01 = (QCamera3Exif *)getExifData(this,pmVar13,pjVar6,SUB41(iVar15,0));
                    *(QCamera3Exif **)(param_1 + 0x18) = this_01;
                    if (this_01 != (QCamera3Exif *)0x0) {
                      uStack79952 = QCamera3Exif::getEntries(this_01);
                      uStack79948 = QCamera3Exif::getNumOfEntries(this_01);
                      uStack79944 = uStack80112;
                      uStack79940 = uStack80108;
                    }
                    if (*(int *)(iVar12 + 0x28) != 0) {
                      in_stack_fffec664 = *(uint *)(this + 0x1e8);
                      iVar5 = DAT_00061d8c + 0x61d1c;
                      mm_camera_debug_log();
                    }
                    uVar11 = in_stack_fffec664;
                    if (*(int *)(this + 0x1e8) == 1) {
                      uStack80028 = *(undefined4 *)(pjVar6 + 0x10);
                      if ((iVar15 == 0) &&
                         (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a)) {
                        uStack80040 = uStack80076;
                        uStack80036 = uStack80080;
                        uStack80016 = CONCAT44(uStack80096,uStack80092);
                        uStack80024 = CONCAT44(uStack80104,uStack80100);
                        uStack80032 = uStack80028;
                        uStack80028 = *(undefined4 *)(pjVar6 + 0xc);
                      }
                      else {
                        uStack80040 = uStack80080;
                        uStack80036 = uStack80076;
                        uStack80024 = CONCAT44(uStack80100,uStack80104);
                        uStack80016 = SUB168(CONCAT412(uStack80092,CONCAT48(uStack80096,uStack80024)
                                                      ) >> 0x40,0);
                        uStack80032 = *(undefined4 *)(pjVar6 + 0xc);
                      }
                      uVar11 = *(uint *)(iVar9 + 0xc);
                      uStack80044 = uVar11;
                      if (*(int *)(iVar12 + 0x34) != 0) {
                        iVar5 = DAT_00062144 + 0x61dc2;
                        mm_camera_debug_log();
                        goto LAB_00061dd8;
                      }
                    }
                    else {
LAB_00061dd8:
                      in_stack_fffec664 = uVar11;
                      if (*(int *)(iVar12 + 0x34) != 0) {
                        iVar5 = DAT_0006214c + 0x61dea;
                        in_stack_fffec664 = uStack80052;
                        mm_camera_debug_log();
                      }
                    }
                    QCamera3HardwareInterface::get3AExifParams();
                    __aeabi_memcpy8(auStack79936,auStack80208,0x60);
                    pvVar2 = pvStack79844;
                    pvStack79844 = malloc(0x607a0);
                    if (pvStack79844 == (void *)0x0) {
                      iVar9 = extraout_r1_05;
                      if (*(int *)(iVar12 + 0x20) == 0) goto LAB_000620a8;
                      iVar5 = DAT_00062154 + 0x62098;
                      goto LAB_000618aa;
                    }
                    uStack79676 = QCamera3HardwareInterface::getMobicatMask(this_02);
                    if (pmVar13 == (metadata_buffer_t *)0x0) {
                      if (*(int *)(iVar12 + 0x24) != 0) {
                        iVar5 = DAT_0006215c + 0x620bc;
                        mm_camera_debug_log();
                      }
                    }
                    else {
                      pmVar13[0xb6cc8] = mStack79880;
                      if (mStack79880 != (metadata_buffer_t)0x0) {
                        *(longlong *)(pmVar13 + 0xb6ccc) = SUB168(auStack79936,0);
                        *(longlong *)(pmVar13 + 0xb6cd4) = SUB168(auStack79936 >> 0x40,0);
                        *(undefined8 *)(pmVar13 + 0xb6cec) = uStack79904;
                        *(undefined8 *)(pmVar13 + 0xb6cf4) = uStack79896;
                        *(undefined8 *)(pmVar13 + 0xb6cdc) = uStack79920;
                        *(undefined8 *)(pmVar13 + 0xb6ce4) = uStack79912;
                        *(undefined8 *)(pmVar13 + 0xb6cfc) = uStack79888;
                      }
                      pmStack79960 = pmVar13;
                      if (pvVar2 != (void *)0x0) {
                        __aeabi_memcpy8(pvStack79844,pvVar2,0x607a0);
                        pvVar2 = pvStack79844;
                        pmVar13 = pmStack79960;
                        pmStack79960[0xb6d04] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60794);
                        pmStack79960[0xb80a0] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60795);
                        pmStack79960[0xc3070] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60796);
                        pmStack79960[0xcf3c8] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60797);
                        pmStack79960[0xcf434] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60798);
                        pmStack79960[0xe1938] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60799);
                        pmStack79960[0x106334] = *(metadata_buffer_t *)((int)pvStack79844 + 0x6079a)
                        ;
                        pmStack79960[0x1174ac] = *(metadata_buffer_t *)((int)pvStack79844 + 0x6079b)
                        ;
                        pcVar14 = (char *)((int)pvStack79844 + 0x60796);
                        pcVar16 = (char *)((int)pvStack79844 + 0x60795);
                        if (*(char *)((int)pvStack79844 + 0x60794) != '\0') {
                          __aeabi_memcpy8(pmStack79960 + 0xb6d08,pvStack79844,0x1398);
                        }
                        if (*pcVar16 != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0xb80a4,(void *)((int)pvVar2 + 0x1398),0xafcc);
                        }
                        if (*pcVar14 != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0xc3074,(void *)((int)pvVar2 + 0xc364),0xc354);
                        }
                        if (*(char *)((int)pvVar2 + 0x60797) != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0xcf3cc,(void *)((int)pvVar2 + 0x186b8),0x68);
                        }
                        if (*(char *)((int)pvVar2 + 0x60798) != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0xcf438,(void *)((int)pvVar2 + 0x18720),0x12500)
                          ;
                        }
                        if (*(char *)((int)pvVar2 + 0x60799) != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0xe193c,(void *)((int)pvVar2 + 0x2ac20),
                                          (size_t)
                                          "rrideMetadataEPNS_24qcamera_hal3_pp_buffer_tEP17mm_camera_buf_defPNS_15jpeg_settings_tERNS_27qcamera_fwk_input_pp_data_tE"
                                         );
                        }
                        if (*(char *)((int)pvVar2 + 0x6079a) != '\0') {
                          __aeabi_memcpy8(pmVar13 + 0x106338,(void *)((int)pvVar2 + 0x4f618),
                                          (size_t)&DAT_00011174);
                        }
                        if (*(char *)((int)pvVar2 + 0x6079b) != '\0') {
                          uVar8 = *(undefined4 *)((int)pvVar2 + 0x6078c);
                          *(undefined4 *)(pmVar13 + 0x1174b4) =
                               *(undefined4 *)((int)pvVar2 + 0x60790);
                          *(undefined4 *)(pmVar13 + 0x1174b0) = uVar8;
                        }
                      }
                    }
                    iVar9 = QCamera3HardwareInterface::isDeviceLinked(this_02);
                    if (iVar9 != 0) {
                      uStack79660 = 1;
                      uStack79664 = 1;
                      uStack79672 = 0;
                      uStack79668 = QCamera3HardwareInterface::isMainCamera(this_02);
                    }
                    uStack79956 = 3;
                    uVar20 = (**(code **)(this + 0x10))(&uStack80056,&uStack80068);
                    uVar10 = (uint)(uVar20 >> 0x20);
                    uVar11 = (uint)uVar20;
                    if (pvStack79844 != (void *)0x0) {
                      free(pvStack79844);
                      uVar10 = extraout_r1_06;
                    }
                    uVar20 = uVar20 & 0xffffffff | (ulonglong)uVar10 << 0x20;
                    if (uVar11 == 0) {
                      *(undefined4 *)param_1 = uStack80068;
                    }
                    if (*(int *)(iVar12 + 0x2c) == 0) goto LAB_0006186a;
                    iVar5 = DAT_00062164 + 0x62124;
                  }
                  else {
                    puVar1 = (uint *)(this + 0x28);
                    if (*puVar1 == 0) {
LAB_00061a4c:
                      __aeabi_memclr4(&uStack80056,0x13890);
                      getJpegEncodeConfig(this,(mm_jpeg_encode_params_t *)&uStack80056,this_04,
                                          pjVar6);
                      if (*(int *)(iVar12 + 0x28) != 0) {
                        iVar5 = DAT_00061d6c + 0x61a7a;
                        in_stack_fffec664 = uStack80056;
                        mm_camera_debug_log();
                      }
                      uVar3 = uStack53376;
                      uVar8 = uStack80000;
                      if ((iVar15 == 0) &&
                         (*(int *)(pjVar6 + 4) == 0x10e || *(int *)(pjVar6 + 4) == 0x5a)) {
                        uStack53376 = uStack53368;
                        uStack53368 = uVar3;
                        uStack80000 = uStack79992;
                        uStack79992 = uVar8;
                      }
                      if (*(int *)(iVar12 + 0x34) != 0) {
                        iVar5 = DAT_00061d74 + 0x61b92;
                        mm_camera_debug_log();
                        in_stack_fffec664 = uStack80056;
                        if (*(int *)(iVar12 + 0x34) != 0) {
                          iVar5 = DAT_00061d7c + 0x61c02;
                          in_stack_fffec664 = uStack80052;
                          mm_camera_debug_log();
                        }
                      }
                      uVar20 = (**(code **)(this + 0x18))
                                         (*(undefined4 *)(this + 0x24),&uStack80056,puVar1);
                      uVar11 = (uint)uVar20;
                      if (uVar11 == 0) {
                        *param_2 = '\0';
                        goto LAB_00061c5c;
                      }
                      if (*(int *)(iVar12 + 0x20) == 0) goto LAB_0006186a;
                      iVar5 = DAT_00061d84 + 0x61c44;
                      in_stack_fffec664 = uVar11;
                    }
                    else {
                      uVar20 = (**(code **)(this + 0x1c))();
                      uVar11 = (uint)uVar20;
                      if (uVar11 == 0) {
                        *puVar1 = 0;
                        goto LAB_00061a4c;
                      }
                      if (*(int *)(iVar12 + 0x20) == 0) goto LAB_0006186a;
                      iVar5 = DAT_00061a38 + 0x6198e;
                      in_stack_fffec664 = *puVar1;
                    }
                  }
                  mm_camera_debug_log();
                  uVar20 = CONCAT44(extraout_r1_07,uVar11);
                  goto LAB_0006186a;
                }
                if (*(int *)(iVar12 + 0x20) == 0) goto LAB_000618d6;
                iVar5 = DAT_000619f0 + 0x617e8;
              }
              mm_camera_debug_log();
              uVar20 = CONCAT44(extraout_r1_04,0x80000000);
            }
            goto LAB_0006186a;
          }
        }
        if (*(int *)(iVar12 + 0x20) != 0) {
          iVar5 = DAT_00061a10 + 0x61856;
          goto LAB_00061862;
        }
      }
      else {
        if (*(QCamera3Channel **)(this + 0x1f0) != (QCamera3Channel *)0x0) {
          iVar7 = QCamera3Channel::getMyHandle(*(QCamera3Channel **)(this + 0x1f0));
          iVar9 = *(int *)(iVar15 + 4);
          if ((iVar7 == iVar9) &&
             (this_03 = *(QCamera3Channel **)(this + 0x1f0), this_03 != (QCamera3Channel *)0x0))
          goto LAB_00061746;
        }
        if (*(int *)(iVar12 + 0x20) != 0) {
          in_stack_fffec664 = *(uint *)(iVar15 + 4);
          iVar5 = DAT_00061a08 + 0x6183a;
          goto LAB_00061862;
        }
      }
    }
  }
LAB_00061866:
  uVar20 = CONCAT44(iVar9,0xffffffea);
LAB_0006186a:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack80064,CONCAT44(in_stack_fffec664,iVar5),(char *)(uVar20 >> 0x20));
  if (*piVar17 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)uVar20;
}

