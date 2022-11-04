
/* qcamera::QCamera3ReprocessChannel::putMetaStreamBufs() */

void __thiscall qcamera::QCamera3ReprocessChannel::putMetaStreamBufs(QCamera3ReprocessChannel *this)

{
  if (*(int *)(*(int *)(DAT_000a4b3c + 0xa4b00) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a4b44 + 0xa4b18,0x127a,DAT_000a4b40 + 0xa4b10);
  }
  if (*(QCamera3StreamMem **)(this + 0x104) != (QCamera3StreamMem *)0x0) {
    QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0x104));
    if (*(int **)(this + 0x104) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x104) + 4))();
    }
    *(undefined4 *)(this + 0x104) = 0;
  }
  return;
}

