
/* android::CameraHalWatchdog::AutoWatchdog::setWatched(char const*) */

void __thiscall
android::CameraHalWatchdog::AutoWatchdog::setWatched(AutoWatchdog *this,char *param_1)

{
  __aeabi_memclr8(this + 4,0x100);
  if (param_1 != (char *)0x0) {
    strncpy((char *)(this + 4),param_1,0x100);
    this[0x103] = (AutoWatchdog)0x0;
  }
  return;
}

