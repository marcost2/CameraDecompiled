
/* BokehImpl::destoryInstance() */

void __thiscall BokehImpl::destoryInstance(BokehImpl *this)

{
  if (this != (BokehImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000ff7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 4))();
    return;
  }
  return;
}

