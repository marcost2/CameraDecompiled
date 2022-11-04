
/* qcamera::QCamera2HardwareInterface::startRAWChannel(qcamera::QCameraChannel*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::startRAWChannel
          (QCamera2HardwareInterface *this,QCameraChannel *param_1)

{
  int iVar1;
  undefined4 uVar2;
  QCameraStream *this_00;
  uint unaff_r4;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(this + 0x9c8);
  if ((piVar4 == (int *)0x0) ||
     (iVar1 = QCameraParametersIntf::getofflineRAW((QCameraParametersIntf *)(this + 0x4ac)),
     iVar1 == 0)) {
    return 0;
  }
  if (param_1 != (QCameraChannel *)0x0) {
    unaff_r4 = *(uint *)(param_1 + 0x1c);
  }
  if (param_1 != (QCameraChannel *)0x0 && unaff_r4 != 0) {
    uVar3 = 0;
    do {
      this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(param_1,uVar3);
      if ((this_00 != (QCameraStream *)0x0) &&
         (iVar1 = QCameraStream::getMyType(this_00), iVar1 == 7)) {
        iVar1 = (**(code **)(*piVar4 + 0x10))(piVar4,param_1,this_00);
        if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000b79a4 + 0xb7982) + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000b79ac + 0xb799e,0x3955,DAT_000b79a8 + 0xb7992,iVar1);
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < unaff_r4);
  }
                    /* WARNING: Could not recover jumptable at 0x000b7942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar4 + 0x14))(piVar4);
  return uVar2;
}

