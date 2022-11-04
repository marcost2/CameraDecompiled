
/* qcamera::QCameraStream::backgroundAllocate(void*) */

int qcamera::QCameraStream::backgroundAllocate(void *param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000d00fc + 0xd00dc) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000d0104 + 0xd00f4,0x290,DAT_000d0100 + 0xd00ec);
  }
  return iVar1;
}

