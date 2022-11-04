
/* qcamera::QCameraPostProcessor::releaseJpegMemory(omx_jpeg_ouput_buf_t*) */

undefined4 qcamera::QCameraPostProcessor::releaseJpegMemory(omx_jpeg_ouput_buf_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (omx_jpeg_ouput_buf_t *)0x0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    if (*(int *)(*(int *)(DAT_000d3eec + 0xd3eb6) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000d3ef4 + 0xd3ed2,0xf35,DAT_000d3ef0 + 0xd3ec6,
                          *(undefined4 *)(param_1 + 0xc));
      iVar1 = *(int *)(param_1 + 4);
    }
    (**(code **)(iVar1 + 0xc))();
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return 0;
  }
  return 0xffffffff;
}

