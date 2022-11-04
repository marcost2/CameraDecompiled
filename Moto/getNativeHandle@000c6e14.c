
/* qcamera::QCameraVideoMemory::getNativeHandle(unsigned int, bool) */

undefined4 __thiscall
qcamera::QCameraVideoMemory::getNativeHandle(QCameraVideoMemory *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < (byte)this[0x820]) && (param_2 != false)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4 + 0x82c);
  }
  return uVar1;
}

