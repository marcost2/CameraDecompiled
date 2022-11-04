
/* android::CameraHalWatchdog::GlobalWatchdog::~GlobalWatchdog() */

GlobalWatchdog * __thiscall
android::CameraHalWatchdog::GlobalWatchdog::_GlobalWatchdog(GlobalWatchdog *this)

{
  int *piVar1;
  int **this_00;
  
  this_00 = *(int ***)this;
  if (this_00 != (int **)0x0) {
    AutoWatchdog::stopWatchdog((AutoWatchdog *)this_00);
    piVar1 = *this_00;
    if (piVar1 != (int *)0x0) {
      android::RefBase::decStrong((void *)((int)piVar1 + *(int *)(*piVar1 + -0xc)));
    }
    operator_delete(this_00);
  }
  return this;
}

