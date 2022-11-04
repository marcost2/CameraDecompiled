
/* qcamera::QCamera2HardwareInterface::setFlashLedWrite(char const*) */

uint __thiscall
qcamera::QCamera2HardwareInterface::setFlashLedWrite(QCamera2HardwareInterface *this,char *param_1)

{
  int iVar1;
  MotCtrl *this_00;
  uint uVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack32 [4];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_001079ac + 0x107926);
  local_14 = *piVar3;
  iVar1 = sscanf(param_1,(char *)(DAT_001079b0 + 0x10793a),auStack32,&local_18,&local_1c);
  if (iVar1 == 3) {
    local_28 = local_18;
    local_24 = local_1c;
    this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
    uVar2 = MotCtrl::motCtrl(this_00,0xd,&local_28,8,(void *)0x0,(uint *)0x0);
    if (0x7fffffff < uVar2) {
      __android_log_print(6,DAT_001079b4 + 0x107974,DAT_001079b8 + 0x107976,uVar2);
    }
  }
  else {
    __android_log_print(6,DAT_001079bc + 0x10798e,DAT_001079c0 + 0x107990,DAT_001079c4 + 0x107992,
                        0x263,param_1);
    uVar2 = 0x80000000;
  }
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

