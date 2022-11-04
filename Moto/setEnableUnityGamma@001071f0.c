
/* qcamera::QCamera2HardwareInterface::setEnableUnityGamma(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setEnableUnityGamma
          (QCamera2HardwareInterface *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = atoi(param_1);
  if (1 < uVar1) {
    __android_log_print(6,DAT_0010724c + 0x10720a,DAT_00107250 + 0x10720c);
    return 0x80000000;
  }
  uVar2 = uVar1;
  if (uVar1 != 0) {
    uVar2 = 1;
  }
  this[0x1f7a] = SUB41(uVar2,0);
  __android_log_print(4,DAT_00107254 + 0x107232,DAT_00107258 + 0x107234,DAT_0010725c + 0x107236,
                      uVar1);
  uVar1 = count_leading_zeroes(uVar1);
  uVar3 = QCameraParametersIntf::setGamma((QCameraParametersIntf *)(this + 0x4ac),uVar1 >> 5);
  return uVar3;
}

