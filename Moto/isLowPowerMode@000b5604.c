
/* qcamera::QCamera2HardwareInterface::isLowPowerMode() */

void __thiscall qcamera::QCamera2HardwareInterface::isLowPowerMode(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_78;
  int iStack116;
  char acStack112 [92];
  int local_14;
  
  piVar4 = *(int **)(DAT_000b566c + 0xb5616);
  local_14 = *piVar4;
  QCameraParametersIntf::getStreamDimension
            ((QCameraParametersIntf *)(this + 0x4ac),4,(cam_dimension_t *)&local_78);
  property_get(DAT_000b5670 + 0xb562c,acStack112,DAT_000b5674 + 0xb562e);
  iVar1 = atoi(acStack112);
  iVar2 = QCameraParametersIntf::getRecordingHintValue((QCameraParametersIntf *)(this + 0x4ac));
  uVar3 = 0;
  if ((iVar2 != 0 && iVar1 != 0) && (uVar3 = 0, 0x21bfff < local_78 * iStack116)) {
    uVar3 = 1;
  }
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

