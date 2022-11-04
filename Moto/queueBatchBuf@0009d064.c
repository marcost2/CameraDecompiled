
/* qcamera::QCamera3Stream::queueBatchBuf() */

int __thiscall qcamera::QCamera3Stream::queueBatchBuf(QCamera3Stream *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(this + 0x290) == 0) {
    if (*(int *)(*(int *)(DAT_0009d148 + 0x9d0e8) + 0x3c) == 0) {
      iVar3 = -0x26;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0009d150 + 0x9d100,0x5ec,DAT_0009d14c + 0x9d0f8);
      iVar3 = -0x26;
    }
  }
  else {
    *(char *)(*(int *)(this + 0x290) + 0x21) = (char)*(undefined4 *)(this + 0x294);
    iVar3 = *(int *)(this + 0x290);
    uVar1 = *(uint *)(this + 0x294);
    if (uVar1 < *(byte *)(iVar3 + 0x20)) {
      do {
        iVar2 = uVar1 * 4;
        uVar1 = uVar1 + 1;
        *(undefined4 *)(iVar3 + iVar2 + 0x24) = 0xffffffff;
        iVar3 = *(int *)(this + 0x290);
      } while (uVar1 < *(byte *)(iVar3 + 0x20));
    }
    iVar2 = (**(code **)(*(int *)(this + 0x10) + 0x6c))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8));
    if (iVar2 < 0) {
      iVar3 = -0x7ffffffe;
      if (*(int *)(*(int *)(DAT_0009d154 + 0x9d114) + 0x3c) != 0) {
        mm_camera_debug_log(2,1,DAT_0009d15c + 0x9d136,0x5fc,DAT_0009d158 + 0x9d128,
                            *(undefined4 *)(*(int *)(this + 0x290) + 0xc),iVar2);
      }
    }
    else {
      if (*(int *)(*(int *)(DAT_0009d160 + 0x9d0b2) + 0x48) != 0) {
        mm_camera_debug_log(2,4,DAT_0009d168 + 0x9d0d8,0x601,DAT_0009d164 + 0x9d0ca,
                            *(undefined4 *)(*(int *)(this + 0x290) + 0xc),
                            *(undefined *)(*(int *)(this + 0x290) + 0x21));
      }
      *(undefined4 *)(this + 0x290) = 0;
      *(undefined4 *)(this + 0x294) = 0;
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

