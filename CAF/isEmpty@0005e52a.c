
/* android::Vector<unsigned int>::isEmpty() const */

uint __thiscall android::Vector<unsigned_int>::isEmpty(Vector_unsigned_int_ *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(undefined4 *)(this + 8));
  return uVar1 >> 5;
}

