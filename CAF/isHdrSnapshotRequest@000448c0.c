
/* qcamera::QCamera3HardwareInterface::isHdrSnapshotRequest(camera3_capture_request*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::isHdrSnapshotRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  char cVar1;
  int *piVar2;
  CameraMetadata *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  CameraMetadata aCStack52 [16];
  char *local_24;
  uint auStack32 [2];
  int local_18;
  
  piVar6 = *(int **)(DAT_0004498c + 0x448cc);
  local_18 = *piVar6;
  if (param_1 == (camera3_capture_request *)0x0) {
    if (*(int *)(*(int *)(DAT_00044990 + 0x448fc) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    goto LAB_00044976;
  }
  if (this[0x144] == (QCamera3HardwareInterface)0x0) {
    this_00 = (CameraMetadata *)
              android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                        ((CameraMetadata *)auStack32);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              (this_00,*(camera_metadata **)(param_1 + 4));
    iVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      ((CameraMetadata *)auStack32,0x1000f);
    if (((iVar3 == 0) ||
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack52,auStack32),
        *local_24 != '\x02')) ||
       (iVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          ((CameraMetadata *)auStack32,0x10010), iVar3 == 0)) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                ((CameraMetadata *)auStack32);
      goto LAB_00044976;
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack52,auStack32);
    cVar1 = *local_24;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
              ((CameraMetadata *)auStack32);
    if (cVar1 != '\x12') goto LAB_00044976;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar2 = *(int **)(param_1 + 0x10);
    uVar5 = 0;
    do {
      if (*(int *)(*piVar2 + 0xc) == 0x21) {
        uVar4 = 1;
        goto LAB_00044978;
      }
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 5;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
LAB_00044976:
  uVar4 = 0;
LAB_00044978:
  if (*piVar6 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

