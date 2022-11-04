
/* BSTRefocusParam::BSTRefocusParam() */

BSTRefocusParam * __thiscall BSTRefocusParam::BSTRefocusParam(BSTRefocusParam *this)

{
  void *pvVar1;
  
  *(undefined4 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0x8c;
  *(undefined2 *)(this + 0x16) = 0x202;
  this[4] = (BSTRefocusParam)0x0;
  *(undefined4 *)this = 0xf9f8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 6) = 0;
  *(undefined8 *)(this + 0xe) = 0;
  __aeabi_memclr8(this + 0x2e,0x400);
  pvVar1 = operator_new__(0x7e8);
  *(void **)(this + 0x430) = pvVar1;
  return this;
}

