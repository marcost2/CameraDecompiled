
/* qcamera::QCamera2HardwareInterface::setLedCurrents(char const*, mot_ctrl_cmd_t) */

void __thiscall
qcamera::QCamera2HardwareInterface::setLedCurrents
          (QCamera2HardwareInterface *this,char *param_1,mot_ctrl_cmd_t param_2)

{
  int iVar1;
  MotCtrl *this_00;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_001073dc + 0x107314);
  local_18 = *piVar3;
  iVar1 = sscanf(param_1,(char *)(DAT_001073e0 + 0x107324),&local_20,&local_1c);
  if (iVar1 == 2) {
    uVar4 = 0x1a3;
LAB_0010735a:
    __android_log_print(4,DAT_001073e4 + 0x107366,DAT_001073e8 + 0x107368,DAT_001073ec + 0x10736a,
                        uVar4,local_20,local_1c);
    this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
    uVar4 = 0;
    param_1 = (char *)0x0;
    iVar1 = MotCtrl::motCtrl(this_00,param_2,&local_20,8,(void *)0x0,(uint *)0x0);
    if (-1 < iVar1) {
      if (param_2 == 0x16) {
        *(undefined4 *)(this + 0x1f84) = local_20;
        *(undefined4 *)(this + 0x1f88) = local_1c;
      }
      uVar4 = 0;
      goto LAB_001073ca;
    }
    iVar1 = DAT_001073f0 + 0x1073aa;
    iVar2 = DAT_001073f4 + 0x1073ac;
  }
  else {
    iVar1 = sscanf(param_1,(char *)(DAT_001073f8 + 0x107344),&local_20);
    if (iVar1 == 1) {
      local_1c = 0;
      uVar4 = 0x1a7;
      goto LAB_0010735a;
    }
    uVar4 = 0x1aa;
    iVar1 = DAT_001073fc + 0x1073bc;
    iVar2 = DAT_00107400 + 0x1073be;
  }
  __android_log_print(6,iVar1,iVar2,DAT_00107404 + 0x1073c4,uVar4,param_1);
  uVar4 = 0x80000000;
LAB_001073ca:
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

