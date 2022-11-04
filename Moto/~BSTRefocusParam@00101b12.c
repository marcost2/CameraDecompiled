
/* BSTRefocusParam::~BSTRefocusParam() */

BSTRefocusParam * __thiscall BSTRefocusParam::_BSTRefocusParam(BSTRefocusParam *this)

{
  if (*(void **)(this + 0x430) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x430));
  }
  return this;
}

