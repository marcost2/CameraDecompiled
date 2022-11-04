
/* BokehOneData::setBufPlane(int, unsigned char*) */

void __thiscall BokehOneData::setBufPlane(BokehOneData *this,int param_1,uchar *param_2)

{
  *(uchar **)(this + param_1 * 4 + 0x18) = param_2;
  return;
}

