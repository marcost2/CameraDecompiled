
/* qcamera::QCameraStreamMemory::getMemory(unsigned int, bool) const */

undefined4 __thiscall
qcamera::QCameraStreamMemory::getMemory(QCameraStreamMemory *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < (byte)this[5]) && (param_2 == false)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4 + 0x61c);
  }
  return uVar1;
}

