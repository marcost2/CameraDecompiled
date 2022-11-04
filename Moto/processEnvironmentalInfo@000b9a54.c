
/* qcamera::QCamera2HardwareInterface::processEnvironmentalInfo(cam_env_info_data_t*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::processEnvironmentalInfo
          (QCamera2HardwareInterface *this,cam_env_info_data_t *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x28] != (cam_env_info_data_t)0x0) {
    this[0x1eb8] = (QCamera2HardwareInterface)0x1;
    *(undefined4 *)(this + 0x1e98) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x1e9c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x1ea0) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x1ebc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(this + 0x1e90) = *(undefined4 *)param_1;
  }
  if (param_1[0x29] != (cam_env_info_data_t)0x0) {
    this[0x1eb9] = (QCamera2HardwareInterface)0x1;
    *(undefined4 *)(this + 0x1ea4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x1ea8) = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x1eb4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(this + 0x1eac) = uVar1;
  }
  if (param_1[0x2a] != (cam_env_info_data_t)0x0) {
    this[0x1eba] = (QCamera2HardwareInterface)0x1;
    *(undefined4 *)(this + 0x1e94) = *(undefined4 *)(param_1 + 4);
  }
  if (((*(char *)(this + 0x1eb8) != '\0') && (this[0x1eb9] != (QCamera2HardwareInterface)0x0)) &&
     (this[0x1eba] != (QCamera2HardwareInterface)0x0)) {
    this[0x1eba] = (QCamera2HardwareInterface)0x0;
    *(undefined2 *)(this + 0x1eb8) = 0;
    notifyPostProcStatus(this);
  }
  return 0;
}

