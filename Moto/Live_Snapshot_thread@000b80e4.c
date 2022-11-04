
/* qcamera::Live_Snapshot_thread(void*) */

undefined4 qcamera::Live_Snapshot_thread(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(char *)((int)param_1 + 0x10) == '\0') {
      QCamera2HardwareInterface::cancelLiveSnapshot_internal((QCamera2HardwareInterface *)param_1);
    }
    else {
      QCamera2HardwareInterface::takeLiveSnapshot_internal((QCamera2HardwareInterface *)param_1);
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000b8128 + 0xb80fa) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000b8130 + 0xb8112,0x193a,DAT_000b812c + 0xb810a);
  }
  return 0xffffffea;
}

