
/* qcamera::QCameraGrallocMemory::getMemory(unsigned int, bool) const */

undefined4 __thiscall
qcamera::QCameraGrallocMemory::getMemory(QCameraGrallocMemory *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < (byte)this[0xa88]) && (param_2 == false)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4 + 0x980);
  }
  return uVar1;
}

