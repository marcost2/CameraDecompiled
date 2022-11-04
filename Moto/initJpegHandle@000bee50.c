
/* qcamera::QCamera2HardwareInterface::initJpegHandle() */

void __thiscall qcamera::QCamera2HardwareInterface::initJpegHandle(QCamera2HardwareInterface *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *pQVar4;
  QCamera2HardwareInterface *pQVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_2c;
  undefined4 uStack40;
  int local_24;
  
  piVar6 = *(int **)(DAT_000bef48 + 0xbee5e);
  local_24 = *piVar6;
  iVar7 = *(int *)(DAT_000bef4c + 0xbee68);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bef54 + 0xbee80,0x379a,DAT_000bef50 + 0xbee78);
  }
  iVar1 = *(int *)(this + 0x1de8);
  if (iVar1 == 0) {
    QCameraParametersIntf::getMaxPicSize
              ((QCameraParametersIntf *)(this + 0x4ac),(cam_dimension_t *)&local_2c);
    piVar2 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo
                              ((QCameraParametersIntf *)(this + 0x4ac));
    if (*piVar2 == 1) {
      pQVar4 = this + 0x1de0;
      if (this[0x4a4] == (QCamera2HardwareInterface)0x0) {
        pQVar5 = (QCamera2HardwareInterface *)0x0;
      }
      else {
        pQVar5 = this + 0x68;
      }
    }
    else {
      pQVar4 = (QCamera2HardwareInterface *)0x0;
      pQVar5 = (QCamera2HardwareInterface *)0x0;
    }
    iVar1 = jpeg_open(this + 0x1dcc,pQVar4,local_2c,uStack40,pQVar5);
    *(int *)(this + 0x1de8) = iVar1;
    if (iVar1 == 0) {
      if (*(int *)(iVar7 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bef5c + 0xbef3a,0x37af,DAT_000bef58 + 0xbef32);
      }
      uVar3 = 0x80000000;
      goto LAB_000bef14;
    }
    this[0x1dec] = (QCamera2HardwareInterface)0x1;
  }
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bef64 + 0xbef10,0x37b7,DAT_000bef60 + 0xbeefc,this[0x1dec],iVar1,
                        *(undefined4 *)(this + 0x5c));
  }
  uVar3 = 0;
LAB_000bef14:
  if (*piVar6 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

