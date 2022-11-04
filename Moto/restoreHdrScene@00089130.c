
/* qcamera::QCamera3HardwareInterface::restoreHdrScene(unsigned char, camera_metadata const*) */

void __thiscall
qcamera::QCamera3HardwareInterface::restoreHdrScene
          (QCamera3HardwareInterface *this,uchar param_1,camera_metadata *param_2)

{
  CameraMetadata *this_00;
  int *piVar1;
  uchar local_1d;
  CameraMetadata aCStack28 [8];
  int local_14;
  
  piVar1 = *(int **)(DAT_000891a8 + 0x89142);
  local_14 = *piVar1;
  local_1d = param_1;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      (aCStack28);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::acquire(this_00,param_2);
  if (param_1 == '\x12') {
    if (*(int *)(*(int *)(DAT_000891ac + 0x8915c) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000891b4 + 0x89174,0xefb,DAT_000891b0 + 0x8916c);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack28,0x10010,&local_1d,1);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack28);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack28);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

