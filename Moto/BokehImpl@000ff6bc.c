
/* BokehImpl::BokehImpl(int) */

BokehImpl * __thiscall BokehImpl::BokehImpl(BokehImpl *this,int param_1)

{
  int iVar1;
  
  *(undefined2 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x410) = 0xffffffff;
  *(undefined4 *)(this + 0x414) = 0xffffffff;
  this[0xc] = (BokehImpl)0x0;
  *(int *)this = *(int *)(DAT_000ff724 + 0xff6dc) + 8;
  *(int *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0xffffffff;
  BSTRefocusParam::BSTRefocusParam((BSTRefocusParam *)(this + 0x41c));
  __aeabi_memclr8(this + 0xd,0x400);
  if (*(int *)(*(int *)(DAT_000ff728 + 0xff6fc) + 0x2c) != 0) {
    iVar1 = DAT_000ff72c + 0xff70c;
    mm_camera_debug_log(1,4,iVar1,0x38,DAT_000ff730 + 0xff70e,iVar1,iVar1,*(undefined4 *)(this + 4))
    ;
  }
  return this;
}

