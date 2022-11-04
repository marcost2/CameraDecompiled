
/* qcamera::QCameraStateMachine::smEvtProcRoutine(void*) */

undefined4 qcamera::QCameraStateMachine::smEvtProcRoutine(void *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  pthread_mutex_t *__mutex;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(DAT_000c841c + 0xc8322);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c8424 + 0xc833c,0x3e,DAT_000c8420 + 0xc8334);
  }
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x5c);
  bVar1 = true;
  do {
    while( true ) {
      pthread_mutex_lock(__mutex);
      iVar2 = *(int *)((int)param_1 + 0x58);
      if (iVar2 == 0) {
        do {
          iVar6 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x60),__mutex);
          iVar2 = *(int *)((int)param_1 + 0x58);
        } while (iVar2 == 0);
      }
      else {
        iVar6 = 0;
      }
      *(int *)((int)param_1 + 0x58) = iVar2 + -1;
      pthread_mutex_unlock(__mutex);
      if (iVar6 == 0) break;
      piVar3 = (int *)__errno();
      if (*piVar3 != 0x16) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          return 0;
        }
        strerror(*piVar3);
        uVar5 = 0x44;
        iVar7 = DAT_000c8428 + 0xc8404;
        uVar4 = 1;
        iVar2 = DAT_000c842c + 0xc8410;
        goto LAB_000c840e;
      }
    }
    piVar3 = (int *)QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0xc),true);
    if ((piVar3 != (int *)0x0) ||
       (piVar3 = (int *)QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0x30),true),
       piVar3 != (int *)0x0)) {
      iVar2 = *piVar3;
      if (iVar2 == 2) {
        bVar1 = false;
      }
      else if (iVar2 == 1) {
        stateMachine((QCameraStateMachine *)param_1,piVar3[1],(void *)piVar3[2]);
        free((void *)piVar3[2]);
      }
      else if (iVar2 == 0) {
        stateMachine((QCameraStateMachine *)param_1,piVar3[1],(void *)piVar3[2]);
      }
      free(piVar3);
    }
  } while (bVar1);
  if (*(int *)(iVar7 + 0x28) != 0) {
    uVar4 = 3;
    uVar5 = 0x68;
    iVar7 = DAT_000c8430 + 0xc83ea;
    iVar2 = DAT_000c8434 + 0xc83f2;
LAB_000c840e:
    mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar7);
  }
  return 0;
}

