
/* qcamera::QCamera3HardwareInterface::translateCbUrgentMetadataToResultMetadata(metadata_buffer_t*,
   unsigned char) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::translateCbUrgentMetadataToResultMetadata
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1,uchar param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint in_stack_ffffffb8;
  uint local_38;
  uchar local_31;
  CameraMetadata aCStack48 [8];
  int local_28;
  
  piVar5 = *(int **)(DAT_00041280 + 0x40f04);
  local_28 = *piVar5;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack48);
  if (param_1 == (metadata_buffer_t *)0x0) {
LAB_000410aa:
    local_31 = '\0';
    if (*(int *)(*(int *)(DAT_000413b4 + 0x410b0) + 0x20) != 0) {
      in_stack_ffffffb8 = DAT_000413b8 + 0x410ba;
      mm_camera_debug_log();
    }
    if (param_1 == (metadata_buffer_t *)0x0) goto LAB_0004130a;
  }
  else {
    if (param_1[0x78] != (metadata_buffer_t)0x0) {
      local_38 = local_38 & 0xffffff00 | *(uint *)(param_1 + 0xc604) & 0xff;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x10022,(uint)&local_38,1,in_stack_ffffffb8);
      if (*(int *)(*(int *)(DAT_00041284 + 0x40f4e) + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041288 + 0x40f5a;
        mm_camera_debug_log();
      }
    }
    if (param_1[0x72] != (metadata_buffer_t)0x0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x10006,(uint)(param_1 + 0x73624),1,in_stack_ffffffb8);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x1001e,(uint)(param_1 + 0x73628),1,in_stack_ffffffb8);
      iVar3 = *(int *)(DAT_00041290 + 0x40f9e);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041330 + 0x40fac;
        mm_camera_debug_log();
        if (*(int *)(iVar3 + 0x2c) != 0) {
          in_stack_ffffffb8 = DAT_00041338 + 0x40fca;
          mm_camera_debug_log();
        }
      }
    }
    if (param_1[0x73] != (metadata_buffer_t)0x0) {
      local_38 = local_38 & 0xffffff00 | *(uint *)(param_1 + 0xc5c4) & 0xff;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x1001f,(uint)&local_38,1,in_stack_ffffffb8);
      if (*(int *)(*(int *)(DAT_00041340 + 0x40ffc) + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041344 + 0x41008;
        mm_camera_debug_log();
      }
    }
    if (param_1[0x76] != (metadata_buffer_t)0x0) {
      local_38 = local_38 & 0xffffff00 | *(uint *)(param_1 + 0xc5e8) & 0xff;
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x10020,(uint)&local_38,1,in_stack_ffffffb8);
      if (*(int *)(*(int *)(DAT_0004134c + 0x4103a) + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041350 + 0x41046;
        mm_camera_debug_log();
      }
    }
    if (param_1[5] != (metadata_buffer_t)0x0) {
      uVar1 = lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_af_mode_cam_focus_mode_type__
                        (*(QCameraMap **)(DAT_00041358 + 0x4106a),7,*(uint *)(param_1 + 0xc5c8));
      if (uVar1 == 0xfffffffe) {
        if (*(int *)(*(int *)(DAT_00041368 + 0x4107c) + 0x28) != 0) {
          in_stack_ffffffb8 = DAT_0004136c + 0x4108c;
LAB_00041108:
          mm_camera_debug_log();
        }
      }
      else {
        local_38 = local_38 & 0xffffff00 | uVar1 & 0xff;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack48,0x10007,(uint)&local_38,1,in_stack_ffffffb8);
        if (*(int *)(*(int *)(DAT_0004135c + 0x410f0) + 0x2c) != 0) {
          in_stack_ffffffb8 = DAT_00041360 + 0x410fa;
          goto LAB_00041108;
        }
      }
    }
    if (param_1[0x75] != (metadata_buffer_t)0x0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x10009,(uint)(param_1 + 0x7362c),1,in_stack_ffffffb8);
      iVar3 = *(int *)(DAT_00041374 + 0x4112a);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041378 + 0x41136;
        mm_camera_debug_log();
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack48,0x10021,(uint)(param_1 + 0x73630),1,in_stack_ffffffb8);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        in_stack_ffffffb8 = DAT_00041380 + 0x41166;
        mm_camera_debug_log();
      }
    }
    if (param_1[4] != (metadata_buffer_t)0x0) {
      uVar1 = lookupFwkName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
                        (*(QCameraMap **)(DAT_00041388 + 0x41188),9,*(int *)(param_1 + 0xc5ec));
      if (uVar1 == 0xfffffffe) {
        if (*(int *)(*(int *)(DAT_00041398 + 0x4119a) + 0x28) != 0) {
          in_stack_ffffffb8 = DAT_0004139c + 0x411a4;
LAB_000411e2:
          mm_camera_debug_log();
        }
      }
      else {
        local_38 = local_38 & 0xffffff00 | uVar1 & 0xff;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack48,0x1000b,(uint)&local_38,1,in_stack_ffffffb8);
        if (*(int *)(*(int *)(DAT_0004138c + 0x411ca) + 0x2c) != 0) {
          in_stack_ffffffb8 = DAT_00041390 + 0x411d4;
          goto LAB_000411e2;
        }
      }
    }
    local_31 = '\0';
    if (param_1[3] == (metadata_buffer_t)0x0) {
      iVar3 = 2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x73620);
    }
    if (param_1[0xf] == (metadata_buffer_t)0x0) {
      iVar4 = 5;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x72e08);
    }
    if ((param_1[0x26] == (metadata_buffer_t)0x0) || (*(int *)(param_1 + 0x7321c) != 1)) {
      if (iVar4 - 1U < 2) {
        iVar3 = lookupFwkName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_mode_cam_flash_mode_t__
                          (*(QCameraMap **)(DAT_000413a4 + 0x41238),5,iVar4);
        if (iVar3 == -2) {
          if (*(int *)(*(int *)(DAT_000413a8 + 0x4124a) + 0x20) != 0) {
            in_stack_ffffffb8 = DAT_000413ac + 0x41254;
            mm_camera_debug_log();
          }
          goto LAB_000412a8;
        }
        goto LAB_00041296;
      }
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_00041296;
      }
      if (iVar3 != 1) goto LAB_000410aa;
      local_31 = param_2;
      if (iVar4 != 0) {
        local_31 = '\x01';
      }
    }
    else {
      iVar3 = 4;
LAB_00041296:
      local_31 = (uchar)iVar3;
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack48,0x10003,(uint)&local_31,1,in_stack_ffffffb8);
  }
LAB_000412a8:
  if (param_1[0x41] != (metadata_buffer_t)0x0) {
    if (*(int *)(*(int *)(DAT_000413c0 + 0x412b4) + 0x2c) != 0) {
      in_stack_ffffffb8 = DAT_000413c4 + 0x412d8;
      mm_camera_debug_log();
    }
    local_38 = *(uint *)(param_1 + 0x10660);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack48,0x80110000,(uint)&local_38,1,in_stack_ffffffb8);
  }
LAB_0004130a:
  uVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack48);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack48);
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

