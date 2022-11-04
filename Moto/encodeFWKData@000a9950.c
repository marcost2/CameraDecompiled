
/* qcamera::QCamera3PostProcessor::encodeFWKData(qcamera::qcamera_hal3_jpeg_data_t*, unsigned char&)
    */

int __thiscall
qcamera::QCamera3PostProcessor::encodeFWKData
          (QCamera3PostProcessor *this,qcamera_hal3_jpeg_data_t *param_1,uchar *param_2)

{
  undefined auVar1 [16];
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  jpeg_settings_t *pjVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  metadata_buffer_t *pmVar16;
  qcamera_fwk_input_pp_data_t *pqVar17;
  char *pcVar18;
  int *piVar19;
  QCamera3HardwareInterface *this_00;
  char *pcVar20;
  int iVar21;
  int *piStack80308;
  int *piStack80288;
  int *piStack80284;
  undefined4 uStack80272;
  undefined4 uStack80268;
  undefined4 uStack80264;
  undefined4 uStack80260;
  undefined4 uStack80256;
  undefined4 uStack80252;
  undefined4 uStack80244;
  undefined auStack80240 [176];
  undefined4 uStack80064;
  undefined4 uStack80060;
  undefined4 uStack80056;
  undefined4 uStack80052;
  int *piStack80048;
  int *piStack80044;
  undefined4 uStack80040;
  undefined4 uStack80036;
  undefined8 uStack80032;
  undefined8 uStack80024;
  int *piStack80012;
  int *piStack80008;
  int *piStack80004;
  int *piStack80000;
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
  undefined4 uStack79640;
  undefined uStack79596;
  undefined4 uStack79592;
  QCamera3HardwareInterface QStack79588;
  undefined4 uStack79584;
  undefined uStack79580;
  undefined4 uStack53384;
  undefined4 uStack53376;
  undefined4 uStack53016;
  int *piStack136;
  int *piStack132;
  undefined4 uStack104;
  undefined4 uStack100;
  
  piVar19 = *(int **)(DAT_000a9cc8 + 0xa9968);
  iVar4 = *piVar19;
  iVar21 = *(int *)(DAT_000a9ccc + 0xa9976);
  if (*(int *)(iVar21 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a9cd4 + 0xa9992,0x516,DAT_000a9cd0 + 0xa998a);
  }
  uStack80244 = 0;
  if (param_1 == (qcamera_hal3_jpeg_data_t *)0x0) {
    if (*(int *)(iVar21 + 0x20) == 0) {
LAB_000a9a0c:
      iVar13 = -0x16;
      goto LAB_000a9a4e;
    }
    uVar15 = 0x522;
    iVar21 = DAT_000a9ce0 + 0xa99e2;
    iVar13 = DAT_000a9ce4 + 0xa99ea;
  }
  else {
    pqVar17 = *(qcamera_fwk_input_pp_data_t **)(param_1 + 0x10);
    if (pqVar17 != (qcamera_fwk_input_pp_data_t *)0x0) {
      pmVar16 = *(metadata_buffer_t **)(param_1 + 0x1c);
      if (pmVar16 == (metadata_buffer_t *)0x0) {
        if (*(int *)(iVar21 + 0x20) != 0) {
          uVar15 = 0x52e;
          iVar21 = DAT_000a9cf0 + 0xa9a24;
          iVar13 = DAT_000a9cf4 + 0xa9a2c;
LAB_000a9a44:
          mm_camera_debug_log(1,1,iVar13,uVar15,iVar21);
        }
      }
      else {
        pjVar12 = *(jpeg_settings_t **)(param_1 + 0x24);
        if (pjVar12 == (jpeg_settings_t *)0x0) {
          if (*(int *)(iVar21 + 0x20) != 0) {
            uVar15 = 0x534;
            iVar21 = DAT_000a9cf8 + 0xa9a3e;
            iVar13 = DAT_000a9cfc + 0xa9a46;
            goto LAB_000a9a44;
          }
        }
        else if (*(int *)(param_1 + 8) == 0) {
          this_00 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
          if (this_00 != (QCamera3HardwareInterface *)0x0) {
            if (*(int *)(this + 0x24) == 0) {
              if (*(int *)(iVar21 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000a9d0c + 0xa9b48,0x544,DAT_000a9d08 + 0xa9b40);
              }
              iVar13 = -0x80000000;
              goto LAB_000a9a4e;
            }
            piVar9 = *(int **)(pqVar17 + 0x450);
            piVar5 = *(int **)(pqVar17 + 0x454);
            uStack80264 = 0;
            uStack80260 = 0;
            uStack80256 = 0;
            uStack80252 = 0;
            if (pmVar16[0x101] != (metadata_buffer_t)0x0) {
              auVar1 = *(undefined (*) [16])(pmVar16 + 0x76ffc);
              uStack80264 = SUB164(auVar1,0);
              uStack80260 = SUB164(auVar1 >> 0x20,0);
              uStack80256 = SUB164(auVar1 >> 0x40,0);
              uStack80252 = SUB164(auVar1 >> 0x60,0);
            }
            piStack80288 = *(int **)(pqVar17 + 0x5e0);
            piStack80284 = *(int **)(pqVar17 + 0x5e4);
            if (pmVar16[0x102] != (metadata_buffer_t)0x0) {
              piVar10 = (int *)(pmVar16 + 0x7701c);
              piVar6 = (int *)*piVar10;
              if (piVar6 != (int *)0x0) {
                piVar10 = *(int **)(pmVar16 + 0x77020);
              }
              if (piVar6 != (int *)0x0 && piVar10 != (int *)0x0) {
                piStack80288 = piVar6;
                piStack80284 = piVar10;
              }
            }
            iVar13 = QCamera3HardwareInterface::needJpegExifRotation(this_00);
            if ((iVar13 == 0) && (*(int *)(pqVar17 + 0x5ec) != 0)) {
              iVar13 = *(int *)(pqVar17 + 0x21c);
              if (iVar13 != 0) {
                if (*(char *)(iVar13 + 0x7e) == '\0') {
                  cVar8 = '\0';
                }
                else {
                  cVar8 = *(char *)(iVar13 + 0xc6a4);
                  if (cVar8 != '\0') {
                    cVar8 = '\x01';
                  }
                }
                if (*(char *)(iVar13 + 0x8d) == '\0') {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(uint *)(iVar13 + 0xc6f4);
                  if (uVar14 != 0) {
                    uVar14 = 1;
                  }
                }
                if ((cVar8 == '\0') &&
                   (uVar7 = count_leading_zeroes((uint)*(byte *)(iVar13 + 0x100)),
                   (uVar7 >> 5 | uVar14) == 0)) goto LAB_000a9b80;
              }
              bVar2 = false;
            }
            else {
LAB_000a9b80:
              uStack80064 = 1;
              uStack80060 = 0;
              uStack80056 = 0;
              *(undefined4 *)(pmVar16 + 0x74aec) = 0;
              pmVar16[0x38] = (metadata_buffer_t)0x1;
              bVar2 = true;
              *(undefined8 *)(pmVar16 + 0x74ae4) = 1;
            }
            if (*(int *)(iVar21 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000a9d14 + 0xa9bca,0x577,DAT_000a9d10 + 0xa9bbe,*param_2);
            }
            piStack80308 = piStack80288;
            if (*param_2 != '\0') {
              piVar10 = (int *)(this + 0x28);
              if (*piVar10 != 0) {
                iVar13 = (**(code **)(this + 0x1c))();
                if (iVar13 != 0) {
                  if (*(int *)(iVar21 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_000a9d1c + 0xa9c10,0x57e,DAT_000a9d18 + 0xa9c04,
                                        *piVar10);
                  }
                  goto LAB_000a9a4e;
                }
                *piVar10 = 0;
              }
              __aeabi_memclr8(&uStack80064,(size_t)&DAT_00013890);
              getFWKJpegEncodeConfig(this,(mm_jpeg_encode_params_t *)&uStack80064,pqVar17,pjVar12);
              if (*(int *)(iVar21 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000a9d24 + 0xa9c5c,0x588,DAT_000a9d20 + 0xa9c48,
                                    uStack80064,uStack80060,uStack80056);
              }
              uVar15 = uStack53384;
              piVar6 = piStack80008;
              piStack136 = piVar9;
              piStack132 = piVar5;
              if ((!bVar2) && (*(int *)(pjVar12 + 4) == 0x10e || *(int *)(pjVar12 + 4) == 0x5a)) {
                uStack53384 = uStack53376;
                uStack53376 = uVar15;
                piStack80008 = piStack80000;
                piStack80000 = piVar6;
                piStack136 = piVar5;
                piStack132 = piVar9;
              }
              uVar15 = *(undefined4 *)(pjVar12 + 0xc);
              uVar11 = *(undefined4 *)(pjVar12 + 0x10);
              if ((*(int *)(iVar21 + 0x34) != 0) &&
                 (mm_camera_debug_log(1,6,DAT_000a9fc0 + 0xa9de0,0x5aa,DAT_000a9fbc + 0xa9dc4,
                                      uStack80064,piStack80008,piStack80000,uStack79640,uStack104,
                                      piVar9,piVar5,piStack80288,piStack80284),
                 *(int *)(iVar21 + 0x34) != 0)) {
                mm_camera_debug_log(1,6,DAT_000a9fc8 + 0xa9e62,0x5b5,DAT_000a9fc4 + 0xa9e44,
                                    uStack80060,uStack53384,uStack53376,uStack53016,uStack100,
                                    piStack136,piStack132,uVar15,uVar11);
              }
              if (*(int *)(iVar21 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000a9fd0 + 0xa9e88,0x5b8,DAT_000a9fcc + 0xa9e74,
                                    uStack80064,uStack80060,uStack80056);
              }
              iVar13 = (**(code **)(this + 0x18))(*(undefined4 *)(this + 0x24),&uStack80064,piVar10)
              ;
              if (iVar13 != 0) {
                if (*(int *)(iVar21 + 0x20) != 0) {
                  mm_camera_debug_log(1,1,DAT_000a9fd8 + 0xa9eb8,0x5bc,DAT_000a9fd4 + 0xa9eae,iVar13
                                     );
                }
                goto LAB_000a9a4e;
              }
              *param_2 = '\0';
            }
            __aeabi_memclr8(&uStack80064,0x388);
            uStack79980 = *(undefined4 *)(this + 0x28);
            uStack80060 = 0;
            uStack80056 = 0;
            if ((bVar2) || (*(int *)(pjVar12 + 4) != 0x10e && *(int *)(pjVar12 + 4) != 0x5a)) {
              uStack79996 = CONCAT44(uStack80260,uStack80264);
              uStack79988 = SUB168(CONCAT412(uStack80252,CONCAT48(uStack80256,uStack79996)) >> 0x40,
                                   0);
              piStack80004 = piStack80288;
              piStack80000 = piStack80284;
              piStack80012 = piVar9;
              piStack80008 = piVar5;
            }
            else {
              piStack80000 = piStack80308;
              uStack79988 = CONCAT44(uStack80256,uStack80252);
              uStack79996 = CONCAT44(uStack80264,uStack80260);
              piStack80012 = piVar5;
              piStack80008 = piVar9;
              piStack80004 = piStack80284;
            }
            uStack80272 = 0;
            uStack80268 = 0;
            QCamera3HardwareInterface::get3AVersion(this_00,(cam_q3a_version_t *)&uStack80272);
            iVar13 = getExifData(this,pmVar16,pjVar12,bVar2);
            *(int *)(param_1 + 0x18) = iVar13;
            if (iVar13 != 0) {
              iStack79960 = iVar13 + 4;
              uStack79956 = *(undefined4 *)(iVar13 + 0x4b4);
              uStack79952 = uStack80272;
              uStack79948 = uStack80268;
            }
            if (*(int *)(iVar21 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000aa300 + 0xa9f7c,0x5f5,DAT_000aa2fc + 0xa9f70,
                                  *(undefined4 *)(this + 0x468));
            }
            if (*(int *)(this + 0x468) == 1) {
              uStack80036 = *(undefined4 *)(pjVar12 + 0x10);
              if ((bVar2) || (*(int *)(pjVar12 + 4) != 0x10e && *(int *)(pjVar12 + 4) != 0x5a)) {
                uStack80032 = CONCAT44(uStack80260,uStack80264);
                uStack80024 = SUB168(CONCAT412(uStack80252,CONCAT48(uStack80256,uStack80032)) >>
                                     0x40,0);
                piStack80048 = piVar9;
                piStack80044 = piVar5;
                uStack80040 = *(undefined4 *)(pjVar12 + 0xc);
              }
              else {
                uStack80024 = CONCAT44(uStack80256,uStack80252);
                uStack80032 = CONCAT44(uStack80264,uStack80260);
                piStack80048 = piVar5;
                piStack80044 = piVar9;
                uStack80040 = uStack80036;
                uStack80036 = *(undefined4 *)(pjVar12 + 0xc);
              }
              uStack80052 = 0;
            }
            QCamera3HardwareInterface::get3AExifParams();
            __aeabi_memcpy8(auStack79944,auStack80240,0xb0);
            pvVar3 = pvStack79820;
            pvStack79820 = malloc((size_t)"sion");
            if (pvStack79820 == (void *)0x0) {
              if (*(int *)(iVar21 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000aa308 + 0xaa2ec,0x618,DAT_000aa304 + 0xaa2e4);
              }
              iVar13 = -0xc;
            }
            else {
              uStack79596 = QCamera3HardwareInterface::getMobicatMask(this_00);
              pmVar16[0xb72e8] = mStack79860;
              pmStack79968 = pmVar16;
              if (mStack79860 != (metadata_buffer_t)0x0) {
                __aeabi_memcpy8(pmVar16 + 0xb72ec,auStack79944,0x54);
              }
              if (pvVar3 != (void *)0x0) {
                __aeabi_memcpy8(pvStack79820,pvVar3,(size_t)"sion");
                pvVar3 = pvStack79820;
                pmVar16 = pmStack79968;
                pcVar20 = (char *)((int)pvStack79820 + 0x60795);
                pmStack79968[0xb7340] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60794);
                pmStack79968[0xb86e0] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60795);
                pcVar18 = (char *)((int)pvStack79820 + 0x60796);
                pmStack79968[0xc36b0] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60796);
                pmStack79968[0xcfa08] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60797);
                pmStack79968[0xcfa74] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60798);
                pmStack79968[0xe1f78] = *(metadata_buffer_t *)((int)pvStack79820 + 0x60799);
                pmStack79968[0x106974] = *(metadata_buffer_t *)((int)pvStack79820 + 0x6079a);
                pmStack79968[0x117aec] = *(metadata_buffer_t *)((int)pvStack79820 + 0x6079b);
                if (*(char *)((int)pvStack79820 + 0x60794) != '\0') {
                  __aeabi_memcpy8(pmStack79968 + 0xb7348,pvStack79820,0x1398);
                }
                if (*pcVar20 != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0xb86e4,(void *)((int)pvVar3 + 0x1398),0xafcc);
                }
                if (*pcVar18 != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0xc36b4,(void *)((int)pvVar3 + 0xc364),0xc354);
                }
                if (*(char *)((int)pvVar3 + 0x60797) != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0xcfa0c,(void *)((int)pvVar3 + 0x186b8),0x68);
                }
                if (*(char *)((int)pvVar3 + 0x60798) != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0xcfa78,(void *)((int)pvVar3 + 0x18720),
                                  (size_t)&DAT_00012500);
                }
                if (*(char *)((int)pvVar3 + 0x60799) != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0xe1f7c,(void *)((int)pvVar3 + 0x2ac20),0x249f8);
                }
                if (*(char *)((int)pvVar3 + 0x6079a) != '\0') {
                  __aeabi_memcpy8(pmVar16 + 0x106978,(void *)((int)pvVar3 + 0x4f618),
                                  (size_t)&DAT_00011174);
                }
                if (*(char *)((int)pvVar3 + 0x6079b) != '\0') {
                  uVar15 = *(undefined4 *)((int)pvVar3 + 0x6078c);
                  *(undefined4 *)(pmVar16 + 0x117af4) = *(undefined4 *)((int)pvVar3 + 0x60790);
                  *(undefined4 *)(pmVar16 + 0x117af0) = uVar15;
                }
              }
              if (this_00[0x117fe1] != (QCamera3HardwareInterface)0x0) {
                uStack79580 = 1;
                uStack79584 = 1;
                uStack79592 = 0;
                QStack79588 = this_00[0x117fe2];
              }
              uStack79964 = 3;
              iVar13 = (**(code **)(this + 0x10))(&uStack80064,&uStack80244);
              if (pvStack79820 != (void *)0x0) {
                free(pvStack79820);
              }
              if (iVar13 == 0) {
                *(undefined4 *)param_1 = uStack80244;
              }
              if (*(int *)(iVar21 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000aa310 + 0xaa2cc,0x67d,DAT_000aa30c + 0xaa2c4);
              }
            }
            goto LAB_000a9a4e;
          }
          if (*(int *)(iVar21 + 0x20) != 0) {
            uVar15 = 0x53f;
            iVar21 = DAT_000a9d00 + 0xa9b26;
            iVar13 = DAT_000a9d04 + 0xa9b2e;
            goto LAB_000a9a44;
          }
        }
        else if (*(int *)(iVar21 + 0x20) != 0) {
          uVar15 = 0x539;
          iVar21 = DAT_000a9cd8 + 0xa99c8;
          iVar13 = DAT_000a9cdc + 0xa99d0;
          goto LAB_000a9a44;
        }
      }
      iVar13 = -0x16;
      goto LAB_000a9a4e;
    }
    if (*(int *)(iVar21 + 0x20) == 0) goto LAB_000a9a0c;
    uVar15 = 0x528;
    iVar21 = DAT_000a9ce8 + 0xa99fc;
    iVar13 = DAT_000a9cec + 0xa9a04;
  }
  mm_camera_debug_log(1,1,iVar13,uVar15,iVar21);
  iVar13 = -0x16;
LAB_000a9a4e:
  if (*piVar19 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}

