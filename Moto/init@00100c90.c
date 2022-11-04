
/* qcamera::BaseBSTBokeh::init(void*) */

int __thiscall qcamera::BaseBSTBokeh::init(BaseBSTBokeh *this,EVP_PKEY_CTX *ctx)

{
  EVP_PKEY_CTX *extraout_r1;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  EVP_PKEY_CTX *ctx_02;
  EVP_PKEY_CTX *ctx_03;
  int iVar1;
  
  iVar1 = *(int *)(DAT_00100d04 + 0x100c9e);
  ctx_00 = ctx;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100d08 + 0x100cb2,0x2f,DAT_00100d10 + 0x100cb0,
                        DAT_00100d0c + 0x100cae,DAT_00100d08 + 0x100cb2);
    ctx_00 = extraout_r1;
  }
  *(EVP_PKEY_CTX **)(this + 4) = ctx;
  QCameraQueue::init((QCameraQueue *)(this + 0x1c),ctx_00);
  QCameraQueue::init((QCameraQueue *)(this + 0x40),ctx_01);
  QCameraQueue::init((QCameraQueue *)(this + 100),ctx_02);
  BokehSyncNode::init(*(BokehSyncNode **)(this + 0x18),ctx_03);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100d14 + 0x100cf2,0x35,DAT_00100d1c + 0x100cf0,
                        DAT_00100d18 + 0x100cee,DAT_00100d14 + 0x100cf2);
  }
  return 0;
}

