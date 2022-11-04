
/* qcamera::QCamera2HardwareInterface::startChannel(qcamera::qcamera_ch_type_enum_t) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::startChannel
          (QCamera2HardwareInterface *this,qcamera_ch_type_enum_t param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(this + param_1 * 4 + 0x9b4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000b44da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(this + param_1 * 4 + 0x9b4) + 0x14))();
    return uVar1;
  }
  return 0x80000000;
}

