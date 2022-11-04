
/* qcamera::BaseBSTBokeh::releaseNodeData(void*, void*) */

void qcamera::BaseBSTBokeh::releaseNodeData(void *param_1,void *param_2)

{
  if (*(int *)(*(int *)(DAT_00100c24 + 0x100bfe) + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_00100c2c + 0x100c1c,0x68,DAT_00100c28 + 0x100c0e,param_1,param_2);
    return;
  }
  return;
}

