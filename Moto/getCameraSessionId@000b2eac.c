
/* qcamera::QCamera2HardwareInterface::getCameraSessionId(unsigned int*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::getCameraSessionId
          (QCamera2HardwareInterface *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (uint *)0x0) {
    if (*(int *)(*(int *)(DAT_000b2f20 + 0xb2ef0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b2f28 + 0xb2f08,0xa34,DAT_000b2f24 + 0xb2f00);
    }
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x8c))
                      (**(undefined4 **)(this + 0x60),param_1);
    if (*(int *)(*(int *)(DAT_000b2f14 + 0xb2eca) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b2f1c + 0xb2ee6,0xa32,DAT_000b2f18 + 0xb2eda,*param_1);
    }
  }
  return uVar1;
}

