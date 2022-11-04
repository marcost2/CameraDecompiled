
/* BokehOneData::~BokehOneData() */

BokehOneData * __thiscall BokehOneData::_BokehOneData(BokehOneData *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000ff2c4 + 0xff254);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    uVar1 = gettid();
    iVar2 = DAT_000ff2c8 + 0xff268;
    mm_camera_debug_log(1,4,iVar2,0x3b,DAT_000ff2cc + 0xff266,uVar1,iVar2,iVar2);
  }
  if (*(void **)(this + 0x54) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x54));
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(void **)(this + 0x6c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x6c));
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int *)(iVar3 + 0x2c) != 0) {
    uVar1 = gettid();
    iVar3 = DAT_000ff2d0 + 0xff2ae;
    mm_camera_debug_log(1,4,iVar3,0x4a,DAT_000ff2d4 + 0xff2ac,uVar1,iVar3,iVar3);
  }
  return this;
}

