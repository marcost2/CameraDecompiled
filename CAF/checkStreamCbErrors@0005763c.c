
/* qcamera::QCamera3ProcessingChannel::checkStreamCbErrors(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::checkStreamCbErrors
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int iVar1;
  
  if (param_2 == (QCamera3Stream *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_000576d8 + 0x5765a) + 0x20);
  }
  else if (param_1 == (mm_camera_super_buf_t *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_000576e4 + 0x57678) + 0x20);
  }
  else if (*(int *)(param_1 + 8) == 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(DAT_000576fc + 0x576b4) + 0x20);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_000576f0 + 0x57696) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

