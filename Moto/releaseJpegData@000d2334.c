
/* qcamera::QCameraPostProcessor::releaseJpegData(void*, void*) */

void qcamera::QCameraPostProcessor::releaseJpegData(void *param_1,void *param_2)

{
  if ((param_2 != (void *)0x0) &&
     (releaseJpegJobData((QCameraPostProcessor *)param_2,(qcamera_jpeg_data_t *)param_1),
     *(int *)(*(int *)(DAT_000d236c + 0xd234a) + 0x28) != 0)) {
                    /* WARNING: Load size is inaccurate */
    mm_camera_debug_log(1,3,DAT_000d2374 + 0xd2366,0x716,DAT_000d2370 + 0xd235a,*param_1);
  }
  return;
}

