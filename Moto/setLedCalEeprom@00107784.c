
/* qcamera::QCamera2HardwareInterface::setLedCalEeprom(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setLedCalEeprom(QCamera2HardwareInterface *this,char *param_1)

{
  int iVar1;
  MotCtrl *this_00;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined auStack44 [4];
  undefined auStack40 [4];
  undefined auStack36 [4];
  undefined auStack32 [4];
  undefined auStack28 [4];
  undefined auStack24 [4];
  int local_14;
  
  piVar4 = *(int **)(DAT_00107808 + 0x107792);
  local_14 = *piVar4;
  iVar1 = sscanf(param_1,(char *)(DAT_0010780c + 0x1077ba),auStack36,auStack32,auStack44,auStack40,
                 auStack28,auStack24);
  if (iVar1 == 6) {
    this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
    uVar3 = 0;
    uVar2 = MotCtrl::motCtrl(this_00,0x17,auStack44,0x18,(void *)0x0,(uint *)0x0);
    if (uVar2 < 0x80000000) goto LAB_001077f4;
  }
  __android_log_print(6,DAT_00107810 + 0x1077ea,DAT_00107814 + 0x1077ec,DAT_00107818 + 0x1077ee);
  uVar3 = 0x80000000;
LAB_001077f4:
  if (*piVar4 == local_14) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

