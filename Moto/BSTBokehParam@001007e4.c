
/* BSTBokehParam::BSTBokehParam() */

BSTBokehParam * __thiscall BSTBokehParam::BSTBokehParam(BSTBokehParam *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(int *)this = *(int *)(DAT_00100820 + 0x100808) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x3fa66666;
  __aeabi_memclr8(this + 0x24,0x108);
  return this;
}

