
/* qcamera::BSTLiveBokeh::LiveBokehThr(void*) */

undefined4 qcamera::BSTLiveBokeh::LiveBokehThr(void *param_1)

{
  bool bVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  camera_stereo_buf_info *pcVar6;
  camera_stereo_buf_info *pcVar7;
  void *pvVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  pthread_mutex_t *__mutex_00;
  int iVar12;
  QCameraQueue *this;
  QCameraQueue *this_00;
  
  pcVar11 = (char *)(DAT_001012c8 + 0x1010f4);
  QCameraCmdThread::setName((QCameraCmdThread *)((int)param_1 + 0x88),pcVar11);
  this_00 = (QCameraQueue *)((int)param_1 + 0x40);
  this = (QCameraQueue *)((int)param_1 + 0x1c);
  __mutex_00 = (pthread_mutex_t *)((int)param_1 + 0xb4);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0xc0);
  bVar1 = false;
  iVar2 = *(int *)(DAT_001012cc + 0x10111e);
switchD_00101174_caseD_4:
  while( true ) {
    pthread_mutex_lock(__mutex_00);
    iVar3 = *(int *)((int)param_1 + 0xb0);
    if (iVar3 == 0) {
      do {
        iVar12 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0xb8),__mutex_00);
        iVar3 = *(int *)((int)param_1 + 0xb0);
      } while (iVar3 == 0);
    }
    else {
      iVar12 = 0;
    }
    *(int *)((int)param_1 + 0xb0) = iVar3 + -1;
    pthread_mutex_unlock(__mutex_00);
    if (iVar12 == 0) break;
    piVar4 = (int *)__errno();
    if (*piVar4 != 0x16) {
      if (*(int *)(iVar2 + 0x20) != 0) {
        pcVar10 = strerror(*piVar4);
        mm_camera_debug_log(1,1,pcVar11,0x3a,DAT_001012d4 + 0x10126a,DAT_001012d0 + 0x101268,pcVar11
                            ,pcVar10);
      }
      return 0;
    }
  }
  uVar5 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x88));
  switch(uVar5) {
  case 1:
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,pcVar11,0x43,DAT_001012dc + 0x10118e,DAT_001012d8 + 0x10118c,pcVar11);
    }
    piVar4 = (int *)IBokehImpl::createInstance(*(int *)((int)param_1 + 0x10));
    *(int **)((int)param_1 + 0xcc) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))();
    }
    pthread_mutex_lock(__mutex);
    *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + 1;
    pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0xc4));
    pthread_mutex_unlock(__mutex);
    bVar1 = true;
    goto switchD_00101174_caseD_4;
  case 2:
    pthread_mutex_lock(__mutex);
    *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + 1;
    pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0xc4));
    pthread_mutex_unlock(__mutex);
    break;
  case 3:
    if (bVar1) {
      while ((iVar3 = QCameraQueue::isEmpty(this), iVar3 == 0 &&
             (iVar3 = QCameraQueue::isEmpty(this_00), iVar3 == 0))) {
        pcVar6 = (camera_stereo_buf_info *)QCameraQueue::peek(this);
        pcVar7 = (camera_stereo_buf_info *)QCameraQueue::peek(this_00);
        implBokeh((BSTLiveBokeh *)param_1,pcVar6,pcVar7);
        pvVar8 = (void *)QCameraQueue::dequeue(this,true);
        pvVar9 = (void *)QCameraQueue::dequeue(this_00,true);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
      }
      goto switchD_00101174_caseD_4;
    }
    break;
  case 4:
    goto switchD_00101174_caseD_4;
  default:
    goto switchD_00101174_caseD_4;
  }
  bVar1 = false;
  goto switchD_00101174_caseD_4;
switchD_00101174_caseD_4:
  if (*(int **)((int)param_1 + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xcc) + 0x14))();
    (**(code **)(**(int **)((int)param_1 + 0xcc) + 8))();
    *(undefined4 *)((int)param_1 + 0xcc) = 0;
    *(undefined *)((int)param_1 + 0x14) = 0;
  }
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,pcVar11,0x6f,DAT_001012e4 + 0x1012b2,DAT_001012e0 + 0x1012b0,pcVar11,
                        DAT_001012e0 + 0x1012b0);
  }
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}

