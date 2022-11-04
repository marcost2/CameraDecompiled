
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraPostProcessor::encodeData(qcamera::qcamera_jpeg_data_t*, unsigned char&) */

int __thiscall
qcamera::QCameraPostProcessor::encodeData
          (QCameraPostProcessor *this,qcamera_jpeg_data_t *param_1,uchar *param_2)

{
  QCamera2HardwareInterface **ppQVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  mm_camera_buf_def *pmVar6;
  QCameraStream *this_00;
  QCameraStream *pQVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  mm_camera_super_buf_t *pmVar12;
  uint uVar13;
  mm_camera_buf_def **ppmVar14;
  uint uVar15;
  void **ppvVar16;
  int iVar17;
  FILE *__s;
  char *pcVar18;
  int iVar19;
  undefined4 uVar20;
  mm_camera_super_buf_t *pmVar21;
  size_t sVar22;
  uint *puVar23;
  QCamera2HardwareInterface *pQVar24;
  int *piVar25;
  char *pcVar26;
  int *piVar27;
  uint uVar28;
  char *pcStack85148;
  uint uStack85144;
  mm_camera_buf_def *pmStack85136;
  uint uStack85116;
  uint uStack85112;
  QCameraStream *pQStack85108;
  uint uStack85096;
  char *pcStack85092;
  mm_camera_buf_def *pmStack85088;
  QCameraStream *pQStack85084;
  mm_camera_buf_def *pmStack85080;
  QCameraStream *pQStack85076;
  QCameraStream *pQStack85072;
  undefined4 uStack85068;
  char acStack85064 [4096];
  undefined8 uStack80968;
  undefined8 uStack80960;
  ulonglong uStack80952;
  undefined8 uStack80944;
  undefined8 uStack80936;
  undefined8 uStack80928;
  undefined8 uStack80920;
  undefined auStack952 [4];
  undefined4 uStack948;
  undefined4 uStack944;
  undefined4 uStack940;
  uint local_3a8;
  char *pcStack932;
  uint local_3a0;
  uint uStack924;
  uint local_398;
  uint uStack916;
  uint uStack912;
  char *pcStack908;
  uint uStack904;
  uint local_384;
  char *pcStack896;
  uint uStack892;
  char *pcStack888;
  uint uStack884;
  uint uStack880;
  uint uStack876;
  char *pcStack872;
  undefined4 local_364;
  int local_358;
  undefined4 local_354;
  int local_350;
  undefined4 uStack844;
  undefined2 local_348;
  undefined2 local_346;
  undefined2 local_344;
  undefined2 local_342;
  undefined auStack832 [84];
  char local_2ec;
  void *local_2c4;
  undefined2 local_290;
  uchar *local_1ec;
  uint uStack488;
  undefined local_1e4;
  undefined4 local_1e0;
  undefined local_1dc;
  undefined4 local_1d8;
  int local_2c;
  
  piVar27 = *(int **)(DAT_000d61b8 + 0xd5e8e);
  local_2c = *piVar27;
  iVar9 = *(int *)(DAT_000d61bc + 0xd5e9e);
  if (*(int *)(iVar9 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d61c4 + 0xd5eb8,0x94a,DAT_000d61c0 + 0xd5eb0);
  }
  pQStack85072 = (QCameraStream *)0x0;
  uStack85068 = 0;
  pmStack85080 = (mm_camera_buf_def *)0x0;
  pQStack85076 = (QCameraStream *)0x0;
  pmStack85088 = (mm_camera_buf_def *)0x0;
  pQStack85084 = (QCameraStream *)0x0;
  pmVar21 = *(mm_camera_super_buf_t **)(param_1 + 8);
  ppQVar1 = (QCamera2HardwareInterface **)(this + 8);
  iVar10 = QCamera2HardwareInterface::getChannelByHandle(*ppQVar1,*(uint *)(pmVar21 + 4));
  if (iVar10 == 0) {
    if (0 < (char)this[0x140]) {
      iVar10 = 0;
      do {
        if ((*(int *)(this + iVar10 * 4 + 0x144) != 0) &&
           (*(int *)(*(int *)(this + iVar10 * 4 + 0x144) + 0x10) == *(int *)(pmVar21 + 4)))
        goto LAB_000d5ed8;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (char)this[0x140]);
    }
    if (*(int *)(iVar9 + 0x20) == 0) {
LAB_000d5f90:
      iVar10 = -0x16;
      goto LAB_000d6c56;
    }
    ppmVar14 = *(mm_camera_buf_def ***)(pmVar21 + 4);
    uVar20 = 0x967;
    iVar9 = DAT_000d61c8 + 0xd5f60;
    iVar10 = DAT_000d61cc + 0xd5f6c;
LAB_000d5f84:
    mm_camera_debug_log(1,1,iVar10,uVar20,iVar9,ppmVar14);
    iVar10 = -0x16;
    goto LAB_000d6c56;
  }
LAB_000d5ed8:
  uVar11 = QCameraParametersIntf::getJpegRotation
                     ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  pmVar12 = *(mm_camera_super_buf_t **)(param_1 + 0xc);
  ppmVar14 = &pmStack85088;
  iVar10 = queryStreams(this,&pQStack85076,&pQStack85084,&pQStack85072,&pmStack85080,ppmVar14,
                        pmVar21,pmVar12);
  this_00 = pQStack85076;
  pmVar6 = pmStack85080;
  if (iVar10 != 0) goto LAB_000d6c56;
  if (pmStack85080 == (mm_camera_buf_def *)0x0) {
    if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000d5f90;
    uVar20 = 0x979;
    iVar9 = DAT_000d61d0 + 0xd5f7e;
    iVar10 = DAT_000d61d4 + 0xd5f86;
    goto LAB_000d5f84;
  }
  pQStack85108 = pQStack85084;
  uVar13 = checkThumbStreamAspect(this,pQStack85084,pQStack85076,uVar11);
  if (uVar13 == 0) {
    pQStack85108 = (QCameraStream *)0x0;
    pmStack85088 = (mm_camera_buf_def *)0x0;
    pQStack85084 = (QCameraStream *)0x0;
  }
  pmStack85136 = pmStack85088;
  if ((pmStack85088 == (mm_camera_buf_def *)0x0) && (*(int *)(iVar9 + 0x2c) != 0)) {
    mm_camera_debug_log(1,4,DAT_000d61dc + 0xd5fca,0x986,DAT_000d61d8 + 0xd5fc2);
  }
  piVar25 = *(int **)(pmVar6 + 0x210);
  if (piVar25 == (int *)0x0) {
    if (*(int *)(iVar9 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d61f0 + 0xd6134,0x98b,DAT_000d61ec + 0xd612c);
    }
  }
  else {
    pcVar18 = (char *)(DAT_000d61e0 + 0xd5fe6);
    QCamera2HardwareInterface::dumpFrameToFile(*ppQVar1,this_00,pmVar6,4,pcVar18);
    uVar15 = (**(code **)(*piVar25 + 0x1c))(piVar25,*(undefined4 *)(pmVar6 + 0xc),0);
    if ((*(int *)(*ppQVar1 + 0x4c0) != 0) &&
       (iVar10 = QCamera2HardwareInterface::msgTypeEnabledWithLock(*ppQVar1,0x80), 0 < iVar10)) {
      uStack80960 = 0;
      uStack80928 = 0;
      uStack80920 = 0;
      uStack80944 = 0;
      uStack80936 = 0;
      uStack80968 = 0x8000000001;
      uStack80952 = (ulonglong)uVar15;
      QCameraCbNotifier::notifyCallback
                ((QCameraCbNotifier *)(*ppQVar1 + 0x854),(qcamera_callback_argm_t *)&uStack80968);
    }
    if ((*(int *)(*ppQVar1 + 0x4bc) != 0) &&
       (iVar10 = QCamera2HardwareInterface::msgTypeEnabledWithLock(*ppQVar1,0x200), 0 < iVar10)) {
      uStack80936 = 0;
      uStack80928 = 0;
      uStack80952 = 0;
      uStack80944 = 0;
      uStack80920 = 0;
      uStack80968 = 0x20000000000;
      uStack80960 = 0;
      QCameraCbNotifier::notifyCallback
                ((QCameraCbNotifier *)(*ppQVar1 + 0x854),(qcamera_callback_argm_t *)&uStack80968);
    }
    if (*(int *)(this + 0x30) == 0) {
      if (*(int *)(iVar9 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d61f8 + 0xd615c,0x9ab,DAT_000d61f4 + 0xd6154);
      }
      iVar10 = -0x80000000;
      goto LAB_000d6c56;
    }
    if ((uVar13 != (byte)this[0x2f4]) && (*param_2 = '\x01', *(int *)(this + 0x34) != 0)) {
      (**(code **)(this + 0x20))();
      *(undefined4 *)(this + 0x34) = 0;
    }
    this[0x2f4] = SUB41(uVar13,0);
    if (*param_2 != '\0') {
      __aeabi_memclr8(&uStack80968,(size_t)&DAT_00013890);
      iVar10 = getJpegEncodingConfig
                         (this,(mm_jpeg_encode_params_t *)&uStack80968,this_00,pQStack85108);
      if (iVar10 == 0) {
        if (*(int *)(iVar9 + 0x28) != 0) {
          pcVar18 = (char *)(DAT_000d61fc + 0xd617a);
          mm_camera_debug_log(1,3,DAT_000d6200 + 0xd6182,0x9da,pcVar18);
        }
        iVar10 = (**(code **)(this + 0x1c))(*(undefined4 *)(this + 0x30),&uStack80968,this + 0x34);
        if (iVar10 == 0) {
          *param_2 = '\0';
          goto LAB_000d6212;
        }
        if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000d6c56;
        uVar20 = 0x9dd;
        iVar9 = DAT_000d6204 + 0xd61a6;
        iVar19 = DAT_000d6208 + 0xd61ae;
      }
      else {
        if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000d6c56;
        uVar20 = 0x9d7;
        iVar9 = DAT_000d61e4 + 0xd6112;
        iVar19 = DAT_000d61e8 + 0xd611a;
      }
      mm_camera_debug_log(1,1,iVar19,uVar20,iVar9);
      goto LAB_000d6c56;
    }
LAB_000d6212:
    __aeabi_memclr8(auStack952,0x388);
    local_364 = *(undefined4 *)(this + 0x34);
    uStack948 = *(undefined4 *)(pmVar6 + 0xc);
    uStack944 = 0;
    uVar20 = uStack948;
    if ((this[0x2ca] == (QCameraPostProcessor)0x0) &&
       (uVar20 = uStack944, this[0x2c9] != (QCameraPostProcessor)0x0)) {
      uVar20 = 0xffffffff;
    }
    uStack944 = uVar20;
    uStack85096 = 0;
    pcStack85092 = (char *)0x0;
    QCameraStream::getFrameDimension(this_00,(cam_dimension_t *)&uStack85096);
    iVar10 = QCameraParametersIntf::isHDROutputCropEnabled
                       ((QCameraParametersIntf *)(*ppQVar1 + 0x4ac));
    iVar19 = QCameraParametersIntf::isUbiFocusEnabled((QCameraParametersIntf *)(*ppQVar1 + 0x4ac));
    if ((((iVar19 == 0) &&
         (iVar19 = QCameraParametersIntf::isUbiRefocus((QCameraParametersIntf *)(*ppQVar1 + 0x4ac)),
         iVar19 == 0)) &&
        (iVar19 = QCameraParametersIntf::isChromaFlashEnabled
                            ((QCameraParametersIntf *)(*ppQVar1 + 0x4ac)), iVar19 == 0)) &&
       (iVar19 = QCameraParametersIntf::isOptiZoomEnabled
                           ((QCameraParametersIntf *)(*ppQVar1 + 0x4ac)), iVar19 == 0)) {
      iVar19 = QCameraParametersIntf::isStillMoreEnabled
                         ((QCameraParametersIntf *)(*ppQVar1 + 0x4ac));
    }
    else {
      iVar19 = 1;
    }
    if (*(int *)(iVar9 + 0x28) != 0) {
      pcVar18 = (char *)(DAT_000d6540 + 0xd62ba);
      mm_camera_debug_log(1,3,DAT_000d6544 + 0xd62c4,0xa2f,pcVar18,iVar19);
    }
    pcStack85148 = pcStack85092;
    uStack85112 = uStack85096;
    __aeabi_memcpy8(&uStack80968,this_00 + 0x2f8,0x7eb4);
    if (uStack80968._4_1_ == 0) {
      uStack85144 = 0;
      uStack85116 = 0;
    }
    else {
      puVar23 = (uint *)((int)&uStack80960 + 4);
      uVar13 = 0;
      uStack85144 = 0;
      uStack85116 = 0;
      do {
        uVar28 = puVar23[-1];
        uVar15 = QCameraStream::getMyServerID(this_00);
        if (uVar28 == uVar15) {
          uStack85144 = *puVar23;
          uStack85116 = puVar23[1];
          uStack85112 = puVar23[2];
          pcStack85148 = (char *)puVar23[3];
          pcVar18 = pcStack85148;
          QCameraStream::setCropInfo((cam_rect_t)this_00);
        }
        puVar23 = puVar23 + 9;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uStack80968._4_1_);
    }
    pQVar7 = pQStack85072;
    if (iVar19 == 0) {
      uStack80960._0_4_ = uStack85116;
      uStack80960._4_4_ = uStack85112;
      if ((pQStack85072 != (QCameraStream *)0x0) &&
         (iVar19 = QCameraParametersIntf::isTruePortraitEnabled
                             ((QCameraParametersIntf *)(*ppQVar1 + 0x4ac)), iVar19 != 0)) {
        iVar19 = (**(code **)(**(int **)(pQVar7 + 0x108) + 0x24))(*(int **)(pQVar7 + 0x108),0);
        pmVar21 = *(mm_camera_super_buf_t **)(iVar19 + 0xc);
        sVar22 = (int)pmVar21 * *(int *)(iVar19 + 8) + *(int *)(iVar19 + 4);
        if (*(int *)(iVar9 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d6554 + 0xd648a,0xa62,DAT_000d6550 + 0xd647a,sVar22,
                              *(int *)(iVar19 + 8),pmVar21);
          pmVar12 = pmVar21;
        }
        iVar17 = DAT_000d6558 + 0xd649c;
        pcVar18 = (char *)(DAT_000d6560 + 0xd64a0);
        FUN_000d6e38(acStack85064,0x1000,0x1000,DAT_000d6564 + 0xd64b4);
        __s = fopen(acStack85064,(char *)(DAT_000d6568 + 0xd64be));
        if (__s == (FILE *)0x0) {
          if (*(int *)(iVar9 + 0x20) != 0) {
            pcVar18 = (char *)(DAT_000d6d48 + 0xd6d1c);
            mm_camera_debug_log(1,1,DAT_000d6d4c + 0xd6d26,0xa65,pcVar18,acStack85064,iVar17,pmVar12
                               );
          }
        }
        else {
          fwrite((void *)(iVar19 + 0x10),1,sVar22,__s);
          if (*(int *)(iVar9 + 0x20) != 0) {
            pcVar18 = (char *)(DAT_000d656c + 0xd64f2);
            mm_camera_debug_log(1,1,DAT_000d6570 + 0xd64fc,0xa65,pcVar18,sVar22,iVar17);
          }
          fclose(__s);
        }
      }
    }
    else {
      __aeabi_memcpy8(&uStack80968,this_00 + 0x81ac,0x7eb4);
      pcVar18 = (char *)uStack80952;
      QCameraStream::setCropInfo((cam_rect_t)this_00);
      pQVar7 = pQStack85072;
      pQStack85084 = (QCameraStream *)0x0;
      if (((pQStack85072 != (QCameraStream *)0x0) && (*(int *)(this + 0x164) == 0)) &&
         (iVar19 = QCameraParametersIntf::isUbiRefocus((QCameraParametersIntf *)(*ppQVar1 + 0x4ac)),
         iVar19 != 0)) {
        iVar19 = (**(code **)(**(int **)(pQVar7 + 0x108) + 0x24))(*(int **)(pQVar7 + 0x108),0);
        sVar22 = *(int *)(iVar19 + 0xc) * *(int *)(iVar19 + 8) + *(int *)(iVar19 + 4);
        ppvVar16 = (void **)(**(code **)(*ppQVar1 + 0x4c8))
                                      (0xffffffff,sVar22,1,*(undefined4 *)(*ppQVar1 + 0x4d0),pcVar18
                                      );
        if (*(int *)(iVar9 + 0x28) != 0) {
          pcVar18 = (char *)(DAT_000d6548 + 0xd63f2);
          mm_camera_debug_log(1,3,DAT_000d654c + 0xd6402,0xa52,pcVar18,sVar22,
                              *(undefined4 *)(iVar19 + 8),*(undefined4 *)(iVar19 + 0xc));
        }
        if ((ppvVar16 != (void **)0x0) && (*ppvVar16 != (void *)0x0)) {
          __aeabi_memcpy8(*ppvVar16,(void *)(iVar19 + 0x10),sVar22);
          *(void ***)(this + 0x164) = ppvVar16;
        }
      }
      pQStack85108 = (QCameraStream *)0x0;
      uStack85144 = uStack80968._4_4_;
      pcStack85148 = (char *)uStack80952;
    }
    pcStack888 = pcStack85092;
    uStack892 = uStack85096;
    if (iVar10 != 0) {
      if (pcStack85148 != (char *)0x0) {
        pcStack888 = pcStack85148;
      }
      uStack892 = uStack80960._4_4_;
      if (uStack80960._4_4_ == 0) {
        uStack892 = uStack85096;
      }
    }
    local_384 = uStack85096;
    pcStack896 = pcStack85092;
    uStack884 = uStack85144;
    uStack880 = (uint)uStack80960;
    uStack876 = uStack80960._4_4_;
    pcStack872 = pcStack85148;
    iVar10 = QCamera2HardwareInterface::getCamHalCapabilities(*ppQVar1);
    uVar5 = *(undefined2 *)(iVar10 + 0x2f60);
    uVar2 = *(undefined2 *)(iVar10 + 0x2f62);
    uVar3 = *(undefined2 *)(iVar10 + 0x2f64);
    uVar4 = *(undefined2 *)(iVar10 + 0x2f66);
    iVar10 = QCamera2HardwareInterface::getExifData(*ppQVar1);
    *(int *)(param_1 + 0x20) = iVar10;
    if (iVar10 != 0) {
      local_350 = iVar10 + 4;
      uStack844 = *(undefined4 *)(iVar10 + 0x4b4);
      local_348 = uVar5;
      local_346 = uVar2;
      local_344 = uVar3;
      local_342 = uVar4;
    }
    iVar10 = QCamera2HardwareInterface::needRotationReprocess(*ppQVar1);
    if (iVar10 == 0) {
      uStack904 = uVar11;
    }
    if (*(int *)(iVar9 + 0x28) != 0) {
      pcVar18 = (char *)(DAT_000d6858 + 0xd663e);
      mm_camera_debug_log(1,3,DAT_000d685c + 0xd664a,0xaa5,pcVar18,uStack904);
    }
    QCameraParametersIntf::getMotCustomMetadata
              ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),&local_1ec,&uStack488);
    *(uchar **)(param_1 + 0x14) = local_1ec;
    if (*(int *)(this + 0x13c) == 1) {
      QCamera2HardwareInterface::getThumbnailSize(*ppQVar1,(cam_dimension_t *)&local_3a0);
      if (pQStack85108 == (QCameraStream *)0x0) {
        pmStack85088 = pmVar6;
        pQStack85084 = this_00;
        pmStack85136 = pmVar6;
        pQStack85108 = this_00;
      }
      iVar10 = QCamera2HardwareInterface::needRotationReprocess(*ppQVar1);
      uVar13 = local_3a0;
      if ((iVar10 != 0) && (uVar11 == 0x10e || uVar11 == 0x5a)) {
        local_3a0 = uStack924;
        uStack924 = uVar13;
      }
      uStack85096 = 0;
      pcStack85092 = (char *)0x0;
      QCameraStream::getFrameDimension(pQStack85108,(cam_dimension_t *)&uStack85096);
      uVar11 = uStack85096;
      local_3a8 = uStack85096;
      pcStack932 = pcStack85092;
      if (pmStack85136 != pmVar6) {
        pcStack85148 = pcStack85092;
        __aeabi_memcpy8(&uStack80968,pQStack85108 + 0x2f8,0x7eb4);
        if (uStack80968._4_1_ == 0) {
          uStack80960._0_4_ = 0;
          uStack85144 = 0;
          uStack80960._4_4_ = uVar11;
        }
        else {
          puVar23 = (uint *)((int)&uStack80960 + 4);
          uVar13 = 0;
          uStack80960._0_4_ = 0;
          uStack85144 = 0;
          do {
            uVar28 = puVar23[-1];
            uVar15 = QCameraStream::getMyServerID(pQStack85108);
            if (uVar28 == uVar15) {
              uStack85144 = *puVar23;
              uStack80960._0_4_ = puVar23[1];
              uVar11 = puVar23[2];
              pcStack85148 = (char *)puVar23[3];
              pcVar18 = pcStack85148;
              QCameraStream::setCropInfo((cam_rect_t)pQStack85108);
            }
            puVar23 = puVar23 + 9;
            uVar13 = uVar13 + 1;
            uStack80960._4_4_ = uVar11;
          } while (uVar13 < uStack80968._4_1_);
        }
      }
      pcStack908 = pcStack85148;
      if ((int)(pcStack85148 + uStack924 * -0x10) < 0 ==
          SBORROW4((int)pcStack85148,uStack924 * 0x10)) {
        pcStack908 = (char *)(uStack924 * 0x10);
        uStack80960._0_4_ = (uint)uStack80960 + (int)(pcStack85148 + uStack924 * -0x10) / 2;
      }
      if ((int)(uStack80960._4_4_ + local_3a0 * -0x10) < 0 ==
          SBORROW4(uStack80960._4_4_,local_3a0 * 0x10)) {
        uStack85144 = uStack85144 + (int)(uStack80960._4_4_ + local_3a0 * -0x10) / 2;
        uStack80960._4_4_ = local_3a0 * 0x10;
      }
      uStack912 = uStack80960._4_4_;
      if (pcStack908 == (char *)0x0 || uStack80960._4_4_ == 0) {
        iVar10 = DAT_000d6860 + 0xd67b4;
        iVar19 = DAT_000d6864 + 0xd67b6;
LAB_000d67c8:
        __android_log_print(6,iVar10,iVar19,DAT_000d6870 + 0xd67d0,pcVar18);
      }
      else {
        if (local_3a0 == 0 || uStack924 == 0) {
          iVar10 = DAT_000d6868 + 0xd67c8;
          iVar19 = DAT_000d686c + 0xd67ca;
          goto LAB_000d67c8;
        }
        if ((int)(uStack924 * uStack80960._4_4_) < (int)(local_3a0 * (int)pcStack908)) {
          pcVar18 = (char *)((uStack924 * uStack80960._4_4_) / local_3a0);
          uStack80960._0_4_ = (uint)uStack80960 + ((int)pcStack908 - (int)pcVar18) / 2;
          uStack80960._0_4_ = (uint)uStack80960 & ~((int)(uint)uStack80960 >> 0x1f);
          pcStack908 = pcVar18;
        }
        else {
          uStack912 = (local_3a0 * (int)pcStack908) / uStack924;
          uStack85144 = uStack85144 + (int)(uStack80960._4_4_ - uStack912) / 2;
          uStack85144 = uStack85144 & ~((int)uStack85144 >> 0x1f);
        }
      }
      local_398 = uStack85144;
      if (pmStack85136 != (mm_camera_buf_def *)0x0) {
        uStack940 = *(undefined4 *)(pmStack85136 + 0xc);
      }
      uStack916 = (uint)uStack80960;
      if (*(int *)(iVar9 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000d6878 + 0xd681c,0xb00,DAT_000d6874 + 0xd6808,uStack940,
                            local_3a8,pcStack932,local_3a0,uStack924);
        goto LAB_000d6822;
      }
    }
    else {
LAB_000d6822:
      if (*(int *)(iVar9 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000d6880 + 0xd6852,0xb08,DAT_000d687c + 0xd683e,uStack948,
                            local_384,pcStack896,uStack892,pcStack888);
      }
    }
    if (pmStack85136 != (mm_camera_buf_def *)0x0) {
      QCamera2HardwareInterface::dumpFrameToFile(*ppQVar1,pQStack85108,pmStack85136,8,(char *)0x0);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      local_358 = *(int *)(param_1 + 0x10);
    }
    local_354 = 1;
    uVar20 = QCamera2HardwareInterface::getSensorType(*ppQVar1);
    *(undefined4 *)(*ppQVar1 + 0xa5c) = uVar20;
    uVar20 = QCameraParametersIntf::getCameraPosition((QCameraParametersIntf *)(*ppQVar1 + 0x4ac));
    *(undefined4 *)(*ppQVar1 + 0xa68) = uVar20;
    pQVar24 = *ppQVar1;
    pcVar18 = (char *)QCameraParametersIntf::getSensorName
                                ((QCameraParametersIntf *)(pQVar24 + 0x4ac));
    strncpy((char *)(pQVar24 + 0xa6c),pcVar18,0x20);
    *(undefined4 *)(*ppQVar1 + 0xa8c) = *(undefined4 *)(*ppQVar1 + 0xabc);
    *(undefined4 *)(*ppQVar1 + 0xa94) = *(undefined4 *)(*ppQVar1 + 0xac0);
    *(undefined4 *)(*ppQVar1 + 0xa90) = *(undefined4 *)(*ppQVar1 + 0xac4);
    pQVar24 = *ppQVar1;
    __aeabi_memcpy8(auStack832,pQVar24 + 0x9e8,0xb0);
    local_2c4 = malloc((size_t)"sion");
    if (local_2c4 != (void *)0x0) {
      iVar10 = QCameraParametersIntf::getMobicatMask((QCameraParametersIntf *)(pQVar24 + 0x4ac));
      local_1e4 = (undefined)iVar10;
      if (((iVar10 != 0) && (local_358 != 0)) && (*(void **)(*ppQVar1 + 0xa64) != (void *)0x0)) {
        __aeabi_memcpy8(local_2c4,*(void **)(*ppQVar1 + 0xa64),(size_t)"sion");
        iVar10 = local_358;
        *(char *)(local_358 + 0xb72e8) = local_2ec;
        if (local_2ec != '\0') {
          __aeabi_memcpy8((void *)(local_358 + 0xb72ec),auStack832,0x54);
        }
        pvVar8 = local_2c4;
        *(undefined *)(iVar10 + 0xb7340) = *(undefined *)((int)local_2c4 + 0x60794);
        pcVar26 = (char *)((int)local_2c4 + 0x60795);
        *(undefined *)(iVar10 + 0xb86e0) = *(undefined *)((int)local_2c4 + 0x60795);
        *(undefined *)(iVar10 + 0xc36b0) = *(undefined *)((int)local_2c4 + 0x60796);
        *(undefined *)(iVar10 + 0xcfa08) = *(undefined *)((int)local_2c4 + 0x60797);
        *(undefined *)(iVar10 + 0xcfa74) = *(undefined *)((int)local_2c4 + 0x60798);
        *(undefined *)(iVar10 + 0xe1f78) = *(undefined *)((int)local_2c4 + 0x60799);
        *(undefined *)(iVar10 + 0x106974) = *(undefined *)((int)local_2c4 + 0x6079a);
        *(undefined *)((int)&PTR_init_00117aec + iVar10) = *(undefined *)((int)local_2c4 + 0x6079b);
        pcVar18 = (char *)((int)local_2c4 + 0x60796);
        if (*(char *)((int)local_2c4 + 0x60794) != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xb7348),local_2c4,0x1398);
        }
        if (*pcVar26 != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xb86e4),(void *)((int)pvVar8 + 0x1398),0xafcc);
        }
        if (*pcVar18 != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xc36b4),(void *)((int)pvVar8 + 0xc364),0xc354);
        }
        if (*(char *)((int)pvVar8 + 0x60797) != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xcfa0c),(void *)((int)pvVar8 + 0x186b8),0x68);
        }
        if (*(char *)((int)pvVar8 + 0x60798) != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xcfa78),(void *)((int)pvVar8 + 0x18720),
                          (size_t)&DAT_00012500);
        }
        if (*(char *)((int)pvVar8 + 0x60799) != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0xe1f7c),(void *)((int)pvVar8 + 0x2ac20),0x249f8);
        }
        if (*(char *)((int)pvVar8 + 0x6079a) != '\0') {
          __aeabi_memcpy8((void *)(iVar10 + 0x106978),(void *)((int)pvVar8 + 0x4f618),
                          (size_t)&DAT_00011174);
        }
        if (*(char *)((int)pvVar8 + 0x6079b) != '\0') {
          uVar20 = *(undefined4 *)((int)pvVar8 + 0x6078c);
          *(undefined4 *)((int)&PTR_bufDone_00117af4 + iVar10) =
               *(undefined4 *)((int)pvVar8 + 0x60790);
          *(undefined4 *)((int)&PTR_processZoomDone_00117af0 + iVar10) = uVar20;
        }
      }
      local_290 = 0;
      piVar25 = (int *)QCamera2HardwareInterface::getRelatedCamSyncInfo();
      if ((*piVar25 == 1) &&
         (iVar10 = QCamera2HardwareInterface::getMpoComposition(*ppQVar1), iVar10 != 0)) {
        local_1e0 = 1;
        if (piVar25[1] == 1) {
          local_1dc = 1;
          if (*(int *)(iVar9 + 0x2c) == 0) {
LAB_000d6d3a:
            local_1d8 = 2;
            goto LAB_000d6c0e;
          }
          uVar20 = 0xb7a;
          iVar10 = DAT_000d6d58 + 0xd6bd8;
          iVar19 = DAT_000d6d5c + 0xd6be0;
        }
        else {
          local_1dc = 0;
          if (*(int *)(iVar9 + 0x2c) == 0) goto LAB_000d6d3a;
          uVar20 = 0xb7d;
          iVar10 = DAT_000d6d60 + 0xd6cce;
          iVar19 = DAT_000d6d64 + 0xd6cd6;
        }
        mm_camera_debug_log(1,4,iVar19,uVar20,iVar10);
        local_1d8 = 2;
      }
      else {
        if (*(int *)(iVar9 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000d6d6c + 0xd6bf8,0xb81,DAT_000d6d68 + 0xd6bf0);
        }
        local_1dc = 0;
        local_1e0 = 0;
        local_1d8 = 1;
      }
LAB_000d6c0e:
      if (*(int *)(iVar9 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000d6d74 + 0xd6c2e,0xb87,DAT_000d6d70 + 0xd6c26);
      }
      iVar10 = (**(code **)(this + 0x14))(auStack952,&uStack85068);
      if (local_2c4 != (void *)0x0) {
        free(local_2c4);
      }
      if (iVar10 == 0) {
        iVar10 = 0;
        *(undefined4 *)param_1 = uStack85068;
      }
      goto LAB_000d6c56;
    }
    if (*(int *)(iVar9 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d6d54 + 0xd6c8c,0xb22,DAT_000d6d50 + 0xd6c84);
    }
  }
  iVar10 = -0xc;
LAB_000d6c56:
  if (*piVar27 != local_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}

