
/* qcamera::QCameraChannel::init(mm_camera_channel_attr_t*, void (*)(mm_camera_super_buf_t*, void*),
   void*) */

int qcamera::QCameraChannel::init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(ctx + 8) + 0x34))(*(undefined4 *)(ctx + 4));
  *(int *)(ctx + 0x10) = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000cc528 + 0xcc508) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cc530 + 0xcc51e,0xb8,DAT_000cc52c + 0xcc516);
  }
  return -0x80000000;
}

