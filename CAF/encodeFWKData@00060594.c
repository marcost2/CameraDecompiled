
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
  QCamera3Exif *this_00;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  jpeg_settings_t *pjVar10;
  metadata_buffer_t *pmVar11;
  qcamera_fwk_input_pp_data_t *pqVar12;
  char *pcVar13;
  int iVar14;
  QCamera3HardwareInterface *this_01;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  int *piStack80200;
  int *piStack80196;
  undefined auStack80184 [96];
  undefined4 uStack80088;
  undefined4 uStack80084;
  undefined4 uStack80080;
  undefined4 uStack80076;
  undefined4 uStack80072;
  undefined4 uStack80068;
  undefined4 uStack80060;
  undefined4 uStack80056;
  undefined4 uStack80052;
  undefined4 uStack80048;
  undefined4 uStack80044;
  int *piStack80040;
  int *piStack80036;
  undefined4 uStack80032;
  undefined4 uStack80028;
  undefined8 uStack80024;
  undefined8 uStack80016;
  int *piStack80004;
  int *piStack80000;
  int *piStack79996;
  int *piStack79992;
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
  
  piVar17 = *(int **)(DAT_000608b4 + 0x605aa);
  iVar4 = *piVar17;
  iVar16 = *(int *)(DAT_000608b8 + 0x605be);
  if (*(int *)(iVar16 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  uStack80060 = 0;
  if (param_1 == (qcamera_hal3_jpeg_data_t *)0x0) {
    iVar16 = *(int *)(iVar16 + 0x20);
  }
  else {
    pqVar12 = *(qcamera_fwk_input_pp_data_t **)(param_1 + 0x10);
    if (pqVar12 == (qcamera_fwk_input_pp_data_t *)0x0) {
      iVar16 = *(int *)(iVar16 + 0x20);
    }
    else {
      pmVar11 = *(metadata_buffer_t **)(param_1 + 0x1c);
      if (pmVar11 == (metadata_buffer_t *)0x0) {
        iVar16 = *(int *)(iVar16 + 0x20);
      }
      else {
        pjVar10 = *(jpeg_settings_t **)(param_1 + 0x24);
        if (pjVar10 == (jpeg_settings_t *)0x0) {
          iVar16 = *(int *)(iVar16 + 0x20);
        }
        else if (*(int *)(param_1 + 8) == 0) {
          this_01 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
          if (this_01 != (QCamera3HardwareInterface *)0x0) {
            if (*(int *)(this + 0x24) == 0) {
              if (*(int *)(iVar16 + 0x20) != 0) {
                mm_camera_debug_log();
              }
              iVar14 = -0x80000000;
              goto LAB_00060682;
            }
            piVar5 = *(int **)(pqVar12 + 0x44c);
            piVar8 = *(int **)(pqVar12 + 0x450);
            uStack80080 = 0;
            uStack80076 = 0;
            uStack80072 = 0;
            uStack80068 = 0;
            if (pmVar11[0xdf] != (metadata_buffer_t)0x0) {
              auVar1 = *(undefined (*) [16])(pmVar11 + 0x76c6c);
              uStack80080 = SUB164(auVar1,0);
              uStack80076 = SUB164(auVar1 >> 0x20,0);
              uStack80072 = SUB164(auVar1 >> 0x40,0);
              uStack80068 = SUB164(auVar1 >> 0x60,0);
            }
            piStack80200 = *(int **)(pqVar12 + 0x5dc);
            piStack80196 = *(int **)(pqVar12 + 0x5e0);
            if (pmVar11[0xe0] != (metadata_buffer_t)0x0) {
              piVar6 = (int *)(pmVar11 + 0x76c8c);
              piVar9 = (int *)*piVar6;
              if (piVar9 != (int *)0x0) {
                piVar6 = *(int **)(pmVar11 + 0x76c90);
              }
              if (piVar9 != (int *)0x0 && piVar6 != (int *)0x0) {
                piStack80200 = piVar9;
                piStack80196 = piVar6;
              }
            }
            iVar14 = QCamera3HardwareInterface::needJpegExifRotation(this_01);
            if ((iVar14 == 0) &&
               (iVar14 = needsReprocess((QCamera3PostProcessor *)0x0,pqVar12), iVar14 != 0)) {
              bVar2 = false;
            }
            else {
              uStack80056 = 1;
              uStack80052 = 0;
              uStack80048 = 0;
              *(undefined4 *)(pmVar11 + 0x7475c) = 0;
              bVar2 = true;
              pmVar11[0x38] = (metadata_buffer_t)0x1;
              *(undefined8 *)(pmVar11 + 0x74754) = 1;
            }
            if (*(int *)(iVar16 + 0x28) != 0) {
              mm_camera_debug_log();
            }
            if (*param_2 == '\0') {
LAB_00060ac0:
              __aeabi_memclr4(&uStack80056,0x330);
              uStack79972 = *(undefined4 *)(this + 0x28);
              uStack80052 = 0;
              uStack80048 = 0;
              if ((bVar2) || (*(int *)(pjVar10 + 4) != 0x10e && *(int *)(pjVar10 + 4) != 0x5a)) {
                uStack79988 = CONCAT44(uStack80076,uStack80080);
                uStack79980 = SUB168(CONCAT412(uStack80068,CONCAT48(uStack80072,uStack79988)) >>
                                     0x40,0);
                piStack79996 = piStack80200;
                piStack79992 = piStack80196;
                piStack80004 = piVar5;
                piStack80000 = piVar8;
              }
              else {
                piStack79996 = piStack80196;
                piStack79992 = piStack80200;
                uStack79980 = CONCAT44(uStack80072,uStack80068);
                uStack79988 = CONCAT44(uStack80080,uStack80076);
                piStack80004 = piVar8;
                piStack80000 = piVar5;
              }
              uStack80088 = 0;
              uStack80084 = 0;
              QCamera3HardwareInterface::get3AVersion(this_01,(cam_q3a_version_t *)&uStack80088);
              this_00 = (QCamera3Exif *)getExifData(this,pmVar11,pjVar10,bVar2);
              *(QCamera3Exif **)(param_1 + 0x18) = this_00;
              if (this_00 != (QCamera3Exif *)0x0) {
                uStack79952 = QCamera3Exif::getEntries(this_00);
                uStack79948 = QCamera3Exif::getNumOfEntries(this_00);
                uStack79944 = uStack80088;
                uStack79940 = uStack80084;
              }
              if (*(int *)(iVar16 + 0x28) != 0) {
                mm_camera_debug_log();
              }
              if (*(int *)(this + 0x1e8) == 1) {
                uStack80028 = *(undefined4 *)(pjVar10 + 0x10);
                if ((bVar2) || (*(int *)(pjVar10 + 4) != 0x10e && *(int *)(pjVar10 + 4) != 0x5a)) {
                  uStack80024 = CONCAT44(uStack80076,uStack80080);
                  uStack80016 = SUB168(CONCAT412(uStack80068,CONCAT48(uStack80072,uStack80024)) >>
                                       0x40,0);
                  piStack80040 = piVar5;
                  piStack80036 = piVar8;
                  uStack80032 = *(undefined4 *)(pjVar10 + 0xc);
                }
                else {
                  uStack80016 = CONCAT44(uStack80072,uStack80068);
                  uStack80024 = CONCAT44(uStack80080,uStack80076);
                  piStack80040 = piVar8;
                  piStack80036 = piVar5;
                  uStack80032 = uStack80028;
                  uStack80028 = *(undefined4 *)(pjVar10 + 0xc);
                }
                uStack80044 = 0;
              }
              QCamera3HardwareInterface::get3AExifParams();
              __aeabi_memcpy8(auStack79936,auStack80184,0x60);
              pvVar3 = pvStack79844;
              pvStack79844 = malloc(0x607a0);
              if (pvStack79844 == (void *)0x0) {
                if (*(int *)(iVar16 + 0x20) != 0) {
                  mm_camera_debug_log();
                }
                iVar14 = -0xc;
                goto LAB_00060682;
              }
              uStack79676 = QCamera3HardwareInterface::getMobicatMask(this_01);
              pmVar11[0xb6cc8] = mStack79880;
              if (mStack79880 != (metadata_buffer_t)0x0) {
                *(longlong *)(pmVar11 + 0xb6ccc) = SUB168(auStack79936,0);
                *(longlong *)(pmVar11 + 0xb6cd4) = SUB168(auStack79936 >> 0x40,0);
                *(undefined8 *)(pmVar11 + 0xb6cec) = uStack79904;
                *(undefined8 *)(pmVar11 + 0xb6cf4) = uStack79896;
                *(undefined8 *)(pmVar11 + 0xb6cdc) = uStack79920;
                *(undefined8 *)(pmVar11 + 0xb6ce4) = uStack79912;
                *(undefined8 *)(pmVar11 + 0xb6cfc) = uStack79888;
              }
              pmStack79960 = pmVar11;
              if (pvVar3 != (void *)0x0) {
                __aeabi_memcpy8(pvStack79844,pvVar3,0x607a0);
                pvVar3 = pvStack79844;
                pmVar11 = pmStack79960;
                pmStack79960[0xb6d04] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60794);
                pmStack79960[0xb80a0] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60795);
                pmStack79960[0xc3070] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60796);
                pmStack79960[0xcf3c8] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60797);
                pmStack79960[0xcf434] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60798);
                pmStack79960[0xe1938] = *(metadata_buffer_t *)((int)pvStack79844 + 0x60799);
                pmStack79960[0x106334] = *(metadata_buffer_t *)((int)pvStack79844 + 0x6079a);
                pmStack79960[0x1174ac] = *(metadata_buffer_t *)((int)pvStack79844 + 0x6079b);
                pcVar13 = (char *)((int)pvStack79844 + 0x60796);
                pcVar15 = (char *)((int)pvStack79844 + 0x60795);
                if (*(char *)((int)pvStack79844 + 0x60794) != '\0') {
                  __aeabi_memcpy8(pmStack79960 + 0xb6d08,pvStack79844,0x1398);
                }
                if (*pcVar15 != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0xb80a4,(void *)((int)pvVar3 + 0x1398),0xafcc);
                }
                if (*pcVar13 != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0xc3074,(void *)((int)pvVar3 + 0xc364),0xc354);
                }
                if (*(char *)((int)pvVar3 + 0x60797) != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0xcf3cc,(void *)((int)pvVar3 + 0x186b8),0x68);
                }
                if (*(char *)((int)pvVar3 + 0x60798) != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0xcf438,(void *)((int)pvVar3 + 0x18720),0x12500);
                }
                if (*(char *)((int)pvVar3 + 0x60799) != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0xe193c,(void *)((int)pvVar3 + 0x2ac20),
                                  (size_t)
                                  "rrideMetadataEPNS_24qcamera_hal3_pp_buffer_tEP17mm_camera_buf_defPNS_15jpeg_settings_tERNS_27qcamera_fwk_input_pp_data_tE"
                                 );
                }
                if (*(char *)((int)pvVar3 + 0x6079a) != '\0') {
                  __aeabi_memcpy8(pmVar11 + 0x106338,(void *)((int)pvVar3 + 0x4f618),
                                  (size_t)&DAT_00011174);
                }
                if (*(char *)((int)pvVar3 + 0x6079b) != '\0') {
                  uVar7 = *(undefined4 *)((int)pvVar3 + 0x6078c);
                  *(undefined4 *)(pmVar11 + 0x1174b4) = *(undefined4 *)((int)pvVar3 + 0x60790);
                  *(undefined4 *)(pmVar11 + 0x1174b0) = uVar7;
                }
              }
              iVar14 = QCamera3HardwareInterface::isDeviceLinked(this_01);
              if (iVar14 != 0) {
                uStack79660 = 1;
                uStack79664 = 1;
                uStack79672 = 0;
                uStack79668 = QCamera3HardwareInterface::isMainCamera(this_01);
              }
              uStack79956 = 3;
              iVar14 = (**(code **)(this + 0x10))(&uStack80056,&uStack80060);
              if (pvStack79844 != (void *)0x0) {
                free(pvStack79844);
              }
              if (iVar14 == 0) {
                *(undefined4 *)param_1 = uStack80060;
              }
              iVar16 = *(int *)(iVar16 + 0x2c);
            }
            else {
              piVar6 = (int *)(this + 0x28);
              if (*piVar6 == 0) {
LAB_00060800:
                __aeabi_memclr4(&uStack80056,0x13890);
                getFWKJpegEncodeConfig(this,(mm_jpeg_encode_params_t *)&uStack80056,pqVar12,pjVar10)
                ;
                if (*(int *)(iVar16 + 0x28) != 0) {
                  mm_camera_debug_log();
                }
                uVar7 = uStack53376;
                piVar9 = piStack80000;
                if ((!bVar2) && (*(int *)(pjVar10 + 4) == 0x10e || *(int *)(pjVar10 + 4) == 0x5a)) {
                  uStack53376 = uStack53368;
                  uStack53368 = uVar7;
                  piStack80000 = piStack79992;
                  piStack79992 = piVar9;
                }
                if ((*(int *)(iVar16 + 0x34) != 0) &&
                   (mm_camera_debug_log(), *(int *)(iVar16 + 0x34) != 0)) {
                  mm_camera_debug_log();
                }
                if (*(int *)(iVar16 + 0x28) != 0) {
                  mm_camera_debug_log();
                }
                iVar14 = (**(code **)(this + 0x18))
                                   (*(undefined4 *)(this + 0x24),&uStack80056,piVar6);
                if (iVar14 == 0) {
                  *param_2 = '\0';
                  goto LAB_00060ac0;
                }
                iVar16 = *(int *)(iVar16 + 0x20);
              }
              else {
                iVar14 = (**(code **)(this + 0x1c))();
                if (iVar14 == 0) {
                  *piVar6 = 0;
                  goto LAB_00060800;
                }
                iVar16 = *(int *)(iVar16 + 0x20);
              }
            }
            if (iVar16 != 0) {
              mm_camera_debug_log();
            }
            goto LAB_00060682;
          }
          iVar16 = *(int *)(iVar16 + 0x20);
        }
        else {
          iVar16 = *(int *)(iVar16 + 0x20);
        }
      }
    }
  }
  if (iVar16 != 0) {
    mm_camera_debug_log();
  }
  iVar14 = -0x16;
LAB_00060682:
  if (*piVar17 == iVar4) {
    return iVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

