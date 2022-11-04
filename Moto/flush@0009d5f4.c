
/* qcamera::QCamera3Channel::flush() */

undefined4 qcamera::QCamera3Channel::flush(void)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_0009d660 + 0x9d5fc);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_0009d664 + 0x9d608) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d668 + 0x9d616) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009d66c + 0x9d64c);
    }
  }
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_0009d670 + 0x9d628) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d674 + 0x9d636) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return 0;
    }
  }
  return 0;
}

