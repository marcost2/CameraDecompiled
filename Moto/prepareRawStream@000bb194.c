
/* qcamera::QCamera2HardwareInterface::prepareRawStream(qcamera::QCameraChannel*) */

void __thiscall
qcamera::QCamera2HardwareInterface::prepareRawStream
          (QCamera2HardwareInterface *this,QCameraChannel *param_1)

{
  int *piVar1;
  QCamera2HardwareInterface *pQVar2;
  QCameraStream *pQVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  QCameraChannel *this_00;
  int iVar7;
  byte bVar8;
  int iVar9;
  int local_30;
  int iStack44;
  int local_28;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar9 = 0;
  piVar1 = *(int **)(DAT_000bb290 + 0xbb1b0);
  local_28 = *piVar1;
  do {
    pQVar2 = this + iVar9 * 4;
    this_00 = *(QCameraChannel **)(pQVar2 + 0x9b4);
    if (this_00 != (QCameraChannel *)0x0) {
      pQVar2 = *(QCamera2HardwareInterface **)(this_00 + 0x1c);
    }
    if (this_00 != (QCameraChannel *)0x0 && pQVar2 != (QCamera2HardwareInterface *)0x0) {
      uVar5 = 0;
      bVar8 = 0;
      do {
        pQVar3 = (QCameraStream *)QCameraChannel::getStreamByIndex(this_00,uVar5);
        if (((pQVar3 != (QCameraStream *)0x0) &&
            (iVar4 = QCameraStream::isTypeOf(pQVar3,7), iVar4 == 0)) &&
           (iVar4 = QCameraStream::isTypeOf(pQVar3,2), iVar4 == 0)) {
          QCameraStream::getFrameDimension(pQVar3,(cam_dimension_t *)&local_30);
          if (iVar6 < iStack44) {
            iVar6 = iStack44;
          }
          if (iVar7 < local_30) {
            iVar7 = local_30;
          }
        }
        bVar8 = bVar8 + 1;
        uVar5 = (uint)bVar8;
      } while (uVar5 < *(uint *)(this_00 + 0x1c));
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 9);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar5 = 0;
    bVar8 = 0;
    do {
      pQVar3 = (QCameraStream *)QCameraChannel::getStreamByIndex(param_1,uVar5);
      if (((pQVar3 != (QCameraStream *)0x0) &&
          (iVar9 = QCameraStream::isTypeOf(pQVar3,7), iVar9 == 0)) &&
         (iVar9 = QCameraStream::isTypeOf(pQVar3,2), iVar9 == 0)) {
        QCameraStream::getFrameDimension(pQVar3,(cam_dimension_t *)&local_30);
        if (iVar6 < iStack44) {
          iVar6 = iStack44;
        }
        if (iVar7 < local_30) {
          iVar7 = local_30;
        }
      }
      bVar8 = bVar8 + 1;
      uVar5 = (uint)bVar8;
    } while (uVar5 < *(uint *)(param_1 + 0x1c));
  }
  QCameraParametersIntf::updateRAW((QCameraParametersIntf *)(this + 0x4ac),SUB41(iVar7,0));
  if (*piVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

