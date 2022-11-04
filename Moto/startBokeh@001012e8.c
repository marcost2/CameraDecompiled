
/* qcamera::BSTLiveBokeh::startBokeh() */

int __thiscall qcamera::BSTLiveBokeh::startBokeh(BSTLiveBokeh *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)IBokehImpl::createInstance(*(int *)(this + 0x10));
  *(int **)(this + 0xcc) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))();
    if (iVar2 != 0) {
      iVar2 = -1;
    }
    return iVar2;
  }
  return -1;
}

