
/* qcamera::BokehSyncNode::init() */

int __thiscall qcamera::BokehSyncNode::init(BokehSyncNode *this,EVP_PKEY_CTX *ctx)

{
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  int iVar1;
  
  iVar1 = *(int *)(DAT_00102034 + 0x101fc4);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00102038 + 0x101fd8,0x37,DAT_00102040 + 0x101fd6,
                        DAT_0010203c + 0x101fd4,DAT_00102038 + 0x101fd8);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (this[1] == (BokehSyncNode)0x0) {
    this[1] = (BokehSyncNode)0x1;
    QCameraQueue::init((QCameraQueue *)(this + 8),ctx_00);
    QCameraQueue::init((QCameraQueue *)(this + 0x2c),ctx_01);
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00102044 + 0x10201a,0x3e,DAT_0010204c + 0x102018,
                        DAT_00102048 + 0x102016,DAT_00102044 + 0x10201a);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return 0;
}

