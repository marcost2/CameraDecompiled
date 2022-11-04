
/* qcamera::QCamera3Stream::aggregateBufToBatch(mm_camera_buf_def&) */

undefined4 __thiscall
qcamera::QCamera3Stream::aggregateBufToBatch(QCamera3Stream *this,mm_camera_buf_def *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x284) == 0) {
    if (*(int *)(*(int *)(DAT_000560d4 + 0x560b0) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffda;
  }
  if (*(int *)(this + 0x294) == 0) {
    iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x29c),true);
    *(int *)(this + 0x294) = iVar1;
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(DAT_000560e0 + 0x56088) + 0x3c);
      goto joined_r0x0005608a;
    }
    if (*(int *)(*(int *)(DAT_000560ec + 0x56060) + 0x48) != 0) {
      mm_camera_debug_log();
    }
  }
  if (*(uint *)(this + 0x298) != (uint)*(byte *)(*(int *)(this + 0x294) + 0x20)) {
    *(undefined4 *)(*(int *)(this + 0x294) + *(uint *)(this + 0x298) * 4 + 0x24) =
         *(undefined4 *)(param_1 + 0xc);
    *(int *)(this + 0x298) = *(int *)(this + 0x298) + 1;
    if (*(int *)(*(int *)(DAT_00056104 + 0x5601e) + 0x48) != 0) {
      mm_camera_debug_log();
    }
    return 0;
  }
  iVar1 = *(int *)(*(int *)(DAT_000560f8 + 0x55fec) + 0x3c);
joined_r0x0005608a:
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return 0xfffffff4;
}

