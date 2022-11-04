
/* qcamera::QCamera3HardwareInterface::isHdrSnapshotRequest(camera3_capture_request*) */

void __thiscall
qcamera::QCamera3HardwareInterface::isHdrSnapshotRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  char cVar1;
  CameraMetadata *this_00;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined auStack52 [16];
  char *local_24;
  CameraMetadata aCStack32 [8];
  int local_18;
  
  piVar6 = *(int **)(DAT_0008a564 + 0x8a4a6);
  local_18 = *piVar6;
  if (param_1 == (camera3_capture_request *)0x0) {
    if (*(int *)(*(int *)(DAT_0008a568 + 0x8a4d4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008a570 + 0x8a4ec,0x1021,DAT_0008a56c + 0x8a4e4);
    }
    goto LAB_0008a54e;
  }
  if (this[0x1ac] == (QCamera3HardwareInterface)0x0) {
    this_00 = (CameraMetadata *)
              android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                        (aCStack32);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              (this_00,*(camera_metadata **)(param_1 + 4));
    iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (aCStack32,0x1000f);
    if (((iVar2 == 0) ||
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack52),
        *local_24 != '\x02')) ||
       (iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          (aCStack32,0x10010), iVar2 == 0)) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack32);
      goto LAB_0008a54e;
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack52);
    cVar1 = *local_24;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack32);
    if (cVar1 != '\x12') goto LAB_0008a54e;
  }
  if (*(uint *)(param_1 + 0xc) != 0) {
    piVar4 = *(int **)(param_1 + 0x10);
    uVar5 = 0;
    do {
      if (*(int *)(*piVar4 + 0xc) == 0x21) {
        uVar3 = 1;
        goto LAB_0008a550;
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 5;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
LAB_0008a54e:
  uVar3 = 0;
LAB_0008a550:
  if (*piVar6 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

