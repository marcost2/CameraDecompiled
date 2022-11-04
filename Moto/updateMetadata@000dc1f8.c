
/* qcamera::QCamera2HardwareInterface::updateMetadata(metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::updateMetadata
          (QCamera2HardwareInterface *this,metadata_buffer_t *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  QCameraParametersIntf *this_00;
  int *piVar5;
  uint local_68;
  undefined4 local_60;
  undefined8 local_50;
  uint local_48;
  undefined4 uStack68;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  
  piVar5 = *(int **)(DAT_000dc394 + 0xdc208);
  iVar4 = *piVar5;
  if (param_1 == (metadata_buffer_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000dc398 + 0xdc29c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dc3a0 + 0xdc2b6,0x8bc,DAT_000dc39c + 0xdc2ae);
    }
  }
  else {
    this_00 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar2 = QCameraParametersIntf::getSharpness(this_00);
    bVar1 = (byte)iVar2;
    if (iVar2 != 0) {
      bVar1 = 1;
    }
    local_68 = (uint)bVar1;
    *(int *)(param_1 + 0xc6a8) = iVar2;
    *(uint *)(param_1 + 0xc6a4) = local_68;
    param_1[0x7e] = (metadata_buffer_t)0x1;
    uVar3 = QCameraParametersIntf::getEffect(this_00);
    *(undefined4 *)(param_1 + 0x70ee0) = uVar3;
    param_1[0xc] = (metadata_buffer_t)0x1;
    uVar3 = QCameraParametersIntf::getFlipMode(this_00,3);
    *(undefined4 *)(param_1 + 0x76f80) = uVar3;
    param_1[0xe7] = (metadata_buffer_t)0x1;
    uVar3 = QCameraParametersIntf::isWNREnabled(this_00);
    *(undefined4 *)(param_1 + 0xc6f4) = uVar3;
    param_1[0x8d] = (metadata_buffer_t)0x1;
    iVar2 = QCameraParametersIntf::getJpegRotation(this_00);
    local_60 = 0;
    if (iVar2 < 0xb4) {
      uVar3 = 1;
      if ((iVar2 != 0) && (uVar3 = local_60, iVar2 == 0x5a)) {
        uVar3 = 2;
      }
    }
    else if (iVar2 == 0xb4) {
      uVar3 = 4;
    }
    else {
      uVar3 = local_60;
      if (iVar2 == 0x10e) {
        uVar3 = 8;
      }
    }
    local_60 = uVar3;
    iVar2 = QCameraParametersIntf::getDeviceRotation(this_00);
    if (iVar2 == 0xb4) {
      uVar3 = 4;
    }
    else if (iVar2 == 0x5a) {
      uVar3 = 2;
    }
    else if ((iVar2 == 0) || (iVar2 != 0x10e)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 8;
    }
    *(undefined4 *)(param_1 + 0x74aec) = 0;
    param_1[0x38] = (metadata_buffer_t)0x1;
    *(ulonglong *)(param_1 + 0x74ae4) = CONCAT44(uVar3,local_60);
    QCameraParametersIntf::getDynamicImgData();
    iVar2 = QCameraParametersIntf::isStillMoreEnabled(this_00);
    if (iVar2 != 0) {
      bVar1 = QCameraParametersIntf::getStillMoreSettings(this_00);
      local_48 = (uint)bVar1;
    }
    *(undefined8 *)(param_1 + 0x76fb8) = local_50;
    *(ulonglong *)(param_1 + 0x76fc0) = CONCAT44(uStack68,local_48);
    *(undefined8 *)(param_1 + 0x76fc8) = local_40;
    *(undefined8 *)(param_1 + 0x76fd0) = uStack56;
    param_1[0xf2] = (metadata_buffer_t)0x1;
    *(undefined8 *)(param_1 + 0x76fd8) = local_30;
    *(undefined8 *)(param_1 + 0x76fe0) = uStack40;
    uVar3 = QCameraParametersIntf::getCDSMode(this_00);
    *(undefined4 *)(param_1 + 0x73644) = uVar3;
    param_1[0x5b] = (metadata_buffer_t)0x1;
  }
  if (*piVar5 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

