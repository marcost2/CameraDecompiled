
/* BokehOneData::setBufStride(int, int) */

void __thiscall BokehOneData::setBufStride(BokehOneData *this,int param_1,int param_2)

{
  *(int *)(this + param_1 * 4 + 0x24) = param_2;
  return;
}

