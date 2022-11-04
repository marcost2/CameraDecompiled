
/* qcamera::QCamera2HardwareInterface::needFDMetadata(qcamera::qcamera_ch_type_enum_t) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::needFDMetadata
          (QCamera2HardwareInterface *this,qcamera_ch_type_enum_t param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = QCameraParametersIntf::isSnapshotFDNeeded((QCameraParametersIntf *)(this + 0x4ac));
    if ((iVar1 != 0) &&
       (iVar1 = QCameraParametersIntf::isFaceDetectionEnabled
                          ((QCameraParametersIntf *)(this + 0x4ac)), iVar1 != 0)) {
      if (*(int *)(*(int *)(DAT_000bec98 + 0xbec6c) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000beca0 + 0xbec86,0x35d7,DAT_000bec9c + 0xbec7e);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

