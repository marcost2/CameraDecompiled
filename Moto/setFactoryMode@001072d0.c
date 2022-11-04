
/* qcamera::QCamera2HardwareInterface::setFactoryMode(char const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setFactoryMode(QCamera2HardwareInterface *this,char *param_1)

{
  uint uVar1;
  
  uVar1 = atoi(param_1);
  if (1 < uVar1) {
    __android_log_print(6,DAT_001072fc + 0x1072e8,DAT_00107300 + 0x1072ea);
    return 0x80000000;
  }
  *(uint *)(this + 0x1f7c) = uVar1;
  return 0;
}

