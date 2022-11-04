
/* qcamera::QCameraStream::backgroundMap(void*) */

int qcamera::QCameraStream::backgroundMap(void *param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000d013c + 0xd011c) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000d0144 + 0xd0134,0x2a4,DAT_000d0140 + 0xd012c);
  }
  return iVar1;
}

