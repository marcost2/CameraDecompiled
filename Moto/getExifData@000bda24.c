
/* qcamera::QCamera2HardwareInterface::getExifData() */

QCameraExif * __thiscall
qcamera::QCamera2HardwareInterface::getExifData(QCamera2HardwareInterface *this)

{
  QCameraExif *this_00;
  int *this_01;
  MotExif *this_02;
  undefined4 uVar1;
  int iVar2;
  QCameraParametersIntf *this_03;
  int *piVar3;
  undefined2 local_d0;
  char cStack205;
  rat_t arStack204 [8];
  uint local_c4;
  rat_t arStack192 [8];
  void *local_b8;
  void *local_b4;
  char acStack176 [2];
  char acStack174 [2];
  rat_t arStack172 [24];
  char acStack148 [20];
  rat_t arStack128 [24];
  rat_t arStack104 [27];
  char acStack77 [41];
  int local_24;
  
  piVar3 = *(int **)(DAT_000bdd84 + 0xbda32);
  local_24 = *piVar3;
  this_00 = (QCameraExif *)operator_new(0x4b8);
  QCameraExif::QCameraExif(this_00);
  this_01 = (int *)operator_new(0x10);
  this_03 = (QCameraParametersIntf *)(this + 0x4ac);
  this_02 = (MotExif *)MotExifHal1::MotExifHal1((MotExifHal1 *)this_01,this_00,this_03);
  MotExif::write_mot_exif(this_02,*(uint *)(this + 0x5c),false);
  uVar1 = QCameraParametersIntf::getFlashValue(this_03);
  *(undefined4 *)(this + 0xabc) = uVar1;
  uVar1 = QCameraParametersIntf::getRedEyeValue(this_03);
  *(undefined4 *)(this + 0xac0) = uVar1;
  uVar1 = QCameraParametersIntf::getSupportedFlashModes(this_03);
  *(undefined4 *)(this + 0xac4) = uVar1;
  android::String8::String8((String8 *)&local_b4);
  android::String8::String8((String8 *)&local_b8);
  iVar2 = QCameraParametersIntf::getExifDateTime(this_03,(String8 *)&local_b4,(String8 *)&local_b8);
  if (iVar2 == 0) {
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0x450132,2,iVar2 + 1,local_b4);
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0x939003,2,iVar2 + 1,local_b4);
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0x949004,2,iVar2 + 1,local_b4);
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0xa49290,2,iVar2 + 1,local_b8);
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0xa59291,2,iVar2 + 1,local_b8);
    iVar2 = android::String8::length();
    QCameraExif::addEntry(this_00,0xa69292,2,iVar2 + 1,local_b8);
  }
  else if (*(int *)(*(int *)(DAT_000bdde4 + 0xbdaa6) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bddec + 0xbdac0,0x2e6a,DAT_000bdde8 + 0xbdab8);
  }
  iVar2 = QCameraParametersIntf::getExifFocalLength(this_03,arStack192);
  if (iVar2 == 0) {
    QCameraExif::addEntry(this_00,0xa0920a,5,1,arStack192);
  }
  else if (*(int *)(*(int *)(DAT_000bddf0 + 0xbdb7a) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bddf8 + 0xbdb92,0x2e78,DAT_000bddf4 + 0xbdb8a);
  }
  local_c4 = 0;
  iVar2 = QCameraParametersIntf::getExifGpsProcessingMethod(this_03,acStack77,&local_c4);
  if (iVar2 == 0) {
    QCameraExif::addEntry(this_00,0x1b001b,2,local_c4,acStack77);
  }
  else if (*(int *)(*(int *)(DAT_000bddfc + 0xbdbc4) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bde04 + 0xbdbdc,0x2e90,DAT_000bde00 + 0xbdbd4);
  }
  iVar2 = QCameraParametersIntf::getExifLatitude(this_03,arStack104,acStack174);
  if (iVar2 == 0) {
    QCameraExif::addEntry(this_00,0x20002,5,3,arStack104);
    QCameraExif::addEntry(this_00,0x10001,2,2,acStack174);
  }
  else if (*(int *)(*(int *)(DAT_000bde08 + 0xbdc08) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bde10 + 0xbdc20,0x2ea0,DAT_000bde0c + 0xbdc18);
  }
  iVar2 = QCameraParametersIntf::getExifLongitude(this_03,arStack128,acStack176);
  if (iVar2 == 0) {
    QCameraExif::addEntry(this_00,(uint)"aChannelC2Ev",5,3,arStack128);
    QCameraExif::addEntry
              (this_00,(uint)
                       "era3Channel20bokehProcessCallbackEP21mm_camera_super_buf_tPNS_14QCamera3StreamE"
               ,2,2,acStack176);
  }
  else if (*(int *)(*(int *)(DAT_000bde14 + 0xbdc5a) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bde1c + 0xbdc72,0x2eb1,DAT_000bde18 + 0xbdc6a);
  }
  iVar2 = QCameraParametersIntf::getExifAltitude(this_03,arStack204,&cStack205);
  if (iVar2 == 0) {
    QCameraExif::addEntry(this_00,(uint)"d",5,1,arStack204);
    QCameraExif::addEntry
              (this_00,(uint)"ZN7qcamera30Parameters_S5K4H7_CapabilitiesEP16cam_capability_t",1,1,
               &cStack205);
  }
  else if (*(int *)(*(int *)(DAT_000bde20 + 0xbdcae) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bde28 + 0xbdcc6,0x2ec2,DAT_000bde24 + 0xbdcbe);
  }
  iVar2 = QCameraParametersIntf::getExifGpsDateTimeStamp(this_03,acStack148,0x14,arStack172);
  if (iVar2 == 0) {
    iVar2 = __strlen_chk(acStack148,0x14);
    QCameraExif::addEntry(this_00,0x1d001d,2,iVar2 + 1,acStack148);
    QCameraExif::addEntry(this_00,(uint)"%d min=%d def=%d\n",5,3,arStack172);
  }
  else if (*(int *)(*(int *)(DAT_000bde2c + 0xbdd02) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_000bde34 + 0xbdd1a,0x2ed3,DAT_000bde30 + 0xbdd12);
  }
  MotExif::write_mot_exif_parameters_locked((MotExif *)this_01);
  (**(code **)(*this_01 + 4))(this_01);
  iVar2 = QCameraParametersIntf::useJpegExifRotation(this_03);
  if (iVar2 == 0) goto LAB_000bddb8;
  iVar2 = QCameraParametersIntf::getJpegExifRotation(this_03);
  if (iVar2 < 0xb4) {
    if ((iVar2 == 0) || (iVar2 != 0x5a)) {
LAB_000bdd80:
      local_d0 = 1;
    }
    else {
      local_d0 = 6;
    }
  }
  else if (iVar2 == 0xb4) {
    local_d0 = 3;
  }
  else {
    if (iVar2 != 0x10e) goto LAB_000bdd80;
    local_d0 = 8;
  }
  QCameraExif::addEntry(this_00,0x2f0112,3,1,&local_d0);
  QCameraExif::addEntry(this_00,0x770112,3,1,&local_d0);
LAB_000bddb8:
  construct_makernotes(this,this_00);
  android::String8::_String8((String8 *)&local_b8);
  android::String8::_String8((String8 *)&local_b4);
  if (*piVar3 == local_24) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

