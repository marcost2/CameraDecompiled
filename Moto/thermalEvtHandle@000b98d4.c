
/* non-virtual thunk to
   qcamera::QCamera2HardwareInterface::thermalEvtHandle(qcamera::qcamera_thermal_level_enum_t*,
   void*, void*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::thermalEvtHandle
          (QCamera2HardwareInterface *this,qcamera_thermal_level_enum_t *param_1,void *param_2,
          void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(DAT_000b994c + 0xb98e4) + 0x28);
  if (this[0x60] == (QCamera2HardwareInterface)0x0) {
    if (iVar2 != 0) {
      mm_camera_debug_log(1,3,DAT_000b9954 + 0xb993a,0x1d85,DAT_000b9950 + 0xb9932);
    }
    return 0;
  }
  if (iVar2 != 0) {
    mm_camera_debug_log(1,3,DAT_000b995c + 0xb990a,0x1d8b,DAT_000b9958 + 0xb98f6,
                        *(undefined4 *)param_1,param_2,param_3);
  }
  if (this[0x548] != (QCamera2HardwareInterface)0x0) {
    uVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4d8),0x25,param_1);
    return uVar1;
  }
  return 0xffffffe0;
}

