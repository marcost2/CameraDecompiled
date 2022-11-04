
/* qcamera::QCamera2HardwareInterface::setMpoComposition(bool) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setMpoComposition(QCamera2HardwareInterface *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  QCameraParametersIntf *this_00;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  this[0x4d8] = (QCamera2HardwareInterface)0x0;
  piVar1 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
  uVar3 = 0x80000001;
  if ((((*piVar1 == 1) &&
       (iVar2 = QCameraParametersIntf::isAdvCamFeaturesEnabled(this_00), iVar2 == 0)) &&
      (iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar2 == 0)) &&
     ((this[0xaa8] == (QCamera2HardwareInterface)0x0 &&
      (this[0xa9e] == (QCamera2HardwareInterface)0x0)))) {
    this[0x4d8] = (QCamera2HardwareInterface)param_1;
    if (*(int *)(*(int *)(DAT_000b3000 + 0xb2fda) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b3008 + 0xb2ff4,0xaaa,DAT_000b3004 + 0xb2fea,param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}

