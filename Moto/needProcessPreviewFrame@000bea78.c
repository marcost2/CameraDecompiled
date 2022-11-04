
/* qcamera::QCamera2HardwareInterface::needProcessPreviewFrame(unsigned int) */

void __thiscall
qcamera::QCamera2HardwareInterface::needProcessPreviewFrame
          (QCamera2HardwareInterface *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined4 uStack40;
  undefined4 local_24;
  undefined4 uStack32;
  undefined8 uStack28;
  int local_14;
  
  piVar3 = *(int **)(DAT_000beb18 + 0xbea86);
  local_14 = *piVar3;
  iVar1 = QCameraStateMachine::isPreviewRunning((QCameraStateMachine *)(this + 0x4dc));
  if ((iVar1 == 0) ||
     (((*(int *)(this + 0x1e1c) - 1U < param_1 &&
       ((*(uint *)(this + 0x1e20) == 0 || (param_1 <= *(uint *)(this + 0x1e20))))) ||
      (iVar1 = QCameraParametersIntf::isInstantAECEnabled((QCameraParametersIntf *)(this + 0x4ac)),
      iVar1 != 0)))) {
    local_70 = 0;
    uStack104 = 0;
    uStack32 = 0;
    uStack28 = 0;
    local_30 = 0;
    uStack40 = 0;
    local_24 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    property_get(DAT_000beb1c + 0xbeaf2,&local_70,DAT_000beb20 + 0xbeaf4);
    iVar1 = atoi((char *)&local_70);
    uVar2 = count_leading_zeroes(iVar1 + -1);
    uVar2 = uVar2 >> 5;
  }
  else {
    uVar2 = 1;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

