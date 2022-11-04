
/* qcamera::BaseBSTBokeh::stop() */

void qcamera::BaseBSTBokeh::stop(void)

{
  if (*(int *)(*(int *)(DAT_00100de0 + 0x100db6) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100de4 + 0x100dce,0x42,DAT_00100dec + 0x100dcc,
                        DAT_00100de8 + 0x100dca,DAT_00100de4 + 0x100dce);
    return;
  }
  return;
}

