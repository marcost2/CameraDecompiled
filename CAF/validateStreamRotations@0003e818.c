
/* qcamera::QCamera3HardwareInterface::validateStreamRotations(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateStreamRotations
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)param_1 != 0) {
    uVar3 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + uVar3 * 4);
      if (piVar2[8] != 0) {
        if (piVar2[8] == -1) {
          iVar1 = *(int *)(*(int *)(DAT_0003e8a0 + 0x3e856) + 0x20);
joined_r0x0003e858:
          if (iVar1 != 0) {
            mm_camera_debug_log();
          }
          return 0xffffffea;
        }
        if ((piVar2[3] != 0x22) || (*piVar2 == 2)) {
          iVar1 = *(int *)(*(int *)(DAT_0003e8ac + 0x3e876) + 0x20);
          goto joined_r0x0003e858;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)param_1);
  }
  return 0;
}

