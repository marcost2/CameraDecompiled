
/* BokehOneData::setScanLine(int, int) */

void __thiscall BokehOneData::setScanLine(BokehOneData *this,int param_1,int param_2)

{
  *(int *)(this + param_1 * 4 + 0x30) = param_2;
  return;
}

