
/* qcamera::QCamera3Stream::dataProcRoutine(void*) */

undefined4 qcamera::QCamera3Stream::dataProcRoutine(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  mm_camera_super_buf_t *pmVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  pthread_mutex_t *__mutex;
  QCameraQueue *pQVar9;
  int iVar10;
  
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x88),
             *(char **)(*(int *)(DAT_0009c598 + 0x9c3e8) +
                       *(int *)(*(int *)((int)param_1 + 0x14) + 4) * 4));
  iVar10 = *(int *)(DAT_0009c59c + 0x9c3fa);
  if (*(int *)(iVar10 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c5a4 + 0x9c416,0x264,DAT_0009c5a0 + 0x9c40e);
  }
  pQVar9 = (QCameraQueue *)((int)param_1 + 100);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0xb4);
  iVar1 = DAT_0009c5a8 + 0x9c42e;
  do {
    while( true ) {
      while( true ) {
        pthread_mutex_lock(__mutex);
        iVar2 = *(int *)((int)param_1 + 0xb0);
        if (iVar2 == 0) {
          do {
            iVar8 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0xb8),__mutex);
            iVar2 = *(int *)((int)param_1 + 0xb0);
          } while (iVar2 == 0);
        }
        else {
          iVar8 = 0;
        }
        *(int *)((int)param_1 + 0xb0) = iVar2 + -1;
        pthread_mutex_unlock(__mutex);
        if (iVar8 == 0) break;
        piVar3 = (int *)__errno();
        if (*piVar3 != 0x16) {
          if (*(int *)(iVar10 + 0x3c) == 0) {
            return 0;
          }
          strerror(*piVar3);
          uVar7 = 0x26a;
          iVar10 = DAT_0009c5ac + 0x9c4f8;
          uVar5 = 1;
          iVar1 = DAT_0009c5b0 + 0x9c504;
          goto LAB_0009c58c;
        }
      }
      iVar2 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x88));
      if (iVar2 != 3) break;
      if (*(int *)(iVar10 + 0x48) != 0) {
        mm_camera_debug_log(2,4,DAT_0009c5cc + 0x9c49c,0x27a,iVar1);
      }
      pmVar4 = (mm_camera_super_buf_t *)
               QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0x40),true);
      if (pmVar4 != (mm_camera_super_buf_t *)0x0) {
        if (*(int *)(*(int *)(pmVar4 + 0x10) + 8) == 1) {
          handleBatchBuffer((QCamera3Stream *)param_1,pmVar4);
        }
        else if (*(code **)((int)param_1 + 0x38) == (code *)0x0) {
          uVar5 = *(undefined4 *)(*(int *)(pmVar4 + 0x10) + 0xc);
                    /* WARNING: Load size is inaccurate */
          pcVar6 = *(code **)(*param_1 + 0xc);
LAB_0009c430:
          (*pcVar6)(param_1,uVar5);
        }
        else {
          (**(code **)((int)param_1 + 0x38))(pmVar4,param_1,*(undefined4 *)((int)param_1 + 0x3c));
        }
      }
    }
    if (iVar2 == 5) {
      uVar5 = QCameraQueue::dequeue(pQVar9,true);
                    /* WARNING: Load size is inaccurate */
      pcVar6 = *(code **)(*param_1 + 0x10);
      goto LAB_0009c430;
    }
  } while (iVar2 != 4);
  if (*(int *)(iVar10 + 0x44) != 0) {
    mm_camera_debug_log(2,3,DAT_0009c5b8 + 0x9c51e,0x28c,DAT_0009c5b4 + 0x9c516);
  }
  QCameraQueue::flush((QCameraQueue *)((int)param_1 + 0x40),true);
  if (*(int *)(iVar10 + 0x44) != 0) {
    uVar5 = QCameraQueue::isEmpty(pQVar9);
    mm_camera_debug_log(2,3,DAT_0009c5c0 + 0x9c54a,0x292,DAT_0009c5bc + 0x9c53e,uVar5);
  }
  QCameraQueue::flush(pQVar9,false);
  pQVar9 = (QCameraQueue *)((int)param_1 + 0x298);
  while (iVar1 = QCameraQueue::isEmpty(pQVar9), iVar1 == 0) {
    QCameraQueue::dequeue(pQVar9,true);
  }
  QCameraQueue::flush(pQVar9,true);
  if (*(int *)(iVar10 + 0x48) != 0) {
    uVar5 = 4;
    uVar7 = 0x29f;
    iVar10 = DAT_0009c5c4 + 0x9c586;
    iVar1 = DAT_0009c5c8 + 0x9c58e;
LAB_0009c58c:
    mm_camera_debug_log(2,uVar5,iVar1,uVar7,iVar10);
  }
  return 0;
}

