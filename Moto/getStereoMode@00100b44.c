
/* BSTBokehParam::getStereoMode() */

uint __thiscall BSTBokehParam::getStereoMode(BSTBokehParam *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)(this + 4) + -5);
  return uVar1 >> 5;
}

