
/* BSTBokehParam::regStereoCam(unsigned int) */

undefined4 __thiscall BSTBokehParam::regStereoCam(BSTBokehParam *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 == 2) {
    if (*(int *)(this + 4) != 1) {
      *(undefined4 *)(this + 4) = 0;
      return 0;
    }
    uVar1 = 5;
  }
  else {
    if (param_1 != 0) {
      return 1;
    }
    uVar1 = *(uint *)(this + 4) | 1;
  }
  *(uint *)(this + 4) = uVar1;
  return 1;
}

