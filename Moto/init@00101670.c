
/* qcamera::BSTLiveBokeh::init(void*) */

int __thiscall qcamera::BSTLiveBokeh::init(BSTLiveBokeh *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00101710 + 0x101680);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00101714 + 0x101694,0x81,DAT_0010171c + 0x101692,
                        DAT_00101718 + 0x101690,DAT_00101714 + 0x101694);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xd0));
  if (this[0x14] == (BSTLiveBokeh)0x0) {
    iVar1 = 0;
    this[8] = (BSTLiveBokeh)0x0;
    this[0x14] = (BSTLiveBokeh)0x1;
    QCameraCmdThread::launch
              ((QCameraCmdThread *)(this + 0x88),*(FuncDef57 **)(DAT_00101720 + 0x1016e8),this);
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),1,'\0','\0');
    BaseBSTBokeh::init((BaseBSTBokeh *)this,ctx);
  }
  else {
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00101724 + 0x1016c2,0x8b,DAT_0010172c + 0x1016c0,
                          DAT_00101728 + 0x1016be,DAT_00101724 + 0x1016c2);
    }
    iVar1 = -1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xd0));
  return iVar1;
}

