
/* qcamera::QCamera2HardwareInterface::dump(int) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::dump(QCamera2HardwareInterface *this,int param_1)

{
  int *piVar1;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_000b97d0 + 0xb9740);
  local_1c = *piVar1;
  dprintf(param_1,(char *)(DAT_000b97d4 + 0xb9750));
  dprintf(param_1,(char *)(DAT_000b97d8 + 0xb975c),*(undefined4 *)(this + 0x5c));
  dprintf(param_1,(char *)(DAT_000b97dc + 0xb976a),*(undefined4 *)(this + 0x4b8));
  QCameraParametersIntf::dump();
  dprintf(param_1,(char *)(DAT_000b97e0 + 0xb9784),local_20);
  android::String8::_String8((String8 *)&local_20);
  QCameraStateMachine::dump();
  dprintf(param_1,(char *)(DAT_000b97e4 + 0xb97a2),local_24);
  android::String8::_String8((String8 *)&local_24);
  dprintf(param_1,(char *)(DAT_000b97e8 + 0xb97b2));
  QCameraParametersIntf::updateDebugLevel((QCameraParametersIntf *)(this + 0x4ac));
  if (*piVar1 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

