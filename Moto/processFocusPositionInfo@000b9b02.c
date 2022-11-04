
/* qcamera::QCamera2HardwareInterface::processFocusPositionInfo(cam_focus_pos_info_t&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::processFocusPositionInfo
          (QCamera2HardwareInterface *this,cam_focus_pos_info_t *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0x1eba] = (QCamera2HardwareInterface)0x1;
  *(undefined4 *)(this + 0x1e94) = uVar1;
  if ((this[0x1eb8] != (QCamera2HardwareInterface)0x0) &&
     (this[0x1eb9] != (QCamera2HardwareInterface)0x0)) {
    this[0x1eb8] = (QCamera2HardwareInterface)0x0;
    this[0x1eb9] = (QCamera2HardwareInterface)0x0;
    this[0x1eba] = (QCamera2HardwareInterface)0x0;
    notifyPostProcStatus(this);
  }
  QCameraParametersIntf::updateCurrentFocusPosition((QCameraParametersIntf *)(this + 0x4ac),param_1)
  ;
  return 0;
}

