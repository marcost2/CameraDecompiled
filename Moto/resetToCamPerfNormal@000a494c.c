
/* qcamera::QCamera3ReprocessChannel::resetToCamPerfNormal(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::resetToCamPerfNormal(QCamera3ReprocessChannel *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  QCamera3Stream *this_00;
  undefined4 uVar3;
  uint uVar4;
  pthread_mutex_t *__mutex;
  int *piVar5;
  undefined4 local_7ee0;
  undefined4 local_7edc;
  undefined auStack32472 [32436];
  
  __mutex = (pthread_mutex_t *)(this + 0xf4c);
  piVar5 = *(int **)(DAT_000a4a10 + 0xa4968);
  iVar1 = *piVar5;
  pthread_mutex_lock(__mutex);
  uVar4 = *(uint *)(this + 0xf40);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*(uint *)(*(int *)(this + 0xf3c) + uVar2 * 4) == param_1) {
        android::VectorImpl::removeItemsAt((uint)(this + 0xf38),uVar2);
        uVar4 = *(uint *)(this + 0xf40);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  if (this[0xf50] == (QCamera3ReprocessChannel)0x0) {
    pthread_mutex_unlock(__mutex);
    uVar3 = 0;
  }
  else {
    pthread_mutex_unlock(__mutex);
    uVar3 = 0;
    if (uVar4 == 0) {
      this_00 = *(QCamera3Stream **)(this + 0x24);
      __aeabi_memclr8(auStack32472,0x7eac);
      local_7edc = 0;
      local_7ee0 = 0xec;
      uVar3 = QCamera3Stream::setParameter(this_00,(cam_stream_parm_buffer_t *)&local_7ee0);
      pthread_mutex_lock(__mutex);
      this[0xf50] = (QCamera3ReprocessChannel)0x0;
      pthread_mutex_unlock(__mutex);
    }
  }
  if (*piVar5 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

