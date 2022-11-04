
/* qcamera::QCamera2HardwareInterface::thermalEvtHandle(qcamera::qcamera_thermal_level_enum_t*,
   void*, void*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::thermalEvtHandle
          (QCamera2HardwareInterface *this,qcamera_thermal_level_enum_t *param_1,void *param_2,
          void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_000b98c0 + 0xb985a) + 0x28);
  if (this[100] == (QCamera2HardwareInterface)0x0) {
    if (iVar1 != 0) {
      mm_camera_debug_log(1,3,DAT_000b98c8 + 0xb98ae,0x1d85,DAT_000b98c4 + 0xb98a6);
    }
    return 0;
  }
  if (iVar1 != 0) {
    mm_camera_debug_log(1,3,DAT_000b98d0 + 0xb987e,0x1d8b,DAT_000b98cc + 0xb986a,
                        *(undefined4 *)param_1,param_2,param_3);
  }
  if (this[0x54c] != (QCamera2HardwareInterface)0x0) {
    uVar2 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x25,param_1);
    return uVar2;
  }
  return 0xffffffe0;
}

