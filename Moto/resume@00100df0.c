
/* qcamera::BaseBSTBokeh::resume() */

void qcamera::BaseBSTBokeh::resume(void)

{
  if (*(int *)(*(int *)(DAT_00100e20 + 0x100df6) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100e24 + 0x100e0e,0x46,DAT_00100e2c + 0x100e0c,
                        DAT_00100e28 + 0x100e0a,DAT_00100e24 + 0x100e0e);
    return;
  }
  return;
}

