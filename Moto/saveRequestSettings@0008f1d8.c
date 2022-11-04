
/* qcamera::QCamera3HardwareInterface::saveRequestSettings(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&, camera3_capture_request*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::saveRequestSettings
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,camera3_capture_request *param_2)

{
  CameraMetadata *this_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uchar local_3c [12];
  uint local_30;
  int *local_2c;
  CameraMetadata aCStack40 [8];
  int local_20;
  int local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_0008f278 + 0x8f1e6);
  local_18 = *piVar3;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      (aCStack40);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (this_00,*(camera_metadata **)(param_2 + 4));
  iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (param_1,(uint)" %d min=%d def=%d\n");
  if (iVar1 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_3c);
    local_20 = *local_2c;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_3c);
    local_1c = local_2c[1];
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_3c);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack40,(uint)" %d min=%d def=%d\n",&local_20,local_30);
  }
  if (*(int *)(param_2 + 8) != 0) {
    local_3c[0] = '\x01';
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack40,0x800d0000,local_3c,1);
  }
  uVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack40);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack40);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

