
/* android::CameraParameters::isEmpty() const */

uint __thiscall android::CameraParameters::isEmpty(CameraParameters *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(undefined4 *)(this + 8));
  return uVar1 >> 5;
}

