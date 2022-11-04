
/* IBokehImpl::createInstance(int) */

int * IBokehImpl::createInstance(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)operator_new(0x854);
  *(undefined2 *)(piVar1 + 0x106) = 0;
  piVar1[0x104] = -1;
  piVar1[0x105] = -1;
  *(undefined *)(piVar1 + 3) = 0;
  *piVar1 = *(int *)(DAT_000ff6ac + 0xff662) + 8;
  piVar1[1] = param_1;
  piVar1[2] = -1;
  BSTRefocusParam::BSTRefocusParam((BSTRefocusParam *)(piVar1 + 0x107));
  __aeabi_memclr8((void *)((int)piVar1 + 0xd),0x400);
  if (*(int *)(*(int *)(DAT_000ff6b0 + 0xff684) + 0x2c) != 0) {
    iVar2 = DAT_000ff6b4 + 0xff694;
    mm_camera_debug_log(1,4,iVar2,0x38,DAT_000ff6b8 + 0xff696,iVar2,iVar2,piVar1[1]);
  }
  return piVar1;
}

