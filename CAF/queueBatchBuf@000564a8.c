
/* qcamera::QCamera3Stream::queueBatchBuf() */

int __thiscall qcamera::QCamera3Stream::queueBatchBuf(QCamera3Stream *this)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x294) == 0) {
    if (*(int *)(*(int *)(DAT_0005658c + 0x5652c) + 0x3c) == 0) {
      iVar2 = -0x26;
    }
    else {
      mm_camera_debug_log();
      iVar2 = -0x26;
    }
  }
  else {
    *(char *)(*(int *)(this + 0x294) + 0x21) = (char)*(undefined4 *)(this + 0x298);
    iVar2 = *(int *)(this + 0x294);
    uVar1 = *(uint *)(this + 0x298);
    if (uVar1 < *(byte *)(iVar2 + 0x20)) {
      do {
        *(undefined4 *)(iVar2 + uVar1 * 4 + 0x24) = 0xffffffff;
        uVar1 = uVar1 + 1;
        iVar2 = *(int *)(this + 0x294);
      } while (uVar1 < *(byte *)(iVar2 + 0x20));
    }
    iVar2 = (**(code **)(*(int *)(this + 0x10) + 0x6c))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8));
    if (iVar2 < 0) {
      iVar2 = -0x7ffffffe;
      if (*(int *)(*(int *)(DAT_00056598 + 0x56552) + 0x3c) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      if (*(int *)(*(int *)(DAT_000565a4 + 0x564f6) + 0x48) != 0) {
        mm_camera_debug_log();
      }
      *(undefined4 *)(this + 0x294) = 0;
      *(undefined4 *)(this + 0x298) = 0;
    }
  }
  return iVar2;
}

