
/* qcamera::QCamera2HardwareInterface::setManualLensPos(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setManualLensPos(QCamera2HardwareInterface *this,char *param_1)

{
  int iVar1;
  MotCtrl *pMVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_24;
  undefined local_1d;
  uint local_1c;
  int local_18;
  
  piVar5 = *(int **)(DAT_00107130 + 0x107016);
  local_18 = *piVar5;
  iVar1 = sscanf(param_1,(char *)(DAT_00107134 + 0x107024),&local_1c);
  if (iVar1 == 1) {
    if (100 < local_1c) {
      iVar1 = DAT_00107138 + 0x107038;
      iVar3 = DAT_0010713c + 0x10703a;
      goto LAB_00107050;
    }
    if (this[0x1f78] == (QCamera2HardwareInterface)0x0) {
      local_1d = 1;
      pMVar2 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac))
      ;
      iVar1 = MotCtrl::motCtrl(pMVar2,10,&local_1d,1,(void *)0x0,(uint *)0x0);
      if (iVar1 < 0) {
        iVar1 = DAT_00107140 + 0x107110;
        iVar3 = DAT_00107144 + 0x107112;
        goto LAB_00107110;
      }
      this[0x1f78] = (QCamera2HardwareInterface)0x1;
    }
    local_24 = (int)(local_1c * 0x28) / 100;
    pMVar2 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
    iVar1 = MotCtrl::motCtrl(pMVar2,0xb,&local_24,4,(void *)0x0,(uint *)0x0);
    if (-1 < iVar1) {
      uVar4 = 0;
      goto LAB_0010711e;
    }
    iVar1 = DAT_0010714c + 0x1070fc;
    iVar3 = DAT_00107150 + 0x1070fe;
LAB_00107110:
    __android_log_print(6,iVar1,iVar3,DAT_00107148 + 0x107118);
  }
  else {
    iVar1 = strcmp(param_1,(char *)(DAT_00107154 + 0x107042));
    if (iVar1 == 0) {
      uVar4 = 0;
      local_1d = 0;
      pMVar2 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac))
      ;
      iVar1 = MotCtrl::motCtrl(pMVar2,10,&local_1d,1,(void *)0x0,(uint *)0x0);
      if (-1 < iVar1) {
        this[0x1f78] = (QCamera2HardwareInterface)0x0;
        goto LAB_0010711e;
      }
      iVar1 = DAT_00107158 + 0x107106;
      iVar3 = DAT_0010715c + 0x107108;
      goto LAB_00107110;
    }
    iVar1 = DAT_00107160 + 0x107050;
    iVar3 = DAT_00107164 + 0x107052;
LAB_00107050:
    __android_log_print(6,iVar1,iVar3);
  }
  uVar4 = 0x80000000;
LAB_0010711e:
  if (*piVar5 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

