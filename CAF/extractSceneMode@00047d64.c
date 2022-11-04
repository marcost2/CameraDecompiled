
/* qcamera::QCamera3HardwareInterface::extractSceneMode(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&, unsigned char, metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::extractSceneMode
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,uchar param_2,
          metadata_buffer_t *param_3)

{
  QCamera3HardwareInterface QVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  CameraMetadata aCStack48 [12];
  int local_24;
  QCamera3HardwareInterface *local_20;
  int local_1c;
  
  piVar5 = *(int **)(DAT_00047ee8 + 0x47d74);
  local_1c = *piVar5;
  if (param_2 < 2) {
    iVar4 = *(int *)(DAT_00047f04 + 0x47d82);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    if (param_3 == (metadata_buffer_t *)0x0) {
      iVar4 = *(int *)(iVar4 + 0x20);
joined_r0x00047ec4:
      if (iVar4 != 0) {
        mm_camera_debug_log();
      }
      uVar2 = 0xffffffea;
    }
    else {
      uVar2 = 0;
      *(undefined4 *)(param_3 + 0x72e00) = 0;
      param_3[0xd] = (metadata_buffer_t)0x1;
    }
  }
  else {
    if (param_2 == '\x02') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                (aCStack48,(uint *)param_1);
      if (local_24 == 0) {
        uVar2 = 0;
        goto LAB_00047eb0;
      }
      QVar1 = *local_20;
      this[0x117941] = QVar1;
      uVar3 = lookupHalName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_scene_mode_cam_scene_mode_type__
                        (*(QCameraMap **)(DAT_00047eec + 0x47dde),0x11,(uchar)QVar1);
      if (uVar3 != 0xfffffffe) {
        iVar4 = *(int *)(DAT_00047ef0 + 0x47df0);
        if (*(int *)(iVar4 + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        if (param_3 == (metadata_buffer_t *)0x0) {
          iVar4 = *(int *)(iVar4 + 0x20);
          goto joined_r0x00047ec4;
        }
        *(uint *)(param_3 + 0x72e00) = uVar3 & 0xff;
        param_3[0xd] = (metadata_buffer_t)0x1;
      }
    }
    uVar2 = 0;
  }
  if (this[0x144] != (QCamera3HardwareInterface)0x0) {
    if (param_3 == (metadata_buffer_t *)0x0) {
      if (*(int *)(*(int *)(DAT_00047f18 + 0x47e86) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      uVar2 = 0xffffffea;
    }
    else {
      *(undefined4 *)(param_3 + 0x76ca0) = 1;
      *(undefined4 *)(param_3 + 0x76c9c) = 0;
      *(undefined4 *)(param_3 + 0x76c98) = 1;
      param_3[0xe7] = (metadata_buffer_t)0x1;
    }
  }
LAB_00047eb0:
  if (*piVar5 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

