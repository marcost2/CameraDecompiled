
/* WARNING: Type propagation algorithm not settling */
/* qcamera::QCamera3HardwareInterface::validateCaptureRequest(camera3_capture_request*,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>&) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateCaptureRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,List *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  CameraMetadata aCStack32 [8];
  int local_18;
  
  piVar5 = *(int **)(DAT_0003f150 + 0x3ef10);
  local_18 = *piVar5;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack32);
  if (param_1 == (camera3_capture_request *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_0003f154 + 0x3ef78) + 0x20);
joined_r0x0003f0bc:
    if (iVar1 != 0) {
      mm_camera_debug_log();
    }
  }
  else if ((*(int *)(param_1 + 4) != 0) || (*(int *)(this + 0x117910) != 3)) {
    iVar1 = *(int *)(param_1 + 0xc);
    bVar6 = iVar1 != 0;
    if (bVar6) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if ((bVar6 && iVar1 != 0) ||
       (iVar1 = android::List<qcamera::ReprocessBuffer>::size
                          ((List_qcamera__ReprocessBuffer_ *)param_2), iVar1 != 0)) {
      if (*(uint *)(param_1 + 0xc) < 8) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
LAB_0003f02c:
          if (*(int *)(param_1 + 0xc) < 1) {
            uVar4 = 0;
          }
          else {
            piVar3 = *(int **)(param_1 + 0x10);
            iVar1 = 0;
            iVar2 = 0x14;
            uVar4 = 0;
            do {
              if (*(int *)(*piVar3 + 0x18) == 0) {
                iVar1 = *(int *)(*(int *)(DAT_0003f19c + 0x3f070) + 0x20);
                goto joined_r0x0003f0bc;
              }
              if (piVar3[2] != 0) {
                iVar1 = *(int *)(*(int *)(DAT_0003f1a8 + 0x3f094) + 0x20);
                goto joined_r0x0003f0bc;
              }
              if (piVar3[4] != -1) {
                iVar1 = *(int *)(*(int *)(DAT_0003f1b4 + 0x3f0b8) + 0x20);
                goto joined_r0x0003f0bc;
              }
              if ((int *)piVar3[1] == (int *)0x0) {
                iVar1 = *(int *)(*(int *)(DAT_0003f1c0 + 0x3f0de) + 0x20);
                goto joined_r0x0003f0bc;
              }
              if (*(int *)piVar3[1] == 0) {
                iVar1 = *(int *)(*(int *)(DAT_0003f1cc + 0x3f104) + 0x20);
                goto joined_r0x0003f0bc;
              }
              piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar2);
              iVar2 = iVar2 + 0x14;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0xc));
          }
          goto LAB_0003efe4;
        }
        if (*(int *)(iVar1 + 8) == 0) {
          if (*(int *)(iVar1 + 0x10) == -1) {
            if (*(int *)(iVar1 + 4) != 0) goto LAB_0003f02c;
            iVar1 = *(int *)(*(int *)(DAT_0003f190 + 0x3f12a) + 0x20);
          }
          else {
            iVar1 = *(int *)(*(int *)(DAT_0003f184 + 0x3f006) + 0x20);
          }
        }
        else {
          iVar1 = *(int *)(*(int *)(DAT_0003f178 + 0x3efa0) + 0x20);
        }
      }
      else {
        iVar1 = *(int *)(*(int *)(DAT_0003f16c + 0x3ef52) + 0x20);
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_0003f160 + 0x3efc4) + 0x20);
    }
    goto joined_r0x0003f0bc;
  }
  uVar4 = 0xffffffea;
LAB_0003efe4:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack32);
  if (*piVar5 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

