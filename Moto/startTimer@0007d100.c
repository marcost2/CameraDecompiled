
/* qcamera::QCameraPerfLock::startTimer(unsigned int) */

void __thiscall qcamera::QCameraPerfLock::startTimer(QCameraPerfLock *this,uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = systemTime(1);
  *(undefined4 *)(this + 0x28) = 1;
  *(uint *)(this + 0x2c) = param_1;
  *(int *)(this + 0x30) = (int)uVar1;
  *(int *)(this + 0x34) = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

