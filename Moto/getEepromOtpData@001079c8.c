
/* qcamera::QCamera2HardwareInterface::getEepromOtpData() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::getEepromOtpData(QCamera2HardwareInterface *this)

{
  MotCtrl *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *local_434;
  uint local_430;
  undefined auStack1068 [32];
  byte local_40c [1000];
  uint local_24;
  int local_20;
  
  piVar4 = *(int **)(DAT_00107abc + 0x1079da);
  local_20 = *piVar4;
  local_430 = 0x40c;
  android::String8::String8((String8 *)&local_434);
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
  iVar1 = MotCtrl::motCtrl(this_00,0x11,(void *)0x0,0,auStack1068,&local_430);
  if (iVar1 < 0) {
    __android_log_print(6,DAT_00107ac0 + 0x107a7a,DAT_00107ac4 + 0x107a7c,DAT_00107ac8 + 0x107a7e);
    uVar3 = 0x80000000;
  }
  else {
    android::String8::append((char *)&local_434);
    android::String8::append((char *)&local_434);
    android::String8::appendFormat((char *)&local_434,DAT_00107ad0 + 0x107a34,local_24);
    if (local_24 == 0) {
      android::String8::append((char *)&local_434);
    }
    else {
      android::String8::append((char *)&local_434);
      if (local_24 != 0) {
        uVar2 = 0;
        iVar1 = DAT_00107adc + 0x107a5a;
        do {
          android::String8::appendFormat((char *)&local_434,iVar1,(uint)local_40c[uVar2]);
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_24);
      }
    }
    QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),local_434);
    uVar3 = 0;
  }
  android::String8::_String8((String8 *)&local_434);
  if (*piVar4 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

