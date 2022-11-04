
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::translateToHalMetadata(camera3_capture_request const*,
   metadata_buffer_t*, unsigned int) */

int __thiscall
qcamera::QCamera3HardwareInterface::translateToHalMetadata
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,
          metadata_buffer_t *param_2,uint param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  metadata_buffer_t mVar3;
  bool bVar4;
  undefined8 uVar5;
  CameraMetadata *this_00;
  int iVar6;
  int iVar7;
  metadata_buffer_t *pmVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined *puVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_6054;
  uint local_6050;
  uint uStack24652;
  uint local_6048;
  uint local_6044 [2];
  undefined2 local_603b;
  metadata_buffer_t local_6039;
  uint auStack24632 [2];
  undefined local_6030 [4096];
  undefined local_5030 [4096];
  undefined local_4030 [4096];
  CameraMetadata aCStack12336 [16];
  int local_3020;
  undefined local_2030 [16];
  int *local_2020;
  undefined local_1030 [4];
  undefined4 uStack4140;
  int iStack4136;
  uint uStack4132;
  undefined8 *local_1020;
  undefined4 uStack4124;
  undefined8 uStack4120;
  metadata_buffer_t local_1010;
  int local_2c;
  
  piVar16 = *(int **)(DAT_0004e170 + 0x4de38);
  local_2c = *piVar16;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      ((CameraMetadata *)auStack24632);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (this_00,*(camera_metadata **)(param_1 + 4));
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x1000f);
  if (iVar6 == 0) {
    local_6054 = 0;
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    bVar2 = *(byte *)local_1020;
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e174 + 0x4de9a) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      *(uint *)(param_2 + 0xc60c) = (uint)bVar2;
      param_2[2] = (metadata_buffer_t)0x1;
    }
    local_6054 = extractSceneMode(this,(CameraMetadata *)auStack24632,bVar2,param_2);
    if ((local_6054 != 0) && (*(int *)(*(int *)(DAT_0004e180 + 0x4ded2) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10003);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar11 = (uint)*(byte *)local_1020;
    iVar6 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_mode_cam_flash_mode_t__
                      (*(QCameraMap **)(DAT_0004e18c + 0x4df14),5,*(byte *)local_1020);
    uVar9 = uVar11;
    if (uVar11 != 0) {
      uVar9 = 1;
    }
    if (iVar6 == -2) {
      if (param_2 == (metadata_buffer_t *)0x0) {
LAB_0004df8e:
        iVar6 = *(int *)(DAT_0004e19c + 0x4df94);
        if ((*(int *)(iVar6 + 0x20) != 0) && (mm_camera_debug_log(), *(int *)(iVar6 + 0x20) != 0)) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
LAB_0004df3c:
        uVar11 = count_leading_zeroes(uVar11 - 4);
        *(uint *)(param_2 + 0x7321c) = uVar11 >> 5;
        *(uint *)(param_2 + 0x73620) = uVar9;
        param_2[3] = (metadata_buffer_t)0x1;
        param_2[0x26] = (metadata_buffer_t)0x1;
      }
    }
    else {
      if (param_2 != (metadata_buffer_t *)0x0) {
        *(int *)(param_2 + 0x72e08) = iVar6;
        param_2[0xf] = (metadata_buffer_t)0x1;
        goto LAB_0004df3c;
      }
      if (*(int *)(*(int *)(DAT_0004e190 + 0x4df68) + 0x20) != 0) {
        mm_camera_debug_log();
        goto LAB_0004df8e;
      }
      local_6054 = -0x16;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x1000b);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
                      (*(QCameraMap **)(DAT_0004e1ac + 0x4e006),9,*(byte *)local_1020);
    if (uVar9 != 0xfffffffe) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004e1b0 + 0x4e026) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0xc5ec) = uVar9 & 0xff;
        param_2[4] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,3);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_color_correction_aberration_mode_cam_aberration_mode_t__
                      (*(QCameraMap **)(DAT_0004e1bc + 0x4e078),3,*(byte *)local_1020);
    if (uVar9 == 0xfffffffe) {
      if (*(int *)(*(int *)(DAT_0004e1c0 + 0x4e08c) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      iVar7 = *(int *)(DAT_0004e1cc + 0x4e0b8);
      iVar6 = *(int *)(iVar7 + *(int *)(this + 0x4c) * 4);
      if (*(int *)(iVar6 + 0x3db8) != 0) {
        uVar11 = 0;
        do {
          if (*(uint *)(iVar6 + uVar11 * 4 + 0x3dac) == uVar9) {
            bVar4 = true;
            goto LAB_0004e0ea;
          }
          uVar11 = uVar11 + 1;
          iVar6 = *(int *)(iVar7 + *(int *)(this + 0x4c) * 4);
        } while (uVar11 < *(uint *)(iVar6 + 0x3db8));
      }
      bVar4 = false;
LAB_0004e0ea:
      iVar6 = *(int *)(DAT_0004e1d0 + 0x4e0f0);
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      if (!bVar4) {
        if (*(int *)(*(int *)(iVar7 + *(int *)(this + 0x4c) * 4) + 0x3db8) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = count_leading_zeroes(uVar9 - 2);
          uVar9 = uVar9 >> 5;
        }
      }
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0x74738) = uVar9;
        param_2[0xb0] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10007);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_af_mode_cam_focus_mode_type__
                      (*(QCameraMap **)(DAT_0004e558 + 0x4e234),7,*(byte *)local_1020);
    if (uVar9 != 0xfffffffe) {
      iVar6 = *(int *)(DAT_0004e55c + 0x4e246);
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0xc5c8) = uVar9 & 0xff;
        param_2[5] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80003);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e570 + 0x4e2de) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0xc640) = *(undefined4 *)local_1020;
      param_2[0x87] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar6 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_antibanding_mode_cam_antibanding_mode_type__
                      (*(QCameraMap **)(DAT_0004e57c + 0x4e32e),4,*(byte *)local_1020);
    if (iVar6 != -2) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004e580 + 0x4e350) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(int *)(param_2 + 0x72dd8) = iVar6;
        param_2[6] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar6 = *(int *)(*(int *)(DAT_0004e58c + 0x4e3a2) + *(int *)(this + 0x4c) * 4);
    iVar10 = *(int *)(iVar6 + 0x5a8);
    iVar7 = *(int *)(iVar6 + 0x5ac);
    iVar6 = *(int *)local_1020;
    if (*(int *)local_1020 < iVar10) {
      iVar6 = iVar10;
    }
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
    __android_log_print();
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e598 + 0x4e3e6) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(int *)(param_2 + 0x72ddc) = iVar6;
      param_2[7] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10002);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e5a4 + 0x4e446) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x72de8) = (uint)*(byte *)local_1020;
      param_2[9] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10005);
  if (((iVar6 != 0) &&
      (local_6054 = setHalFpsRange(this,(CameraMetadata *)auStack24632,param_2), local_6054 != 0))
     && (*(int *)(*(int *)(DAT_0004e5b0 + 0x4e48a) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x1000a);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e5bc + 0x4e4de) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x72dfc) = (uint)*(byte *)local_1020;
      param_2[0xb] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x1000e);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_effect_mode_cam_effect_mode_type__
                      (*(QCameraMap **)(DAT_0004e5c8 + 0x4e530),9,*(byte *)local_1020);
    if (uVar9 != 0xfffffffe) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004e980 + 0x4e5d2) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0x70e30) = uVar9 & 0xff;
        param_2[0xc] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e98c + 0x4e62e) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc4fc) = (uint)*(byte *)local_1020;
      param_2[0x69] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,2);
  if (iVar6 != 0) {
    iVar6 = 0;
    do {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)local_1030,auStack24632);
      *(undefined4 *)(local_2030 + iVar6 * 4) = *(undefined4 *)((int)local_1020 + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e998 + 0x4e6bc) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      param_2[0x6b] = (metadata_buffer_t)0x1;
      *(longlong *)(param_2 + 0xc548) = SUB168(local_2030,0);
      *(longlong *)(param_2 + 0xc550) = SUB168(local_2030 >> 0x40,0);
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,1);
  if (iVar6 != 0) {
    iVar6 = 0;
    puVar14 = (undefined2 *)local_1030;
    iVar7 = 0;
    do {
      iVar10 = 4;
      do {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)local_2030,auStack24632);
        iVar17 = local_2020[iVar6 * 2];
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)local_2030,auStack24632);
        *(int *)((int)puVar14 + iVar10) = local_2020[iVar6 * 2 + 1];
        *(int *)((int)puVar14 + iVar10 + -4) = iVar17;
        iVar10 = iVar10 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar10 != 0x1c);
      puVar14 = puVar14 + 0xc;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e9a4 + 0x4e7ac) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      __aeabi_memcpy8(param_2 + 0xc500,local_1030,0x48);
      param_2[0x6a] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10006);
  if ((iVar6 != 0) &&
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x1001e), iVar6 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    mVar3 = *(metadata_buffer_t *)local_1020;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar12 = *(undefined4 *)local_1020;
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004e9b0 + 0x4e88a) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      param_2[0x73624] = mVar3;
      *(undefined4 *)(param_2 + 0x73628) = uVar12;
      param_2[0x73627] = local_6039;
      *(undefined2 *)(param_2 + 0x73625) = local_603b;
      param_2[0x72] = (metadata_buffer_t)0x1;
    }
    if (*(int *)(*(int *)(DAT_0004e9bc + 0x4e8c0) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10009);
  if ((iVar6 != 0) &&
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x10021), iVar6 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    mVar3 = *(metadata_buffer_t *)local_1020;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar12 = *(undefined4 *)local_1020;
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004ed14 + 0x4e9d6) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      param_2[0x7362c] = mVar3;
      *(undefined4 *)(param_2 + 0x73630) = uVar12;
      param_2[0x7362f] = local_1030[2];
      *(undefined2 *)(param_2 + 0x7362d) = local_1030._0_2_;
      param_2[0x75] = (metadata_buffer_t)0x1;
    }
    if (*(int *)(*(int *)(DAT_0004ed20 + 0x4ea0c) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x20000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004ed2c + 0x4ea72) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x73638) = (uint)*(byte *)local_1020;
      param_2[0x7b] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x30000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    mVar3 = *(metadata_buffer_t *)local_1020;
    if (mVar3 == (metadata_buffer_t)0x0) {
      iVar6 = 0;
    }
    else {
      iVar10 = *(int *)(DAT_0004ed38 + 0x4eacc);
      iVar6 = *(int *)(*(int *)(iVar10 + *(int *)(this + 0x4c) * 4) + 0x2f90);
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x800f0000);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)local_1030,auStack24632);
        iVar17 = *(int *)local_1020;
        iVar7 = *(int *)(iVar10 + *(int *)(this + 0x4c) * 4);
        if (((*(int *)(iVar7 + 0x2f88) <= iVar17) && (iVar17 <= *(int *)(iVar7 + 0x2f8c))) &&
           (iVar6 = iVar17, *(int *)(*(int *)(DAT_0004ed64 + 0x4ec84) + 0x2c) != 0)) {
          mm_camera_debug_log();
        }
      }
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004ed3c + 0x4eb24) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      param_2[0xc610] = mVar3;
      *(int *)(param_2 + 0xc614) = iVar6;
      param_2[0xc613] = local_1030[2];
      *(undefined2 *)(param_2 + 0xc611) = local_1030._0_2_;
      param_2[0x7c] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x40002);
  if (iVar6 != 0) {
    iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      ((CameraMetadata *)auStack24632,0x10003);
    if (iVar6 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)local_1030,auStack24632);
      bVar2 = *(byte *)local_1020;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)local_1030,auStack24632);
      if ((1 < bVar2) && (*(byte *)local_1020 != 0)) {
        if (*(int *)(*(int *)(DAT_0004ed48 + 0x4ebf4) + 0x28) != 0) {
          mm_camera_debug_log();
        }
        goto LAB_0004ecde;
      }
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_flash_mode_cam_flash_mode_t__
                      (*(QCameraMap **)(DAT_0004ed54 + 0x4ec2e),3,(uint)*(byte *)local_1020);
    iVar6 = *(int *)(DAT_0004ed58 + 0x4ec3c);
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log();
    }
    if (uVar9 != 0xfffffffe) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0x72e08) = uVar9 & 0xff;
        param_2[0xf] = (metadata_buffer_t)0x1;
      }
    }
  }
LAB_0004ecde:
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x40000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0b0 + 0x4ed7e) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc618) = (uint)*(byte *)local_1020;
      param_2[0x7e] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x40001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0bc + 0x4ede6) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      uVar12 = *(undefined4 *)((int)local_1020 + 4);
      *(undefined4 *)(param_2 + 0xc620) = *(undefined4 *)local_1020;
      *(undefined4 *)(param_2 + 0xc624) = uVar12;
      param_2[0x7f] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x60000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0c8 + 0x4ee48) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc630) = (uint)*(byte *)local_1020;
      param_2[0x83] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0d4 + 0x4eeaa) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0xc634) = *(undefined4 *)local_1020;
      param_2[0x84] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0e0 + 0x4ef08) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0xc638) = *(undefined4 *)local_1020;
      param_2[0x85] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80002);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0ec + 0x4ef68) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0xc63c) = *(undefined4 *)local_1020;
      param_2[0x86] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80004);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f0f8 + 0x4efc6) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc658) = (uint)*(byte *)local_1020;
      param_2[0x12] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10011);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    bVar2 = *(byte *)local_1020;
    iVar6 = *(int *)(DAT_0004f104 + 0x4f018);
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (*(int *)(this + 0x14c) == 0) {
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(*(int *)(this + 0x14c) + 0xc65c) = (uint)bVar2;
      *(undefined *)(*(int *)(this + 0x14c) + 0xd9) = 1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xa0000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f498 + 0x4f11e) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc664) = (uint)*(byte *)local_1020;
      param_2[0x8b] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x180000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f4a4 + 0x4f184) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0x76bf8) = *(undefined4 *)local_1020;
      param_2[200] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xd0000);
  if (iVar6 == 0) {
    bVar4 = false;
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    local_6050 = *(uint *)local_1020;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uStack24652 = *(uint *)((int)local_1020 + 4);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    local_6048 = *(uint *)(local_1020 + 1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    local_6044[0] = *(uint *)((int)local_1020 + 0xc);
    QCamera3CropRegionMapper::toSensor
              ((QCamera3CropRegionMapper *)(this + 0x1178d4),(int *)&local_6050,(int *)&uStack24652,
               (int *)&local_6048,(int *)local_6044);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f4bc + 0x4f2cc) + 0x20) == 0) {
        local_6054 = -0x16;
        bVar4 = true;
      }
      else {
        bVar4 = true;
        mm_camera_debug_log();
        local_6054 = -0x16;
      }
    }
    else {
      bVar4 = true;
      param_2[0x8d] = (metadata_buffer_t)0x1;
      *(ulonglong *)(param_2 + 0xc66c) = CONCAT44(uStack24652,local_6050);
      *(longlong *)(param_2 + 0xc674) =
           SUB168(CONCAT412(local_6044[0],CONCAT48(local_6048,CONCAT44(uStack24652,local_6050))) >>
                  0x40,0);
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xe0000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar13 = *(undefined4 *)local_1020;
    uVar12 = *(undefined4 *)((int)local_1020 + 4);
    iVar6 = *(int *)(DAT_0004f4b0 + 0x4f292);
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0xc680) = uVar13;
      *(undefined4 *)(param_2 + 0xc684) = uVar12;
      param_2[0x8f] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xe0001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = *(uint *)local_1020;
    iVar7 = *(int *)((int)local_1020 + 4);
    uVar5 = *local_1020;
    uVar19 = getMinFrameDuration(this,param_1);
    iVar6 = (int)((ulonglong)uVar19 >> 0x20);
    bVar18 = (uint)uVar19 < uVar9;
    if ((int)((iVar6 - iVar7) - (uint)bVar18) < 0 !=
        (SBORROW4(iVar6,iVar7) != SBORROW4(iVar6 - iVar7,(uint)bVar18))) {
      uVar19 = uVar5;
    }
    iVar6 = (int)((ulonglong)uVar19 >> 0x20);
    iVar7 = *(int *)(*(int *)(DAT_0004f4d0 + 0x4f386) + *(int *)(this + 0x4c) * 4);
    iVar10 = *(int *)(iVar7 + 0x33cc);
    puVar1 = (undefined8 *)(iVar7 + 0x33c8);
    bVar18 = *(uint *)puVar1 < (uint)uVar19;
    if ((int)((iVar10 - iVar6) - (uint)bVar18) < 0 !=
        (SBORROW4(iVar10,iVar6) != SBORROW4(iVar10 - iVar6,(uint)bVar18))) {
      uVar19 = *puVar1;
    }
    iVar6 = *(int *)(DAT_0004f4d4 + 0x4f3b4);
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(int *)(param_2 + 0xc688) = (int)uVar19;
      *(int *)(param_2 + 0xc68c) = (int)((ulonglong)uVar19 >> 0x20);
      param_2[0x90] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xe0002);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar6 = *(int *)(*(int *)(DAT_0004f4e8 + 0x4f446) + *(int *)(this + 0x4c) * 4);
    iVar10 = *(int *)(iVar6 + 0x3698);
    iVar7 = *(int *)(iVar6 + 0x3694);
    iVar6 = *(int *)local_1020;
    if (*(int *)local_1020 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar10 < iVar6) {
      iVar6 = iVar10;
    }
    iVar7 = *(int *)(DAT_0004f4ec + 0x4f46c);
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(iVar7 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(int *)(param_2 + 0xc690) = iVar6;
      param_2[0x91] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10028);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar7 = *(int *)(DAT_0004f810 + 0x4f552);
    iVar10 = *(int *)(*(int *)(iVar7 + *(int *)(this + 0x4c) * 4) + 0x36a0);
    iVar6 = *(int *)local_1020;
    if ((*(int *)local_1020 < iVar10) &&
       (iVar6 = iVar10, *(int *)(*(int *)(DAT_0004f814 + 0x4f56a) + 0x2c) != 0)) {
      mm_camera_debug_log();
    }
    iVar7 = *(int *)(*(int *)(iVar7 + *(int *)(this + 0x4c) * 4) + 0x36a4);
    if ((iVar7 < iVar6) && (iVar6 = iVar7, *(int *)(*(int *)(DAT_0004f820 + 0x4f5a0) + 0x2c) != 0))
    {
      mm_camera_debug_log();
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f82c + 0x4f5da) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(int *)(param_2 + 0xc694) = iVar6;
      param_2[0xdc] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x100000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f838 + 0x4f646) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc6a8) = (uint)*(byte *)local_1020;
      param_2[0x94] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x110000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_statistics_face_detect_mode_cam_face_detect_mode_t__
                      (*(QCameraMap **)(DAT_0004f844 + 0x4f698),3,*(byte *)local_1020);
    if (uVar9 != 0xfffffffe) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004f848 + 0x4f6ba) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0xc6ac) = uVar9 & 0xff;
        param_2[0x96] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x110001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f854 + 0x4f728) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc6b0) = (uint)*(byte *)local_1020;
      param_2[0x97] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x110002);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004f860 + 0x4f794) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc6b4) = (uint)*(byte *)local_1020;
      param_2[0x98] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x130003);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004fbd0 + 0x4f872) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x73650) = (uint)*(byte *)local_1020;
      param_2[0x9a] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x130001);
  if (((iVar6 != 0) &&
      (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                         ((CameraMetadata *)auStack24632,0x130000), iVar6 != 0)) &&
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x130002), iVar6 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = uStack4132 >> 1;
    if (uStack4132 < 0x402) {
      if (uVar9 != 0) goto LAB_0004f936;
      __aeabi_memcpy8(local_1030,local_4030,0x1000);
LAB_0004faea:
      __aeabi_memcpy8(local_2030,local_5030,0x1000);
      uVar9 = 0;
    }
    else {
      if (*(int *)(*(int *)(DAT_0004fbdc + 0x4f8f4) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      uVar9 = 0x200;
LAB_0004f936:
      iVar6 = 0;
      puVar15 = local_4030;
      uVar11 = 0;
      do {
        iVar7 = 0;
        do {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                    ((CameraMetadata *)local_1030,auStack24632);
          *(undefined4 *)(puVar15 + iVar7 * 4) = *(undefined4 *)((int)local_1020 + iVar6 * 4);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar7 != 2);
        puVar15 = puVar15 + 8;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
      __aeabi_memcpy8(local_1030,local_4030,0x1000);
      if (uVar9 == 0) goto LAB_0004faea;
      iVar6 = 0;
      puVar15 = local_5030;
      uVar11 = 0;
      do {
        iVar7 = 0;
        do {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                    ((CameraMetadata *)local_2030,auStack24632);
          *(int *)(puVar15 + iVar7 * 4) = local_2020[iVar6];
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar7 != 2);
        puVar15 = puVar15 + 8;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
      __aeabi_memcpy8(local_2030,local_5030,0x1000);
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        iVar6 = 0;
        puVar15 = local_6030;
        uVar11 = 0;
        do {
          iVar7 = 0;
          do {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                      (aCStack12336,auStack24632);
            *(undefined4 *)(puVar15 + iVar7 * 4) = *(undefined4 *)(local_3020 + iVar6 * 4);
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar7 != 2);
          puVar15 = puVar15 + 8;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar9);
      }
    }
    __aeabi_memcpy8(aCStack12336,local_6030,0x1000);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004fbe8 + 0x4fb66) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc868) = uVar9;
      __aeabi_memcpy8(param_2 + 0xc86c,local_1030,0x1000);
      __aeabi_memcpy8(param_2 + 0xd86c,local_2030,0x1000);
      __aeabi_memcpy8(param_2 + 0xe86c,aCStack12336,0x1000);
      param_2[0x9b] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x1000d);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004fec8 + 0x4fbfa) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x73634) = (uint)*(byte *)local_1020;
      param_2[0x7a] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x160000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004fed4 + 0x4fc62) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0xc608) = (uint)*(byte *)local_1020;
      param_2[0x79] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x110010);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_0004fee0 + 0x4fce0) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x73648) = (uint)*(byte *)local_1020;
      param_2[0x89] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10004);
  if (iVar6 != 0) {
    convertFromRegions((cam_area_t *)local_1030,*(camera_metadata **)(param_1 + 4),0x10004);
    QCamera3CropRegionMapper::toSensor
              ((QCamera3CropRegionMapper *)(this + 0x1178d4),(int *)local_1030,&uStack4140,
               &iStack4136,(int *)&uStack4132);
    if ((!bVar4) ||
       (iVar6 = resetIfNeededROI((cam_area_t *)local_1030,(cam_crop_region_t *)&local_6050),
       iVar6 != 0)) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004feec + 0x4fd80) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        uVar19 = CONCAT17(uStack4140._3_1_,
                          CONCAT43(stack0xffffefd3,CONCAT12(local_1030[2],local_1030._0_2_)));
        *(undefined8 **)(param_2 + 0xc5c0) = local_1020;
        *(undefined8 *)(param_2 + 0xc5b0) = uVar19;
        *(longlong *)(param_2 + 0xc5b8) =
             SUB168(CONCAT412(uStack4132,CONCAT48(iStack4136,uVar19)) >> 0x40,0);
        param_2[0x71] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x10008);
  if (iVar6 != 0) {
    convertFromRegions((cam_area_t *)local_1030,*(camera_metadata **)(param_1 + 4),0x10008);
    QCamera3CropRegionMapper::toSensor
              ((QCamera3CropRegionMapper *)(this + 0x1178d4),(int *)local_1030,&uStack4140,
               &iStack4136,(int *)&uStack4132);
    if ((!bVar4) ||
       (iVar6 = resetIfNeededROI((cam_area_t *)local_1030,(cam_crop_region_t *)&local_6050),
       iVar6 != 0)) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0004fef8 + 0x4fe20) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        uVar19 = CONCAT17(uStack4140._3_1_,
                          CONCAT43(stack0xffffefd3,CONCAT12(local_1030[2],local_1030._0_2_)));
        *(undefined8 **)(param_2 + 0xc5e4) = local_1020;
        *(undefined8 *)(param_2 + 0xc5d4) = uVar19;
        *(longlong *)(param_2 + 0xc5dc) =
             SUB168(CONCAT412(uStack4132,CONCAT48(iStack4136,uVar19)) >> 0x40,0);
        param_2[0x74] = (metadata_buffer_t)0x1;
      }
    }
  }
  if (((this[0x117880] != (QCamera3HardwareInterface)0x1) &&
      (this[0x15c] == (QCamera3HardwareInterface)0x0)) &&
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x80010000), iVar6 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (*(uint *)local_1020 < 4) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_0005025c + 0x4ff16) + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
      else {
        *(uint *)(param_2 + 0x732bc) = *(uint *)local_1020;
        param_2[0x5b] = (metadata_buffer_t)0x1;
      }
    }
    else if (*(int *)(*(int *)(DAT_0004ff04 + 0x4fe92) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80050000);
  if ((iVar6 != 0) &&
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x80050001), iVar6 != 0)) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    bVar2 = *(byte *)local_1020;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar6 = *(int *)(this + 0x14c);
    if (iVar6 == 0) {
      if (*(int *)(*(int *)(DAT_00050268 + 0x4ffe6) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      uVar12 = *(undefined4 *)local_1020;
      *(byte *)(iVar6 + 0x73228) = bVar2;
      *(undefined4 *)(iVar6 + 0x7322c) = uVar12;
      *(metadata_buffer_t *)(iVar6 + 0x7322b) = local_1030[2];
      *(undefined2 *)(iVar6 + 0x73229) = local_1030._0_2_;
      *(undefined *)(*(int *)(this + 0x14c) + 0x28) = 1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80080000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00050274 + 0x50062) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0x730d4) = *(undefined4 *)local_1020;
      param_2[0x1e] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0xe0018);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = lookupHalName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_test_pattern_mode_cam_test_pattern_mode_t__
                      (*(QCameraMap **)(DAT_00050280 + 0x500ba),6,*(int *)local_1020);
    if (uVar9 == 0xfffffffe) {
      if (*(int *)(*(int *)(DAT_00050284 + 0x500cc) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      uStack4140._3_1_ = 0;
      iStack4136 = 0;
      uStack4132 = 0;
      local_1020 = (undefined8 *)0x0;
      local_1030._0_2_ = (undefined2)uVar9;
      local_1030[2] = SUB41(uVar9 >> 0x10,0);
      unique0x10000a03 = uVar9 >> 0x18;
      if ((uVar9 == 1) &&
         (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            ((CameraMetadata *)auStack24632,0xe0017), iVar6 != 0)) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                  ((CameraMetadata *)local_2030,auStack24632);
        stack0xffffefd3 = stack0xffffefd3 & 0xff | *local_2020 << 8;
        uStack4140._3_1_ = (undefined)((uint)*local_2020 >> 0x18);
        local_1020 = (undefined8 *)local_2020[3];
        uVar9 = *(uint *)(*(int *)(*(int *)(DAT_00050290 + 0x50140) + *(int *)(this + 0x4c) * 4) +
                         0x33d0);
        if (uVar9 - 2 < 2) {
          iStack4136 = local_2020[2];
          uStack4132 = local_2020[1];
        }
        else if (uVar9 < 2) {
          iStack4136 = local_2020[1];
          uStack4132 = local_2020[2];
        }
        else if (*(int *)(*(int *)(DAT_000502a0 + 0x501b4) + 0x20) != 0) {
          mm_camera_debug_log();
        }
      }
      if (param_2 == (metadata_buffer_t *)0x0) {
        if (*(int *)(*(int *)(DAT_00050294 + 0x50176) + 0x20) == 0) {
          local_6054 = -0x16;
        }
        else {
          mm_camera_debug_log();
          local_6054 = -0x16;
        }
      }
      else {
        uVar19 = CONCAT17(uStack4140._3_1_,
                          CONCAT43(unique0x10000cf7,CONCAT12(local_1030[2],local_1030._0_2_)));
        *(undefined8 **)(param_2 + 0x7371c) = local_1020;
        *(undefined8 *)(param_2 + 0x7370c) = uVar19;
        *(longlong *)(param_2 + 0x73714) =
             SUB168(CONCAT412(uStack4132,CONCAT48(iStack4136,uVar19)) >> 0x40,0);
        param_2[0xac] = (metadata_buffer_t)0x1;
      }
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x70000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if ((param_2 == (metadata_buffer_t *)0x0) || (2 < uStack4132 - 1)) {
      if (*(int *)(*(int *)(DAT_000505f0 + 0x502b2) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      uVar9 = 0;
    }
    else {
      iVar6 = 0;
      uVar9 = uStack4132;
      do {
        *(undefined8 *)(param_2 + iVar6 + 0x736b0) = *(undefined8 *)((int)local_1020 + iVar6);
        iVar6 = iVar6 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      param_2[0xa5] = (metadata_buffer_t)0x1;
      uVar9 = uStack4132;
    }
    if (uStack4132 != uVar9) {
      local_6054 = -0x16;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)&DAT_00070001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    local_1020 = (undefined8 *)0x0;
    uStack4124 = 0;
    uStack4120 = 0;
    local_1030._0_2_ = 0;
    local_1030[2] = (metadata_buffer_t)0x0;
    stack0xffffefd3 = 0;
    uStack4140._3_1_ = 0;
    iStack4136 = 0;
    uStack4132 = 0;
    local_1010 = (metadata_buffer_t)0x0;
    __strlcpy_chk();
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_000505fc + 0x50370) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      uVar19 = CONCAT17(uStack4140._3_1_,
                        CONCAT43(stack0xffffefd3,CONCAT12(local_1030[2],local_1030._0_2_)));
      param_2[0x736e8] = local_1010;
      *(undefined8 *)(param_2 + 0x736c8) = uVar19;
      *(longlong *)(param_2 + 0x736d0) =
           SUB168(CONCAT412(uStack4132,CONCAT48(iStack4136,uVar19)) >> 0x40,0);
      *(ulonglong *)(param_2 + 0x736d8) = CONCAT44(uStack4124,local_1020);
      *(undefined8 *)(param_2 + 0x736e0) = uStack4120;
      param_2[0xa6] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)&DAT_00070002);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00050608 + 0x503e8) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      uVar12 = *(undefined4 *)((int)local_1020 + 4);
      *(undefined4 *)(param_2 + 0x736f0) = *(undefined4 *)local_1020;
      *(undefined4 *)(param_2 + 0x736f4) = uVar12;
      param_2[0xa7] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)&DAT_00070003);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    iVar6 = *(int *)local_1020;
    if (iVar6 == 0x10e) {
      uVar12 = 8;
    }
    else if (iVar6 == 0xb4) {
      uVar12 = 4;
    }
    else if (iVar6 == 0x5a) {
      uVar12 = 2;
    }
    else {
      uVar12 = 1;
    }
    if (param_2 == (metadata_buffer_t *)0x0) {
      iVar6 = *(int *)(DAT_00050614 + 0x50482);
      if (*(int *)(iVar6 + 0x20) == 0) {
        local_6054 = -0x16;
      }
      else {
        mm_camera_debug_log();
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        local_6054 = -0x16;
      }
    }
    else {
      *(uint *)(param_2 + 0x7475c) = param_3;
      *(undefined4 *)(param_2 + 0x74754) = uVar12;
      *(int *)(param_2 + 0x736f8) = iVar6;
      param_2[0xa8] = (metadata_buffer_t)0x1;
      param_2[0x38] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)__cxa_finalize);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00050624 + 0x50510) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x736fc) = (uint)*(byte *)local_1020;
      param_2[0xa9] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)&DAT_00070005);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00050630 + 0x50572) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(uint *)(param_2 + 0x73700) = (uint)*(byte *)local_1020;
      param_2[0xaa] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,(uint)&DAT_00070006);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar12 = *(undefined4 *)local_1020;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_000509b8 + 0x50642) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0x73708) = *(undefined4 *)((int)local_1020 + 4);
      *(undefined4 *)(param_2 + 0x73704) = uVar12;
      param_2[0xab] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80000000);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if ((param_2 == (metadata_buffer_t *)0x0) || (0xfc < uStack4132 - 1 >> 3)) {
      if (*(int *)(*(int *)(DAT_00050a20 + 0x506c2) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined4 *)(param_2 + uVar9 * 4 + 0x70e34) =
             *(undefined4 *)((int)local_1020 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uStack4132 != uVar9);
      param_2[0x9e] = (metadata_buffer_t)0x1;
      uVar9 = uStack4132;
    }
    if (uStack4132 != uVar9) {
      local_6054 = -0x16;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80060000);
  if ((iVar6 == 0) ||
     (iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        ((CameraMetadata *)auStack24632,0x80060001), iVar6 == 0)) {
    if (param_2 == (metadata_buffer_t *)0x0) {
      iVar6 = *(int *)(*(int *)(DAT_00050a50 + 0x507be) + 0x20);
joined_r0x000507c0:
      if (iVar6 != 0) {
        mm_camera_debug_log();
      }
LAB_000507e0:
      local_6054 = -0x16;
    }
    else {
      *(undefined4 *)(param_2 + 0x73264) = 0;
      param_2[0x30] = (metadata_buffer_t)0x1;
    }
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    uVar9 = *(uint *)local_1020;
    if (uVar9 < 2) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                ((CameraMetadata *)local_1030,auStack24632);
      uVar12 = *(undefined4 *)local_1020;
      uVar13 = *(undefined4 *)((int)local_1020 + 4);
      if (uVar9 == 0) {
        if (param_2 == (metadata_buffer_t *)0x0) {
          iVar6 = *(int *)(*(int *)(DAT_00050a2c + 0x509ca) + 0x20);
          goto joined_r0x000509ce;
        }
        param_2[0x730a8] = (metadata_buffer_t)0x0;
        *(undefined4 *)(param_2 + 0x730b4) = uVar13;
        *(undefined4 *)(param_2 + 0x730b0) = uVar12;
        *(uint *)(param_2 + 0x730ac) = stack0xffffefd3;
        *(uint *)(param_2 + 0x730a9) =
             CONCAT13(local_1030[3],CONCAT12(local_1030[2],local_1030._0_2_));
        pmVar8 = param_2 + 0x1a;
      }
      else {
        if (param_2 == (metadata_buffer_t *)0x0) {
          iVar6 = *(int *)(*(int *)(DAT_00050a30 + 0x50992) + 0x20);
joined_r0x000509ce:
          if (iVar6 != 0) {
            mm_camera_debug_log();
            iVar6 = *(int *)(*(int *)(DAT_00050a44 + 0x509f6) + 0x20);
            goto joined_r0x000507c0;
          }
          goto LAB_000507e0;
        }
        param_2[0x730b8] = (metadata_buffer_t)0x0;
        *(undefined4 *)(param_2 + 0x730c4) = uVar13;
        *(undefined4 *)(param_2 + 0x730c0) = uVar12;
        *(uint *)(param_2 + 0x730bc) = stack0xffffefd3;
        *(uint *)(param_2 + 0x730b9) =
             CONCAT13(local_1030[3],CONCAT12(local_1030[2],local_1030._0_2_));
        pmVar8 = param_2 + 0xb6;
      }
      *pmVar8 = (metadata_buffer_t)0x1;
      *(undefined4 *)(param_2 + 0x73264) = 1;
      param_2[0x30] = (metadata_buffer_t)0x1;
    }
  }
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80070000);
  if (iVar6 == 0) {
    if (param_2 == (metadata_buffer_t *)0x0) {
LAB_0005087a:
      if (*(int *)(*(int *)(DAT_00050a68 + 0x50880) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      goto LAB_000508a2;
    }
  }
  else {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (param_2 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00050a5c + 0x50858) + 0x20) != 0) {
        mm_camera_debug_log();
        goto LAB_0005087a;
      }
LAB_000508a2:
      bVar4 = false;
      local_6054 = -0x16;
      goto LAB_000508a6;
    }
    *(undefined4 *)(param_2 + 0x730a0) = *(undefined4 *)local_1020;
    param_2[0x18] = (metadata_buffer_t)0x1;
  }
  iVar6 = *(int *)(*(int *)(DAT_00050a74 + 0x5082c) + *(int *)(this + 0x4c) * 4);
  uVar12 = *(undefined4 *)(iVar6 + 0x5b8);
  *(undefined4 *)(param_2 + 0x72de4) = *(undefined4 *)(iVar6 + 0x5bc);
  *(undefined4 *)(param_2 + 0x72de0) = uVar12;
  bVar4 = true;
  param_2[8] = (metadata_buffer_t)0x1;
LAB_000508a6:
  iVar6 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack24632,0x80010001);
  if (iVar6 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)local_1030,auStack24632);
    if (bVar4) {
      __aeabi_memcpy8(param_2 + 0x2230,local_1020,0x44);
      param_2[0xce] = (metadata_buffer_t)0x1;
    }
    else {
      if (*(int *)(*(int *)(DAT_00050a78 + 0x508e8) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      local_6054 = -0x16;
    }
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)auStack24632);
  if (*piVar16 != local_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_6054;
}

