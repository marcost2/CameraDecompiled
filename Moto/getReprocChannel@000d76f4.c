
/* qcamera::QCameraPostProcessor::getReprocChannel(unsigned char) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::getReprocChannel(QCameraPostProcessor *this,uchar param_1)

{
  if ((int)(uint)param_1 < (int)(char)this[0x140]) {
    return *(undefined4 *)(this + (uint)param_1 * 4 + 0x144);
  }
  if (*(int *)(*(int *)(DAT_000d7734 + 0xd770c) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d773c + 0xd7728,0xe8f,DAT_000d7738 + 0xd7720);
    return 0;
  }
  return 0;
}

