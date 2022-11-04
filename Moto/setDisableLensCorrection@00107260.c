
/* qcamera::QCamera2HardwareInterface::setDisableLensCorrection(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setDisableLensCorrection
          (QCamera2HardwareInterface *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = atoi(param_1);
  if (1 < uVar1) {
    __android_log_print(6,DAT_001072bc + 0x10727a,DAT_001072c0 + 0x10727c);
    return 0x80000000;
  }
  uVar2 = uVar1;
  if (uVar1 != 0) {
    uVar2 = 1;
  }
  this[0x1f7b] = SUB41(uVar2,0);
  __android_log_print(4,DAT_001072c4 + 0x1072a2,DAT_001072c8 + 0x1072a4,DAT_001072cc + 0x1072a6,
                      uVar1);
  uVar1 = count_leading_zeroes(uVar1);
  uVar3 = QCameraParametersIntf::setLensCorrection
                    ((QCameraParametersIntf *)(this + 0x4ac),uVar1 >> 5);
  return uVar3;
}

