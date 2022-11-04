
/* BokehImpl::~BokehImpl() */

void __thiscall BokehImpl::_BokehImpl(BokehImpl *this)

{
  *(int *)this = *(int *)(DAT_000ff7e0 + 0xff79c) + 8;
  if (*(int *)(*(int *)(DAT_000ff7e4 + 0xff7a6) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff7e8 + 0xff7b6,0x3b,DAT_000ff7f0 + 0xff7ba,
                        DAT_000ff7ec + 0xff7b8,DAT_000ff7e8 + 0xff7b6,*(undefined4 *)(this + 4));
  }
  BSTRefocusParam::_BSTRefocusParam((BSTRefocusParam *)(this + 0x41c));
  operator_delete(this);
  return;
}

