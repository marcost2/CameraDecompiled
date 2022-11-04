
/* BSTBokehParam::uninit() */

void __thiscall BSTBokehParam::uninit(BSTBokehParam *this)

{
  if (*(int *)(this + 4) == 1) {
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

