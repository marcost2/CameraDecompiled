
/* qcamera::QCameraStream::dataProcRoutine(void*) */

undefined4 qcamera::QCameraStream::dataProcRoutine(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *__ptr;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  pthread_mutex_t *__mutex;
  int iVar8;
  
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0xc4),(char *)(DAT_000d084c + 0xd070c));
  iVar8 = *(int *)(DAT_000d0850 + 0xd0714);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d0858 + 0xd0730,0x457,DAT_000d0854 + 0xd0728);
  }
  __mutex = (pthread_mutex_t *)((int)param_1 + 0xf0);
  iVar1 = DAT_000d085c + 0xd0744;
  iVar2 = DAT_000d0860 + 0xd074a;
  do {
    while( true ) {
      pthread_mutex_lock(__mutex);
      iVar3 = *(int *)((int)param_1 + 0xec);
      if (iVar3 == 0) {
        do {
          iVar7 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0xf4),__mutex);
          iVar3 = *(int *)((int)param_1 + 0xec);
        } while (iVar3 == 0);
      }
      else {
        iVar7 = 0;
      }
      *(int *)((int)param_1 + 0xec) = iVar3 + -1;
      pthread_mutex_unlock(__mutex);
      if (iVar7 != 0) break;
      iVar3 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0xc4));
      if (iVar3 == 3) {
        if (*(int *)(iVar8 + 0x28) != 0) {
          mm_camera_debug_log(1,3,iVar2,0x467,iVar1);
        }
        __ptr = (void *)QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0xa0),true);
        if (__ptr != (void *)0x0) {
          if (*(code **)((int)param_1 + 0x94) == (code *)0x0) {
                    /* WARNING: Load size is inaccurate */
            (**(code **)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)(*(int *)((int)__ptr + 0x10) + 0xc));
            free(__ptr);
          }
          else {
            (**(code **)((int)param_1 + 0x94))(__ptr,param_1,*(undefined4 *)((int)param_1 + 0x9c));
          }
        }
      }
      else if (iVar3 == 4) {
        if (*(int *)(iVar8 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d0870 + 0xd081e,0x476,DAT_000d086c + 0xd0816);
        }
        QCameraQueue::flush((QCameraQueue *)((int)param_1 + 0xa0),true);
        if (*(int *)(iVar8 + 0x28) == 0) {
          return 0;
        }
        uVar5 = 3;
        uVar6 = 0x47f;
        iVar8 = DAT_000d0874 + 0xd083a;
        iVar1 = DAT_000d0878 + 0xd0842;
LAB_000d0840:
        mm_camera_debug_log(1,uVar5,iVar1,uVar6,iVar8);
        return 0;
      }
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 0x16);
  if (*(int *)(iVar8 + 0x20) == 0) {
    return 0;
  }
  strerror(*piVar4);
  uVar6 = 0x45d;
  iVar8 = DAT_000d0864 + 0xd07f8;
  uVar5 = 1;
  iVar1 = DAT_000d0868 + 0xd0804;
  goto LAB_000d0840;
}

