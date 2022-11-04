
/* qcamera::QCamera3HardwareInterface::extractJpegMetadata(android::hardware::camera::common::V1_0::helper::CameraMetadata&,
   camera3_capture_request const*) */

void __thiscall
qcamera::QCamera3HardwareInterface::extractJpegMetadata
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,camera3_capture_request *param_2)

{
  double *pdVar1;
  CameraMetadata *this_00;
  int iVar2;
  int *piVar3;
  undefined auStack84 [12];
  uint local_48;
  double *local_44;
  CameraMetadata aCStack64 [8];
  int local_38;
  int local_34;
  uint local_2c;
  int local_24;
  
  piVar3 = *(int **)(DAT_0008f1c4 + 0x8efbe);
  local_24 = *piVar3;
  this_00 = (CameraMetadata *)
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      (aCStack64);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
            (this_00,*(camera_metadata **)(param_2 + 4));
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists(aCStack64,0x70000)
  ;
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x70000,pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)"ening %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)"ening %d min=%d def=%d\n",(uchar *)pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)"ning %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)"ning %d min=%d def=%d\n",(longlong *)pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)"ing %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)"ing %d min=%d def=%d\n",(int *)pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)"ng %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)"ng %d min=%d def=%d\n",(uchar *)pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)"g %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    pdVar1 = local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)"g %d min=%d def=%d\n",(uchar *)pdVar1,local_2c);
  }
  iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                    (aCStack64,(uint)" %d min=%d def=%d\n");
  if (iVar2 != 0) {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    local_38 = *(int *)local_44;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    local_34 = *(int *)((int)local_44 + 4);
    iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack64,(uint)"ing %d min=%d def=%d\n");
    if (iVar2 != 0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
      iVar2 = local_38;
      if ((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_0008f1c8 + 0x8f14c) +
                                        *(int *)(this + 0x60) * 4) + 0x3000) << 0x1c) < 0) {
        if (*(int *)local_44 == 0x10e || *(int *)local_44 == 0x5a) {
          local_38 = local_34;
          local_34 = iVar2;
        }
      }
      else if (*(int *)(*(int *)(DAT_0008f1cc + 0x8f160) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008f1d4 + 0x8f178,0x3259,DAT_0008f1d0 + 0x8f170);
      }
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack84);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,(uint)" %d min=%d def=%d\n",&local_38,local_48);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack64);
  if (*piVar3 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

