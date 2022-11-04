
/* qcamera::QCamera3HardwareInterface::restoreHdrScene(unsigned char, camera_metadata const*) */

void __thiscall
qcamera::QCamera3HardwareInterface::restoreHdrScene
          (QCamera3HardwareInterface *this,uchar param_1,camera_metadata *param_2)

{
  CameraMetadata *this_00;
  int *piVar1;
  uint in_stack_ffffffd8;
  uchar local_1d;
  CameraMetadata aCStack28 [8];
  int local_14;
  
  piVar1 = *(int **)(DAT_00043554 + 0x434ec);
  local_14 = *piVar1;
  local_1d = param_1;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      (aCStack28);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(this_00,param_2);
  if (local_1d == '\x12') {
    if (*(int *)(*(int *)(DAT_00043558 + 0x4350a) + 0x2c) != 0) {
      in_stack_ffffffd8 = DAT_0004355c + 0x43514;
      mm_camera_debug_log();
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack28,0x10010,(uint)&local_1d,1,in_stack_ffffffd8);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack28);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack28);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

