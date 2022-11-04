
/* qcamera::QCamera2HardwareInterface::preStartRecording() */

int __thiscall
qcamera::QCamera2HardwareInterface::preStartRecording(QCamera2HardwareInterface *this)

{
  int iVar1;
  int *piVar2;
  QCameraParametersIntf *this_00;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b4f04 + 0xb4e64);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b4f0c + 0xb4e7c,0x11ec,DAT_000b4f08 + 0xb4e74);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00);
  if (iVar1 == 0) {
    piVar2 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
    if (*piVar2 != 1) {
      if (*(int *)(iVar3 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000b4f14 + 0xb4eda,0x11f2,DAT_000b4f10 + 0xb4ed2);
      }
      stopPreview(SUB41(this,0));
      QCameraParametersIntf::updateRecordingHintValue(this_00,1);
      iVar1 = preparePreview(this);
      if (iVar1 == 0) {
        iVar1 = startPreview(this);
      }
      goto LAB_000b4ea0;
    }
    this[0x1be8] = (QCamera2HardwareInterface)0x1;
  }
  iVar1 = 0;
LAB_000b4ea0:
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b4f1c + 0xb4eba,0x1208,DAT_000b4f18 + 0xb4eb0,iVar1);
  }
  return iVar1;
}

