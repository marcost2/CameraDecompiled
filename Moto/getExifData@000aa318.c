
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3PostProcessor::getExifData(metadata_buffer_t*, qcamera::jpeg_settings_t*, bool)
    */

int * __thiscall
qcamera::QCamera3PostProcessor::getExifData
          (QCamera3PostProcessor *this,metadata_buffer_t *param_1,jpeg_settings_t *param_2,
          bool param_3)

{
  int *this_00;
  int *this_01;
  MotExif *this_02;
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  MotMakernote *this_03;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  int *piVar10;
  jpeg_settings_t *__s;
  QCamera3HardwareInterface *pQVar11;
  undefined4 uVar12;
  undefined4 extraout_s0;
  float fVar13;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  int iVar14;
  double dVar15;
  double dVar16;
  void *local_9c;
  void *local_98;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_91;
  ushort local_90 [12];
  void *local_78 [6];
  undefined8 local_60;
  undefined8 local_58;
  int local_28;
  
  piVar10 = *(int **)(DAT_000aa6e4 + 0xaa336);
  local_28 = *piVar10;
  this_00 = (int *)operator_new(0x4b8);
  *this_00 = *(int *)(DAT_000aa6e8 + 0xaa34a) + 8;
  uVar12 = __aeabi_memclr8(this_00 + 1,0x4b4);
  if (*(int *)(this + 4) == 0) {
    if (*(int *)(*(int *)(DAT_000aa708 + 0xaa42a) + 0x20) == 0) {
      this_00 = (int *)0x0;
    }
    else {
      uVar12 = mm_camera_debug_log(uVar12,1,1,DAT_000aa710 + 0xaa444,0xb43,DAT_000aa70c + 0xaa43c);
      this_00 = (int *)0x0;
    }
    goto LAB_000aaed4;
  }
  pQVar11 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
  this_01 = (int *)operator_new(0x10);
  this_02 = (MotExif *)
            MotExifHal3::MotExifHal3((MotExifHal3 *)this_01,(QCamera3Exif *)this_00,param_1);
  MotExif::write_mot_exif(this_02,*(uint *)(pQVar11 + 0x60),false);
  android::String8::String8((String8 *)&local_98);
  android::String8::String8((String8 *)&local_9c);
  iVar1 = getExifDateTime((String8 *)&local_98,(String8 *)&local_9c);
  if (iVar1 == 0) {
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x450132,2,iVar1 + 1,local_98);
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x939003,2,iVar1 + 1,local_98);
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x949004,2,iVar1 + 1,local_98);
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0xa49290,2,iVar1 + 1,local_9c);
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0xa59291,2,iVar1 + 1,local_9c);
    iVar1 = android::String8::length();
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0xa69292,2,iVar1 + 1,local_9c);
    if (param_1 == (metadata_buffer_t *)0x0) goto LAB_000aa4fe;
LAB_000aa3c8:
    if (param_1[0x88] != (metadata_buffer_t)0x0) {
      fVar13 = *(float *)(param_1 + 0xc6cc) * DAT_000aa6f8;
      if ((int)ROUND(fVar13) < 0) {
        iVar1 = *(int *)(DAT_000aa720 + 0xaa52e);
        if (*(int *)(iVar1 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000aa728 + 0xaa546,0x9cf);
        }
        if (*(int *)(iVar1 + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000aa730 + 0xaa560,0xb6e);
        }
      }
      else {
        uVar4 = this_00[0x12d];
        if (uVar4 < 0x32) {
          this_00[uVar4 * 6 + 1] = 5;
          this_00[uVar4 * 6 + 6] = 0xa0920a;
          this_00[this_00[0x12d] * 6 + 3] = 1;
          iVar1 = this_00[0x12d];
          this_00[iVar1 * 6 + 4] = (int)ROUND(fVar13);
          this_00[iVar1 * 6 + 5] = 1000;
          *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
          this_00[0x12d] = this_00[0x12d] + 1;
        }
        else if (*(int *)(*(int *)(DAT_000aa6fc + 0xaa404) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000aa704 + 0xaa420,0xced);
        }
      }
    }
    if (param_1[0x93] != (metadata_buffer_t)0x0) {
      iVar1 = *(int *)(param_1 + 0xc720);
      if (param_1[0xfe] != (metadata_buffer_t)0x0) {
        iVar1 = (*(int *)(param_1 + 0xc724) * iVar1) / 100;
      }
      uVar4 = this_00[0x12d];
      if (uVar4 < 0x32) {
        this_00[uVar4 * 6 + 1] = 3;
        this_00[uVar4 * 6 + 6] = 0x908827;
        this_00[this_00[0x12d] * 6 + 3] = 1;
        iVar14 = this_00[0x12d];
        *(short *)(this_00 + iVar14 * 6 + 4) = (short)iVar1;
        *(QCamera3Exif *)(this_00 + iVar14 * 6 + 2) = (QCamera3Exif)0x1;
        this_00[0x12d] = iVar14 + 1;
      }
      else if (*(int *)(*(int *)(DAT_000aa734 + 0xaa5f4) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000aa73c + 0xaa60c,0xced);
      }
    }
    if (param_1[0x91] != (metadata_buffer_t)0x0) {
      uVar4 = *(uint *)(param_1 + 0xc710);
      if ((*(uint *)(param_1 + 0xc714) | uVar4) == 0) {
        uVar4 = 0x3c;
      }
      if ((int)uVar4 < 1) {
        iVar1 = *(int *)(DAT_000aa74c + 0xaa6aa);
        if (*(int *)(iVar1 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000aa754 + 0xaa6c2,0x9cf);
        }
        if (*(int *)(iVar1 + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000aa75c + 0xaa6de,0xb87);
        }
      }
      else {
        uVar5 = this_00[0x12d];
        if (uVar5 < 0x32) {
          this_00[uVar5 * 6 + 1] = 5;
          this_00[uVar5 * 6 + 6] = 0x8c829a;
          this_00[this_00[0x12d] * 6 + 3] = 1;
          iVar1 = this_00[0x12d];
          this_00[iVar1 * 6 + 4] = 1;
          this_00[iVar1 * 6 + 5] = uVar4;
          *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
          this_00[0x12d] = this_00[0x12d] + 1;
        }
        else if (*(int *)(*(int *)(DAT_000aa740 + 0xaa684) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000aa748 + 0xaa6a0,0xced);
        }
      }
    }
    __s = param_2 + 0x40;
    sVar2 = strlen((char *)__s);
    if (sVar2 != 0) {
      local_60 = 0x4949435341;
      __strlcpy_chk(&local_58,__s,0x21,0x21);
      sVar2 = strlen((char *)__s);
      *(undefined *)((int)&local_58 + sVar2) = 0;
      QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x1b001b,2,sVar2 + 9,&local_60);
    }
    if (param_2[0x20] == (jpeg_settings_t)0x0) goto LAB_000aaa9a;
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    uVar12 = FUN_000ac068(&local_60);
    if ((char)local_60 == '\0') {
      if (*(int *)(*(int *)(DAT_000aac10 + 0xaa872) + 0x24) != 0) {
        mm_camera_debug_log(uVar12,1,2,DAT_000aac18 + 0xaa88a,0xbae,DAT_000aac14 + 0xaa882,uVar7);
      }
    }
    else {
      puVar3 = &local_60;
      parseGPSCoordinate((char *)puVar3,(rat_t *)local_78);
      strtof((char *)puVar3,(char **)0x0);
      local_92 = 0x4e;
      local_91 = 0;
      if ((int)((uint)((float)puVar3 < 0.0) << 0x1f) < 0) {
        local_92 = 0x53;
      }
      QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x20002,5,3,local_78);
      QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x10001,2,2,&local_92);
    }
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    uVar12 = FUN_000ac068(&local_60);
    if ((char)local_60 == '\0') {
      if (*(int *)(*(int *)(DAT_000aac1c + 0xaa902) + 0x24) != 0) {
        mm_camera_debug_log(uVar12,1,2,DAT_000aac24 + 0xaa91a,0xbc1,DAT_000aac20 + 0xaa912,uVar7);
      }
    }
    else {
      puVar3 = &local_60;
      parseGPSCoordinate((char *)puVar3,(rat_t *)local_90);
      strtof((char *)puVar3,(char **)0x0);
      local_94 = 0x45;
      local_93 = 0;
      if ((int)((uint)((float)puVar3 < 0.0) << 0x1f) < 0) {
        local_94 = 0x57;
      }
      QCamera3Exif::addEntry((QCamera3Exif *)this_00,(uint)"aChannelC2Ev",5,3,local_90);
      QCamera3Exif::addEntry
                ((QCamera3Exif *)this_00,
                 (uint)
                 "era3Channel20bokehProcessCallbackEP21mm_camera_super_buf_tPNS_14QCamera3StreamE",2
                 ,2,&local_94);
    }
    FUN_000ac068(&local_60);
    if ((char)local_60 == '\0') {
LAB_000aaa0e:
      if (*(int *)(*(int *)(DAT_000aac48 + 0xaaa14) + 0x24) != 0) {
        uVar12 = 2;
        uVar7 = 0xbd4;
        iVar1 = DAT_000aac50 + 0xaaa2e;
LAB_000aaa96:
        mm_camera_debug_log(1,uVar12,iVar1,uVar7);
      }
    }
    else {
      puVar3 = &local_60;
      atof((char *)puVar3);
      dVar15 = (double)CONCAT44(extraout_r1,puVar3);
      dVar16 = dVar15;
      if ((int)((uint)(dVar15 < 0.0) << 0x1f) < 0) {
        dVar16 = (double)(CONCAT44(extraout_r1,puVar3) ^ 0x8000000000000000);
      }
      iVar1 = SUB84(ROUND(dVar16 * DAT_000aac28),0);
      if (iVar1 < 0) {
        if (*(int *)(*(int *)(DAT_000aac3c + 0xaa9f4) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000aac44 + 0xaaa0c,0x9cf);
        }
        goto LAB_000aaa0e;
      }
      uVar4 = this_00[0x12d];
      if (uVar4 < 0x32) {
        this_00[uVar4 * 6 + 1] = 5;
        this_00[uVar4 * 6 + 6] = (int)"d";
        this_00[this_00[0x12d] * 6 + 3] = 1;
        iVar14 = this_00[0x12d];
        this_00[iVar14 * 6 + 4] = iVar1;
        this_00[iVar14 * 6 + 5] = 1000;
        *(QCamera3Exif *)(this_00 + iVar14 * 6 + 2) = (QCamera3Exif)0x1;
        uVar4 = this_00[0x12d] + 1;
        this_00[0x12d] = uVar4;
      }
      else {
        if (*(int *)(*(int *)(DAT_000aac30 + 0xaa98a) + 0x20) == 0) goto LAB_000aaa9a;
        mm_camera_debug_log(1,1,DAT_000aac38 + 0xaa9a6,0xced);
        uVar4 = this_00[0x12d];
      }
      if (0x31 < uVar4) {
        if (*(int *)(*(int *)(DAT_000aac54 + 0xaaa80) + 0x20) == 0) goto LAB_000aaa9a;
        uVar12 = 1;
        uVar7 = 0xced;
        iVar1 = DAT_000aac5c + 0xaaa98;
        goto LAB_000aaa96;
      }
      this_00[uVar4 * 6 + 1] = 1;
      this_00[uVar4 * 6 + 6] = (int)"ZN7qcamera30Parameters_S5K4H7_CapabilitiesEP16cam_capability_t"
      ;
      this_00[this_00[0x12d] * 6 + 3] = 1;
      iVar1 = this_00[0x12d];
      *(bool *)(this_00 + iVar1 * 6 + 4) = (int)((uint)(dVar15 < 0.0) << 0x1f) < 0;
      *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
      this_00[0x12d] = iVar1 + 1;
    }
LAB_000aaa9a:
    if (param_2[0x14] != (jpeg_settings_t)0x0) {
      iVar1 = getExifGpsDateTimeStamp
                        ((char *)local_78,0x14,(rat_t *)&local_60,*(longlong *)(param_2 + 0x18));
      if (iVar1 == 0) {
        iVar1 = __strlen_chk(extraout_s0_00,local_78,0x14);
        QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x1d001d,2,iVar1 + 1,local_78);
        QCamera3Exif::addEntry((QCamera3Exif *)this_00,(uint)"%d min=%d def=%d\n",5,3,&local_60);
      }
      else if (*(int *)(*(int *)(DAT_000aac60 + 0xaaac2) + 0x24) != 0) {
        mm_camera_debug_log(extraout_s0_00,1,2,DAT_000aac68 + 0xaaada,0xbe8);
      }
    }
    if ((param_1[7] != (metadata_buffer_t)0x0) && (param_1[8] != (metadata_buffer_t)0x0)) {
      uVar4 = this_00[0x12d];
      if (uVar4 < 0x32) {
        iVar6 = *(int *)(param_1 + 0x72e8c);
        iVar8 = *(int *)(param_1 + 0x72e90);
        iVar1 = *(int *)(param_1 + 0x72e94);
        this_00[uVar4 * 6 + 1] = 10;
        this_00[uVar4 * 6 + 6] = 0x9a9204;
        this_00[this_00[0x12d] * 6 + 3] = 1;
        iVar14 = this_00[0x12d];
        this_00[iVar14 * 6 + 4] = iVar8 * iVar6;
        this_00[iVar14 * 6 + 5] = iVar1;
        *(QCamera3Exif *)(this_00 + iVar14 * 6 + 2) = (QCamera3Exif)0x1;
        this_00[0x12d] = this_00[0x12d] + 1;
      }
      else if (*(int *)(*(int *)(DAT_000aac6c + 0xaab32) + 0x20) != 0) {
        uVar12 = 1;
        uVar7 = 0xced;
        iVar1 = DAT_000aaeec + 0xaab4a;
        goto LAB_000aab48;
      }
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000aa6ec + 0xaa3a6) + 0x24) != 0) {
      mm_camera_debug_log(extraout_s0,1,2,DAT_000aa6f4 + 0xaa3be,0xb60);
    }
    if (param_1 != (metadata_buffer_t *)0x0) goto LAB_000aa3c8;
LAB_000aa4fe:
    if (*(int *)(*(int *)(DAT_000aa714 + 0xaa504) + 0x24) != 0) {
      uVar12 = 2;
      uVar7 = 0xbfb;
      iVar1 = DAT_000aa71c + 0xaa520;
LAB_000aab48:
      mm_camera_debug_log(1,uVar12,iVar1,uVar7);
    }
  }
  if (param_2[0x61] != (jpeg_settings_t)0x0) {
    sVar2 = strlen((char *)(param_2 + 0x62));
    iVar1 = QCamera3Exif::addEntry((QCamera3Exif *)this_00,0x2b010e,2,sVar2 + 1,param_2 + 0x62);
    if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000aaef8 + 0xaabd4) + 0x24) != 0)) {
      mm_camera_debug_log(extraout_s0_01,1,2,DAT_000aaf00 + 0xaabec,0xc1c);
    }
  }
  if (param_3 != false) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0x10e) {
      uVar9 = 8;
    }
    else if (iVar1 == 0xb4) {
      uVar9 = 3;
    }
    else if (iVar1 == 0x5a) {
      uVar9 = 6;
    }
    else {
      uVar9 = 1;
    }
    uVar4 = this_00[0x12d];
    if (uVar4 < 0x32) {
      this_00[uVar4 * 6 + 1] = 3;
      this_00[uVar4 * 6 + 6] = 0x2f0112;
      this_00[this_00[0x12d] * 6 + 3] = 1;
      iVar1 = this_00[0x12d];
      uVar4 = iVar1 + 1;
      *(undefined2 *)(this_00 + iVar1 * 6 + 4) = uVar9;
      *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
      this_00[0x12d] = uVar4;
    }
    else {
      if (*(int *)(*(int *)(DAT_000aaf04 + 0xaac88) + 0x20) == 0) goto joined_r0x000aad64;
      mm_camera_debug_log(1,1,DAT_000aaf0c + 0xaaca2,0xced);
      uVar4 = this_00[0x12d];
    }
    if (uVar4 < 0x32) {
      this_00[uVar4 * 6 + 1] = 3;
      this_00[uVar4 * 6 + 6] = 0x770112;
      this_00[this_00[0x12d] * 6 + 3] = 1;
      iVar1 = this_00[0x12d];
      *(undefined2 *)(this_00 + iVar1 * 6 + 4) = uVar9;
      *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
      this_00[0x12d] = iVar1 + 1;
    }
    else if (*(int *)(*(int *)(DAT_000aaf10 + 0xaad46) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000aaf18 + 0xaad5e,0xced);
    }
  }
joined_r0x000aad64:
  if ((param_1 != (metadata_buffer_t *)0x0) && (param_1[0x8f] != (metadata_buffer_t)0x0)) {
    local_60 = *(undefined8 *)(param_1 + 0xc6fc);
    local_58 = *(undefined8 *)(param_1 + 0xc704);
    uVar12 = QCamera3CropRegionMapper::toActiveArray
                       ((QCamera3CropRegionMapper *)(pQVar11 + 0x117f88),(int *)&local_60,
                        (int *)((int)&local_60 + 4),(int *)&local_58,(int *)((int)&local_58 + 4));
    dVar16 = DAT_000aaef0;
    uVar4 = this_00[0x12d];
    if (uVar4 < 0x32) {
      iVar14 = *(int *)(*(int *)(*(int *)(DAT_000aaf28 + 0xaadde) + *(int *)(pQVar11 + 0x60) * 4) +
                       0x3420);
      this_00[uVar4 * 6 + 1] = 5;
      this_00[uVar4 * 6 + 6] = 0xbba404;
      this_00[this_00[0x12d] * 6 + 3] = 1;
      iVar1 = this_00[0x12d];
      this_00[iVar1 * 6 + 5] = 100;
      this_00[iVar1 * 6 + 4] =
           SUB84(ROUND(((double)(longlong)iVar14 / (double)(longlong)(int)local_58) * dVar16 + 0.5),
                 0);
      *(QCamera3Exif *)(this_00 + iVar1 * 6 + 2) = (QCamera3Exif)0x1;
      this_00[0x12d] = this_00[0x12d] + 1;
    }
    else if (*(int *)(*(int *)(DAT_000aaf1c + 0xaada6) + 0x20) != 0) {
      mm_camera_debug_log(uVar12,1,1,DAT_000aaf24 + 0xaadc0,0xced);
    }
  }
  this_03 = (MotMakernote *)MotMakernote::MotMakernote((MotMakernote *)&local_60);
  MotMakernote::constructMakernotes(this_03,pQVar11,param_1,param_2);
  iVar1 = MotMakernote::finalizeBuffer((MotMakernote *)&local_60,local_78,local_90);
  if (((iVar1 == 0) && (local_78[0] != (void *)0x0)) && (local_90[0] != 0)) {
    QCamera3Exif::addEntry((QCamera3Exif *)this_00,0xa2927c,7,(uint)local_90[0],local_78[0]);
    free(local_78[0]);
  }
  else if (*(int *)(*(int *)(DAT_000aaf2c + 0xaae94) + 0x20) != 0) {
    mm_camera_debug_log(extraout_s0_02,1,1,DAT_000aaf34 + 0xaaeae,0xc63,DAT_000aaf30 + 0xaaea2,iVar1
                       );
  }
  uVar12 = MotExif::writeAppExif((MotExif *)this_01,*(uchar **)(pQVar11 + 4),*(uint *)(pQVar11 + 8))
  ;
  (**(code **)(*this_01 + 4))(uVar12,this_01);
  MotMakernote::_MotMakernote((MotMakernote *)&local_60);
  android::String8::_String8((String8 *)&local_9c);
  uVar12 = android::String8::_String8((String8 *)&local_98);
LAB_000aaed4:
  if (*piVar10 == local_28) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

