
/* qcamera::QCameraGrallocMemory::enqueueBuffer(unsigned int, long long) */

int qcamera::QCameraGrallocMemory::enqueueBuffer(uint param_1,longlong param_2)

{
  int iVar1;
  int in_r1;
  uint in_r2;
  uint in_r3;
  int iVar2;
  
  iVar2 = param_1 + in_r1 * 4;
  if (*(int *)(iVar2 + 0x718) == 0) {
    if (*(int *)(*(int *)(DAT_000c7538 + 0xc74de) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c7540 + 0xc74f6,0x7ce,DAT_000c753c + 0xc74ee);
    }
    iVar1 = -0x26;
  }
  else {
    if ((((in_r2 | in_r3) != 0) &&
        (iVar1 = (**(code **)(*(int *)(param_1 + 0x958) + 0x28))(), iVar1 != 0)) &&
       (*(int *)(*(int *)(DAT_000c7544 + 0xc748a) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000c754c + 0xc74a2,0x7d5,DAT_000c7548 + 0xc749a);
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x958) + 4))
                      (*(int *)(param_1 + 0x958),*(undefined4 *)(iVar2 + 0x618));
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000c755c + 0xc7508) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000c7564 + 0xc752a,0x7dd,DAT_000c7560 + 0xc751e,
                            **(undefined4 **)(iVar2 + 0x618));
      }
      iVar1 = 0;
      *(undefined4 *)(iVar2 + 0x718) = 0;
    }
    else if (*(int *)(*(int *)(DAT_000c7550 + 0xc74ba) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c7558 + 0xc74d4,0x7db,DAT_000c7554 + 0xc74ca,iVar1);
    }
  }
  return iVar1;
}

