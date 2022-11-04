
/* qcamera::QCamera2HardwareInterface::setDisableSharpening(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setDisableSharpening
          (QCamera2HardwareInterface *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QCameraParametersIntf *this_00;
  
  uVar1 = atoi(param_1);
  if (uVar1 < 2) {
    uVar2 = uVar1;
    if (uVar1 != 0) {
      uVar2 = 1;
    }
    this[0x1f79] = SUB41(uVar2,0);
    this_00 = (QCameraParametersIntf *)(this + 0x4ac);
    uVar3 = QCameraParametersIntf::getMinSharpness(this_00);
    uVar4 = QCameraParametersIntf::getDefaultSharpness(this_00);
    __android_log_print(4,DAT_001071e4 + 0x1071c2,DAT_001071e8 + 0x1071c4,DAT_001071ec + 0x1071c6,
                        uVar1,uVar3,uVar4);
    if (uVar1 != 0) {
      uVar4 = uVar3;
    }
    uVar4 = (*(code *)PTR_setSharpness_0011aa30)(this_00,uVar4);
    return uVar4;
  }
  __android_log_print(6,DAT_001071dc + 0x107182,DAT_001071e0 + 0x107184);
  return 0x80000000;
}

