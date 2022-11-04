
/* qcamera::QCamera2HardwareInterface::getCalibrationStatus() */

void __thiscall
qcamera::QCamera2HardwareInterface::getCalibrationStatus(QCamera2HardwareInterface *this)

{
  MotCtrl *this_00;
  int iVar1;
  undefined4 uVar2;
  char *__s;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint local_64;
  uint local_60 [2];
  uint local_58;
  uint local_50;
  uint local_48;
  uint local_44;
  char acStack64 [40];
  int local_18;
  
  piVar5 = *(int **)(DAT_00106f6c + 0x106e94);
  local_18 = *piVar5;
  local_64 = 0x20;
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
  iVar1 = MotCtrl::motCtrl(this_00,0xe,(void *)0x0,0,local_60,&local_64);
  if (iVar1 < 0) {
    __android_log_print(6,DAT_00106f70 + 0x106f24,DAT_00106f74 + 0x106f26,DAT_00106f78 + 0x106f28);
    uVar2 = 0x80000000;
  }
  else {
    __android_log_print(4,DAT_00106f7c + 0x106ed8,DAT_00106f80 + 0x106eda,DAT_00106f84 + 0x106edc,
                        local_58,local_60[0],local_50,local_48,local_44);
    uVar4 = 1;
    if (local_60[0] < 2) {
      uVar4 = 2;
    }
    uVar3 = (uint)(local_60[0] < 2);
    if (local_58 < 2) {
      uVar3 = uVar4;
    }
    if (local_50 < 2) {
      uVar3 = uVar3 + 1;
    }
    if (local_48 < 2) {
      uVar3 = uVar3 + 1;
    }
    if (local_44 < 2) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 == 5) {
      __s = (char *)(DAT_00106f88 + 0x106f18);
    }
    else {
      __s = acStack64;
      snprintf(__s,0x28,(char *)0x28,DAT_00106f8c + 0x106f4e,5 - uVar3,local_58,local_50,local_60[0]
               ,local_48,local_44);
    }
    QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),__s);
    uVar2 = 0;
  }
  if (*piVar5 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

