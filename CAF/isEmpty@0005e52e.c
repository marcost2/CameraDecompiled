
/* android::VectorImpl::isEmpty() const */

uint __thiscall android::VectorImpl::isEmpty(VectorImpl *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(undefined4 *)(this + 8));
  return uVar1 >> 5;
}

