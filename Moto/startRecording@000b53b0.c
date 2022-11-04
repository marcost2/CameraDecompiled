
/* qcamera::QCamera2HardwareInterface::startRecording() */

uint __thiscall qcamera::QCamera2HardwareInterface::startRecording(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  QCameraStream *pQVar4;
  QCameraChannel *pQVar5;
  QCameraParametersIntf *this_00;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_8c;
  int iStack136;
  char acStack132 [92];
  int local_28;
  
  piVar8 = *(int **)(DAT_000b55c4 + 0xb53be);
  local_28 = *piVar8;
  iVar9 = *(int *)(DAT_000b55c8 + 0xb53cc);
  if (*(int *)(iVar9 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b55d0 + 0xb53e8,0x121b,DAT_000b55cc + 0xb53e0);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_8c);
  property_get(DAT_000b55d4 + 0xb5404,acStack132,DAT_000b55d8 + 0xb5406);
  iVar1 = atoi(acStack132);
  iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
  if ((((iVar2 != 0 && iVar1 != 0) && (0x21bfff < iStack136 * local_8c)) &&
      (pQVar5 = *(QCameraChannel **)(this + 0x9bc), pQVar5 != (QCameraChannel *)0x0)) &&
     (uVar3 = *(uint *)(pQVar5 + 0x1c), uVar3 != 0)) {
    piVar7 = *(int **)(this + 0x9c0);
    uVar6 = 0;
    do {
      pQVar4 = (QCameraStream *)QCameraChannel::getStreamByIndex(pQVar5,uVar6);
      if ((pQVar4 != (QCameraStream *)0x0) && (iVar1 = QCameraStream::getMyType(pQVar4), iVar1 == 7)
         ) {
        uVar3 = (**(code **)(*piVar7 + 0x10))(piVar7,pQVar5,pQVar4);
        if ((uVar3 != 0) && (*(int *)(iVar9 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000b55e0 + 0xb557a,0x1234,DAT_000b55dc + 0xb5570,uVar3);
          goto LAB_000b5432;
        }
        if (uVar3 != 0) goto LAB_000b5432;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (*(int **)(this + 0x9c0) == (int *)0x0) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = (**(code **)(**(int **)(this + 0x9c0) + 0x14))();
  }
LAB_000b5432:
  iVar1 = QCameraParametersIntf::isTNRSnapshotEnabled(this_00);
  if (iVar1 != 0) {
    QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_8c);
    property_get(DAT_000b55e4 + 0xb5450,acStack132,DAT_000b55e8 + 0xb5452);
    iVar1 = atoi(acStack132);
    iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
    if ((iVar2 == 0 || iVar1 == 0) || (iStack136 * local_8c < 0x21c000)) {
      piVar7 = *(int **)(this + 0x9c4);
      iVar1 = QCameraParametersIntf::is4k2kVideoResolution(this_00);
      if (iVar1 == 0) {
        pQVar5 = *(QCameraChannel **)(this + 0x9bc);
        if (pQVar5 != (QCameraChannel *)0x0) {
          uVar3 = *(uint *)(pQVar5 + 0x1c);
        }
        if (pQVar5 != (QCameraChannel *)0x0 && uVar3 != 0) {
          uVar6 = 0;
          do {
            pQVar4 = (QCameraStream *)QCameraChannel::getStreamByIndex(pQVar5,uVar6);
            if ((pQVar4 != (QCameraStream *)0x0) &&
               (iVar1 = QCameraStream::getMyType(pQVar4), iVar1 == 7)) {
              iVar1 = (**(code **)(*piVar7 + 0x10))(piVar7,pQVar5,pQVar4);
              if ((iVar1 != 0) && (*(int *)(iVar9 + 0x24) != 0)) {
                mm_camera_debug_log(1,2,DAT_000b55f0 + 0xb55b2,0x1256,DAT_000b55ec + 0xb55a6,iVar1);
              }
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
      }
      if (*(int *)(iVar9 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000b55f8 + 0xb54a0,0x125a,DAT_000b55f4 + 0xb5498);
      }
      uVar3 = (**(code **)(*piVar7 + 0x14))(piVar7);
    }
  }
  if (*(int *)(iVar9 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b5600 + 0xb54ca,0x1264,DAT_000b55fc + 0xb54c0,uVar3);
  }
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

