
/* android::hardware::Status::isOk() const */

uint __thiscall android::hardware::Status::isOk(Status *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(undefined4 *)this);
  return uVar1 >> 5;
}

