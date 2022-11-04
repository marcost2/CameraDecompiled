
/* qcamera::QCamera3PostProcessor::init(qcamera::QCamera3StreamMem*) */

int __thiscall qcamera::QCamera3PostProcessor::init(QCamera3PostProcessor *this,EVP_PKEY_CTX *ctx)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_000a7934 + 0xa78bc);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a7938 + 0xa78c8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a793c + 0xa78d6) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a7940 + 0xa7920);
    }
  }
  *(EVP_PKEY_CTX **)(this + 0x46c) = ctx;
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 0x5c0),*(FuncDef57 **)(DAT_000a7944 + 0xa78e8),this);
  if (1 < *puVar1) {
    if ((**(byte **)(DAT_000a7948 + 0xa78fc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a794c + 0xa790a) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return 0;
    }
  }
  return 0;
}

