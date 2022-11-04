
/* qcamera::QCameraPostProcessor::getJpegMemory(omx_jpeg_ouput_buf_t*) */

undefined4 qcamera::QCameraPostProcessor::getJpegMemory(omx_jpeg_ouput_buf_t *param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(DAT_000d3e98 + 0xd3e58) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d3ea0 + 0xd3e74,0xf1b,DAT_000d3e9c + 0xd3e68,
                        *(undefined4 *)(param_1 + 0xc));
  }
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)(*(int *)param_1 + 8) + 0x4c8))
                     (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),1,
                      *(undefined4 *)(*(int *)(*(int *)param_1 + 8) + 0x4d0));
  *(undefined4 **)(param_1 + 4) = puVar1;
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  return 0;
}

