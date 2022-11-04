
/* qcamera::QCamera3HardwareInterface::convertFromRegions(cam_area_t&, camera_metadata const*,
   unsigned int) */

void qcamera::QCamera3HardwareInterface::convertFromRegions
               (cam_area_t *param_1,camera_metadata *param_2,uint param_3)

{
  CameraMetadata *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined auStack68 [16];
  int *local_34;
  CameraMetadata aCStack48 [8];
  int local_28;
  
  piVar4 = *(int **)(DAT_00090ec8 + 0x90e3e);
  local_28 = *piVar4;
  this = (CameraMetadata *)
         android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack48);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_(this,param_2);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack68);
  iVar5 = *local_34;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack68);
  iVar3 = local_34[1];
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack68);
  iVar6 = local_34[2];
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack68);
  iVar2 = local_34[3];
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack68);
  iVar1 = local_34[4];
  *(int *)param_1 = iVar5;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar6 - iVar5;
  *(int *)(param_1 + 0xc) = iVar2 - iVar3;
  *(int *)(param_1 + 0x10) = iVar1;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack48);
  if (*piVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

