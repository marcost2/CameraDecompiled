
/* BokehImpl::~BokehImpl() */

BokehImpl * __thiscall BokehImpl::_BokehImpl(BokehImpl *this)

{
  *(int *)this = *(int *)(DAT_000ff77c + 0xff740) + 8;
  if (*(int *)(*(int *)(DAT_000ff780 + 0xff74a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff784 + 0xff75a,0x3b,DAT_000ff78c + 0xff75e,
                        DAT_000ff788 + 0xff75c,DAT_000ff784 + 0xff75a,*(undefined4 *)(this + 4));
  }
  BSTRefocusParam::_BSTRefocusParam((BSTRefocusParam *)(this + 0x41c));
  return this;
}

