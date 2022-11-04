
/* qcamera::QCamera3QCfaRawChannel::request(native_handle const**, unsigned int, int&) */

undefined4
qcamera::QCamera3QCfaRawChannel::request(native_handle **param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = QCamera3Channel::start((QCamera3Channel *)param_1);
  }
  else {
    uVar1 = 0;
  }
  if (*(int *)(*(int *)(DAT_000a17ec + 0xa17c0) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a17f4 + 0xa17da,0xb71,DAT_000a17f0 + 0xa17d0,param_3);
  }
  param_1[0x46011] = (native_handle *)param_3;
  return uVar1;
}

