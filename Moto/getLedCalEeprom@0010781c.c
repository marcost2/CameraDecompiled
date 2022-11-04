
/* qcamera::QCamera2HardwareInterface::getLedCalEeprom() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::getLedCalEeprom(QCamera2HardwareInterface *this)

{
  MotCtrl *this_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_001078fc + 0x107828);
  local_14 = *piVar3;
  local_30 = 0x18;
  android::String8::String8((String8 *)&local_34);
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
  iVar1 = MotCtrl::motCtrl(this_00,0x18,(void *)0x0,0,&local_2c,&local_30);
  if (iVar1 < 0) {
    __android_log_print(6,DAT_00107900 + 0x1078d8,DAT_00107904 + 0x1078da,DAT_00107908 + 0x1078dc);
    uVar2 = 0x80000000;
  }
  else {
    android::String8::appendFormat
              ((char *)&local_34,DAT_0010790c + 0x10787a,SUB84((double)local_24,0),
               (int)((ulonglong)(double)local_24 >> 0x20),(double)local_20);
    android::String8::appendFormat
              ((char *)&local_34,DAT_00107910 + 0x10789c,SUB84((double)local_2c,0),
               (int)((ulonglong)(double)local_2c >> 0x20),(double)local_28);
    android::String8::appendFormat
              ((char *)&local_34,DAT_00107914 + 0x1078be,SUB84((double)local_1c,0),
               (int)((ulonglong)(double)local_1c >> 0x20),(double)local_18);
    QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),local_34);
    uVar2 = 0;
  }
  android::String8::_String8((String8 *)&local_34);
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

