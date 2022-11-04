
/* qcamera::QCamera2HardwareInterface::needRotationReprocess() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::needRotationReprocess(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  QCameraParametersIntf *this_00;
  undefined4 uVar4;
  int *piVar5;
  int local_7c;
  int iStack120;
  char acStack116 [92];
  int local_18;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar5 = *(int **)(DAT_000bd9f4 + 0xbd928);
  local_18 = *piVar5;
  iVar1 = QCameraParametersIntf::isJpegPictureFormat(this_00);
  if ((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isNV21PictureFormat(this_00), iVar1 != 0)) {
    iVar1 = QCameraParametersIntf::is4k2kVideoResolution(this_00);
    if ((iVar1 != 0) && (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 != 0))
    {
      QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_7c);
      property_get(DAT_000bd9f8 + 0xbd964,acStack116,DAT_000bd9fc + 0xbd966);
      iVar1 = atoi(acStack116);
      iVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
      if ((iVar2 == 0 || iVar1 == 0) || (iStack120 * local_7c < 0x21c000)) goto LAB_000bd9dc;
    }
    iVar1 = QCameraParametersIntf::isSmallJpegSizeEnabled(this_00);
    if ((iVar1 == 0) &&
       (((int)((uint)*(byte *)(*(int *)(*(int *)(DAT_000bda00 + 0xbd99a) + *(int *)(this + 0x5c) * 4
                                       ) + 0x3000) << 0x1c) < 0 &&
        (iVar1 = QCameraParametersIntf::getJpegRotation(this_00), iVar1 != 0)))) {
      if (*(int *)(*(int *)(DAT_000bda04 + 0xbd9b6) + 0x28) == 0) {
        uVar4 = 1;
      }
      else {
        uVar3 = QCameraParametersIntf::getJpegRotation(this_00);
        uVar4 = 1;
        mm_camera_debug_log(1,3,DAT_000bda0c + 0xbd9d8,0x2df3,DAT_000bda08 + 0xbd9cc,uVar3);
      }
      goto LAB_000bd9de;
    }
  }
LAB_000bd9dc:
  uVar4 = 0;
LAB_000bd9de:
  if (*piVar5 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

