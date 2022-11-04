
/* qcamera::QCamera3PicChannel::overrideYuvSize(unsigned int, unsigned int) */

void __thiscall
qcamera::QCamera3PicChannel::overrideYuvSize(QCamera3PicChannel *this,uint param_1,uint param_2)

{
  if (*(int *)(*(int *)(DAT_000a4108 + 0xa40dc) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a4110 + 0xa40f6,0x10cd,DAT_000a410c + 0xa40ec,param_1,param_2);
  }
  *(uint *)(this + 0x3184) = param_2;
  *(uint *)(this + 0x3180) = param_1;
  return;
}

