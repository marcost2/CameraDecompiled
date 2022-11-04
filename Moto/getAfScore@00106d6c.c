
/* qcamera::QCamera2HardwareInterface::getAfScore() */

void __thiscall qcamera::QCamera2HardwareInterface::getAfScore(QCamera2HardwareInterface *this)

{
  MotCtrl *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  uint local_4c;
  char acStack70 [50];
  int local_14;
  
  piVar4 = *(int **)(DAT_00106e1c + 0x106d7c);
  local_14 = *piVar4;
  local_4c = 4;
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
  uVar2 = 0;
  uVar3 = 0;
  uVar5 = MotCtrl::motCtrl(this_00,0xc,(void *)0x0,0,(void *)(DAT_00106e20 + 0x106d94),&local_4c);
  if ((int)uVar5 < 0) {
    __android_log_print(6,DAT_00106e24 + 0x106df0,DAT_00106e28 + 0x106df2,DAT_00106e2c + 0x106df4);
  }
  else {
    iVar1 = FUN_00106e40(acStack70,(int)((ulonglong)uVar5 >> 0x20),uVar2,uVar3);
    if (-1 < iVar1) {
      __android_log_print(3,DAT_00106e38 + 0x106dd2,DAT_00106e3c + 0x106dd4);
      QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),acStack70);
      uVar2 = 0;
      goto LAB_00106e0a;
    }
    __android_log_print(6,DAT_00106e30 + 0x106e02,DAT_00106e34 + 0x106e04);
  }
  uVar2 = 0x80000000;
LAB_00106e0a:
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

