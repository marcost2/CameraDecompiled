
/* qcamera::QCamera3QCfaRawChannel::putStreamBufs() */

void qcamera::QCamera3QCfaRawChannel::putStreamBufs(void)

{
  if (*(int *)(*(int *)(DAT_000a1794 + 0xa176e) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a179c + 0xa178a,0xb67,DAT_000a1798 + 0xa1782);
    return;
  }
  return;
}

