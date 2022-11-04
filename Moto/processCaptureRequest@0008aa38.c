
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::processCaptureRequest(camera3_capture_request*,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>&) */

uint __thiscall
qcamera::QCamera3HardwareInterface::processCaptureRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,List *param_2)

{
  undefined auVar1 [16];
  undefined8 *puVar2;
  QCamera3HardwareInterface QVar3;
  int iVar4;
  uint uVar5;
  QCameraPerfLock *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int **ppiVar11;
  QCamera3HardwareInterface *pQVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  QCamera3HardwareInterface QVar18;
  void *pvVar19;
  uint uVar20;
  undefined *puVar21;
  undefined4 uVar22;
  pthread_mutex_t *__mutex;
  void *pvVar23;
  pthread_mutex_t *__mutex_00;
  int *piVar24;
  undefined (*pauVar25) [16];
  CameraMetadata *pCVar26;
  int iVar27;
  undefined8 *puVar28;
  void *pvVar29;
  int *piVar30;
  uint uVar31;
  int *piVar32;
  int iVar33;
  QCamera3HardwareInterface *pQVar34;
  int iVar35;
  int iVar36;
  int **ppiVar37;
  code *pcVar38;
  int *piVar39;
  uint *puVar40;
  bool bVar41;
  undefined8 uVar42;
  uint local_344;
  uint local_33c;
  timespec local_31c;
  uint local_314;
  uint local_310;
  undefined4 local_30c;
  int local_308;
  int local_304;
  int *local_300;
  int local_2fc;
  void *local_2f8;
  int local_2f4;
  undefined local_2f0;
  undefined4 local_2e8;
  undefined4 uStack740;
  undefined8 *local_2e0;
  undefined4 local_2dc;
  CameraMetadata aCStack728 [8];
  undefined local_2d0;
  undefined4 local_2cc;
  QCamera3HardwareInterface local_2c8;
  QCamera3HardwareInterface local_2c7;
  undefined local_2c6;
  QCamera3HardwareInterface local_2c5;
  CameraMetadata aCStack704 [8];
  undefined8 local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  undefined8 uStack672;
  undefined8 local_298;
  undefined8 uStack656;
  uint local_288;
  uint uStack644;
  undefined4 local_280;
  int *local_278;
  undefined4 local_1e0;
  int local_1dc;
  int local_80;
  uint local_70;
  uint local_6c [17];
  int local_28;
  
  piVar39 = *(int **)(DAT_0008ad44 + 0x8aa4c);
  local_28 = *piVar39;
  pQVar34 = this + 0x117f20;
  puVar40 = *(uint **)(DAT_0008ad48 + 0x8aa66);
  if (1 < *puVar40) {
    if ((**(byte **)(DAT_0008ad4c + 0x8aa76) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008ad50 + 0x8aa86) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0008beb4 + 0x8bd14);
    }
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack704);
  __mutex = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_lock(__mutex);
  iVar4 = *(int *)(this + 0x117fd8);
  if (1 < iVar4 - 3U) {
    if (iVar4 == 5) {
      pthread_mutex_unlock(__mutex);
      handleCameraDeviceError(this);
      uVar5 = 0xffffffed;
    }
    else {
      if (*(int *)(*(int *)(DAT_0008ad60 + 0x8aafe) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008ad68 + 0x8ab18,0x126f,DAT_0008ad64 + 0x8ab0c,iVar4);
      }
      pthread_mutex_unlock(__mutex);
      uVar5 = 0xffffffed;
    }
    goto LAB_0008c7fc;
  }
  uVar5 = validateCaptureRequest(this,param_1,param_2);
  if (uVar5 != 0) {
    if (*(int *)(*(int *)(DAT_0008ad54 + 0x8aabc) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008ad5c + 0x8aad4,0x1276,DAT_0008ad58 + 0x8aacc);
    }
    pthread_mutex_unlock(__mutex);
    goto LAB_0008c7fc;
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (aCStack704,*(camera_metadata **)(param_1 + 4));
  this[0x117f34] = (QCamera3HardwareInterface)0x0;
  if (this[0x118013] != (QCamera3HardwareInterface)0x0) {
    uVar5 = (uint)(byte)this[0x118015];
    bVar41 = uVar5 != 0;
    if (bVar41) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    if (bVar41 && uVar5 != 0) {
      iVar35 = 0;
      uVar6 = 0;
      iVar9 = *(int *)(DAT_0008ad7c + 0x8aca8);
      iVar4 = DAT_0008ad80 + 0x8acae;
      iVar7 = DAT_0008ad84 + 0x8acb4;
      do {
        if ((*(int *)(param_1 + 8) == 0) &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar35) + 0xc) == 0x21)) {
          if (1 < uVar5) {
            if (*(int *)(iVar9 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_0008babc + 0x8b95c,0x1287,DAT_0008bab8 + 0x8b954);
            }
            pthread_mutex_unlock(__mutex);
            uVar5 = 0xffffffea;
            goto LAB_0008c7fc;
          }
          if (*(int *)(iVar9 + 0x34) != 0) {
            mm_camera_debug_log(1,6,iVar7,0x128c,iVar4);
          }
          this[0x117f34] = (QCamera3HardwareInterface)0x1;
          captureQuadraCfaRawInternal(this,param_1);
          *(undefined4 *)(this + 0x117fd8) = 3;
          uVar5 = *(uint *)(param_1 + 0xc);
        }
        iVar35 = iVar35 + 0x14;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  if (this[0x117fe0] != (QCamera3HardwareInterface)0x0) {
    this[0x117fe0] = (QCamera3HardwareInterface)0x0;
    local_288 = 0;
    uStack644 = 0;
    iVar4 = getSensorOutputSize(this,(cam_dimension_t *)&local_288);
    if ((iVar4 != 0) && (*(int *)(*(int *)(DAT_0008ad6c + 0x8ab88) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0008ad74 + 0x8aba0,0x12a2,DAT_0008ad70 + 0x8ab98);
    }
    iVar4 = *(int *)(*(int *)(DAT_0008ad78 + 0x8abac) + *(int *)(this + 0x60) * 4);
    QCamera3CropRegionMapper::update
              ((QCamera3CropRegionMapper *)(this + 0x117f88),*(uint *)(iVar4 + 0x3420),
               *(uint *)(iVar4 + 0x3424),local_288,uStack644);
  }
  if (*(int *)(this + 0x117fd8) != 3) {
LAB_0008bdf8:
    if (this[0x1aa] != (QCamera3HardwareInterface)0x0) {
      if (*(int *)(*(int *)(DAT_0008bed8 + 0x8be04) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008bee0 + 0x8be1c,0x14a0,DAT_0008bedc + 0x8be14);
      }
      pthread_mutex_unlock(__mutex);
      uVar5 = 0;
      goto LAB_0008c7fc;
    }
    uVar6 = *(uint *)param_1;
    iVar4 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0xc0001);
    if (iVar4 == 0) {
      if ((*(int *)(this + 0x117fd8) == 3) || (iVar4 = *(int *)(this + 0x280), iVar4 == -1)) {
        if (*(int *)(*(int *)(DAT_0008c204 + 0x8c08e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008c20c + 0x8c0a6,0x14ab,DAT_0008c208 + 0x8c09e);
        }
        pthread_mutex_unlock(__mutex);
        uVar5 = 0xfffffffe;
        goto LAB_0008c7fc;
      }
      if (*(int *)(*(int *)(DAT_0008c1d8 + 0x8bf0a) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008c1e0 + 0x8bf22,0x14af,DAT_0008c1dc + 0x8bf1a);
        iVar4 = *(int *)(this + 0x280);
      }
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_288);
      iVar4 = *local_278;
      *(int *)(this + 0x280) = iVar4;
      if (*(int *)(*(int *)(DAT_0008bee4 + 0x8be5c) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008beec + 0x8be78,0x14a8,DAT_0008bee8 + 0x8be6e,iVar4);
      }
    }
    iVar7 = *(int *)(DAT_0008c1e4 + 0x8bf2e);
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0008c1ec + 0x8bf54,0x14b6,DAT_0008c1e8 + 0x8bf42,
                          *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),uVar6);
    }
    local_70 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar31 = 0;
      local_33c = 0;
      local_344 = 0;
    }
    else {
      iVar35 = 0;
      uVar31 = 0;
      uVar8 = 0;
      local_344 = 0;
      local_33c = 0;
      do {
        iVar9 = *(int *)(param_1 + 0x10);
        piVar32 = *(int **)(*(int *)(iVar9 + iVar35) + 0x18);
        if (piVar32 == (int *)0x0) {
          __android_log_print(6,DAT_0008c1f8 + 0x8c050,DAT_0008c1fc + 0x8c052,DAT_0008c200 + 0x8c054
                             );
        }
        else {
          if (*(int *)(*(int *)(iVar9 + iVar35) + 0xc) == 0x21) {
            uVar5 = (**(code **)(*piVar32 + 0x20))(piVar32);
            local_344 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar5);
            local_33c = 1;
          }
          iVar36 = *(int *)(iVar9 + iVar35 + 0xc);
          if (iVar36 != -1) {
            uVar5 = sync_wait(iVar36,0xffffffff);
            close(*(int *)(iVar9 + iVar35 + 0xc));
            if (uVar5 != 0) {
              if (*(int *)(iVar7 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_0008c520 + 0x8c36e,0x14ce,DAT_0008c51c + 0x8c364,uVar5);
              }
              pthread_mutex_unlock(__mutex);
              goto LAB_0008c7fc;
            }
          }
          uVar5 = (**(code **)(*piVar32 + 0x20))(piVar32);
          uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar5);
          local_6c[local_70 * 2] = uVar5;
          local_70 = local_70 + 1;
          iVar36 = (**(code **)(*piVar32 + 0x20))(piVar32);
          uVar5 = count_leading_zeroes(iVar36 + -0x10);
          uVar31 = uVar31 | uVar5 >> 5;
          if ((*(uint *)(*(int *)(iVar9 + iVar35) + 0xc) | 2) == 0x23) {
            if (*(int **)(param_1 + 8) == (int *)0x0) {
              if (this[0x117f34] == (QCamera3HardwareInterface)0x0) {
                this[0x118016] = (QCamera3HardwareInterface)0x1;
                goto LAB_0008c070;
              }
              this[0x118016] = (QCamera3HardwareInterface)0x2;
              QVar3 = (QCamera3HardwareInterface)0x1;
            }
            else {
              iVar9 = *(int *)(**(int **)(param_1 + 8) + 0xc);
              uVar5 = iVar9 - 0x20;
              if ((uVar5 < 6) && ((1 << (uVar5 & 0xff) & 0x31U) != 0)) {
                if (*(int *)(iVar7 + 0x28) != 0) {
                  mm_camera_debug_log(1,3,DAT_0008c1f4 + 0x8c03e,0x14e2,DAT_0008c1f0 + 0x8c032,iVar9
                                     );
                }
                QVar3 = (QCamera3HardwareInterface)0x1;
              }
              else {
LAB_0008c070:
                QVar3 = (QCamera3HardwareInterface)0x0;
              }
            }
            this[0x118012] = QVar3;
          }
        }
        uVar8 = uVar8 + 1;
        iVar35 = iVar35 + 0x14;
      } while (uVar8 < *(uint *)(param_1 + 0xc));
    }
    piVar32 = (int *)(*(int **)(param_2 + 4))[3];
    if (piVar32 != *(int **)(param_2 + 4)) {
      do {
        piVar24 = *(int **)(*piVar32 + 0x18);
        uVar5 = (**(code **)(*piVar24 + 0x20))(piVar24);
        uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar24,uVar5);
        local_6c[local_70 * 2] = uVar5;
        local_70 = local_70 + 1;
        iVar35 = (**(code **)(*piVar24 + 0x20))(piVar24);
        piVar32 = (int *)piVar32[3];
        uVar5 = count_leading_zeroes(iVar35 + -0x10);
        uVar31 = uVar31 | uVar5 >> 5;
      } while (piVar32 != *(int **)(param_2 + 4));
    }
    if (local_33c != 0) {
      if (*puVar40 != 0) {
        if ((**(byte **)(DAT_0008c210 + 0x8c12c) & 1) == 0) {
          atrace_setup();
        }
        if ((int)((uint)*(byte *)(*(int *)(DAT_0008c214 + 0x8c13c) + 1) << 0x1d) < 0) {
          atrace_int_body(DAT_0008d4b8 + 0x8d4ac,1);
        }
      }
      piVar32 = *(int **)(this + 0xa0);
      if (piVar32 != (int *)0x0) {
        if (*(int *)(iVar7 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008c21c + 0x8c164,0x1501,DAT_0008c218 + 0x8c15c);
          piVar32 = *(int **)(this + 0xa0);
        }
        uVar5 = (**(code **)(*piVar32 + 0x20))(piVar32);
        uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar5);
        local_6c[local_70 * 2] = uVar5;
        local_6c[local_70 * 2 + 1] = 0xffffffff;
        local_70 = local_70 + 1;
      }
    }
    if (*(int *)(param_1 + 8) == 0) {
      if (((*pQVar34 != (QCamera3HardwareInterface)0x0) && (((uVar31 ^ 1) & 1) == 0)) &&
         (this[0x117f21] != (QCamera3HardwareInterface)0x0)) {
LAB_0008c2e4:
        if (this[0x117f21] == (QCamera3HardwareInterface)0x0) {
          *(undefined4 *)(this + 0x117f38) = *(undefined4 *)param_1;
        }
        if (*(int *)(this + 0x1b4) != 0) {
          *(undefined4 *)(*(int *)(this + 0x1b4) + 0xc584) = *(undefined4 *)param_1;
          *(undefined *)(*(int *)(this + 0x1b4) + 0x6f) = 1;
          goto LAB_0008c31a;
        }
        __android_log_print(6,DAT_0008c52c + 0x8c3ba,DAT_0008c530 + 0x8c3bc,0,0x6f);
        if (*(int *)(iVar7 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008c538 + 0x8c3d8,0x1525,DAT_0008c534 + 0x8c3d0);
        }
        pthread_mutex_unlock(__mutex);
LAB_0008c3e0:
        uVar5 = 0xffffffea;
        goto LAB_0008c7fc;
      }
      uVar5 = setFrameParameters((camera3_capture_request *)this,(cam_stream_ID_t)param_1,local_70,
                                 local_6c[0]);
      if ((int)uVar5 < 0) {
        if (*(int *)(iVar7 + 0x20) != 0) {
          uVar22 = 0x1514;
          iVar4 = DAT_0008c524 + 0x8c394;
          puVar21 = (undefined *)(DAT_0008c528 + 0x8c39c);
          goto LAB_0008c39a;
        }
        goto LAB_0008c39e;
      }
      if (*pQVar34 != (QCamera3HardwareInterface)0x0) goto LAB_0008c2e4;
LAB_0008c31a:
      if (this[0x117f7c] != (QCamera3HardwareInterface)0x0) {
        pthread_mutex_unlock(__mutex);
        iVar35 = dynamicUpdateMetaStreamInfo(this);
        if (iVar35 != 0) {
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0008c518 + 0x8c34e,0x1531,DAT_0008c514 + 0x8c346);
          }
          goto LAB_0008c3e0;
        }
        this[0x117f7c] = (QCamera3HardwareInterface)0x0;
        pthread_mutex_lock(__mutex);
      }
    }
    else {
      iVar35 = *(int *)(*(int *)(param_1 + 8) + 0xc);
      if (iVar35 != -1) {
        uVar5 = sync_wait(iVar35,0xffffffff);
        close(*(int *)(*(int *)(param_1 + 8) + 0xc));
        if (uVar5 != 0) {
          if (*(int *)(iVar7 + 0x20) != 0) {
            uVar22 = 0x153d;
            iVar4 = DAT_0008c220 + 0x8c1cc;
            puVar21 = &UNK_0008c1d6 + DAT_0008c224;
LAB_0008c39a:
            mm_camera_debug_log(1,1,puVar21,uVar22,iVar4);
          }
LAB_0008c39e:
          pthread_mutex_unlock(__mutex);
          goto LAB_0008c7fc;
        }
      }
    }
    if (this[0x424] == (QCamera3HardwareInterface)0x0) {
      *(uint *)(this + 0x117fc0) = uVar6;
    }
    iVar9 = *(int *)(DAT_0008c53c + 0x8c412) + 8;
    local_304 = iVar9;
    local_300 = (int *)operator_new__(0x14);
    local_300[3] = (int)local_300;
    local_300[4] = (int)local_300;
    iVar35 = *(int *)(DAT_0008c540 + 0x8c42a) + 8;
    local_2fc = iVar35;
    local_2f8 = operator_new__(0x10);
    *(void **)((int)local_2f8 + 8) = local_2f8;
    *(void **)((int)local_2f8 + 0xc) = local_2f8;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack728);
    pauVar25 = *(undefined (**) [16])(param_1 + 8);
    local_30c = *(undefined4 *)(param_1 + 0xc);
    local_2e8 = 0;
    uStack740 = 0;
    local_2f4 = local_33c;
    local_2f0 = 0;
    local_310 = uVar6;
    local_308 = iVar4;
    if (pauVar25 == (undefined (*) [16])0x0) {
      local_2e0 = (undefined8 *)0x0;
    }
    else {
      local_2e0 = (undefined8 *)malloc(0x14);
      auVar1 = *pauVar25;
      *local_2e0 = SUB168(auVar1,0);
      local_2e0[1] = SUB168(auVar1 >> 0x40,0);
      *(undefined4 *)(local_2e0 + 2) = *(undefined4 *)pauVar25[1];
    }
    puVar28 = local_2e0;
    pCVar26 = (CameraMetadata *)(this + 0x1bc);
    local_2cc = 0;
    local_2d0 = 0;
    extractJpegMetadata(this,pCVar26,param_1);
    pQVar12 = (QCamera3HardwareInterface *)
              android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                        (aCStack728,pCVar26);
    local_2dc = saveRequestSettings(pQVar12,pCVar26,param_1);
    local_2c6 = 0;
    local_2c5 = this[0x118011];
    iVar4 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x1000d);
    if (iVar4 == 0) {
      local_2c8 = this[0x424];
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_288);
      local_2c8 = *(QCamera3HardwareInterface *)local_278;
      this[0x424] = local_2c8;
    }
    iVar4 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists(aCStack704,3);
    if (iVar4 == 0) {
      local_2c7 = this[0x425];
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_288);
      local_2c7 = *(QCamera3HardwareInterface *)local_278;
      this[0x425] = local_2c7;
    }
    puVar13 = (undefined8 *)operator_new__(0x14);
    *(undefined8 **)((int)puVar13 + 0xc) = puVar13;
    *(undefined8 **)(puVar13 + 2) = puVar13;
    uVar42 = systemTime(1);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      uVar5 = 0;
      do {
        piVar32 = local_300;
        local_280 = 0;
        local_288 = *(uint *)(*(int *)(param_1 + 0x10) + iVar4);
        uStack644 = 0;
        puVar14 = (undefined8 *)operator_new(0x14);
        *(int **)(puVar14 + 2) = piVar32;
        *(undefined4 *)(puVar14 + 1) = local_280;
        *puVar14 = CONCAT44(uStack644,local_288);
        *(int *)((int)puVar14 + 0xc) = piVar32[3];
        *(undefined8 **)(piVar32[3] + 0x10) = puVar14;
        piVar32[3] = (int)puVar14;
        iVar27 = *(int *)(*(int *)(param_1 + 0x10) + iVar4);
        iVar33 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 + 4);
        piVar32 = (int *)operator_new(0x14);
        iVar36 = *(int *)((int)puVar13 + 0xc);
        *piVar32 = iVar27;
        piVar32[1] = iVar33;
        piVar32[2] = 0;
        piVar32[3] = iVar36;
        piVar32[4] = (int)puVar13;
        *(int **)(iVar36 + 0x10) = piVar32;
        *(int **)((int)puVar13 + 0xc) = piVar32;
        if (*(int *)(iVar7 + 0x2c) != 0) {
          uVar22 = (**(code **)(**(int **)(iVar27 + 0x18) + 0x20))();
          mm_camera_debug_log(1,4,DAT_0008c920 + 0x8c5ea,0x1584,DAT_0008c91c + 0x8c5d6,uVar6,iVar33,
                              uVar22,*(undefined4 *)(iVar27 + 0xc));
        }
        iVar4 = iVar4 + 0x14;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    uVar5 = *(uint *)(this + 0x270);
    puVar15 = (uint *)operator_new(0x20);
    *puVar15 = uVar6;
    iVar4 = DAT_0008c924;
    puVar15[2] = (uint)uVar42;
    iVar4 = *(int *)(iVar4 + 0x8c616);
    puVar15[3] = (uint)((ulonglong)uVar42 >> 0x20);
    puVar15[4] = iVar4 + 8;
    puVar16 = (undefined8 *)operator_new__(0x14);
    puVar15[5] = (uint)puVar16;
    *(undefined8 **)((int)puVar16 + 0xc) = puVar16;
    *(undefined8 **)(puVar16 + 2) = puVar16;
    puVar2 = puVar16;
    for (puVar14 = *(undefined8 **)(puVar13 + 2); puVar14 != puVar13;
        puVar14 = *(undefined8 **)(puVar14 + 2)) {
      puVar17 = (undefined8 *)operator_new(0x14);
      uVar42 = *puVar14;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar14 + 1);
      *(undefined8 **)((int)puVar17 + 0xc) = puVar2;
      *(undefined8 **)(puVar17 + 2) = puVar16;
      *puVar17 = uVar42;
      *(undefined8 **)(puVar2 + 2) = puVar17;
      *(undefined8 **)((int)puVar16 + 0xc) = puVar17;
      puVar2 = puVar17;
    }
    puVar15[7] = uVar5;
    puVar15[6] = *(uint *)(uVar5 + 0x18);
    *(uint **)(*(int *)(uVar5 + 0x18) + 0x1c) = puVar15;
    *(uint **)(uVar5 + 0x18) = puVar15;
    if (*(int *)(iVar7 + 0x2c) != 0) {
      iVar4 = 0;
      for (iVar36 = *(int *)(*(int *)(this + 0x270) + 0x1c); iVar36 != *(int *)(this + 0x270);
          iVar36 = *(int *)(iVar36 + 0x1c)) {
        iVar27 = 0;
        for (iVar33 = *(int *)(*(int *)(iVar36 + 0x14) + 0x10); iVar33 != *(int *)(iVar36 + 0x14);
            iVar33 = *(int *)(iVar33 + 0x10)) {
          iVar27 = iVar27 + 1;
        }
        iVar4 = iVar4 + iVar27;
      }
      mm_camera_debug_log(1,4,DAT_0008c92c + 0x8c6b4,0x1589,DAT_0008c928 + 0x8c6a8,iVar4);
    }
    iVar4 = *(int *)(this + 0x204);
    puVar14 = (undefined8 *)operator_new(0x58);
    puVar14 = FUN_0009946c(puVar14,(undefined8 *)&local_310);
    *(int *)((int)puVar14 + 0x54) = iVar4;
    *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(iVar4 + 0x50);
    *(undefined8 **)(*(int *)(iVar4 + 0x50) + 0x54) = puVar14;
    *(undefined8 **)(iVar4 + 0x50) = puVar14;
    if (this[0x1a9] == (QCamera3HardwareInterface)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 0x28))(*(int **)(this + 0x8c),0,uVar6,&local_314);
      if (*(int *)(param_1 + 8) != 0) {
        if (*(int *)(iVar7 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008c93c + 0x8c77c,0x1598,DAT_0008c938 + 0x8c770,uVar6);
        }
        uVar5 = setReprocParameters(this,param_1,(metadata_buffer_t *)(this + 0x428),local_344);
        if (uVar5 != 0) {
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0008c944 + 0x8c7b2,0x159b,DAT_0008c940 + 0x8c7aa);
          }
          pthread_mutex_unlock(__mutex);
          goto LAB_0008c700;
        }
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        local_344 = 0;
      }
      else {
        uVar8 = 0;
        local_33c = *(int *)(*(int *)(puVar14 + 2) + 0x10);
        iVar4 = DAT_0008c950 + 0x8c85e;
        local_344 = 0;
        do {
          iVar27 = *(int *)(param_1 + 0x10);
          iVar36 = *(int *)(iVar27 + uVar8 * 0x14);
          piVar32 = *(int **)(iVar36 + 0x18);
          if (piVar32 == (int *)0x0) {
            if (*(int *)(iVar7 + 0x24) != 0) {
              mm_camera_debug_log(1,2,DAT_0008cd08 + 0x8c9fc,0x15a9,iVar4);
            }
          }
          else {
            iVar36 = *(int *)(iVar36 + 0xc);
            if (iVar36 == 0x23) {
              local_288 = local_288 & 0xffffff00;
              pQVar12 = this + 0x428;
              if (puVar28 == (undefined8 *)0x0) {
                pQVar12 = *(QCamera3HardwareInterface **)(this + 0x1b4);
              }
              uVar5 = (**(code **)(*piVar32 + 0x50))
                                (piVar32,*(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6,puVar28,
                                 pQVar12,&local_288,&local_314,0,0);
              if ((int)uVar5 < 0) {
                if (*(int *)(iVar7 + 0x20) != 0) {
                  uVar22 = 0x15e8;
                  iVar4 = DAT_0008d1b8 + 0x8d05c;
                  iVar7 = DAT_0008d1bc + 0x8d064;
LAB_0008d0da:
                  mm_camera_debug_log(1,1,iVar7,uVar22,iVar4);
                }
LAB_0008d0de:
                pthread_mutex_unlock(__mutex);
                goto LAB_0008c700;
              }
              uVar5 = (**(code **)(*piVar32 + 0x20))(piVar32);
              uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar5);
              uVar20 = 0;
              if (local_70 != 0) {
                do {
                  if (local_6c[uVar20 * 2] == uVar5) {
                    uVar5 = local_314;
                    if (this[0x117f28] == (QCamera3HardwareInterface)0x1) {
                      uVar5 = 0xffffffff;
                    }
                    local_6c[uVar20 * 2 + 1] = uVar5;
                    break;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < local_70);
              }
              if ((uVar20 == local_70) && (*(int *)(iVar7 + 0x20) != 0)) {
                mm_camera_debug_log(1,1,DAT_0008cd30 + 0x8cc00,0x15f9,DAT_0008cd2c + 0x8cbf8);
              }
              *(undefined *)(local_33c + 8) = (undefined)local_288;
              local_344 = local_344 + (local_288 & 0xff);
              if (*(int *)(iVar7 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_0008cd38 + 0x8cc2c,0x1601,DAT_0008cd34 + 0x8cc20,
                                    local_288 & 0xff);
              }
            }
            else if (iVar36 == 0x21) {
              if (*(int *)(iVar7 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_0008cd04 + 0x8c9a4,0x15af,DAT_0008cd00 + 0x8c992,
                                    *(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),
                                    *(undefined4 *)(param_1 + 8),uVar6);
              }
              if (*(int *)(param_1 + 8) == 0) {
                if (*(int *)(iVar7 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_0008cd18 + 0x8cb08,0x15ba,DAT_0008cd14 + 0x8caf8,
                                      *(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6);
                }
                if (this[0x117f34] != (QCamera3HardwareInterface)0x0) {
                  if (*(int *)(iVar7 + 0x28) != 0) {
                    mm_camera_debug_log(1,3,DAT_0008cd20 + 0x8cb2e,0x15bc,DAT_0008cd1c + 0x8cb26);
                  }
                  (**(code **)(*piVar32 + 0x2c))
                            (piVar32,*(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6,0,
                             *(undefined4 *)(this + 0x1b4),&local_314,0,0);
                  goto LAB_0008cc36;
                }
                if (*(int *)(param_1 + 4) == 0) {
                  pcVar38 = *(code **)(*piVar32 + 0x2c);
                  uVar22 = *(undefined4 *)(this + 0x1b8);
                }
                else {
                  pcVar38 = *(code **)(*piVar32 + 0x2c);
                  uVar22 = *(undefined4 *)(this + 0x1b4);
                }
                uVar5 = (*pcVar38)(piVar32,*(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6,0,uVar22
                                   ,&local_314,0,0);
                if ((int)uVar5 < 0) {
                  if (*(int *)(iVar7 + 0x20) == 0) goto LAB_0008d46a;
                  uVar22 = 0x15c9;
                  iVar4 = DAT_0008d4bc + 0x8d242;
                  iVar7 = DAT_0008d4c0 + 0x8d24a;
                  goto LAB_0008d248;
                }
                uVar5 = (**(code **)(*piVar32 + 0x20))(piVar32);
                uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar5);
                uVar20 = 0;
                if (local_70 != 0) {
                  do {
                    if (local_6c[uVar20 * 2] == uVar5) {
                      uVar5 = local_314;
                      if (this[0x117f28] == (QCamera3HardwareInterface)0x1) {
                        uVar5 = 0xffffffff;
                      }
                      local_6c[uVar20 * 2 + 1] = uVar5;
                      break;
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < local_70);
                }
                if ((uVar20 == local_70) && (*(int *)(iVar7 + 0x20) != 0)) {
                  mm_camera_debug_log(1,1,DAT_0008c958 + 0x8c90a,0x15da,DAT_0008c954 + 0x8c902);
                }
                local_344 = local_344 + 1;
                *(undefined *)(local_33c + 8) = 1;
              }
              else {
                uVar5 = (**(code **)(*piVar32 + 0x2c))
                                  (piVar32,*(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6,puVar28,
                                   this + 0x428,&local_314,0,0);
                if (0x7fffffff < uVar5) {
                  if (*(int *)(iVar7 + 0x20) != 0) {
                    uVar22 = 0x15b4;
                    iVar4 = DAT_0008d1d8 + 0x8d0d4;
                    iVar7 = DAT_0008d1dc + 0x8d0dc;
                    goto LAB_0008d0da;
                  }
                  goto LAB_0008d0de;
                }
              }
            }
            else {
              if (*(int *)(iVar7 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_0008cd10 + 0x8ca98,0x1604,DAT_0008cd0c + 0x8ca8a,
                                    *(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6);
              }
              uVar5 = (**(code **)(*piVar32 + 0x28))
                                (piVar32,*(undefined4 *)(iVar27 + uVar8 * 0x14 + 4),uVar6,&local_314
                                );
              uVar20 = (**(code **)(*piVar32 + 0x20))(piVar32);
              uVar20 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar32,uVar20);
              uVar10 = 0;
              if (local_70 != 0) {
                do {
                  if (local_6c[uVar10 * 2] == uVar20) {
                    uVar20 = local_314;
                    if (this[0x117f28] == (QCamera3HardwareInterface)0x1) {
                      uVar20 = 0xffffffff;
                    }
                    local_6c[uVar10 * 2 + 1] = uVar20;
                    break;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_70);
              }
              if ((uVar10 == local_70) && (*(int *)(iVar7 + 0x20) != 0)) {
                mm_camera_debug_log(1,1,DAT_0008cd28 + 0x8cba4,0x1614,DAT_0008cd24 + 0x8cb9c);
              }
              iVar36 = (**(code **)(*piVar32 + 0x20))(piVar32);
              if (((iVar36 == 0x10) && (*pQVar34 != (QCamera3HardwareInterface)0x0)) &&
                 (QVar3 = this[0x117f21],
                 this[0x117f21] = (QCamera3HardwareInterface)((char)QVar3 + 1U),
                 (QCamera3HardwareInterface)((char)QVar3 + 1U) == *pQVar34)) {
                (**(code **)(*piVar32 + 0x18))(piVar32);
              }
              if (0x7fffffff < uVar5) {
                if (*(int *)(iVar7 + 0x20) != 0) {
                  uVar22 = 0x1620;
                  iVar4 = DAT_0008d1c0 + 0x8d076;
                  iVar7 = DAT_0008d1c4 + 0x8d07e;
                  goto LAB_0008d0da;
                }
                goto LAB_0008d0de;
              }
            }
            local_33c = *(int *)(local_33c + 0x10);
          }
LAB_0008cc36:
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0xc));
      }
      piVar32 = (int *)(*(int **)(param_2 + 4))[3];
      if (piVar32 == *(int **)(param_2 + 4)) {
LAB_0008ce30:
        if (local_344 < 2) {
          if (*(int *)(param_1 + 8) == 0) {
            uVar5 = (uint)(byte)*pQVar34;
            if (((uVar5 == 0) || (((uVar31 ^ 1) & 1) != 0)) || ((byte)this[0x117f21] == uVar5)) {
              if (*(int *)(iVar7 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_0008d194 + 0x8cebe,0x1682,DAT_0008d190 + 0x8ceaa,uVar5,
                                    uVar31 & 1,this[0x117f21]);
                uVar5 = (uint)(byte)*pQVar34;
              }
              uVar8 = count_leading_zeroes(uVar5);
              if ((((uVar8 >> 5 | uVar31 ^ 1) & 1) == 0) && ((byte)this[0x117f21] == uVar5)) {
                if (local_70 != 0) {
                  uVar31 = *(uint *)(this + 0x224);
                  uVar5 = 0;
                  do {
                    if (uVar31 == 0) {
                      uVar8 = 0;
LAB_0008cf26:
                      uVar31 = local_6c[uVar5 * 2 + 1];
                      *(uint *)(this + uVar8 * 8 + 0x228) = local_6c[uVar5 * 2];
                      *(uint *)(this + uVar8 * 8 + 0x22c) = uVar31;
                      uVar31 = *(int *)(this + 0x224) + 1;
                      *(uint *)(this + 0x224) = uVar31;
                    }
                    else if (local_6c[uVar5 * 2] == *(uint *)(this + 0x228)) {
                      uVar8 = 0;
                      if (uVar31 == 0) goto LAB_0008cf26;
                    }
                    else {
                      iVar4 = 0x46;
                      do {
                        uVar8 = iVar4 - 0x45;
                        if (uVar31 <= uVar8) break;
                        iVar36 = iVar4 * 8;
                        iVar4 = iVar4 + 1;
                      } while (local_6c[uVar5 * 2] != *(uint *)(this + iVar36));
                      if (uVar8 == uVar31) goto LAB_0008cf26;
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < local_70);
                }
                __aeabi_memcpy8(&local_70,this + 0x224,0x44);
              }
              if (*(int *)(this + 0x1b4) == 0) {
                __android_log_print(6,DAT_0008d1e8 + 0x8d126,DAT_0008d1ec + 0x8d128,0,0xa3);
                if (*(int *)(iVar7 + 0x20) == 0) {
LAB_0008d22a:
                  uVar5 = 0xffffffea;
                  goto LAB_0008c700;
                }
                uVar22 = 0x169a;
                iVar4 = DAT_0008d4c4 + 0x8d13e;
                iVar7 = DAT_0008d4c8 + 0x8d146;
LAB_0008d144:
                mm_camera_debug_log(1,1,iVar7,uVar22,iVar4);
                uVar5 = 0xffffffea;
                goto LAB_0008c700;
              }
              __aeabi_memcpy8("putBufs invalid stream pointer" + *(int *)(this + 0x1b4) + 0x10,
                              &local_70,0x44);
              *(undefined *)(*(int *)(this + 0x1b4) + 0xa3) = 1;
              if (((this[0x117f34] == (QCamera3HardwareInterface)0x0) &&
                  (uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                                     (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4)),
                  0x7fffffff < uVar5)) && (*(int *)(iVar7 + 0x20) != 0)) {
                mm_camera_debug_log(1,1,DAT_0008d19c + 0x8cfac,0x16a4,DAT_0008d198 + 0x8cfa4);
              }
              if (this[0x11802d] != (QCamera3HardwareInterface)0x0) {
                pthread_mutex_unlock(__mutex);
                iVar4 = flush(this,true);
                if (iVar4 != 0) {
                  if (*(int *)(iVar7 + 0x20) == 0) goto LAB_0008d22a;
                  uVar22 = 0x16ae;
                  iVar4 = DAT_0008d1a0 + 0x8cfe2;
                  iVar7 = DAT_0008d1a4 + 0x8cfea;
                  goto LAB_0008d144;
                }
                this[0x11802d] = (QCamera3HardwareInterface)0x0;
                pthread_mutex_lock(__mutex);
              }
              this[0x117f21] = (QCamera3HardwareInterface)0x0;
              uStack644 = *(uint *)(this + 0x117f38);
              local_288 = uVar6;
              android::SortedVectorImpl::add(this + 0x210);
              *(undefined4 *)(this + 0x264) = 0;
              *(undefined8 *)(this + 0x254) = 0;
              *(undefined8 *)(this + 0x25c) = 0;
              *(undefined8 *)(this + 0x244) = 0;
              *(undefined8 *)(this + 0x24c) = 0;
              *(undefined8 *)(this + 0x234) = 0;
              *(undefined8 *)(this + 0x23c) = 0;
              *(undefined8 *)(this + 0x224) = 0;
              *(undefined8 *)(this + 0x22c) = 0;
            }
            else if (local_70 != 0) {
              uVar6 = *(uint *)(this + 0x224);
              uVar5 = 0;
              do {
                if (uVar6 == 0) {
                  uVar31 = 0;
LAB_0008d208:
                  uVar6 = local_6c[uVar5 * 2 + 1];
                  *(uint *)(this + uVar31 * 8 + 0x228) = local_6c[uVar5 * 2];
                  *(uint *)(this + uVar31 * 8 + 0x22c) = uVar6;
                  uVar6 = *(int *)(this + 0x224) + 1;
                  *(uint *)(this + 0x224) = uVar6;
                }
                else if (local_6c[uVar5 * 2] == *(uint *)(this + 0x228)) {
                  uVar31 = 0;
                  if (uVar6 == 0) goto LAB_0008d208;
                }
                else {
                  iVar4 = 0x46;
                  do {
                    uVar31 = iVar4 - 0x45;
                    if (uVar6 <= uVar31) break;
                    iVar36 = iVar4 * 8;
                    iVar4 = iVar4 + 1;
                  } while (local_6c[uVar5 * 2] != *(uint *)(this + iVar36));
                  if (uVar31 == uVar6) goto LAB_0008d208;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < local_70);
            }
            *(int *)(this + 0x278) = *(int *)(this + 0x278) + 1;
          }
          if (*(int *)(iVar7 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_0008d4d0 + 0x8d2de,0x16cd,DAT_0008d4cc + 0x8d2d2,
                                *(undefined4 *)(this + 0x278));
          }
          *(undefined4 *)(this + 0x117fd8) = 4;
          uVar5 = clock_gettime(1,&local_31c);
          if ((int)uVar5 < 0) {
            if (*(int *)(iVar7 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_0008d4d8 + 0x8d322,0x16d6,DAT_0008d4d4 + 0x8d31a);
            }
            bVar41 = false;
          }
          else {
            bVar41 = true;
            local_31c.tv_sec = local_31c.tv_sec + 5;
          }
          if ((puVar28 == (undefined8 *)0x0) &&
             (*(uint *)(this + 0x117f80) <= *(uint *)(this + 0x278))) {
            iVar4 = DAT_0008d4dc + 0x8d342;
            iVar36 = DAT_0008d4e4 + 0x8d34a;
            iVar33 = DAT_0008d4e0 + 0x8d34c;
            iVar27 = DAT_0008d4e8 + 0x8d356;
            do {
              if (*(int *)(this + 0x117fd8) - 5U < 2) break;
              if (bVar41) {
                if (*(int *)(iVar7 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,iVar33,0x16e4,iVar27);
                }
                uVar5 = pthread_cond_timedwait((pthread_cond_t *)(this + 0x274),__mutex,&local_31c);
                if (uVar5 == 0x6e) {
                  if (*(int *)(iVar7 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_0008d4f0 + 0x8d490,0x16e8,DAT_0008d4ec + 0x8d488);
                  }
                  uVar5 = 0xffffffed;
                  break;
                }
              }
              else {
                if (*(int *)(iVar7 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,iVar33,0x16e0,iVar4);
                }
                pthread_cond_wait((pthread_cond_t *)(this + 0x274),__mutex);
              }
              if (*(int *)(iVar7 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,iVar33,0x16ec,iVar36);
              }
              if (this[0x27c] == (QCamera3HardwareInterface)0x0) {
                uVar6 = *(uint *)(this + 0x278);
              }
              else {
                this[0x27c] = (QCamera3HardwareInterface)0x0;
                uVar6 = *(uint *)(this + 0x278);
                if (uVar6 < *(uint *)(this + 0x117f84)) break;
              }
            } while (*(uint *)(this + 0x117f80) <= uVar6);
          }
          pthread_mutex_unlock(__mutex);
          if (this[0x117f34] != (QCamera3HardwareInterface)0x0) {
            pthread_mutex_lock(__mutex);
            __aeabi_memclr8(&local_288,0x218);
            uStack672 = 0;
            local_298 = 0;
            uStack656 = 0;
            local_2b8 = 0;
            local_2b0 = 1;
            local_2a8 = ZEXT48(&local_288);
            local_80 = *(int *)(this + 0x117f30) + 0x538;
            handleMetadataWithLock((mm_camera_super_buf_t *)this,SUB41(&local_2b8,0),false);
            handleMetadataWithLock
                      ((mm_camera_super_buf_t *)this,
                       (bool)((char)*(undefined4 *)(this + 0x117f30) + -0x18),false);
            goto LAB_0008d46a;
          }
        }
        else {
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0008d18c + 0x8ce52,0x1672,DAT_0008d188 + 0x8ce4a);
          }
          pthread_mutex_unlock(__mutex);
          uVar5 = 0xffffffea;
        }
      }
      else {
LAB_0008cc5a:
        piVar24 = *(int **)(*piVar32 + 0x18);
        if (piVar24 == (int *)0x0) {
          if (*(int *)(iVar7 + 0x20) == 0) {
            uVar5 = 0xffffffea;
          }
          else {
            mm_camera_debug_log(1,1,DAT_0008d1ac + 0x8d006,0x162d,DAT_0008d1a8 + 0x8cffe);
            uVar5 = 0xffffffea;
          }
          goto LAB_0008c700;
        }
        if (*(int *)(*piVar32 + 0xc) != 0x21) {
          if (*(int *)(iVar7 + 0x20) == 0) {
            uVar5 = 0xffffffda;
          }
          else {
            mm_camera_debug_log(1,1,DAT_0008d1b4 + 0x8d02c,0x1667,DAT_0008d1b0 + 0x8d024);
            uVar5 = 0xffffffda;
          }
          goto LAB_0008c700;
        }
        iVar4 = *piVar32;
        uVar8 = piVar32[1];
        if (*(int *)(iVar7 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008cd40 + 0x8cc94,0x1638,DAT_0008cd3c + 0x8cc84,
                              *(undefined4 *)(param_1 + 8),uVar6);
        }
        if (*(int *)(param_1 + 8) != 0) {
          uVar5 = uVar8 >> 8 & 0xff;
          if (uVar5 != 0) {
            uVar5 = 1;
          }
          uVar5 = (**(code **)(*piVar24 + 0x2c))
                            (piVar24,0,uVar6,puVar28,this + 0x428,&local_314,1,uVar5);
          uVar20 = uVar8;
          if (0x7fffffff < uVar5) {
            if (*(int *)(iVar7 + 0x20) == 0) goto LAB_0008d46a;
            uVar22 = 0x163d;
            iVar4 = DAT_0008d1c8 + 0x8d096;
            iVar7 = DAT_0008d1cc + 0x8d09e;
            goto LAB_0008d248;
          }
LAB_0008cd98:
          uVar5 = (**(code **)(*piVar24 + 0x20))(piVar24);
          uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar24,uVar5);
          uVar10 = 0;
          if (local_70 != 0) {
            do {
              if (local_6c[uVar10 * 2] == uVar5) {
                uVar5 = local_314;
                if (this[0x117f28] == (QCamera3HardwareInterface)0x1) {
                  uVar5 = 0xffffffff;
                }
                local_6c[uVar10 * 2 + 1] = uVar5;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_70);
          }
          if ((uVar10 == local_70) && (*(int *)(iVar7 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,DAT_0008d184 + 0x8cdfa,0x1662,DAT_0008d180 + 0x8cdf2);
          }
          iVar36 = *(int *)(puVar14 + 3);
          piVar24 = (int *)operator_new(0x10);
          piVar24[1] = uVar8 & 0xffffff00 | uVar20 & 0xff;
          *piVar24 = iVar4;
          piVar24[3] = iVar36;
          piVar24[2] = *(int *)(iVar36 + 8);
          *(int **)(*(int *)(iVar36 + 8) + 0xc) = piVar24;
          *(int **)(iVar36 + 8) = piVar24;
          piVar32 = (int *)piVar32[3];
          if (piVar32 == *(int **)(param_2 + 4)) goto LAB_0008ce30;
          goto LAB_0008cc5a;
        }
        if (*(int *)(iVar7 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008cd48 + 0x8ccee,0x1642,DAT_0008cd44 + 0x8cce2,uVar6);
        }
        if (*(int *)(param_1 + 4) == 0) {
          pcVar38 = *(code **)(*piVar24 + 0x2c);
          uVar22 = *(undefined4 *)(this + 0x1b8);
        }
        else {
          pcVar38 = *(code **)(*piVar24 + 0x2c);
          uVar22 = *(undefined4 *)(this + 0x1b4);
        }
        uVar5 = uVar8 >> 8 & 0xff;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        uVar5 = (*pcVar38)(piVar24,0,uVar6,0,uVar22,&local_314,1,uVar5);
        if (-1 < (int)uVar5) {
          uVar20 = 1;
          if (*(byte *)((int)piVar32 + 5) == 1) {
            uVar20 = uVar8;
          }
          iVar36 = *(byte *)((int)piVar32 + 5) - 1;
          if (iVar36 != 0) {
            iVar36 = 1;
          }
          local_344 = local_344 + iVar36;
          goto LAB_0008cd98;
        }
        if (*(int *)(iVar7 + 0x20) == 0) goto LAB_0008d46a;
        uVar22 = 0x164b;
        iVar4 = DAT_0008d1e0 + 0x8d10e;
        iVar7 = DAT_0008d1e4 + 0x8d116;
LAB_0008d248:
        mm_camera_debug_log(1,1,iVar7,uVar22,iVar4);
LAB_0008d46a:
        pthread_mutex_unlock(__mutex);
      }
    }
    else {
      if (*(int *)(iVar7 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_0008c934 + 0x8c6f2,0x158e,DAT_0008c930 + 0x8c6ea);
      }
      pthread_mutex_unlock(__mutex);
      uVar5 = 0;
    }
LAB_0008c700:
    puVar28 = *(undefined8 **)(puVar13 + 2);
    while (puVar14 = puVar28, puVar14 != puVar13) {
      puVar28 = *(undefined8 **)(puVar14 + 2);
      if (puVar14 != (undefined8 *)0x0) {
        operator_delete(puVar14);
      }
    }
    operator_delete__(puVar13);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack728);
    pvVar23 = *(void **)((int)local_2f8 + 0xc);
    pvVar19 = local_2f8;
    pvVar29 = local_2f8;
    local_2fc = iVar35;
    if (pvVar23 != local_2f8) {
      do {
        pvVar29 = *(void **)((int)pvVar23 + 0xc);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
          pvVar19 = local_2f8;
        }
        pvVar23 = pvVar29;
      } while (pvVar29 != pvVar19);
    }
    *(void **)((int)pvVar29 + 8) = pvVar29;
    *(void **)((int)local_2f8 + 0xc) = local_2f8;
    if (local_2f8 != (void *)0x0) {
      operator_delete__(local_2f8);
    }
    piVar32 = (int *)local_300[4];
    piVar24 = local_300;
    piVar30 = local_300;
    local_304 = iVar9;
    if ((int *)local_300[4] != local_300) {
      do {
        piVar30 = (int *)piVar32[4];
        if (piVar32 != (int *)0x0) {
          operator_delete(piVar32);
          piVar24 = local_300;
        }
        piVar32 = piVar30;
      } while (piVar30 != piVar24);
    }
    piVar30[3] = (int)piVar30;
    local_300[4] = (int)local_300;
    if (local_300 != (int *)0x0) {
      operator_delete__(local_300);
    }
    goto LAB_0008c7fc;
  }
  if (this[0x1a8] == (QCamera3HardwareInterface)0x0) {
    __aeabi_memclr8(&local_288,0x168);
    local_1e0 = 6;
    uVar5 = count_leading_zeroes((uint)(byte)this[0x1c5]);
    local_1dc = (uVar5 >> 5) << 3;
    pvVar23 = *(void **)(this + 0x1b4);
    if (pvVar23 == (void *)0x0) {
LAB_0008ad0e:
      __android_log_print(6,DAT_0008ad88 + 0x8ad1e,DAT_0008ad8c + 0x8ad20,0,1);
    }
    else {
      __aeabi_memclr8(pvVar23,0x10f);
      *(undefined *)((int)pvVar23 + 0x117aec) = 0;
      *(undefined *)((int)pvVar23 + 0x106974) = 0;
      *(undefined *)((int)pvVar23 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar23 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar23 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar23 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar23 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar23 + 0xb7340) = 0;
      *(undefined *)((int)pvVar23 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar23 + 0x772c8) = 0;
      if (*(int *)(this + 0x1b4) == 0) goto LAB_0008ad0e;
      *(undefined4 *)("No Advanced Capture feature enabled!" + *(int *)(this + 0x1b4) + 2) = 3;
      *(undefined *)(*(int *)(this + 0x1b4) + 1) = 1;
    }
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b0cc + 0x8ada0,DAT_0008b0d0 + 0x8ada2,0,0x72);
    }
    else {
      __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(this + 0x1b4) + 0x10,&local_288,
                      0x168);
      *(undefined *)(*(int *)(this + 0x1b4) + 0x72) = 1;
    }
    uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                      (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
    if (-1 < (int)uVar5) goto LAB_0008adba;
    if (*(int *)(*(int *)(DAT_0008b708 + 0x8b6ba) + 0x20) != 0) {
      uVar22 = 0x12c5;
      iVar4 = DAT_0008b70c + 0x8b6ce;
      puVar21 = (undefined *)(DAT_0008b710 + 0x8b6d6);
      goto LAB_0008c39a;
    }
    goto LAB_0008c39e;
  }
LAB_0008adba:
  this_00 = (QCameraPerfLock *)(this + 0xa8);
  QCameraPerfLock::lock_acq(this_00);
  iVar4 = DAT_0008b0d8 + 0x8add0;
  property_get(DAT_0008b0d4 + 0x8add2,&local_288,iVar4);
  uVar5 = atoi((char *)&local_288);
  property_get(DAT_0008b0dc + 0x8ade8,&local_288,iVar4);
  uVar6 = atoi((char *)&local_288);
  iVar4 = *(int *)(DAT_0008b0e0 + 0x8adf8);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008b0e8 + 0x8ae16,0x12d3,DAT_0008b0e4 + 0x8ae0a,uVar5,uVar6);
  }
  iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack704,0x1000d);
  if (iVar7 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
    QVar3 = *(QCamera3HardwareInterface *)local_300;
    this[0x424] = QVar3;
    pvVar23 = *(void **)(this + 0x1b4);
    if (pvVar23 == (void *)0x0) {
LAB_0008aed0:
      __android_log_print(6,DAT_0008b0ec + 0x8aee0,DAT_0008b0f0 + 0x8aee2,0,1);
    }
    else {
      __aeabi_memclr8(pvVar23,0x10f);
      *(undefined *)((int)pvVar23 + 0x117aec) = 0;
      *(undefined *)((int)pvVar23 + 0x106974) = 0;
      *(undefined *)((int)pvVar23 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar23 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar23 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar23 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar23 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar23 + 0xb7340) = 0;
      *(undefined *)((int)pvVar23 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar23 + 0x772c8) = 0;
      if (*(int *)(this + 0x1b4) == 0) goto LAB_0008aed0;
      *(undefined4 *)("No Advanced Capture feature enabled!" + *(int *)(this + 0x1b4) + 2) = 3;
      *(undefined *)(*(int *)(this + 0x1b4) + 1) = 1;
    }
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b0f4 + 0x8af10,DAT_0008b0f8 + 0x8af12,0,0x7c);
    }
    else {
      *(uint *)("Ion dev open failed: %s\n" + *(int *)(this + 0x1b4) + 9) = (uint)(byte)QVar3;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x7c) = 1;
    }
  }
  iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack704,0x10011);
  if (iVar7 == 0) {
    uVar31 = 0;
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
    uVar31 = 0;
    if ((*(QCamera3HardwareInterface *)local_300 != (QCamera3HardwareInterface)0x0) &&
       (this[0x1c7] != (QCamera3HardwareInterface)0x0)) {
      uVar31 = (uint)(byte)this[0x1c6];
      if (uVar31 != 0) {
        uVar31 = 1;
      }
      uVar31 = 3 < (int)uVar5 & uVar31;
    }
  }
  if (*(int *)(this + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008b0fc + 0x8af82,DAT_0008b100 + 0x8af84,0,0xe);
  }
  else {
    *(uint *)("Failed to queue CREATE_JPEG_SESSION" + *(int *)(this + 0x1b4) + 0xd) = uVar31;
    *(undefined *)(*(int *)(this + 0x1b4) + 0xe) = 1;
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008b108 + 0x8afa4,0x12ed,DAT_0008b104 + 0x8af9a,uVar31);
  }
  iVar35 = *(int *)(DAT_0008b10c + 0x8afb2);
  iVar7 = *(int *)(iVar35 + *(int *)(this + 0x60) * 4);
  uVar8 = (uint)*(byte *)(iVar7 + 0x3f6d);
  if (5 < uVar8) {
    uVar8 = 6;
  }
  if (uVar8 != 0) {
    uVar20 = 0;
    do {
      if (*(int *)(iVar7 + 0x3f70 + uVar20 * 4) == 5) {
        uVar8 = 1;
        goto LAB_0008afe2;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar8);
  }
  uVar8 = 0;
LAB_0008afe2:
  if ((byte)this[0x118014] != 0) {
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b110 + 0x8b026,DAT_0008b114 + 0x8b028,0,0x103);
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008b11c + 0x8b046,0x12fb,DAT_0008b118 + 0x8b03e);
      }
    }
    else {
      uVar20 = count_leading_zeroes((byte)this[0x118014] - 1);
      *(uint *)("Could not find input request for frame number %d" + *(int *)(this + 0x1b4) + 0x17)
           = uVar20 >> 5;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x103) = 1;
    }
  }
  if (*(int *)(this + 0x2c8) == 0) {
    local_33c = 0;
  }
  else {
    local_33c = 0;
    uVar20 = 0;
    uVar8 = count_leading_zeroes(uVar5 ^ 5 | uVar8);
    iVar7 = DAT_0008b120 + 0x8b06c;
    iVar9 = DAT_0008b124 + 0x8b072;
    do {
      if (uVar31 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar6;
        local_33c = uVar6;
        if (*(int *)(this + uVar20 * 4 + 0x2cc) != 1) {
          if (*(int *)(this + uVar20 * 4 + 0x2cc) == 4) {
            uVar10 = uVar5;
            local_33c = uVar5;
            if (uVar8 >> 5 != 0) {
              if (*(int *)(iVar4 + 0x24) != 0) {
                mm_camera_debug_log(1,2,iVar9,0x1308,iVar7);
              }
              uVar10 = 4;
              local_33c = 4;
            }
          }
          else {
            uVar10 = 0;
            local_33c = 0;
          }
        }
      }
      iVar36 = uVar20 * 4;
      uVar20 = uVar20 + 1;
      *(uint *)(this + iVar36 + 0x338) = uVar10;
    } while (uVar20 < *(uint *)(this + 0x2c8));
  }
  iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack704,0x10011);
  if (iVar7 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
    QVar3 = *(QCamera3HardwareInterface *)local_300;
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0008b37c + 0x8b174,0x131b,DAT_0008b378 + 0x8b16a,(uint)(byte)QVar3
                         );
    }
    iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x1000d);
    if ((iVar7 != 0) &&
       (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310),
       *local_300 == 3)) {
      this[0x11802c] = QVar3;
    }
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b380 + 0x8b1ca,DAT_0008b384 + 0x8b1cc,0,0x66);
    }
    else {
      *(uint *)("camera %d resource cost is %d" + *(int *)(this + 0x1b4) + 8) = (uint)(byte)QVar3;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x66) = 1;
    }
  }
  if (*(int *)(this + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008b388 + 0x8b202,DAT_0008b38c + 0x8b204,0,0x72);
  }
  else {
    __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(this + 0x1b4) + 0x10,this + 0x288,
                    0x168);
    *(undefined *)(*(int *)(this + 0x1b4) + 0x72) = 1;
  }
  if (*(int *)(this + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008b390 + 0x8b236,DAT_0008b394 + 0x8b238,0,0x58);
  }
  else {
    *(undefined4 *)("No memory for camera_cmd_t" + *(int *)(this + 0x1b4) + 5) = 1;
    *(undefined *)(*(int *)(this + 0x1b4) + 0x58) = 1;
  }
  if ((this[0x117f28] == (QCamera3HardwareInterface)0x1) ||
     (this[0x1c4] != (QCamera3HardwareInterface)0x0)) {
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b398 + 0x8b27e,DAT_0008b39c + 0x8b280,0,0x5b);
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008b3a4 + 0x8b29c,0x1335,DAT_0008b3a0 + 0x8b294);
      }
    }
    else {
      *(undefined4 *)("No memory for camera_cmd_t" + *(int *)(this + 0x1b4) + 0x19) = 0;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x5b) = 1;
    }
  }
  piVar32 = (int *)(this + 0x1e1);
  if (this[0x1e1] == (QCamera3HardwareInterface)0x0) {
    iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x80090000);
    if (iVar7 != 0) {
      if (*(QCamera3HardwareInterface *)piVar32 == (QCamera3HardwareInterface)0x0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
        piVar32 = local_300;
      }
      goto LAB_0008b2a8;
    }
  }
  else {
LAB_0008b2a8:
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008b3a8 + 0x8b312,DAT_0008b3ac + 0x8b314,0,0xe9);
    }
    else {
      *(QCamera3HardwareInterface *)
       ("cache buffer %p at result frame_number %u" + *(int *)(this + 0x1b4) + 7) =
           *(QCamera3HardwareInterface *)piVar32;
      *(undefined *)(*(int *)(this + 0x1b4) + 0xe9) = 1;
      QVar3 = *(QCamera3HardwareInterface *)piVar32;
      if (QVar3 != (QCamera3HardwareInterface)0x0) {
        QVar3 = (QCamera3HardwareInterface)0x1;
      }
      this[0x118010] = QVar3;
    }
  }
  setMobicat(this);
  *(undefined4 *)(this + 0x117f24) = 0x41f00000;
  *(undefined4 *)(this + 0x117f80) = 6;
  *(undefined4 *)(this + 0x117f84) = 8;
  iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack704,0x10005);
  if (iVar7 != 0) {
    iVar7 = setHalFpsRange(this,aCStack704,*(metadata_buffer_t **)(this + 0x1b4));
    if (iVar7 == 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
      if (local_300[1] == 0x3c) {
        *(undefined4 *)(this + 0x117f80) = 6;
      }
      if (this[0x117f20] != (QCamera3HardwareInterface)0x0) {
        *(undefined4 *)(this + 0x117f80) = 0x28;
        *(undefined4 *)(this + 0x117f84) = 0x30;
      }
    }
    else if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008b3b4 + 0x8b374,0x1366,DAT_0008b3b0 + 0x8b36c);
    }
  }
  iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack704,0x1000f);
  if (iVar7 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
    iVar7 = extractSceneMode(this,aCStack704,(uchar)*(QCamera3HardwareInterface *)local_300,
                             *(metadata_buffer_t **)(this + 0x1b4));
    bVar41 = iVar7 != 0;
    if (bVar41) {
      iVar7 = *(int *)(iVar4 + 0x20);
    }
    if (bVar41 && iVar7 != 0) {
      mm_camera_debug_log(1,1,DAT_0008b6dc + 0x8b428,0x136d,DAT_0008b6d8 + 0x8b420);
    }
  }
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined8 *)(this + 0x254) = 0;
  *(undefined8 *)(this + 0x25c) = 0;
  *(undefined8 *)(this + 0x244) = 0;
  *(undefined8 *)(this + 0x24c) = 0;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined8 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x224) = 0;
  *(undefined8 *)(this + 0x22c) = 0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008b6e4 + 0x8b46e,0x1378,DAT_0008b6e0 + 0x8b466);
  }
  uVar5 = *(uint *)(this + 0x2c8);
  if (uVar5 != 0) {
    uVar6 = 0;
    iVar36 = 0x2f0;
    iVar7 = DAT_0008b6e8 + 0x8b482;
    iVar9 = DAT_0008b6ec + 0x8b488;
    do {
      if (*(int *)(iVar4 + 0x34) != 0) {
        mm_camera_debug_log(1,6,iVar9,0x1381,iVar7,*(undefined4 *)(this + uVar6 * 4 + 0x2cc),
                            *(undefined4 *)(this + uVar6 * 8 + 0x288),
                            *(undefined4 *)(this + uVar6 * 8 + 0x28c),*(undefined4 *)(this + iVar36)
                            ,*(undefined4 *)(this + iVar36 + 4),
                            *(undefined4 *)(this + uVar6 * 4 + 0x35c),
                            *(undefined4 *)(this + uVar6 * 4 + 0x338));
        uVar5 = *(uint *)(this + 0x2c8);
      }
      iVar36 = iVar36 + 8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                    (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
  if ((0x7fffffff < uVar5) && (*(int *)(iVar4 + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0008b6f4 + 0x8b50a,4999,DAT_0008b6f0 + 0x8b502);
  }
  local_70 = 0;
  local_6c[0] = 0;
  uVar5 = getSensorOutputSize(this,(cam_dimension_t *)&local_70);
  if (uVar5 == 0) {
    iVar7 = *(int *)(iVar35 + *(int *)(this + 0x60) * 4);
    QCamera3CropRegionMapper::update
              ((QCamera3CropRegionMapper *)(this + 0x117f88),*(uint *)(iVar7 + 0x3420),
               *(uint *)(iVar7 + 0x3424),local_70,local_6c[0]);
    ppiVar37 = *(int ***)(this + 0x3fc);
    ppiVar11 = (int **)ppiVar37[2];
    if (ppiVar11 != ppiVar37) {
      do {
        piVar32 = *(int **)(**ppiVar11 + 0x18);
        iVar7 = (**(code **)(*piVar32 + 0x20))(piVar32);
        if ((iVar7 == 0x10) && (*pQVar34 != (QCamera3HardwareInterface)0x0)) {
          uVar6 = (**(code **)(*piVar32 + 0x14))(piVar32);
          uVar5 = (**(code **)(*piVar32 + 0x1c))(piVar32,0);
          uVar5 = uVar5 | uVar6;
          if (uVar5 != 0) {
            if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0008b542;
            uVar22 = 0x13a7;
            iVar4 = DAT_0008bac0 + 0x8b986;
            iVar7 = DAT_0008bac4 + 0x8b990;
            goto LAB_0008b53c;
          }
        }
        ppiVar37 = (int **)ppiVar11[2];
        ppiVar11 = ppiVar37;
      } while (ppiVar37 != *(int ***)(this + 0x3fc));
    }
    ppiVar11 = (int **)ppiVar37[2];
    if (ppiVar11 != ppiVar37) {
      do {
        piVar32 = *(int **)(**ppiVar11 + 0x18);
        iVar7 = (**(code **)(*piVar32 + 0x20))(piVar32);
        uVar5 = uVar31;
        if (iVar7 != 0x10) {
          iVar7 = (**(code **)(*piVar32 + 0x20))(piVar32);
          uVar5 = iVar7 - 2;
          if (uVar5 != 0) {
            uVar5 = 1;
          }
          uVar5 = uVar5 | uVar31 ^ 1;
        }
        if (uVar5 == 0) {
          if (*(int *)(this + 0x2c8) != 0) {
            uVar5 = 0;
            do {
              uVar6 = *(uint *)(this + uVar5 * 4 + 0x2cc);
              iVar7 = (**(code **)(*piVar32 + 0x20))(piVar32);
              if (iVar7 == 1 << (uVar6 & 0xff)) {
                local_33c = *(uint *)(this + uVar5 * 4 + 0x338);
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)(this + 0x2c8));
          }
          iVar7 = *piVar32;
          uVar5 = local_33c;
        }
        else {
          iVar7 = *piVar32;
          uVar5 = 0;
        }
        uVar5 = (**(code **)(iVar7 + 0x24))(piVar32,uVar5);
        if (uVar5 != 0) {
          if (*(int *)(iVar4 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0008bab4 + 0x8b936,0x13c0,DAT_0008bab0 + 0x8b92c,uVar5);
          }
          pthread_mutex_unlock(__mutex);
          goto LAB_0008b54c;
        }
        ppiVar11 = (int **)ppiVar11[2];
      } while (ppiVar11 != *(int ***)(this + 0x3fc));
    }
    piVar32 = *(int **)(this + 0xa0);
    if ((piVar32 != (int *)0x0) && (uVar5 = (**(code **)(*piVar32 + 0x24))(piVar32,0), uVar5 != 0))
    {
      if (*(int *)(iVar4 + 0x20) != 0) {
        uVar22 = 0x13c9;
        iVar4 = DAT_0008b700 + 0x8b6aa;
        iVar7 = DAT_0008b704 + 0x8b6b2;
        goto LAB_0008b53c;
      }
      goto LAB_0008b542;
    }
    piVar32 = *(int **)(this + 0x98);
    if ((piVar32 != (int *)0x0) &&
       (uVar5 = (**(code **)(*piVar32 + 0x24))(piVar32,0), (int)uVar5 < 0)) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        uVar22 = 0x13d1;
        iVar4 = DAT_0008bac8 + 0x8b9a8;
        iVar7 = DAT_0008bacc + 0x8b9b0;
        goto LAB_0008b53c;
      }
      goto LAB_0008b542;
    }
    piVar32 = *(int **)(this + 0x9c);
    if ((piVar32 != (int *)0x0) &&
       (uVar5 = (**(code **)(*piVar32 + 0x24))(piVar32,0), (int)uVar5 < 0)) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        uVar22 = 0x13d9;
        iVar4 = DAT_0008bad0 + 0x8b9c8;
        iVar7 = DAT_0008bad4 + 0x8b9d0;
        goto LAB_0008b53c;
      }
      goto LAB_0008b542;
    }
    piVar32 = *(int **)(this + 0xa4);
    if (piVar32 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar32 + 0x14))(piVar32,this[0x117f20]);
      if ((int)uVar5 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x13e1;
          iVar4 = DAT_0008bad8 + 0x8b9e8;
          iVar7 = DAT_0008badc + 0x8b9f0;
          goto LAB_0008b53c;
        }
      }
      else {
        uVar5 = (**(code **)(**(int **)(this + 0xa4) + 0x24))(*(int **)(this + 0xa4),0);
        if (-1 < (int)uVar5) goto LAB_0008b76e;
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x13e7;
          iVar4 = DAT_0008bae8 + 0x8ba28;
          iVar7 = DAT_0008baec + 0x8ba30;
          goto LAB_0008b53c;
        }
      }
      goto LAB_0008b542;
    }
LAB_0008b76e:
    uVar5 = setBundleInfo(this);
    if ((int)uVar5 < 0) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        uVar22 = 0x13f0;
        iVar4 = DAT_0008bae0 + 0x8ba06;
        iVar7 = DAT_0008bae4 + 0x8ba10;
LAB_0008b53c:
        mm_camera_debug_log(1,1,iVar7,uVar22,iVar4);
      }
      goto LAB_0008b542;
    }
    iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x800b0000);
    if (iVar7 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
      QVar3 = *(QCamera3HardwareInterface *)local_300;
      QVar18 = QVar3;
      if (QVar3 != (QCamera3HardwareInterface)0x0) {
        QVar18 = (QCamera3HardwareInterface)0x1;
      }
      this[0x117fe1] = QVar18;
      if (*(int *)(iVar4 + 0x28) != 0) {
        if (QVar3 != (QCamera3HardwareInterface)0x0) {
          QVar3 = (QCamera3HardwareInterface)0x1;
        }
        mm_camera_debug_log(1,3,DAT_0008ba94 + 0x8b7d8,0x13f8,DAT_0008ba90 + 0x8b7ca,QVar3,
                            *(undefined4 *)(this + 0x60));
      }
    }
    iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x800b0001);
    if (iVar7 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
      QVar3 = *(QCamera3HardwareInterface *)local_300;
      QVar18 = QVar3;
      if (QVar3 != (QCamera3HardwareInterface)0x0) {
        QVar18 = (QCamera3HardwareInterface)0x1;
      }
      this[0x117fe2] = QVar18;
      if (*(int *)(iVar4 + 0x28) != 0) {
        if (QVar3 != (QCamera3HardwareInterface)0x0) {
          QVar3 = (QCamera3HardwareInterface)0x1;
        }
        mm_camera_debug_log(1,3,DAT_0008ba9c + 0x8b834,0x13fc,DAT_0008ba98 + 0x8b826,QVar3,
                            *(undefined4 *)(this + 0x60));
      }
    }
    iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack704,0x800b0002);
    if (iVar7 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
      uVar6 = (uint)(byte)*(QCamera3HardwareInterface *)local_300;
      this[0x117fe3] = *(QCamera3HardwareInterface *)local_300;
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_0008baa4 + 0x8b876,0x1400,DAT_0008baa0 + 0x8b868,uVar6,
                            *(undefined4 *)(this + 0x60));
        uVar6 = (uint)(byte)this[0x117fe3];
      }
      if ((4 < uVar6) && (*(uint *)(this + 0x60) != uVar6)) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x1405;
          iVar4 = DAT_0008beac + 0x8bcf6;
          iVar7 = DAT_0008beb0 + 0x8bd04;
          goto LAB_0008b53c;
        }
        goto LAB_0008b542;
      }
    }
    if (*(int *)(iVar4 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0008baa8 + 0x8b8a8,0x140c,DAT_0008baac + 0x8b8aa,
                          DAT_0008baa8 + 0x8b8a8,*(undefined4 *)(this + 0x60),this[0x117fe1]);
    }
    if ((this[0x117fe1] == (QCamera3HardwareInterface)0x0) ||
       (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          (aCStack704,0x800b0000), iVar7 == 0)) {
LAB_0008bb52:
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_0008be80 + 0x8bb6c,0x143a,DAT_0008be7c + 0x8bb64);
      }
      uVar5 = (**(code **)(**(int **)(this + 0x8c) + 0xc))();
      if ((int)uVar5 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x143d;
          iVar4 = DAT_0008bea4 + 0x8bcda;
          iVar7 = DAT_0008bea8 + 0x8bce2;
LAB_0008bd94:
          mm_camera_debug_log(1,1,iVar7,uVar22,iVar4);
        }
      }
      else if ((*(int **)(this + 0x9c) == (int *)0x0) ||
              (uVar5 = (**(code **)(**(int **)(this + 0x9c) + 0xc))(), -1 < (int)uVar5)) {
        if ((*(int **)(this + 0x98) != (int *)0x0) &&
           (uVar5 = (**(code **)(**(int **)(this + 0x98) + 0xc))(), (int)uVar5 < 0)) {
          if (*(int *)(iVar4 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0008bed4 + 0x8bdbc,0x144f,DAT_0008bed0 + 0x8bdb4);
          }
          (**(code **)(**(int **)(this + 0x8c) + 0x10))();
          piVar32 = *(int **)(this + 0x9c);
          if (piVar32 != (int *)0x0) {
LAB_0008bdce:
            (**(code **)(*piVar32 + 0x10))();
          }
          pthread_mutex_unlock(__mutex);
          goto LAB_0008b54c;
        }
        ppiVar11 = (int **)(*(int ***)(this + 0x3fc))[2];
        if (ppiVar11 != *(int ***)(this + 0x3fc)) {
          iVar7 = DAT_0008be84 + 0x8bbbc;
          iVar35 = DAT_0008be88 + 0x8bbc2;
          do {
            piVar32 = *(int **)(**ppiVar11 + 0x18);
            if (*(int *)(iVar4 + 0x28) != 0) {
              uVar22 = (**(code **)(*piVar32 + 0x20))(piVar32);
              mm_camera_debug_log(1,3,iVar35,0x145e,iVar7,uVar22);
            }
            uVar5 = (**(code **)(*piVar32 + 0xc))(piVar32);
            if ((int)uVar5 < 0) {
              if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0008b542;
              uVar22 = 0x1461;
              iVar4 = DAT_0008bec8 + 0x8bd8e;
              iVar7 = DAT_0008becc + 0x8bd96;
              goto LAB_0008bd94;
            }
            ppiVar11 = (int **)ppiVar11[2];
          } while (ppiVar11 != *(int ***)(this + 0x3fc));
        }
        piVar32 = *(int **)(this + 0xa0);
        if (piVar32 != (int *)0x0) {
          if (*(int *)(iVar4 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_0008be90 + 0x8bc26,0x1468,DAT_0008be8c + 0x8bc1e);
            piVar32 = *(int **)(this + 0xa0);
          }
          uVar5 = (**(code **)(*piVar32 + 0xc))();
          if (uVar5 != 0) {
            if (*(int *)(iVar4 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_0008be98 + 0x8bc52,0x146b,DAT_0008be94 + 0x8bc4a);
            }
            ppiVar11 = (int **)(*(int ***)(this + 0x3fc))[2];
            if (ppiVar11 != *(int ***)(this + 0x3fc)) {
              iVar7 = DAT_0008be9c + 0x8bc66;
              iVar35 = DAT_0008bea0 + 0x8bc6c;
              do {
                piVar32 = *(int **)(**ppiVar11 + 0x18);
                if (*(int *)(iVar4 + 0x28) != 0) {
                  uVar22 = (**(code **)(*piVar32 + 0x20))(piVar32);
                  mm_camera_debug_log(1,3,iVar35,0x1471,iVar7,uVar22);
                }
                (**(code **)(*piVar32 + 0x10))(piVar32);
                ppiVar11 = (int **)ppiVar11[2];
              } while (ppiVar11 != *(int ***)(this + 0x3fc));
            }
            if (*(int **)(this + 0x98) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x98) + 0x10))();
            }
            if (*(int **)(this + 0x9c) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x9c) + 0x10))();
            }
            piVar32 = *(int **)(this + 0x8c);
            goto LAB_0008bdce;
          }
        }
        if ((*(int *)(this + 0xf4) == 0) ||
           (uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 100))
                              (**(undefined4 **)(this + 100)), uVar5 == 0)) {
          QCameraPerfLock::lock_rel(this_00);
          this[0x27c] = (QCamera3HardwareInterface)0x0;
          *(undefined4 *)(this + 0x278) = 0;
          this[0x1a8] = (QCamera3HardwareInterface)0x0;
          goto LAB_0008bdf8;
        }
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x1484;
          iVar4 = DAT_0008beb8 + 0x8bd46;
          iVar7 = DAT_0008bebc + 0x8bd50;
          goto LAB_0008bd94;
        }
      }
      else {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008bec4 + 0x8bd6c,0x1445,DAT_0008bec0 + 0x8bd64);
        }
        (**(code **)(**(int **)(this + 0x8c) + 0x10))();
      }
      goto LAB_0008b542;
    }
    uVar22 = 1;
    if (this[0x117fe1] == (QCamera3HardwareInterface)0x0) {
      uVar22 = 2;
    }
    **(undefined4 **)(this + 0x117fe8) = uVar22;
    if ((this[0x117fe1] == (QCamera3HardwareInterface)0x0) ||
       (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          (aCStack704,0x80140010), iVar7 == 0)) {
      *(undefined4 *)(*(int *)(this + 0x117fe8) + 0x14) = 0;
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_310);
      *(int *)(*(int *)(this + 0x117fe8) + 0x14) = *local_300;
    }
    __mutex_00 = *(pthread_mutex_t **)(DAT_0008baf0 + 0x8ba46);
    pthread_mutex_lock(__mutex_00);
    iVar7 = *(int *)(DAT_0008baf4 + 0x8ba5e);
    if (*(int *)(iVar7 + (uint)(byte)this[0x117fe3] * 4) != -0x21524111) {
      QVar3 = this[0x117fe2];
      *(uint *)(*(int *)(this + 0x117fe8) + 8) = (byte)QVar3 ^ 1;
      uVar22 = 1;
      if ((byte)QVar3 == 0) {
        uVar22 = 2;
      }
      *(undefined4 *)(*(int *)(this + 0x117fe8) + 4) = uVar22;
      *(undefined4 *)(*(int *)(this + 0x117fe8) + 0xc) =
           *(undefined4 *)(iVar7 + (uint)(byte)this[0x117fe3] * 4);
      pthread_mutex_unlock(__mutex_00);
      uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x94))
                        (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x117fe8));
      if ((int)uVar5 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          uVar22 = 0x1433;
          iVar4 = DAT_0008d1d0 + 0x8d0b6;
          iVar7 = DAT_0008d1d4 + 0x8d0be;
          goto LAB_0008b53c;
        }
        goto LAB_0008b542;
      }
      goto LAB_0008bb52;
    }
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008bafc + 0x8ba80,0x141e,DAT_0008baf8 + 0x8ba78);
    }
    pthread_mutex_unlock(__mutex_00);
    pthread_mutex_unlock(__mutex);
  }
  else {
    if (*(int *)(iVar4 + 0x20) != 0) {
      uVar22 = 0x138e;
      iVar4 = DAT_0008b6f8 + 0x8b536;
      iVar7 = DAT_0008b6fc + 0x8b53e;
      goto LAB_0008b53c;
    }
LAB_0008b542:
    pthread_mutex_unlock(__mutex);
  }
LAB_0008b54c:
  QCameraPerfLock::lock_rel(this_00);
LAB_0008c7fc:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack704);
  if (1 < *puVar40) {
    if ((**(byte **)(DAT_0008c948 + 0x8c810) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008c94c + 0x8c820) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar39 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

