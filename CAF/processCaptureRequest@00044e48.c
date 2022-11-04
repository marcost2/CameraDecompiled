
/* WARNING: Removing unreachable block (ram,0x00047008) */
/* WARNING: Removing unreachable block (ram,0x0004732e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::processCaptureRequest(camera3_capture_request*,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>&) */

undefined8 * __thiscall
qcamera::QCamera3HardwareInterface::processCaptureRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,List *param_2)

{
  undefined auVar1 [16];
  bool bVar2;
  QCamera3HardwareInterface QVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  QCameraPerfLock *this_00;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int **ppiVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined (*pauVar13) [16];
  uint *puVar14;
  uint uVar15;
  int iVar16;
  char *extraout_r1;
  int extraout_r1_00;
  undefined8 *puVar17;
  uint uVar18;
  code *pcVar19;
  QCamera3HardwareInterface *pQVar20;
  pthread_mutex_t *__mutex;
  CameraMetadata *pCVar21;
  pthread_mutex_t *__mutex_00;
  undefined8 *puVar22;
  QCamera3HardwareInterface *pQVar23;
  undefined4 uVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  undefined8 *in_stack_fffffd34;
  undefined8 *local_270;
  undefined8 *local_268;
  QCamera3HardwareInterface *local_264;
  uint local_254;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack592 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack588 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack584 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  a_Stack580 [4];
  AbstractUnwindCursor aAStack576 [4];
  int *local_23c;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 *local_220;
  undefined8 *puStack540;
  undefined8 local_218;
  QCamera3HardwareInterface *local_210 [3];
  uint local_204;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack512 [4];
  undefined8 *local_1fc;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack504 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack500 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack496 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack492 [4];
  ScopedTraceDbg aSStack488 [8];
  uint auStack480 [2];
  undefined8 *local_1d8;
  int *local_1d4 [3];
  QCamera3HardwareInterface *local_1c8;
  undefined8 *local_190;
  undefined4 local_18c;
  undefined8 *local_188;
  uint uStack388;
  QCamera3HardwareInterface **local_180;
  int local_174;
  undefined local_170;
  undefined4 local_168;
  undefined4 uStack356;
  undefined8 *local_160;
  undefined4 local_15c;
  CameraMetadata aCStack344 [8];
  undefined local_150;
  undefined4 local_14c;
  QCamera3HardwareInterface local_148;
  QCamera3HardwareInterface local_147;
  undefined local_146;
  QCamera3HardwareInterface local_145;
  QCamera3HardwareInterface local_144;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_28;
  
  piVar29 = *(int **)(DAT_000451a0 + 0x44e5c);
  local_28 = *piVar29;
  puVar4 = (undefined8 *)(DAT_000451a4 + 0x44e6a);
  puVar6 = puVar4;
  ScopedTraceDbg::ScopedTraceDbg(aSStack488,CONCAT44(in_stack_fffffd34,puVar4),(char *)param_1);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)auStack480);
  __mutex_00 = (pthread_mutex_t *)(this + 0x388);
  pthread_mutex_lock(__mutex_00);
  puVar5 = *(undefined8 **)(this + 0x117910);
  if ((QCamera3HardwareInterface *)0x1 < (QCamera3HardwareInterface *)((int)puVar5 + -3)) {
    if (puVar5 == (undefined8 *)0x5) {
      pthread_mutex_unlock(__mutex_00);
      handleCameraDeviceError(this);
      puVar5 = (undefined8 *)0xffffffed;
    }
    else {
      if (*(int *)(*(int *)(DAT_000451b4 + 0x44ef0) + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_000451b8 + 0x44efa);
        mm_camera_debug_log();
        in_stack_fffffd34 = puVar5;
      }
      pthread_mutex_unlock(__mutex_00);
      puVar5 = (undefined8 *)0xffffffed;
    }
    goto LAB_0004608c;
  }
  puVar5 = (undefined8 *)validateCaptureRequest(this,param_1,param_2);
  if (puVar5 != (undefined8 *)0x0) {
    if (*(int *)(*(int *)(DAT_000451a8 + 0x44eae) + 0x20) != 0) {
      puVar6 = (undefined8 *)(DAT_000451ac + 0x44eb8);
      goto LAB_00044ec4;
    }
    goto LAB_00044ec8;
  }
  piVar28 = (int *)(this + 0x117910);
  pQVar20 = this + 0x117878;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            ((CameraMetadata *)auStack480,*(camera_metadata **)(param_1 + 4));
  if (*piVar28 == 3) {
    if (this[0x140] == (QCamera3HardwareInterface)0x0) {
      __aeabi_memclr4(&local_190,0x168);
      local_e8 = 3;
      local_e4 = 0;
      if (this[0x15d] == (QCamera3HardwareInterface)0x0) {
        local_e4 = 6;
      }
      clear_metadata_buffer(*(metadata_buffer_t **)(this + 0x14c));
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(*(int *)(DAT_000451c0 + 0x44f8c) + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_000451c4 + 0x44f9a);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
          goto LAB_00044fae;
        }
      }
      else {
        *(undefined4 *)(*(int *)(this + 0x14c) + 0x72dd4) = 3;
        *(undefined *)(*(int *)(this + 0x14c) + 1) = 1;
LAB_00044fae:
        if (*(int *)(this + 0x14c) == 0) {
          if (*(int *)(*(int *)(DAT_000451cc + 0x44fd8) + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_000451d0 + 0x44fe6);
            in_stack_fffffd34 = (undefined8 *)0x0;
            mm_camera_debug_log();
          }
        }
        else {
          __aeabi_memcpy8((void *)(*(int *)(this + 0x14c) + 0x734b8),&local_190,0x168);
          *(undefined *)(*(int *)(this + 0x14c) + 0x70) = 1;
        }
      }
      puVar5 = (undefined8 *)
               (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x18))
                         (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
      if ((int)puVar5 < 0) {
        if (*(int *)(*(int *)(DAT_000451f8 + 0x45102) + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_000451fc + 0x45110);
          goto LAB_00044ec4;
        }
        goto LAB_00044ec8;
      }
    }
    this_00 = (QCameraPerfLock *)(this + 0x98);
    QCameraPerfLock::lock_acq(this_00);
    property_get();
    puVar5 = (undefined8 *)atoi((char *)&local_190);
    property_get();
    puVar7 = (undefined8 *)atoi((char *)&local_190);
    iVar25 = *(int *)(DAT_000451e4 + 0x45054);
    if (*(int *)(iVar25 + 0x2c) != 0) {
      puVar6 = (undefined8 *)(DAT_000451e8 + 0x4505e);
      in_stack_fffffd34 = puVar5;
      mm_camera_debug_log();
    }
    iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      ((CameraMetadata *)auStack480,0x1000d);
    if (iVar8 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)&local_1d8,auStack480);
      QVar3 = *local_1c8;
      this[0x3bc] = QVar3;
      clear_metadata_buffer(*(metadata_buffer_t **)(this + 0x14c));
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) == 0) goto LAB_00045140;
        puVar6 = (undefined8 *)(DAT_000451f0 + 0x450ca);
        in_stack_fffffd34 = (undefined8 *)0x0;
        mm_camera_debug_log();
      }
      else {
        *(undefined4 *)(*(int *)(this + 0x14c) + 0x72dd4) = 3;
        *(undefined *)(*(int *)(this + 0x14c) + 1) = 1;
      }
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_00045204 + 0x4512c);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
        }
      }
      else {
        *(uint *)(*(int *)(this + 0x14c) + 0x73634) = (uint)(byte)QVar3;
        *(undefined *)(*(int *)(this + 0x14c) + 0x7a) = 1;
      }
    }
LAB_00045140:
    iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      ((CameraMetadata *)auStack480,0x10011);
    if (iVar8 == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)&local_1d8,auStack480);
      puVar17 = (undefined8 *)0x0;
      if ((*local_1c8 != (QCamera3HardwareInterface)0x0) &&
         (this[0x15f] != (QCamera3HardwareInterface)0x0)) {
        uVar15 = (uint)(byte)this[0x15e];
        if (uVar15 != 0) {
          uVar15 = 1;
        }
        puVar17 = (undefined8 *)(3 < (int)puVar5 & uVar15);
      }
    }
    if (*(int *)(this + 0x14c) == 0) {
      if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00045518 + 0x4521a);
        in_stack_fffffd34 = (undefined8 *)0x0;
        mm_camera_debug_log();
      }
    }
    else {
      *(undefined8 **)(*(int *)(this + 0x14c) + 0x72e04) = puVar17;
      *(undefined *)(*(int *)(this + 0x14c) + 0xe) = 1;
    }
    if (*(int *)(iVar25 + 0x2c) != 0) {
      puVar6 = (undefined8 *)(DAT_00045520 + 0x4523a);
      in_stack_fffffd34 = puVar17;
      mm_camera_debug_log();
    }
    iVar8 = *(int *)(DAT_00045528 + 0x45258);
    iVar16 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
    uVar15 = (uint)*(byte *)(iVar16 + 0x3e75);
    if (5 < uVar15) {
      uVar15 = 6;
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      uVar18 = 0;
      do {
        if (*(int *)(iVar16 + 0x3e78 + uVar18 * 4) == 5) {
          uVar15 = 1;
          goto LAB_0004528e;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar15);
      uVar15 = 0;
    }
LAB_0004528e:
    if (*(int *)(this + 0x260) == 0) {
      local_270 = (undefined8 *)0x0;
    }
    else {
      uVar15 = count_leading_zeroes(uVar15 | (uint)puVar5 ^ 5);
      local_270 = (undefined8 *)0x0;
      puVar22 = (undefined8 *)(DAT_0004552c + 0x452ac);
      uVar18 = 0;
      do {
        if (puVar17 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = puVar7;
          local_270 = puVar7;
          if (*(int *)(this + uVar18 * 4 + 0x264) != 1) {
            if (*(int *)(this + uVar18 * 4 + 0x264) == 4) {
              puVar9 = puVar5;
              local_270 = puVar5;
              if (uVar15 >> 5 != 0) {
                if (*(int *)(iVar25 + 0x24) != 0) {
                  puVar6 = puVar22;
                  mm_camera_debug_log();
                }
                puVar9 = (undefined8 *)0x4;
                local_270 = (undefined8 *)0x4;
              }
            }
            else {
              puVar9 = (undefined8 *)0x0;
              local_270 = (undefined8 *)0x0;
            }
          }
        }
        *(undefined8 **)(this + uVar18 * 4 + 0x2d0) = puVar9;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(this + 0x260));
    }
    if (*(int *)(this + 0x14c) == 0) {
      if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00045534 + 0x45360);
        in_stack_fffffd34 = (undefined8 *)0x0;
        mm_camera_debug_log();
        goto LAB_00045374;
      }
    }
    else {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x14c) + 0x734b8),this + 0x220,0x168);
      *(undefined *)(*(int *)(this + 0x14c) + 0x70) = 1;
LAB_00045374:
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_0004553c + 0x453a0);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
        }
      }
      else {
        *(undefined4 *)(*(int *)(this + 0x14c) + 0x732a8) = 1;
        *(undefined *)(*(int *)(this + 0x14c) + 0x58) = 1;
      }
    }
    if ((this[0x117880] == (QCamera3HardwareInterface)0x1) ||
       (this[0x15c] != (QCamera3HardwareInterface)0x0)) {
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_00045544 + 0x4545e);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
          if (*(int *)(iVar25 + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_0004554c + 0x45480);
            mm_camera_debug_log();
          }
        }
      }
      else {
        *(undefined4 *)(*(int *)(this + 0x14c) + 0x732bc) = 0;
        *(undefined *)(*(int *)(this + 0x14c) + 0x5b) = 1;
      }
    }
    pQVar23 = this + 0x179;
    if (this[0x179] == (QCamera3HardwareInterface)0x0) {
      iVar16 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                         ((CameraMetadata *)auStack480,0x80090000);
      if (iVar16 != 0) {
        if (*pQVar23 == (QCamera3HardwareInterface)0x0) {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                    ((CameraMetadata *)&local_1d8,auStack480);
          pQVar23 = local_1c8;
        }
        goto LAB_000453f0;
      }
    }
    else {
LAB_000453f0:
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_00045554 + 0x454a2);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
        }
      }
      else {
        *(QCamera3HardwareInterface *)(*(int *)(this + 0x14c) + 0x76bf4) = *pQVar23;
        *(undefined *)(*(int *)(this + 0x14c) + 199) = 1;
        QVar3 = *pQVar23;
        if (QVar3 != (QCamera3HardwareInterface)0x0) {
          QVar3 = (QCamera3HardwareInterface)0x1;
        }
        this[0x117940] = QVar3;
      }
    }
    setMobicat(this);
    *(undefined4 *)(this + 0x11787c) = 0x41f00000;
    *(undefined4 *)(this + 0x1178cc) = 3;
    *(undefined4 *)(this + 0x1178d0) = 6;
    iVar16 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                       ((CameraMetadata *)auStack480,0x10005);
    if (iVar16 != 0) {
      iVar16 = setHalFpsRange(this,(CameraMetadata *)auStack480,
                              *(metadata_buffer_t **)(this + 0x14c));
      if (iVar16 == 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_1d8,auStack480);
        if (*(int *)(local_1c8 + 4) == 0x3c) {
          *(undefined4 *)(this + 0x1178cc) = 6;
        }
        if (this[0x117878] != (QCamera3HardwareInterface)0x0) {
          *(undefined4 *)(this + 0x1178cc) = 0x28;
          *(undefined4 *)(this + 0x1178d0) = 0x30;
        }
      }
      else if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_0004555c + 0x45504);
        mm_camera_debug_log();
      }
    }
    iVar16 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                       ((CameraMetadata *)auStack480,0x1000f);
    if (iVar16 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)&local_1d8,auStack480);
      iVar16 = extractSceneMode(this,(CameraMetadata *)auStack480,(uchar)*local_1c8,
                                *(metadata_buffer_t **)(this + 0x14c));
      if ((iVar16 != 0) && (*(int *)(iVar25 + 0x20) != 0)) {
        puVar6 = (undefined8 *)(DAT_00045900 + 0x455ca);
        mm_camera_debug_log();
      }
    }
    *(undefined4 *)(this + 0x1fc) = 0;
    *(undefined8 *)(this + 0x1ec) = 0;
    *(undefined8 *)(this + 500) = 0;
    *(undefined8 *)(this + 0x1dc) = 0;
    *(undefined8 *)(this + 0x1e4) = 0;
    *(undefined8 *)(this + 0x1cc) = 0;
    *(undefined8 *)(this + 0x1d4) = 0;
    *(undefined8 *)(this + 0x1bc) = 0;
    *(undefined8 *)(this + 0x1c4) = 0;
    if (*(int *)(iVar25 + 0x2c) != 0) {
      puVar6 = (undefined8 *)(DAT_00045908 + 0x45614);
      mm_camera_debug_log();
    }
    if (*(int *)(this + 0x260) != 0) {
      uVar15 = 0;
      puVar5 = (undefined8 *)(DAT_00045910 + 0x45636);
      do {
        if (*(int *)(iVar25 + 0x34) != 0) {
          in_stack_fffffd34 = *(undefined8 **)(this + uVar15 * 4 + 0x264);
          puVar6 = puVar5;
          mm_camera_debug_log();
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(this + 0x260));
    }
    uVar15 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x18))
                       (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
    if ((0x7fffffff < uVar15) && (*(int *)(iVar25 + 0x20) != 0)) {
      puVar6 = (undefined8 *)(DAT_00045918 + 0x456b0);
      mm_camera_debug_log();
    }
    local_220 = (undefined8 *)0x0;
    puStack540 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)getSensorOutputSize(this,(cam_dimension_t *)&local_220);
    if (puVar5 == (undefined8 *)0x0) {
      iVar8 = *(int *)(iVar8 + *(int *)(this + 0x4c) * 4);
      puVar6 = puStack540;
      QCamera3CropRegionMapper::update
                ((QCamera3CropRegionMapper *)(this + 0x1178d4),*(uint *)(iVar8 + 0x3410),
                 *(uint *)(iVar8 + 0x3414),(uint)local_220,(uint)puStack540);
      android::List<unsigned_int>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar8 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_1d8,(_ListIterator *)&local_230);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
      if (iVar8 != 0) {
        do {
          ppiVar10 = (int **)android::List<unsigned_int>::
                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                             ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                          *)&local_1d8);
          piVar26 = *(int **)(**ppiVar10 + 0x18);
          iVar8 = (**(code **)(*piVar26 + 0x1c))(piVar26);
          if ((iVar8 == 0x10) && (*pQVar20 != (QCamera3HardwareInterface)0x0)) {
            uVar15 = (**(code **)(*piVar26 + 0x10))(piVar26);
            uVar18 = (**(code **)(*piVar26 + 0x18))(piVar26,0);
            puVar5 = (undefined8 *)(uVar18 | uVar15);
            if (puVar5 != (undefined8 *)0x0) {
              if (*(int *)(iVar25 + 0x20) == 0) goto LAB_00045bae;
              puVar6 = (undefined8 *)(DAT_00045c90 + 0x45b9c);
              in_stack_fffffd34 = puVar5;
              goto LAB_00045baa;
            }
          }
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                    (a_Stack492,(int)&local_1d8);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack492)
          ;
          android::List<qcamera::ReprocessBuffer>::end();
          iVar8 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)&local_1d8,(_ListIterator *)&local_230);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230)
          ;
        } while (iVar8 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1d8);
      android::List<unsigned_int>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar8 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_1d8,(_ListIterator *)&local_230);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
      if (iVar8 != 0) {
        do {
          ppiVar10 = (int **)android::List<unsigned_int>::
                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                             ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                          *)&local_1d8);
          piVar26 = *(int **)(**ppiVar10 + 0x18);
          iVar8 = (**(code **)(*piVar26 + 0x1c))(piVar26);
          puVar5 = puVar17;
          if (iVar8 != 0x10) {
            iVar8 = (**(code **)(*piVar26 + 0x1c))(piVar26);
            uVar15 = iVar8 - 2;
            if (uVar15 != 0) {
              uVar15 = 1;
            }
            puVar5 = (undefined8 *)(uVar15 | (uint)puVar17 ^ 1);
          }
          if (puVar5 == (undefined8 *)0x0) {
            if (*(int *)(this + 0x260) != 0) {
              uVar15 = 0;
              do {
                uVar18 = *(uint *)(this + uVar15 * 4 + 0x264);
                iVar8 = (**(code **)(*piVar26 + 0x1c))(piVar26);
                if (iVar8 == 1 << (uVar18 & 0xff)) {
                  local_270 = *(undefined8 **)(this + uVar15 * 4 + 0x2d0);
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(uint *)(this + 0x260));
            }
            pcVar19 = *(code **)(*piVar26 + 0x20);
            puVar5 = local_270;
          }
          else {
            pcVar19 = *(code **)(*piVar26 + 0x20);
            puVar5 = (undefined8 *)0x0;
          }
          puVar5 = (undefined8 *)(*pcVar19)(piVar26,puVar5);
          if (puVar5 != (undefined8 *)0x0) {
            if (*(int *)(iVar25 + 0x20) != 0) {
              puVar6 = (undefined8 *)(DAT_00045c88 + 0x45b6c);
              in_stack_fffffd34 = puVar5;
              mm_camera_debug_log();
            }
            pthread_mutex_unlock(__mutex_00);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_1d8);
            goto LAB_000456fc;
          }
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                    (a_Stack496,(int)&local_1d8);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack496)
          ;
          android::List<qcamera::ReprocessBuffer>::end();
          iVar8 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)&local_1d8,(_ListIterator *)&local_230);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230)
          ;
        } while (iVar8 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_1d8);
      piVar26 = *(int **)(this + 0x8c);
      if ((piVar26 == (int *)0x0) ||
         (puVar5 = (undefined8 *)(**(code **)(*piVar26 + 0x20))(piVar26,0),
         puVar5 == (undefined8 *)0x0)) {
        piVar26 = *(int **)(this + 0x84);
        if ((piVar26 == (int *)0x0) ||
           (puVar5 = (undefined8 *)(**(code **)(*piVar26 + 0x20))(piVar26,0), -1 < (int)puVar5)) {
          piVar26 = *(int **)(this + 0x88);
          if ((piVar26 == (int *)0x0) ||
             (puVar5 = (undefined8 *)(**(code **)(*piVar26 + 0x20))(piVar26,0), -1 < (int)puVar5)) {
            piVar26 = *(int **)(this + 0x90);
            if (piVar26 == (int *)0x0) {
LAB_00045994:
              puVar5 = (undefined8 *)setBundleInfo(this);
              if ((int)puVar5 < 0) {
                if (*(int *)(iVar25 + 0x20) != 0) {
                  puVar6 = (undefined8 *)(DAT_00045cb0 + 0x45c2c);
                  in_stack_fffffd34 = puVar5;
LAB_00045fae:
                  mm_camera_debug_log();
                }
              }
              else {
                iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                                  ((CameraMetadata *)auStack480,0x800b0000);
                if (iVar8 != 0) {
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                            ((CameraMetadata *)&local_1d8,auStack480);
                  QVar3 = *local_1c8;
                  puVar7 = (undefined8 *)(uint)(byte)QVar3;
                  if (puVar7 != (undefined8 *)0x0) {
                    QVar3 = (QCamera3HardwareInterface)0x1;
                  }
                  this[0x117914] = QVar3;
                  if (*(int *)(iVar25 + 0x28) != 0) {
                    if (puVar7 != (undefined8 *)0x0) {
                      puVar7 = (undefined8 *)0x1;
                    }
                    puVar6 = (undefined8 *)(DAT_00045c5c + 0x459ee);
                    mm_camera_debug_log();
                    in_stack_fffffd34 = puVar7;
                  }
                }
                iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                                  ((CameraMetadata *)auStack480,0x800b0001);
                if (iVar8 != 0) {
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                            ((CameraMetadata *)&local_1d8,auStack480);
                  QVar3 = *local_1c8;
                  puVar7 = (undefined8 *)(uint)(byte)QVar3;
                  if (puVar7 != (undefined8 *)0x0) {
                    QVar3 = (QCamera3HardwareInterface)0x1;
                  }
                  this[0x117915] = QVar3;
                  if (*(int *)(iVar25 + 0x28) != 0) {
                    if (puVar7 != (undefined8 *)0x0) {
                      puVar7 = (undefined8 *)0x1;
                    }
                    puVar6 = (undefined8 *)(DAT_00045c64 + 0x45a4a);
                    mm_camera_debug_log();
                    in_stack_fffffd34 = puVar7;
                  }
                }
                iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                                  ((CameraMetadata *)auStack480,0x800b0002);
                if (iVar8 != 0) {
                  android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                            ((CameraMetadata *)&local_1d8,auStack480);
                  puVar7 = (undefined8 *)(uint)(byte)*local_1c8;
                  this[0x117916] = *local_1c8;
                  if (*(int *)(iVar25 + 0x28) != 0) {
                    puVar6 = (undefined8 *)(DAT_00045c6c + 0x45a8e);
                    in_stack_fffffd34 = puVar7;
                    mm_camera_debug_log();
                    puVar7 = (undefined8 *)(uint)(byte)this[0x117916];
                  }
                  if (((undefined8 *)0x4 < puVar7) && (*(undefined8 **)(this + 0x4c) != puVar7)) {
                    if (*(int *)(iVar25 + 0x20) != 0) {
                      puVar6 = (undefined8 *)(DAT_000460e0 + 0x45f68);
                      in_stack_fffffd34 = puVar7;
                      goto LAB_00045fae;
                    }
                    goto LAB_000456f8;
                  }
                }
                if (*(int *)(iVar25 + 0x28) != 0) {
                  puVar6 = (undefined8 *)(DAT_00045c74 + 0x45ad0);
                  mm_camera_debug_log();
                  in_stack_fffffd34 = puVar4;
                }
                iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                                  ((CameraMetadata *)auStack480,0x800b0000);
                if (iVar8 == 0) {
LAB_00045d10:
                  if (*(int *)(iVar25 + 0x28) != 0) {
                    puVar6 = (undefined8 *)(DAT_000460b0 + 0x45d1c);
                    mm_camera_debug_log();
                  }
                  puVar5 = (undefined8 *)(**(code **)(**(int **)(this + 0x78) + 8))();
                  if ((int)puVar5 < 0) {
                    if (*(int *)(iVar25 + 0x20) != 0) {
                      puVar6 = (undefined8 *)(DAT_000460d8 + 0x45f4c);
                      goto LAB_000456f2;
                    }
                  }
                  else if ((*(int **)(this + 0x88) == (int *)0x0) ||
                          (puVar5 = (undefined8 *)(**(code **)(**(int **)(this + 0x88) + 8))(),
                          -1 < (int)puVar5)) {
                    if ((*(int **)(this + 0x84) == (int *)0x0) ||
                       (puVar5 = (undefined8 *)(**(code **)(**(int **)(this + 0x84) + 8))(),
                       -1 < (int)puVar5)) {
                      android::List<unsigned_int>::begin();
                      android::List<qcamera::ReprocessBuffer>::end();
                      iVar8 = android::List<qcamera::ReprocessBuffer>::
                              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                            *)&local_1d8,(_ListIterator *)&local_230);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_230);
                      if (iVar8 != 0) {
                        puVar4 = (undefined8 *)(DAT_000460b8 + 0x45d9e);
LAB_00045da4:
                        ppiVar10 = (int **)android::List<unsigned_int>::
                                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                           ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_1d8);
                        piVar26 = *(int **)(**ppiVar10 + 0x18);
                        if (*(int *)(iVar25 + 0x28) != 0) {
                          in_stack_fffffd34 = (undefined8 *)(**(code **)(*piVar26 + 0x1c))(piVar26);
                          puVar6 = puVar4;
                          mm_camera_debug_log();
                        }
                        puVar5 = (undefined8 *)(**(code **)(*piVar26 + 8))(piVar26);
                        if (-1 < (int)puVar5) goto code_r0x00045de2;
                        if (*(int *)(iVar25 + 0x20) != 0) {
                          puVar6 = (undefined8 *)(DAT_000474f8 + 0x47204);
LAB_00045baa:
                          mm_camera_debug_log();
                        }
LAB_00045bae:
                        pthread_mutex_unlock(__mutex_00);
                        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                  ((AbstractUnwindCursor *)&local_1d8);
                        goto LAB_000456fc;
                      }
LAB_00045e0e:
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_1d8);
                      if (*(int *)(this + 0x8c) != 0) {
                        if (*(int *)(iVar25 + 0x2c) != 0) {
                          puVar6 = (undefined8 *)(DAT_000460c0 + 0x45e36);
                          mm_camera_debug_log();
                        }
                        puVar5 = (undefined8 *)(**(code **)(**(int **)(this + 0x8c) + 8))();
                        if (puVar5 != (undefined8 *)0x0) {
                          if (*(int *)(iVar25 + 0x20) != 0) {
                            puVar6 = (undefined8 *)(DAT_000460c8 + 0x45e64);
                            mm_camera_debug_log();
                          }
                          android::List<unsigned_int>::begin();
                          android::List<qcamera::ReprocessBuffer>::end();
                          iVar8 = android::List<qcamera::ReprocessBuffer>::
                                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                                *)&local_1d8,(_ListIterator *)&local_230);
                          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                    ((AbstractUnwindCursor *)&local_230);
                          if (iVar8 != 0) {
                            puVar4 = (undefined8 *)(DAT_000460d0 + 0x45eaa);
                            do {
                              ppiVar10 = (int **)android::List<unsigned_int>::
                                                 _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                                 ::operator_((
                                                  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                                  *)&local_1d8);
                              piVar28 = *(int **)(**ppiVar10 + 0x18);
                              if (*(int *)(iVar25 + 0x28) != 0) {
                                in_stack_fffffd34 =
                                     (undefined8 *)(**(code **)(*piVar28 + 0x1c))(piVar28);
                                puVar6 = puVar4;
                                mm_camera_debug_log();
                              }
                              (**(code **)(*piVar28 + 0xc))(piVar28);
                              android::List<unsigned_int>::
                              _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                              ::operator__(a_Stack504,(int)&local_1d8);
                              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                        ((AbstractUnwindCursor *)a_Stack504);
                              android::List<qcamera::ReprocessBuffer>::end();
                              iVar8 = android::List<qcamera::ReprocessBuffer>::
                                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                                      ::operator__((
                                                  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                                  *)&local_1d8,(_ListIterator *)&local_230);
                              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                        ((AbstractUnwindCursor *)&local_230);
                            } while (iVar8 != 0);
                          }
                          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                    ((AbstractUnwindCursor *)&local_1d8);
                          if (*(int **)(this + 0x84) != (int *)0x0) {
                            (**(code **)(**(int **)(this + 0x84) + 0xc))();
                          }
                          if (*(int **)(this + 0x88) == (int *)0x0) goto LAB_00045fd6;
                          (**(code **)(**(int **)(this + 0x88) + 0xc))();
                          piVar28 = *(int **)(this + 0x78);
                          goto LAB_00046032;
                        }
                      }
                      if ((*(int *)(this + 0xdc) == 0) ||
                         (puVar5 = (undefined8 *)
                                   (**(code **)((*(undefined4 **)(this + 0x50))[1] + 100))
                                             (**(undefined4 **)(this + 0x50)),
                         puVar5 == (undefined8 *)0x0)) {
                        QCameraPerfLock::lock_rel(this_00);
                        this[0x214] = (QCamera3HardwareInterface)0x0;
                        *(undefined4 *)(this + 0x210) = 0;
                        this[0x140] = (QCamera3HardwareInterface)0x0;
                        enablePowerHint(this);
                        goto LAB_00046056;
                      }
                      if (*(int *)(iVar25 + 0x20) != 0) {
                        puVar6 = (undefined8 *)(DAT_000460e8 + 0x45fa0);
                        in_stack_fffffd34 = puVar5;
                        goto LAB_00045fae;
                      }
                    }
                    else {
                      if (*(int *)(iVar25 + 0x20) != 0) {
                        puVar6 = (undefined8 *)(DAT_00046100 + 0x4600e);
                        mm_camera_debug_log();
                      }
                      (**(code **)(**(int **)(this + 0x78) + 0xc))();
                      piVar28 = *(int **)(this + 0x88);
                      if (piVar28 != (int *)0x0) goto LAB_00046032;
                    }
                  }
                  else {
                    if (*(int *)(iVar25 + 0x20) != 0) {
                      puVar6 = (undefined8 *)(DAT_000460f0 + 0x45fc6);
                      mm_camera_debug_log();
                    }
LAB_00045fd6:
                    piVar28 = *(int **)(this + 0x78);
LAB_00046032:
                    (**(code **)(*piVar28 + 0xc))();
                  }
                }
                else {
                  uVar24 = 1;
                  uVar11 = 1;
                  if (this[0x117914] == (QCamera3HardwareInterface)0x0) {
                    uVar11 = 2;
                  }
                  **(undefined4 **)(this + 0x11791c) = uVar11;
                  __mutex = *(pthread_mutex_t **)(DAT_00045c78 + 0x45b18);
                  pthread_mutex_lock(__mutex);
                  iVar8 = *(int *)(DAT_00045c7c + 0x45b24);
                  if (*(int *)(iVar8 + (uint)(byte)this[0x117916] * 4) == -0x21524111) {
                    if (*(int *)(iVar25 + 0x20) != 0) {
                      puVar6 = (undefined8 *)(DAT_00045c80 + 0x45b46);
                      mm_camera_debug_log();
                    }
                    pthread_mutex_unlock(__mutex);
                  }
                  else {
                    QVar3 = this[0x117915];
                    *(uint *)(*(int *)(this + 0x11791c) + 8) = (byte)QVar3 ^ 1;
                    if ((byte)QVar3 == 0) {
                      uVar24 = 2;
                    }
                    *(undefined4 *)(*(int *)(this + 0x11791c) + 4) = uVar24;
                    *(undefined4 *)(*(int *)(this + 0x11791c) + 0xc) =
                         *(undefined4 *)(iVar8 + (uint)(byte)this[0x117916] * 4);
                    pthread_mutex_unlock(__mutex);
                    puVar5 = (undefined8 *)
                             (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x90))
                                       (**(undefined4 **)(this + 0x50),
                                        *(undefined4 *)(this + 0x11791c));
                    if (-1 < (int)puVar5) goto LAB_00045d10;
                    if (*(int *)(iVar25 + 0x20) != 0) {
                      puVar6 = (undefined8 *)(DAT_000460f8 + 0x45fee);
                      mm_camera_debug_log();
                    }
                  }
                }
              }
            }
            else {
              puVar5 = (undefined8 *)(**(code **)(*piVar26 + 0x10))(piVar26,this[0x117878]);
              if ((int)puVar5 < 0) {
                if (*(int *)(iVar25 + 0x20) != 0) {
                  puVar6 = (undefined8 *)(DAT_00045ca8 + 0x45c0e);
                  goto LAB_00045fae;
                }
              }
              else {
                puVar5 = (undefined8 *)
                         (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),0);
                if (-1 < (int)puVar5) goto LAB_00045994;
                if (*(int *)(iVar25 + 0x20) != 0) {
                  puVar6 = (undefined8 *)(DAT_00045cb8 + 0x45c4e);
                  goto LAB_00045fae;
                }
              }
            }
          }
          else if (*(int *)(iVar25 + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_00045ca0 + 0x45bee);
            goto LAB_00045fae;
          }
        }
        else if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_00045c98 + 0x45bce);
          goto LAB_00045fae;
        }
      }
      else if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00045928 + 0x458f2);
        goto LAB_000456f2;
      }
    }
    else if (*(int *)(iVar25 + 0x20) != 0) {
      puVar6 = (undefined8 *)(DAT_00045920 + 0x456e6);
LAB_000456f2:
      mm_camera_debug_log();
    }
LAB_000456f8:
    pthread_mutex_unlock(__mutex_00);
LAB_000456fc:
    QCameraPerfLock::lock_rel(this_00);
    goto LAB_0004608c;
  }
LAB_00046056:
  local_1fc = *(undefined8 **)param_1;
  if (this[0x142] != (QCamera3HardwareInterface)0x0) {
    if (*(int *)(*(int *)(DAT_00046108 + 0x46068) + 0x20) != 0) {
      puVar6 = (undefined8 *)(DAT_0004610c + 0x46072);
      mm_camera_debug_log();
    }
    pthread_mutex_unlock(__mutex_00);
    puVar5 = (undefined8 *)0x0;
    goto LAB_0004608c;
  }
  iVar25 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                     ((CameraMetadata *)auStack480,0xc0001);
  if (iVar25 == 0) {
    if ((*piVar28 == 3) || (*(int *)(this + 0x218) == -1)) {
      if (*(int *)(*(int *)(DAT_00046460 + 0x4628e) + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00046464 + 0x46298);
        mm_camera_debug_log();
      }
      pthread_mutex_unlock(__mutex_00);
      puVar5 = (undefined8 *)0xfffffffe;
      goto LAB_0004608c;
    }
    if (*(int *)(*(int *)(DAT_0004643c + 0x4617a) + 0x2c) != 0) {
      puVar6 = (undefined8 *)(DAT_00046440 + 0x46184);
      mm_camera_debug_log();
    }
    local_268 = *(undefined8 **)(this + 0x218);
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_190,auStack480);
    local_268 = (undefined8 *)*local_180;
    *(undefined8 **)(this + 0x218) = local_268;
    if (*(int *)(*(int *)(DAT_00046430 + 0x4613e) + 0x2c) != 0) {
      puVar6 = (undefined8 *)(DAT_00046434 + 0x4614c);
      in_stack_fffffd34 = local_268;
      mm_camera_debug_log();
    }
  }
  iVar25 = *(int *)(DAT_00046448 + 0x461a0);
  if (*(int *)(iVar25 + 0x28) != 0) {
    in_stack_fffffd34 = *(undefined8 **)(param_1 + 0xc);
    puVar6 = (undefined8 *)(DAT_0004644c + 0x461b2);
    mm_camera_debug_log();
  }
  local_1d8 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_264 = (QCamera3HardwareInterface *)0x0;
    local_270 = (undefined8 *)0x0;
    local_254 = 0;
  }
  else {
    iVar8 = 0;
    local_254 = 0;
    uVar15 = 0;
    local_270 = (undefined8 *)0x0;
    local_264 = (QCamera3HardwareInterface *)0x0;
    do {
      iVar27 = *(int *)(param_1 + 0x10);
      iVar16 = *(int *)(iVar27 + iVar8);
      piVar26 = *(int **)(iVar16 + 0x18);
      if (piVar26 == (int *)0x0) {
        __android_log_print();
      }
      else {
        if (*(int *)(iVar16 + 0xc) == 0x21) {
          uVar18 = (**(code **)(*piVar26 + 0x1c))(piVar26);
          local_270 = (undefined8 *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar18);
          local_264 = (QCamera3HardwareInterface *)0x1;
        }
        iVar27 = iVar27 + iVar8;
        if (*(int *)(iVar27 + 0xc) != -1) {
          puVar5 = (undefined8 *)sync_wait();
          close(*(int *)(iVar27 + 0xc));
          if (puVar5 != (undefined8 *)0x0) {
            if (*(int *)(iVar25 + 0x20) != 0) {
              puVar6 = (undefined8 *)(DAT_0004693c + 0x465b8);
              in_stack_fffffd34 = puVar5;
              mm_camera_debug_log();
            }
            pthread_mutex_unlock(__mutex_00);
            goto LAB_0004608c;
          }
        }
        uVar18 = (**(code **)(*piVar26 + 0x1c))(piVar26);
        piVar12 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar18);
        local_1d4[(int)local_1d8 * 2] = piVar12;
        local_1d8 = (undefined8 *)((int)local_1d8 + 1);
        iVar16 = (**(code **)(*piVar26 + 0x1c))(piVar26);
        uVar18 = count_leading_zeroes(iVar16 + -0x10);
        local_254 = local_254 | uVar18 >> 5;
      }
      iVar8 = iVar8 + 0x14;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0xc));
  }
  android::List<qcamera::ReprocessBuffer>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar8 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_190,(_ListIterator *)&local_220);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_220);
  if (iVar8 != 0) {
    do {
      piVar26 = (int *)android::List<unsigned_int>::
                       _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                       operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                  *)&local_190);
      piVar12 = *(int **)(*piVar26 + 0x18);
      uVar15 = (**(code **)(*piVar12 + 0x1c))(piVar12);
      piVar26 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar12,uVar15);
      local_1d4[(int)local_1d8 * 2] = piVar26;
      local_1d8 = (undefined8 *)((int)local_1d8 + 1);
      iVar8 = (**(code **)(*piVar12 + 0x1c))(piVar12);
      android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack512,(int)&local_190);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack512);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar16 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)&local_190,(_ListIterator *)&local_220);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_220);
      uVar15 = count_leading_zeroes(iVar8 + -0x10);
      local_254 = local_254 | uVar15 >> 5;
    } while (iVar16 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_190);
  if (local_264 != (QCamera3HardwareInterface *)0x0) {
    if (**(char ***)(DAT_0004646c + 0x46390) != (char *)0x0) {
      atrace_int(CONCAT44(in_stack_fffffd34,puVar6),**(char ***)(DAT_0004646c + 0x46390),
                 extraout_r1_00);
    }
    if (*(int *)(this + 0x8c) != 0) {
      if (*(int *)(iVar25 + 0x2c) != 0) {
        puVar6 = (undefined8 *)(DAT_00046470 + 0x463aa);
        mm_camera_debug_log();
      }
      piVar26 = *(int **)(this + 0x8c);
      uVar15 = (**(code **)(*piVar26 + 0x1c))(piVar26);
      piVar26 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar15);
      local_1d4[(int)local_1d8 * 2] = piVar26;
      local_1d4[(int)local_1d8 * 2 + 1] = (int *)0xffffffff;
      local_1d8 = (undefined8 *)((int)local_1d8 + 1);
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    if ((((*pQVar20 == (QCamera3HardwareInterface)0x0) || (((local_254 ^ 1) & 1) != 0)) ||
        (this[0x117879] == (QCamera3HardwareInterface)0x0)) &&
       (puVar5 = (undefined8 *)
                 setFrameParameters((camera3_capture_request *)this,(cam_stream_ID_t)param_1,
                                    (int)local_1d8,(uint)local_1d4[0]),
       puVar6 = (undefined8 *)local_1d4[1], in_stack_fffffd34 = (undefined8 *)local_1d4[2],
       (int)puVar5 < 0)) {
      if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00046944 + 0x465e4);
LAB_00044ec4:
        mm_camera_debug_log();
      }
LAB_00044ec8:
      pthread_mutex_unlock(__mutex_00);
      goto LAB_0004608c;
    }
    if (*pQVar20 != (QCamera3HardwareInterface)0x0) {
      if (this[0x117879] == (QCamera3HardwareInterface)0x0) {
        *(undefined4 *)(this + 0x117884) = *(undefined4 *)param_1;
      }
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_0004694c + 0x46604);
          in_stack_fffffd34 = (undefined8 *)0x0;
          mm_camera_debug_log();
          if (*(int *)(iVar25 + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_00046954 + 0x46624);
            mm_camera_debug_log();
          }
        }
        pthread_mutex_unlock(__mutex_00);
        puVar5 = (undefined8 *)0xffffffea;
        goto LAB_0004608c;
      }
      *(undefined4 *)(*(int *)(this + 0x14c) + 0xc4f4) = *(undefined4 *)param_1;
      *(undefined *)(*(int *)(this + 0x14c) + 0x6e) = 1;
    }
    if (this[0x1178c8] != (QCamera3HardwareInterface)0x0) {
      pthread_mutex_unlock(__mutex_00);
      iVar8 = dynamicUpdateMetaStreamInfo();
      if (iVar8 != 0) {
        if (*(int *)(iVar25 + 0x20) == 0) {
          puVar5 = (undefined8 *)0xffffffea;
        }
        else {
          puVar6 = (undefined8 *)(DAT_00046934 + 0x46596);
          mm_camera_debug_log();
          puVar5 = (undefined8 *)0xffffffea;
        }
        goto LAB_0004608c;
      }
      this[0x1178c8] = (QCamera3HardwareInterface)0x0;
      pthread_mutex_lock(__mutex_00);
    }
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 0xc) != -1) {
    puVar5 = (undefined8 *)sync_wait();
    close(*(int *)(*(int *)(param_1 + 8) + 0xc));
    if (puVar5 != (undefined8 *)0x0) {
      if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00046478 + 0x4641c);
        in_stack_fffffd34 = puVar5;
        goto LAB_00044ec4;
      }
      goto LAB_00044ec8;
    }
  }
  if (this[0x3bc] == (QCamera3HardwareInterface)0x0) {
    *(undefined8 **)(this + 0x1178f8) = local_1fc;
  }
  PendingRequestInfo::PendingRequestInfo((PendingRequestInfo *)&local_190);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_204);
  local_190 = local_1fc;
  local_18c = *(undefined4 *)(param_1 + 0xc);
  local_168 = 0;
  uStack356 = 0;
  local_174 = (int)local_264;
  local_188 = local_268;
  local_170 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_160 = (undefined8 *)0x0;
  }
  else {
    local_160 = (undefined8 *)malloc(0x14);
    pauVar13 = *(undefined (**) [16])(param_1 + 8);
    auVar1 = *pauVar13;
    *local_160 = SUB168(auVar1,0);
    local_160[1] = SUB168(auVar1 >> 0x40,0);
    *(undefined4 *)(local_160 + 2) = *(undefined4 *)pauVar13[1];
  }
  puVar4 = local_160;
  local_14c = 0;
  local_150 = 0;
  pCVar21 = (CameraMetadata *)(this + 0x154);
  extractJpegMetadata(this,pCVar21,param_1);
  pQVar23 = (QCamera3HardwareInterface *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                      (aCStack344,pCVar21);
  local_15c = saveRequestSettings(pQVar23,pCVar21,param_1);
  local_146 = 0;
  local_145 = this[0x117941];
  iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack480,0x1000d);
  if (iVar8 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_220,auStack480);
    this[0x3bc] = *local_210[0];
  }
  local_148 = this[0x3bc];
  iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack480,0x10003);
  if (iVar8 == 0) {
    local_144 = this[0x117942];
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_220,auStack480);
    local_144 = *local_210[0];
    this[0x117942] = local_144;
  }
  iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack480,3);
  if (iVar8 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_220,auStack480);
    this[0x3bd] = *local_210[0];
  }
  local_147 = this[0x3bd];
  PendingBuffersInRequest::PendingBuffersInRequest((PendingBuffersInRequest *)&local_220);
  local_220 = local_1fc;
  local_218 = systemTime();
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar5 = (undefined8 *)(DAT_0004695c + 0x467aa);
    iVar8 = 0;
    uVar15 = 0;
    do {
      local_228 = 0;
      local_230._0_4_ = *(uint *)(*(int *)(param_1 + 0x10) + iVar8);
      local_230._4_4_ = 0;
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::push_back(&uStack388);
      PendingBufferInfo::PendingBufferInfo((PendingBufferInfo *)&local_23c);
      local_238 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar8 + 4);
      local_23c = *(int **)(*(int *)(param_1 + 0x10) + iVar8);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::push_back((uint *)local_210);
      puVar7 = local_1fc;
      if (*(int *)(iVar25 + 0x2c) != 0) {
        (**(code **)(*(int *)local_23c[6] + 0x1c))();
        puVar6 = puVar5;
        mm_camera_debug_log();
        in_stack_fffffd34 = puVar7;
      }
      iVar8 = iVar8 + 0x14;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0xc));
  }
  android::List<qcamera::PendingBuffersInRequest>::push_back((uint *)(this + 0x204));
  if (*(int *)(iVar25 + 0x2c) != 0) {
    in_stack_fffffd34 = (undefined8 *)PendingBuffersMap::get_num_overall_buffers();
    puVar6 = (undefined8 *)(DAT_00046964 + 0x46850);
    mm_camera_debug_log();
  }
  android::List<qcamera::ReprocessBuffer>::end();
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::insert
            ((_ListIterator)&local_230,(uint *)(this + 0x198));
  local_204 = (uint)local_230;
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack576);
  if (this[0x141] == (QCamera3HardwareInterface)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 0x24))(*(int **)(this + 0x78),0,local_1fc,&local_23c);
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(iVar25 + 0x2c) != 0) {
        puVar6 = (undefined8 *)(DAT_00046974 + 0x468e8);
        in_stack_fffffd34 = local_1fc;
        mm_camera_debug_log();
      }
      puVar5 = (undefined8 *)
               setReprocParameters(this,param_1,(metadata_buffer_t *)(this + 0x3c0),(uint)local_270)
      ;
      if (puVar5 != (undefined8 *)0x0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_0004697c + 0x46918);
          mm_camera_debug_log();
        }
        pthread_mutex_unlock(__mutex_00);
        goto LAB_000474c6;
      }
    }
    android::List<qcamera::ReprocessBuffer>::
    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                  *)&local_204);
    android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
    if (*(int *)(param_1 + 0xc) == 0) {
      local_264 = (QCamera3HardwareInterface *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(this + 0x3c0);
      puVar17 = (undefined8 *)(DAT_00046d00 + 0x469a8);
      uVar15 = 0;
      local_264 = (QCamera3HardwareInterface *)0x0;
      do {
        iVar16 = *(int *)(param_1 + 0x10);
        iVar8 = *(int *)(iVar16 + uVar15 * 0x14);
        piVar26 = *(int **)(iVar8 + 0x18);
        if (piVar26 == (int *)0x0) {
          if (*(int *)(iVar25 + 0x24) != 0) {
            puVar6 = puVar17;
            mm_camera_debug_log();
          }
        }
        else {
          iVar8 = *(int *)(iVar8 + 0xc);
          if (iVar8 == 0x23) {
            local_230._0_4_ = (uint)local_230 & 0xffffff00;
            puVar6 = puVar7;
            if (puVar4 == (undefined8 *)0x0) {
              puVar6 = *(undefined8 **)(this + 0x14c);
            }
            in_stack_fffffd34 = &local_230;
            puVar5 = (undefined8 *)
                     (**(code **)(*piVar26 + 0x4c))
                               (piVar26,*(undefined4 *)(iVar16 + uVar15 * 0x14 + 4),local_1fc);
            if ((int)puVar5 < 0) {
              if (*(int *)(iVar25 + 0x20) != 0) {
                puVar6 = (undefined8 *)(DAT_00047510 + 0x471c8);
LAB_00047298:
                mm_camera_debug_log();
              }
LAB_0004729c:
              pthread_mutex_unlock(__mutex_00);
              goto LAB_000474c0;
            }
            uVar18 = (**(code **)(*piVar26 + 0x1c))(piVar26);
            piVar26 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar18);
            if (local_1d8 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)0x0;
            }
            else {
              puVar5 = (undefined8 *)0x0;
              do {
                if (local_1d4[(int)puVar5 * 2] == piVar26) {
                  piVar26 = local_23c;
                  if (this[0x117880] == (QCamera3HardwareInterface)0x1) {
                    piVar26 = (int *)0xffffffff;
                  }
                  local_1d4[(int)puVar5 * 2 + 1] = piVar26;
                  break;
                }
                puVar5 = (undefined8 *)((int)puVar5 + 1);
              } while (puVar5 < local_1d8);
            }
            if ((puVar5 == local_1d8) && (*(int *)(iVar25 + 0x20) != 0)) {
              puVar6 = (undefined8 *)(DAT_00046d28 + 0x46bfc);
              mm_camera_debug_log();
            }
            iVar8 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__(a_Stack580);
            *(undefined *)(iVar8 + 8) = (undefined)local_230;
            puVar5 = (undefined8 *)((uint)local_230 & 0xff);
            local_264 = local_264 + (int)puVar5;
            if (*(int *)(iVar25 + 0x2c) != 0) {
              puVar6 = (undefined8 *)(DAT_00046d30 + 0x46c30);
              mm_camera_debug_log();
              in_stack_fffffd34 = puVar5;
            }
          }
          else if (iVar8 == 0x21) {
            if (*(int *)(iVar25 + 0x2c) != 0) {
              mm_camera_debug_log();
            }
            if (*(int *)(param_1 + 8) == 0) {
              if (*(int *)(iVar25 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              if (*(int *)(param_1 + 4) == 0) {
                pcVar19 = *(code **)(*piVar26 + 0x28);
                puVar6 = *(undefined8 **)(this + 0x150);
              }
              else {
                pcVar19 = *(code **)(*piVar26 + 0x28);
                puVar6 = *(undefined8 **)(this + 0x14c);
              }
              in_stack_fffffd34 = (undefined8 *)&local_23c;
              puVar5 = (undefined8 *)
                       (*pcVar19)(piVar26,*(undefined4 *)(iVar16 + uVar15 * 0x14 + 4),local_1fc,0,
                                  puVar6,in_stack_fffffd34,0,0);
              if ((int)puVar5 < 0) {
                if (*(int *)(iVar25 + 0x20) != 0) {
                  puVar6 = (undefined8 *)(DAT_00047508 + 0x4728c);
                  goto LAB_00047298;
                }
                goto LAB_0004729c;
              }
              uVar18 = (**(code **)(*piVar26 + 0x1c))(piVar26);
              piVar26 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar18);
              if (local_1d8 == (undefined8 *)0x0) {
                puVar5 = (undefined8 *)0x0;
              }
              else {
                puVar5 = (undefined8 *)0x0;
                do {
                  if (local_1d4[(int)puVar5 * 2] == piVar26) {
                    piVar26 = local_23c;
                    if (this[0x117880] == (QCamera3HardwareInterface)0x1) {
                      piVar26 = (int *)0xffffffff;
                    }
                    local_1d4[(int)puVar5 * 2 + 1] = piVar26;
                    break;
                  }
                  puVar5 = (undefined8 *)((int)puVar5 + 1);
                } while (puVar5 < local_1d8);
              }
              if ((puVar5 == local_1d8) && (*(int *)(iVar25 + 0x20) != 0)) {
                puVar6 = (undefined8 *)(DAT_00046d38 + 0x46cc0);
                mm_camera_debug_log();
              }
              iVar8 = android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__(a_Stack580);
              *(undefined *)(iVar8 + 8) = 1;
              local_264 = local_264 + 1;
            }
            else {
              in_stack_fffffd34 = (undefined8 *)&local_23c;
              puVar6 = puVar7;
              puVar5 = (undefined8 *)
                       (**(code **)(*piVar26 + 0x28))
                                 (piVar26,*(undefined4 *)(iVar16 + uVar15 * 0x14 + 4),local_1fc,
                                  puVar4,puVar7,in_stack_fffffd34,0,0);
              if ((undefined8 *)0x7fffffff < puVar5) {
                if (*(int *)(iVar25 + 0x20) != 0) {
                  puVar6 = (undefined8 *)(DAT_00047500 + 0x4723e);
                  mm_camera_debug_log();
                }
                pthread_mutex_unlock(__mutex_00);
                goto LAB_000474c0;
              }
            }
          }
          else {
            if (*(int *)(iVar25 + 0x2c) != 0) {
              in_stack_fffffd34 = *(undefined8 **)(iVar16 + uVar15 * 0x14 + 4);
              puVar6 = (undefined8 *)(DAT_00046d10 + 0x46ad6);
              mm_camera_debug_log();
            }
            puVar5 = (undefined8 *)
                     (**(code **)(*piVar26 + 0x24))
                               (piVar26,*(undefined4 *)(iVar16 + uVar15 * 0x14 + 4),local_1fc,
                                &local_23c);
            uVar18 = (**(code **)(*piVar26 + 0x1c))(piVar26);
            piVar12 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar18);
            if (local_1d8 == (undefined8 *)0x0) {
              puVar22 = (undefined8 *)0x0;
            }
            else {
              puVar22 = (undefined8 *)0x0;
              do {
                if (local_1d4[(int)puVar22 * 2] == piVar12) {
                  piVar12 = local_23c;
                  if (this[0x117880] == (QCamera3HardwareInterface)0x1) {
                    piVar12 = (int *)0xffffffff;
                  }
                  local_1d4[(int)puVar22 * 2 + 1] = piVar12;
                  break;
                }
                puVar22 = (undefined8 *)((int)puVar22 + 1);
              } while (puVar22 < local_1d8);
            }
            if ((puVar22 == local_1d8) && (*(int *)(iVar25 + 0x20) != 0)) {
              puVar6 = (undefined8 *)(DAT_00046d20 + 0x46ba6);
              mm_camera_debug_log();
            }
            iVar8 = (**(code **)(*piVar26 + 0x1c))(piVar26);
            if (((iVar8 == 0x10) && (*pQVar20 != (QCamera3HardwareInterface)0x0)) &&
               (QVar3 = this[0x117879],
               this[0x117879] = (QCamera3HardwareInterface)((char)QVar3 + 1U),
               (QCamera3HardwareInterface)((char)QVar3 + 1U) == *pQVar20)) {
              (**(code **)(*piVar26 + 0x14))(piVar26);
            }
            if ((undefined8 *)0x7fffffff < puVar5) {
              if (*(int *)(iVar25 + 0x20) != 0) {
                puVar6 = (undefined8 *)(DAT_00047518 + 0x471e4);
                goto LAB_00047298;
              }
              goto LAB_0004729c;
            }
          }
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
          _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
          ::operator__(a_Stack584,(int)a_Stack580);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack584)
          ;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0xc));
    }
    android::List<qcamera::ReprocessBuffer>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar8 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__(a_Stack588,(_ListIterator *)&local_230);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
    if (iVar8 != 0) {
      do {
        piVar26 = (int *)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                      *)a_Stack588);
        piVar26 = *(int **)(*piVar26 + 0x18);
        if (piVar26 == (int *)0x0) {
          if (*(int *)(iVar25 + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_000474e8 + 0x47180);
            mm_camera_debug_log();
          }
          puVar5 = (undefined8 *)0xffffffea;
LAB_00047278:
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack588)
          ;
          goto LAB_000474c0;
        }
        puVar14 = (uint *)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack588);
        local_230._0_4_ = *puVar14;
        local_230._4_4_ = puVar14[1];
        piVar12 = (int *)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                      *)a_Stack588);
        if (*(int *)(*piVar12 + 0xc) != 0x21) {
          if (*(int *)(iVar25 + 0x20) != 0) {
            puVar6 = (undefined8 *)(DAT_000474f0 + 0x471a2);
            mm_camera_debug_log();
          }
          puVar5 = (undefined8 *)0xffffffda;
          goto LAB_00047278;
        }
        if (*(int *)(iVar25 + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        if (*(int *)(param_1 + 8) == 0) {
          if (*(int *)(iVar25 + 0x2c) != 0) {
            mm_camera_debug_log();
          }
          if (*(int *)(param_1 + 4) == 0) {
            pcVar19 = *(code **)(*piVar26 + 0x28);
            puVar6 = *(undefined8 **)(this + 0x150);
          }
          else {
            pcVar19 = *(code **)(*piVar26 + 0x28);
            puVar6 = *(undefined8 **)(this + 0x14c);
          }
          in_stack_fffffd34 = (undefined8 *)&local_23c;
          puVar5 = (undefined8 *)
                   (*pcVar19)(piVar26,0,local_1fc,0,puVar6,in_stack_fffffd34,1,
                              local_230._4_4_ >> 8 & 0xff);
          if ((int)puVar5 < 0) {
            if (*(int *)(iVar25 + 0x20) != 0) {
              puVar6 = (undefined8 *)(DAT_00047528 + 0x47262);
              goto LAB_0004726e;
            }
            goto LAB_00047272;
          }
          iVar8 = android::List<unsigned_int>::
                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                  operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                             *)a_Stack588);
          if (*(char *)(iVar8 + 5) != '\x01') {
            local_230._4_4_ = CONCAT31(local_230._5_3_,1);
            local_264 = local_264 + 1;
          }
        }
        else {
          in_stack_fffffd34 = (undefined8 *)&local_23c;
          puVar6 = (undefined8 *)(this + 0x3c0);
          puVar5 = (undefined8 *)
                   (**(code **)(*piVar26 + 0x28))
                             (piVar26,0,local_1fc,puVar4,this + 0x3c0,in_stack_fffffd34,1,
                              local_230._4_4_ >> 8 & 0xff);
          if ((undefined8 *)0x7fffffff < puVar5) {
            if (*(int *)(iVar25 + 0x20) != 0) {
              puVar6 = (undefined8 *)(DAT_00047520 + 0x47222);
LAB_0004726e:
              mm_camera_debug_log();
            }
LAB_00047272:
            pthread_mutex_unlock(__mutex_00);
            goto LAB_00047278;
          }
        }
        uVar15 = (**(code **)(*piVar26 + 0x1c))(piVar26);
        piVar26 = (int *)QCamera3Channel::getStreamID((QCamera3Channel *)piVar26,uVar15);
        if (local_1d8 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          puVar5 = (undefined8 *)0x0;
          do {
            if (local_1d4[(int)puVar5 * 2] == piVar26) {
              piVar26 = local_23c;
              if (this[0x117880] == (QCamera3HardwareInterface)0x1) {
                piVar26 = (int *)0xffffffff;
              }
              local_1d4[(int)puVar5 * 2 + 1] = piVar26;
              break;
            }
            puVar5 = (undefined8 *)((int)puVar5 + 1);
          } while (puVar5 < local_1d8);
        }
        if ((puVar5 == local_1d8) && (*(int *)(iVar25 + 0x20) != 0)) {
          puVar6 = (undefined8 *)(DAT_0004714c + 0x46ec6);
          mm_camera_debug_log();
        }
        iVar8 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_204);
        android::List<qcamera::ReprocessBuffer>::push_back((uint *)(iVar8 + 0x14));
        android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
        _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack592,
                     (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)a_Stack588);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack592);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar8 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)a_Stack588,(_ListIterator *)&local_230);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
      } while (iVar8 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack588);
    if (local_264 < (QCamera3HardwareInterface *)0x2) {
      if (*(int *)(param_1 + 8) == 0) {
        puVar5 = (undefined8 *)(uint)(byte)*pQVar20;
        if (((puVar5 == (undefined8 *)0x0) || (((local_254 ^ 1) & 1) != 0)) ||
           ((undefined8 *)(uint)(byte)this[0x117879] == puVar5)) {
          if (*(int *)(iVar25 + 0x2c) != 0) {
            puVar6 = (undefined8 *)(DAT_0004715c + 0x46fa0);
            mm_camera_debug_log();
            in_stack_fffffd34 = puVar5;
          }
          uVar15 = count_leading_zeroes((uint)(byte)*pQVar20);
          if ((((uVar15 >> 5 | local_254 ^ 1) & 1) == 0) &&
             ((uint)(byte)this[0x117879] == (uint)(byte)*pQVar20)) {
            if (local_1d8 != (undefined8 *)0x0) {
              puVar5 = (undefined8 *)0x0;
              do {
                uVar15 = *(uint *)(this + 0x1bc);
                if (uVar15 == 0) {
                  uVar15 = 0;
LAB_00047026:
                  piVar26 = local_1d4[(int)puVar5 * 2 + 1];
                  *(int **)(this + uVar15 * 8 + 0x1c0) = local_1d4[(int)puVar5 * 2];
                  *(int **)(this + uVar15 * 8 + 0x1c4) = piVar26;
                  *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) + 1;
                }
                else if (local_1d4[(int)puVar5 * 2] == *(int **)(this + 0x1c0)) {
                  if (uVar15 == 0) goto LAB_00047026;
                }
                else {
                  iVar8 = 0x39;
                  do {
                    uVar15 = *(uint *)(this + 0x1bc);
                    uVar18 = iVar8 - 0x38;
                    if (uVar15 <= uVar18) break;
                    iVar16 = iVar8 * 8;
                    iVar8 = iVar8 + 1;
                  } while (local_1d4[(int)puVar5 * 2] != *(int **)(this + iVar16));
                  if (uVar18 == uVar15) goto LAB_00047026;
                }
                puVar5 = (undefined8 *)((int)puVar5 + 1);
              } while (puVar5 < local_1d8);
            }
            __aeabi_memcpy8(&local_1d8,this + 0x1bc,0x44);
          }
          if (*(int *)(this + 0x14c) == 0) {
            if (*(int *)(iVar25 + 0x20) != 0) {
              puVar6 = (undefined8 *)(DAT_00047530 + 0x472b6);
              in_stack_fffffd34 = (undefined8 *)0x0;
              mm_camera_debug_log();
              if (*(int *)(iVar25 + 0x20) != 0) {
                puVar6 = (undefined8 *)(DAT_00047538 + 0x472da);
                mm_camera_debug_log();
                puVar5 = (undefined8 *)0xffffffea;
                goto LAB_000474c0;
              }
            }
            puVar5 = (undefined8 *)0xffffffea;
            goto LAB_000474c0;
          }
          __aeabi_memcpy8((void *)(*(int *)(this + 0x14c) + 0x73654),&local_1d8,0x44);
          *(undefined *)(*(int *)(this + 0x14c) + 0xa1) = 1;
          if (local_1d8 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)0x0;
            puVar7 = (undefined8 *)(DAT_00047164 + 0x4708a);
            do {
              if (*(int *)(iVar25 + 0x28) != 0) {
                in_stack_fffffd34 = (undefined8 *)local_1d4[(int)puVar5 * 2];
                puVar6 = puVar7;
                mm_camera_debug_log();
              }
              puVar5 = (undefined8 *)((int)puVar5 + 1);
            } while (puVar5 < local_1d8);
          }
          uVar15 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x18))
                             (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
          if ((0x7fffffff < uVar15) && (*(int *)(iVar25 + 0x20) != 0)) {
            puVar6 = (undefined8 *)(DAT_0004716c + 0x470d8);
            mm_camera_debug_log();
          }
          this[0x117879] = (QCamera3HardwareInterface)0x0;
          android::KeyedVector<unsigned_int,unsigned_int>::add
                    ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8),(uint *)&local_1fc,
                     (uint *)(this + 0x117884));
          *(undefined4 *)(this + 0x1fc) = 0;
          *(undefined8 *)(this + 0x1ec) = 0;
          *(undefined8 *)(this + 500) = 0;
          *(undefined8 *)(this + 0x1dc) = 0;
          *(undefined8 *)(this + 0x1e4) = 0;
          *(undefined8 *)(this + 0x1cc) = 0;
          *(undefined8 *)(this + 0x1d4) = 0;
          *(undefined8 *)(this + 0x1bc) = 0;
          *(undefined8 *)(this + 0x1c4) = 0;
        }
        else {
          puVar7 = puVar5;
          if ((undefined8 *)(uint)(byte)this[0x117879] != puVar5) {
            puVar7 = local_1d8;
          }
          if ((undefined8 *)(uint)(byte)this[0x117879] != puVar5 && puVar7 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)0x0;
            do {
              uVar15 = *(uint *)(this + 0x1bc);
              if (uVar15 == 0) {
                uVar15 = 0;
LAB_0004734c:
                piVar26 = local_1d4[(int)puVar5 * 2 + 1];
                *(int **)(this + uVar15 * 8 + 0x1c0) = local_1d4[(int)puVar5 * 2];
                *(int **)(this + uVar15 * 8 + 0x1c4) = piVar26;
                *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) + 1;
              }
              else if (local_1d4[(int)puVar5 * 2] == *(int **)(this + 0x1c0)) {
                if (uVar15 == 0) goto LAB_0004734c;
              }
              else {
                iVar8 = 0x39;
                do {
                  uVar15 = *(uint *)(this + 0x1bc);
                  uVar18 = iVar8 - 0x38;
                  if (uVar15 <= uVar18) break;
                  iVar16 = iVar8 * 8;
                  iVar8 = iVar8 + 1;
                } while (local_1d4[(int)puVar5 * 2] != *(int **)(this + iVar16));
                if (uVar18 == uVar15) goto LAB_0004734c;
              }
              puVar5 = (undefined8 *)((int)puVar5 + 1);
            } while (puVar5 < local_1d8);
          }
        }
        *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
      }
      if (*(int *)(iVar25 + 0x2c) != 0) {
        in_stack_fffffd34 = *(undefined8 **)(this + 0x210);
        puVar6 = (undefined8 *)(DAT_00047540 + 0x47386);
        mm_camera_debug_log();
      }
      *piVar28 = 4;
      puVar5 = (undefined8 *)clock_gettime(1,(timespec *)&local_230);
      if ((int)puVar5 < 0) {
        if (*(int *)(iVar25 + 0x20) != 0) {
          puVar6 = (undefined8 *)(DAT_00047548 + 0x473c6);
          mm_camera_debug_log();
        }
        bVar2 = false;
      }
      else {
        local_230._0_4_ = (uint)local_230 + 5;
        bVar2 = true;
      }
      if ((puVar4 == (undefined8 *)0x0) && (*(uint *)(this + 0x1178cc) <= *(uint *)(this + 0x210)))
      {
        puVar4 = (undefined8 *)(DAT_00047550 + 0x473f2);
        puVar17 = (undefined8 *)(DAT_00047558 + 0x473fc);
        puVar7 = (undefined8 *)(DAT_0004755c + 0x47400);
        while (1 < *piVar28 - 5U) {
          if (bVar2) {
            if (*(int *)(iVar25 + 0x2c) != 0) {
              puVar6 = puVar7;
              mm_camera_debug_log();
            }
            puVar5 = (undefined8 *)
                     pthread_cond_timedwait
                               ((pthread_cond_t *)(this + 0x20c),__mutex_00,(timespec *)&local_230);
            if (puVar5 == (undefined8 *)0x6e) {
              if (*(int *)(iVar25 + 0x20) != 0) {
                puVar6 = (undefined8 *)(DAT_00047560 + 0x474a2);
                mm_camera_debug_log();
              }
              puVar5 = (undefined8 *)0xffffffed;
              break;
            }
          }
          else {
            if (*(int *)(iVar25 + 0x2c) != 0) {
              puVar6 = puVar4;
              mm_camera_debug_log();
            }
            pthread_cond_wait((pthread_cond_t *)(this + 0x20c),__mutex_00);
          }
          if (*(int *)(iVar25 + 0x2c) != 0) {
            puVar6 = puVar17;
            mm_camera_debug_log();
          }
          if (((this[0x214] != (QCamera3HardwareInterface)0x0) &&
              (this[0x214] = (QCamera3HardwareInterface)0x0,
              *(uint *)(this + 0x210) < *(uint *)(this + 0x1178d0))) ||
             (*(uint *)(this + 0x210) < *(uint *)(this + 0x1178cc))) break;
        }
      }
      pthread_mutex_unlock(__mutex_00);
    }
    else {
      if (*(int *)(iVar25 + 0x20) != 0) {
        puVar6 = (undefined8 *)(DAT_00047154 + 0x46f30);
        mm_camera_debug_log();
      }
      pthread_mutex_unlock(__mutex_00);
      puVar5 = (undefined8 *)0xffffffea;
    }
LAB_000474c0:
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack580);
  }
  else {
    if (*(int *)(iVar25 + 0x34) != 0) {
      puVar6 = (undefined8 *)(DAT_0004696c + 0x468a4);
      mm_camera_debug_log();
    }
    pthread_mutex_unlock(__mutex_00);
    puVar5 = (undefined8 *)0x0;
  }
LAB_000474c6:
  PendingBuffersInRequest::_PendingBuffersInRequest((PendingBuffersInRequest *)&local_220);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_204);
  PendingRequestInfo::_PendingRequestInfo((PendingRequestInfo *)&local_190);
LAB_0004608c:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)auStack480);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack488,CONCAT44(in_stack_fffffd34,puVar6),extraout_r1);
  if (*piVar29 == local_28) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00045de2:
  android::List<unsigned_int>::
  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
            (a_Stack500,(int)&local_1d8);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack500);
  android::List<qcamera::ReprocessBuffer>::end();
  iVar8 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_1d8,(_ListIterator *)&local_230);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_230);
  if (iVar8 == 0) goto LAB_00045e0e;
  goto LAB_00045da4;
}

