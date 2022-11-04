
/* qcamera::QCamera3ProcessingChannel::getStreamBufs(unsigned int) */

int qcamera::QCamera3ProcessingChannel::getStreamBufs(uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_0009f778 + 0x9f712);
  if (*piVar1 != 0) {
    if ((**(byte **)(DAT_0009f77c + 0x9f71e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009f780 + 0x9f72c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009f784 + 0x9f764);
    }
  }
  if (*piVar1 != 0) {
    if ((**(byte **)(DAT_0009f788 + 0x9f740) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009f78c + 0x9f74e) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return param_1 + 0x6b0;
    }
  }
  return param_1 + 0x6b0;
}

