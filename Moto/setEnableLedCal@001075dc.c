
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::setEnableLedCal(char const*) */

void __thiscall
qcamera::QCamera2HardwareInterface::setEnableLedCal(QCamera2HardwareInterface *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  MotCtrl *this_00;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack40;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00107750 + 0x1075f0);
  local_1c = *piVar4;
  iVar5 = (int)&local_40 + 4;
  local_40 = 0;
  local_38 = 0;
  uStack40 = 0;
  local_30 = 0x3f8000003f800000;
  local_50 = 0;
  local_48 = 0;
  iVar1 = sscanf(param_1,(char *)(DAT_00107754 + 0x10763a),&local_50,(int)&local_50 + 4,iVar5,
                 &local_38,(int)&local_38 + 4,&local_30,(int)&local_30 + 4);
  if (iVar1 == 7) {
LAB_00107660:
    if (((uint)local_50 | local_50._4_4_) < 2) {
      uVar2 = QCameraParametersIntf::getCameraPosition((QCameraParametersIntf *)(this + 0x4ac));
      local_48 = CONCAT44(*(undefined4 *)(this + 0x1f84),uVar2);
      local_40 = local_40 & 0xffffffff00000000 | (ulonglong)*(uint *)(this + 0x1f88);
      this_00 = (MotCtrl *)
                QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
      iVar5 = 0;
      iVar1 = MotCtrl::motCtrl(this_00,0x1a,&local_50,0x30,(void *)0x0,(uint *)0x0);
      if (-1 < iVar1) {
        if ((uint)local_50 != 0) {
          local_50._0_4_ = 1;
        }
        this[0x1f80] = SUB41((uint)local_50,0);
        if (local_50._4_4_ != 0) {
          local_50._4_4_ = 1;
        }
        this[0x1f81] = SUB41(local_50._4_4_,0);
        __android_log_print(3,DAT_00107778 + 0x107700,DAT_0010777c + 0x107702,
                            DAT_00107780 + 0x107704,(uint)local_50,local_50._4_4_,
                            (double)local_40._4_4_,(double)(float)local_38,local_38._4_4_);
        uVar2 = 0;
        goto LAB_0010773a;
      }
      iVar1 = DAT_00107770 + 0x10772c;
      iVar3 = DAT_00107774 + 0x10772e;
    }
    else {
      iVar1 = DAT_00107758 + 0x107712;
      iVar3 = DAT_0010775c + 0x107714;
    }
  }
  else {
    iVar1 = sscanf(param_1,(char *)(DAT_00107764 + 0x10764e),&local_50);
    if (iVar1 == 1) {
      if ((uint)local_50 != 1) goto LAB_00107660;
      iVar5 = 0x200;
    }
    else {
      iVar5 = 0x205;
    }
    iVar1 = DAT_00107768 + 0x107722;
    iVar3 = DAT_0010776c + 0x107724;
  }
  __android_log_print(6,iVar1,iVar3,DAT_00107760 + 0x107734,iVar5);
  uVar2 = 0x80000000;
LAB_0010773a:
  if (*piVar4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

