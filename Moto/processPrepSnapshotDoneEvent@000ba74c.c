
/* qcamera::QCamera2HardwareInterface::processPrepSnapshotDoneEvent(cam_prep_snapshot_state_t) */

int __thiscall
qcamera::QCamera2HardwareInterface::processPrepSnapshotDoneEvent
          (QCamera2HardwareInterface *this,cam_prep_snapshot_state_t param_1)

{
  QCameraParametersIntf *this_00;
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ba800 + 0xba75a);
  if (*(int *)(iVar1 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000ba808 + 0xba774,0x1fda,DAT_000ba804 + 0xba76a,param_1);
  }
  if (param_1 != 1) {
    return 0;
  }
  if (*(int *)(this + 0x9b4) == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000ba810 + 0xba79a,0x1fdd,DAT_000ba80c + 0xba792);
  }
  if (this[0x9da] != (QCamera2HardwareInterface)0x0) {
    this_00 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar1 = QCameraParametersIntf::forceInitBatchUpdate(this_00);
    if (iVar1 != 0) {
      __android_log_print(6,DAT_000ba814 + 0xba7bc,DAT_000ba818 + 0xba7be,DAT_000ba81c + 0xba7c0);
      return iVar1;
    }
    iVar1 = QCameraParametersIntf::setAecLock(this_00,(char *)(DAT_000ba820 + 0xba7cc));
    if (iVar1 != 0) {
      __android_log_print(6,DAT_000ba824 + 0xba7de,DAT_000ba828 + 0xba7e0,DAT_000ba82c + 0xba7e2);
      QCameraParametersIntf::cancelParameterChanges(this_00);
      return iVar1;
    }
    QCameraParametersIntf::commitParameters();
    this[0x9db] = (QCamera2HardwareInterface)0x1;
  }
  return 0;
}

