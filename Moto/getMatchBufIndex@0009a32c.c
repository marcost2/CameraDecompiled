
/* qcamera::QCamera3HeapMemory::getMatchBufIndex(void*) */

undefined4 qcamera::QCamera3HeapMemory::getMatchBufIndex(void *param_1)

{
  if (*(int *)(*(int *)(DAT_0009a35c + 0x9a332) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009a364 + 0x9a34e,0x2db,DAT_0009a360 + 0x9a346);
  }
  return 0xffffffff;
}

