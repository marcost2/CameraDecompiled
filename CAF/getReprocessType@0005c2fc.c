
/* qcamera::QCamera3PicChannel::getReprocessType() */

undefined qcamera::QCamera3PicChannel::getReprocessType(void)

{
  int in_r0;
  undefined uVar1;
  
  if ((*(uint *)(in_r0 + 0x68) | *(uint *)(in_r0 + 0x6c)) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined *)(in_r0 + 0x2ef0);
  }
  if (*(int *)(*(int *)(DAT_0005c33c + 0x5c318) + 0x28) != 0) {
    mm_camera_debug_log();
  }
  return uVar1;
}

