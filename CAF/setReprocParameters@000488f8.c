
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::setReprocParameters(camera3_capture_request*,
   metadata_buffer_t*, unsigned int) */

int __thiscall
qcamera::QCamera3HardwareInterface::setReprocParameters
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,
          metadata_buffer_t *param_2,uint param_3)

{
  undefined auVar1 [16];
  longlong lVar2;
  undefined auVar3 [12];
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  CameraMetadata *this_00;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  CameraMetadata aCStack364 [16];
  int local_15c;
  uint auStack344 [2];
  undefined4 local_150;
  undefined4 uStack332;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  int local_28;
  
  piVar10 = *(int **)(DAT_00048bb4 + 0x48906);
  local_28 = *piVar10;
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = *(int *)(*(int *)(DAT_00048bcc + 0x48a76) + 0x20);
  }
  else {
    if (param_2 != (metadata_buffer_t *)0x0) {
      clear_metadata_buffer(param_2);
      *(undefined4 *)(param_2 + 0xc4f4) = *(undefined4 *)param_1;
      param_2[0x6e] = (metadata_buffer_t)0x1;
      iVar6 = translateToHalMetadata(this,param_1,param_2,param_3);
      if (iVar6 < 0) {
        if (*(int *)(*(int *)(DAT_00048c00 + 0x48b3c) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        goto LAB_00048fc4;
      }
      this_00 = (CameraMetadata *)
                android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                          ((CameraMetadata *)auStack344);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                (this_00,*(camera_metadata **)(param_1 + 4));
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x80030000);
      if ((iVar7 == 0) ||
         (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            ((CameraMetadata *)auStack344,0x80030001), iVar7 == 0)) {
        iVar7 = *(int *)(*(int *)(DAT_00048be4 + 0x48ac0) + 0x20);
joined_r0x00048ac2:
        if (iVar7 != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        piVar4 = (int *)(undefined (*) [16])local_140;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        puVar5 = (undefined4 *)(undefined (*) [16])local_140;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        if (6 < *piVar4 - 1U) {
          iVar7 = *(int *)(*(int *)(DAT_00049010 + 0x48fea) + 0x20);
          goto joined_r0x00048ac2;
        }
        __aeabi_memclr4(&local_150,0x124);
        local_150 = CONCAT31(local_150._1_3_,1);
        local_148 = *puVar5;
        local_144 = puVar5[1];
        local_140 = *(ulonglong *)(puVar5 + 2);
        local_138 = *(longlong *)(undefined (*) [16])local_140;
        local_130 = *(undefined4 *)((int)(undefined (*) [16])local_140 + 8);
        local_12c = *(undefined4 *)((int)(undefined (*) [16])local_140 + 0xc);
        __aeabi_memcpy8(param_2 + 0x2278,&local_150,0x124);
        param_2[0x3b] = (metadata_buffer_t)0x1;
        iVar7 = *(int *)(DAT_00048bb8 + 0x48a0e);
        if ((*(int *)(iVar7 + 0x2c) != 0) && (mm_camera_debug_log(), *(int *)(iVar7 + 0x2c) != 0)) {
          mm_camera_debug_log();
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x40002);
      if (iVar7 == 0) {
        if (*(int *)(*(int *)(DAT_00048c0c + 0x48b62) + 0x28) != 0) {
LAB_00048b78:
          mm_camera_debug_log();
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        iVar7 = lookupHalName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_flash_mode_cam_flash_mode_t__
                          (*(QCameraMap **)(DAT_00048bf0 + 0x48afe),3,
                           (uint)*(byte *)(undefined (*) [16])local_140);
        if (iVar7 == -2) {
          if (*(int *)(*(int *)(DAT_00048bf4 + 0x48b0e) + 0x20) != 0) {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                      ((CameraMetadata *)&local_150,auStack344);
            goto LAB_00048b78;
          }
        }
        else {
          *(int *)(param_2 + 0xc628) = iVar7;
          param_2[0x9c] = (metadata_buffer_t)0x1;
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x40005);
      if (iVar7 == 0) {
        if (*(int *)(*(int *)(DAT_00048fd8 + 0x48c1e) + 0x28) != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        *(uint *)(param_2 + 0xc62c) = (uint)*(byte *)(undefined (*) [16])local_140;
        param_2[0x80] = (metadata_buffer_t)0x1;
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x800d0000);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        param_2[0x76c65] = *(metadata_buffer_t *)(undefined (*) [16])local_140;
        param_2[0xde] = (metadata_buffer_t)0x1;
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x800d0001);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        auVar1 = *(undefined (*) [16])local_140;
        uVar11 = *(undefined8 *)((undefined (*) [16])local_140)[1];
        uVar12 = *(undefined8 *)(((undefined (*) [16])local_140)[1] + 8);
        *(undefined4 *)(param_2 + 0x72fe8) = *(undefined4 *)((undefined (*) [16])local_140)[2];
        param_2[0xbf] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0x72fc8) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x72fd0) = SUB168(auVar1 >> 0x40,0);
        *(undefined8 *)(param_2 + 0x72fd8) = uVar11;
        *(undefined8 *)(param_2 + 0x72fe0) = uVar12;
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[3] + 4);
        uVar11 = *(undefined8 *)(((undefined (*) [16])local_140)[2] + 4);
        uVar12 = *(undefined8 *)(((undefined (*) [16])local_140)[2] + 0xc);
        *(undefined4 *)(param_2 + 0x7300c) = *(undefined4 *)(((undefined (*) [16])local_140)[4] + 4)
        ;
        param_2[0xc0] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0x72ffc) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x73004) = SUB168(auVar1 >> 0x40,0);
        *(undefined8 *)(param_2 + 0x72fec) = uVar11;
        *(undefined8 *)(param_2 + 0x72ff4) = uVar12;
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[4] + 8);
        uVar11 = *(undefined8 *)(((undefined (*) [16])local_140)[5] + 8);
        uVar12 = *(undefined8 *)((undefined (*) [16])local_140)[6];
        *(undefined4 *)(param_2 + 0x73030) = *(undefined4 *)(((undefined (*) [16])local_140)[6] + 8)
        ;
        param_2[0xc1] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x73020) = uVar11;
        *(undefined8 *)(param_2 + 0x73028) = uVar12;
        *(longlong *)(param_2 + 0x73010) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x73018) = SUB168(auVar1 >> 0x40,0);
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[6] + 0xc);
        uVar11 = *(undefined8 *)(((undefined (*) [16])local_140)[7] + 0xc);
        uVar12 = *(undefined8 *)(((undefined (*) [16])local_140)[8] + 4);
        *(undefined4 *)(param_2 + 0x73054) =
             *(undefined4 *)(((undefined (*) [16])local_140)[8] + 0xc);
        param_2[0xc2] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x73044) = uVar11;
        *(undefined8 *)(param_2 + 0x7304c) = uVar12;
        *(longlong *)(param_2 + 0x73034) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x7303c) = SUB168(auVar1 >> 0x40,0);
        *(undefined4 *)(param_2 + 0x72fc4) = *(undefined4 *)((undefined (*) [16])local_140)[9];
        param_2[0xbe] = (metadata_buffer_t)0x1;
        *(undefined4 *)(param_2 + 0x76bf0) = *(undefined4 *)(((undefined (*) [16])local_140)[9] + 4)
        ;
        param_2[0xc5] = (metadata_buffer_t)0x1;
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[10] + 4);
        *(undefined4 *)(param_2 + 0xc5e4) =
             *(undefined4 *)(((undefined (*) [16])local_140)[0xb] + 4);
        param_2[0x74] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0xc5d4) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0xc5dc) = SUB168(auVar1 >> 0x40,0);
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[0xb] + 8);
        uVar11 = *(undefined8 *)(((undefined (*) [16])local_140)[0xc] + 8);
        uVar12 = *(undefined8 *)((undefined (*) [16])local_140)[0xd];
        uVar13 = *(undefined8 *)(((undefined (*) [16])local_140)[0xd] + 8);
        uVar14 = *(undefined8 *)((undefined (*) [16])local_140)[0xe];
        param_2[0xd0] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x76c48) = uVar13;
        *(undefined8 *)(param_2 + 0x76c50) = uVar14;
        *(undefined8 *)(param_2 + 0x76c38) = uVar11;
        *(undefined8 *)(param_2 + 0x76c40) = uVar12;
        *(longlong *)(param_2 + 0x76c28) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x76c30) = SUB168(auVar1 >> 0x40,0);
        if (param_2[0x38] == (metadata_buffer_t)0x0) {
          uVar11 = *(undefined8 *)(((undefined (*) [16])local_140)[9] + 8);
          *(undefined4 *)(param_2 + 0x7475c) = *(undefined4 *)((undefined (*) [16])local_140)[10];
          param_2[0x38] = (metadata_buffer_t)0x1;
          *(undefined8 *)(param_2 + 0x74754) = uVar11;
        }
        else if (*(int *)(*(int *)(DAT_0004901c + 0x48df2) + 0x2c) != 0) {
          mm_camera_debug_log();
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack344,0x800e0000);
      if ((iVar7 != 0) &&
         (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            ((CameraMetadata *)auStack344,0x800e0001), iVar7 != 0)) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)&local_150,auStack344);
        if (*(char *)(undefined (*) [16])local_140 == '\x01') {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                    ((CameraMetadata *)&local_150,auStack344);
          local_138 = 0;
          local_130 = 0;
          local_150 = 0;
          uStack332 = *(undefined4 *)*(undefined (*) [12])(undefined (*) [16])local_140;
          local_148 = *(undefined4 *)(*(undefined (*) [12])(undefined (*) [16])local_140 + 4);
          lVar2 = *(longlong *)*(undefined (*) [12])(undefined (*) [16])local_140;
          local_144 = *(undefined4 *)(*(undefined (*) [12])(undefined (*) [16])local_140 + 8);
          auVar3 = *(undefined (*) [12])(undefined (*) [16])local_140;
          if (param_2[0xc2] != (metadata_buffer_t)0x0) {
            local_130 = *(undefined4 *)(param_2 + 0x73044);
            local_138 = (ulonglong)*(uint *)(param_2 + 0x73040) << 0x20;
          }
          local_140 = (ulonglong)
                      *(uint *)*(undefined (*) [12])((int)(undefined (*) [16])local_140 + 0xc);
          *(undefined4 *)(param_2 + 0x76c88) = local_130;
          *(longlong *)(param_2 + 0x76c68) = lVar2 << 0x20;
          *(longlong *)(param_2 + 0x76c70) = SUB128(auVar3 >> 0x20,0);
          *(ulonglong *)(param_2 + 0x76c78) = local_140;
          *(longlong *)(param_2 + 0x76c80) = local_138;
          param_2[0xdf] = (metadata_buffer_t)0x1;
          iVar7 = *(int *)(DAT_00049028 + 0x48f04);
          if ((*(int *)(iVar7 + 0x28) != 0) && (mm_camera_debug_log(), *(int *)(iVar7 + 0x28) != 0))
          {
            mm_camera_debug_log();
          }
          iVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            ((CameraMetadata *)auStack344,0x800e0002);
          if (iVar8 != 0) {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                      (aCStack364,auStack344);
            uVar9 = *(undefined4 *)(local_15c + 8);
            *(undefined4 *)(param_2 + 0x76c90) = *(undefined4 *)(local_15c + 0xc);
            *(undefined4 *)(param_2 + 0x76c8c) = uVar9;
            param_2[0xe0] = (metadata_buffer_t)0x1;
            if (*(int *)(iVar7 + 0x28) != 0) {
              mm_camera_debug_log();
            }
          }
        }
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                ((CameraMetadata *)auStack344);
      goto LAB_00048fc4;
    }
    iVar6 = *(int *)(*(int *)(DAT_00048bd8 + 0x48a94) + 0x20);
  }
  if (iVar6 == 0) {
    iVar6 = -0x16;
  }
  else {
    mm_camera_debug_log();
    iVar6 = -0x16;
  }
LAB_00048fc4:
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}

