
/* qcamera::QCameraParameters::setSmallJpegSize(cam_dimension_t, cam_dimension_t) */

void qcamera::QCameraParameters::setSmallJpegSize(cam_dimension_t param_1,cam_dimension_t param_2)

{
  uint uVar1;
  int in_r2;
  uint in_r3;
  undefined uVar2;
  uint in_stack_00000000;
  
  uVar1 = (uint)*(byte *)(*(int *)((byte)param_1 + 0x1d4) + 0x2ae4);
  if (uVar1 != 0) {
    if ((uVar1 < ((in_r2 + in_stack_00000000) - 1) / in_stack_00000000) ||
       (uVar1 < (((byte)param_2 + in_r3) - 1) / in_r3)) {
      if (*(int *)(*(int *)(DAT_000f6c88 + 0xf6c4e) + 0x28) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
        mm_camera_debug_log(1,3,DAT_000f6c90 + 0xf6c68,0x36f8,DAT_000f6c8c + 0xf6c60);
      }
    }
    else {
      uVar2 = 0;
    }
    *(undefined *)((byte)param_1 + 0x801) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000f6c94 + 0xf6c80,DAT_000f6c98 + 0xf6c82,DAT_000f6c9c + 0xf6c84);
}

