
/* BokehOneData::newBuf(int) */

undefined4 __thiscall BokehOneData::newBuf(BokehOneData *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1 | param_1 >> 0x1f);
  *(void **)(this + 0x6c) = pvVar1;
  *(int *)(this + 0x14) = param_1;
  return 1;
}

