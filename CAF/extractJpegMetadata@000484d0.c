
/* qcamera::QCamera3HardwareInterface::extractJpegMetadata(android::hardware::camera::common::V1_0::helper::CameraMetadata&,
   camera3_capture_request const*) */

void __thiscall
qcamera::QCamera3HardwareInterface::extractJpegMetadata
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,camera3_capture_request *param_2)

{
  int *piVar1;
  CameraMetadata *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint in_stack_ffffffa8;
  CameraMetadata aCStack84 [12];
  uint local_48;
  int *local_44;
  uint auStack64 [2];
  int local_38;
  int local_34;
  uint local_2c;
  int local_24;
  
  piVar5 = *(int **)(DAT_000486b4 + 0x484e2);
  local_24 = *piVar5;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      ((CameraMetadata *)auStack64);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (this_00,*(camera_metadata **)(param_2 + 4));
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,0x70000);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x70000,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)&DAT_00070001);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)&DAT_00070001,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)&DAT_00070002);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)&DAT_00070002,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)&DAT_00070003);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)&DAT_00070003,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)__cxa_finalize);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)__cxa_finalize,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)&DAT_00070005);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    piVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find
              ((CameraMetadata *)&local_38,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)&DAT_00070005,(uint)piVar1,local_2c,in_stack_ffffffa8);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    ((CameraMetadata *)auStack64,(uint)&DAT_00070006);
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    local_38 = *local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    local_34 = local_44[1];
    iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      ((CameraMetadata *)auStack64,(uint)&DAT_00070003);
    if (iVar2 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
      iVar4 = *local_44;
      iVar3 = needJpegExifRotation(this);
      iVar2 = local_38;
      if ((iVar3 == 0) && (iVar4 == 0x10e || iVar4 == 0x5a)) {
        local_38 = local_34;
        local_34 = iVar2;
      }
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack84,auStack64);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)&DAT_00070006,(uint)&local_38,local_48,in_stack_ffffffa8);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)auStack64);
  if (*piVar5 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

