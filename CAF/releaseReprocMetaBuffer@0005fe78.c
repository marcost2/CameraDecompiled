
/* qcamera::QCamera3PostProcessor::releaseReprocMetaBuffer(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::releaseReprocMetaBuffer(QCamera3PostProcessor *this,uint param_1)

{
  int iVar1;
  int iVar2;
  mm_camera_super_buf_t **__ptr;
  undefined4 uVar3;
  pthread_mutex_t *__mutex;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_0005fee4 + 0x5fe86);
  iVar1 = *piVar4;
  __mutex = (pthread_mutex_t *)(this + 0x360);
  pthread_mutex_lock(__mutex);
  iVar2 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x2d8));
  if ((iVar2 == 0) &&
     (__ptr = (mm_camera_super_buf_t **)
              QCameraQueue::dequeue
                        ((QCameraQueue *)(this + 0x2d8),
                         SUB41(*(undefined4 *)(DAT_0005fee8 + 0x5fea6),0)),
     __ptr != (mm_camera_super_buf_t **)0x0)) {
    QCamera3ProcessingChannel::metadataBufDone(*(QCamera3ProcessingChannel **)(this + 4),*__ptr);
    free(__ptr);
    pthread_mutex_unlock(__mutex);
    uVar3 = 1;
  }
  else {
    pthread_mutex_unlock(__mutex);
    uVar3 = 0;
  }
  if (*piVar4 == iVar1) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

