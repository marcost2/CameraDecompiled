
/* qcamera::QCamera2HardwareInterface::needReprocess() */

uint __thiscall qcamera::QCamera2HardwareInterface::needReprocess(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  QCameraParametersIntf *this_00;
  int *piVar4;
  int local_b0;
  int iStack172;
  uint local_a8;
  uint uStack164;
  int local_18;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar4 = *(int **)(DAT_000b4164 + 0xb4044);
  local_18 = *piVar4;
  iVar1 = QCameraParametersIntf::isJpegPictureFormat(this_00);
  if ((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isNV21PictureFormat(this_00), iVar1 != 0)) {
    iVar1 = QCameraParametersIntf::is4k2kVideoResolution(this_00);
    if ((iVar1 != 0) && (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 != 0))
    {
      QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_b0);
      property_get(DAT_000b4168 + 0xb4080,&local_a8,DAT_000b416c + 0xb4082);
      iVar1 = atoi((char *)&local_a8);
      iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
      if ((iVar2 == 0 || iVar1 == 0) || (iStack172 * local_b0 < 0x21c000)) goto LAB_000b40fa;
    }
    iVar1 = QCameraParametersIntf::is4k2kVideoResolution(this_00);
    if ((iVar1 != 0) && (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 != 0))
    {
      QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_b0);
      property_get(DAT_000b4170 + 0xb40cc,&local_a8,DAT_000b4174 + 0xb40ce);
      iVar1 = atoi((char *)&local_a8);
      iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
      if ((iVar2 == 0 || iVar1 == 0) || (iStack172 * local_b0 < 0x21c000)) goto LAB_000b40fa;
    }
    iVar1 = QCameraParametersIntf::isSmallJpegSizeEnabled(this_00);
    if (iVar1 == 0) {
      __aeabi_memclr8(&local_a8,0x90);
      getPPConfig(this,(cam_pp_feature_config_t *)&local_a8,0,false);
      local_a8 = local_a8 | uStack164;
      uVar3 = local_a8;
      if (local_a8 != 0) {
        uVar3 = 1;
      }
      if (*(int *)(*(int *)(DAT_000b4178 + 0xb4126) + 0x28) != 0) {
        iVar1 = DAT_000b4184 + 0xb4146;
        if (local_a8 != 0) {
          iVar1 = DAT_000b4180 + 0xb4148;
        }
        mm_camera_debug_log(1,3,DAT_000b4188 + 0xb415c,0x2dd0,DAT_000b417c + 0xb4144,iVar1);
      }
      goto LAB_000b40fc;
    }
  }
LAB_000b40fa:
  uVar3 = 0;
LAB_000b40fc:
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

