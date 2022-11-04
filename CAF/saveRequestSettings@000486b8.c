
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
  uint in_stack_ffffffc0;
  CameraMetadata local_3c [12];
  uint local_30;
  undefined4 *local_2c;
  CameraMetadata aCStack40 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_00048758 + 0x486c6);
  local_18 = *piVar3;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      (aCStack40);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (this_00,*(camera_metadata **)(param_2 + 4));
  iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (param_1,(uint)&DAT_00070006);
  if (iVar1 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(local_3c,(uint *)param_1);
    local_20 = *local_2c;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(local_3c,(uint *)param_1);
    local_1c = local_2c[1];
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(local_3c,(uint *)param_1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack40,(uint)&DAT_00070006,(uint)&local_20,local_30,in_stack_ffffffc0);
  }
  if (*(int *)(param_2 + 8) != 0) {
    local_3c[0] = (CameraMetadata)0x1;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack40,0x800d0000,(uint)local_3c,1,in_stack_ffffffc0);
  }
  uVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack40);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack40);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

