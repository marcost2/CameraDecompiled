
/* qcamera::QCamera3Stream::cleanInvalidateBuf(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Stream::cleanInvalidateBuf(QCamera3Stream *this,uint param_1)

{
  undefined4 uVar1;
  
  if (*(QCamera3StreamMem **)(this + 0xcc) != (QCamera3StreamMem *)0x0) {
    uVar1 = QCamera3StreamMem::
            __ThumbV7PILongThunk__ZN7qcamera17QCamera3StreamMem20cleanInvalidateCacheEj
                      (*(QCamera3StreamMem **)(this + 0xcc),param_1);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_0005509c + 0x55070) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffda;
}

