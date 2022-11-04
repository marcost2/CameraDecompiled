
/* qcamera::QCamera3HardwareInterface::needReprocess(unsigned long long) */

undefined4 qcamera::QCamera3HardwareInterface::needReprocess(ulonglong param_1)

{
  int in_r0;
  int iVar1;
  uint in_r2;
  uint in_r3;
  
  iVar1 = *(int *)(*(int *)(DAT_00098844 + 0x987e4) + *(int *)(in_r0 + 0x60) * 4);
  if ((*(uint *)(iVar1 + 0x3000) | *(uint *)(iVar1 + 0x3004)) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_00098848 + 0x987fe) + 0x28);
    if ((in_r2 | in_r3) == 0) {
      if (iVar1 != 0) {
        mm_camera_debug_log(1,3,DAT_00098850 + 0x9883a,0x323a,DAT_0009884c + 0x98832);
        return 1;
      }
      return 1;
    }
    if (iVar1 != 0) {
      mm_camera_debug_log(1,3,DAT_00098858 + 0x98818,0x323d,DAT_00098854 + 0x98810);
    }
  }
  return 0;
}

