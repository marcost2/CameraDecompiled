
/* qcamera::QCamera2HardwareInterface::queueDeferredWork(qcamera::QCamera2HardwareInterface::DeferredWorkCmd,
   qcamera::QCamera2HardwareInterface::DeferWorkArgs) */

int qcamera::QCamera2HardwareInterface::queueDeferredWork
              (DeferredWorkCmd param_1,DeferWorkArgs param_2)

{
  DeferWorkArgs *pDVar1;
  DeferWorkArgs DVar2;
  int iVar3;
  DeferWorkArgs in_r2;
  DeferWorkArgs in_r3;
  int *piVar4;
  int iVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1d9c));
  piVar4 = (int *)(param_1 + 0x1c78);
  if (*(int *)(param_1 + 0x1c70) == 0) {
    piVar4 = (int *)(param_1 + 0x1c70);
    iVar5 = 0;
LAB_000b2202:
    pDVar1 = (DeferWorkArgs *)operator_new(0x10);
    DVar2 = *(DeferWorkArgs *)(param_1 + 0x1df4);
    *pDVar1 = param_2;
    pDVar1[1] = DVar2;
    pDVar1[2] = in_r2;
    pDVar1[3] = in_r3;
    iVar3 = QCameraQueue::enqueue((QCameraQueue *)(param_1 + 0x1d78),pDVar1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x1df4);
      *(int *)(param_1 + 0x1df4) = iVar3 + 1;
      *piVar4 = iVar3;
      *(undefined4 *)(param_1 + iVar5 * 8 + 0x1c74) = 0;
      if (*(int *)(param_1 + 0x1df4) == 0) {
        *(undefined4 *)(param_1 + 0x1df4) = 1;
      }
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(param_1 + 0x1d38),3,'\0','\0');
      iVar5 = *piVar4;
      goto LAB_000b228a;
    }
    if (*(int *)(*(int *)(DAT_000b2298 + 0xb2264) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b22a0 + 0xb2280,0x3785,DAT_000b229c + 0xb2274,param_2);
    }
    operator_delete(pDVar1);
  }
  else {
    if (*piVar4 == 0) {
      iVar5 = 1;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1c80);
    if (*piVar4 == 0) {
      iVar5 = 2;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1c88);
    if (*piVar4 == 0) {
      iVar5 = 3;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1c90);
    if (*piVar4 == 0) {
      iVar5 = 4;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1c98);
    if (*piVar4 == 0) {
      iVar5 = 5;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1ca0);
    if (*piVar4 == 0) {
      iVar5 = 6;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1ca8);
    if (*piVar4 == 0) {
      iVar5 = 7;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cb0);
    if (*piVar4 == 0) {
      iVar5 = 8;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cb8);
    if (*piVar4 == 0) {
      iVar5 = 9;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cc0);
    if (*piVar4 == 0) {
      iVar5 = 10;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cc8);
    if (*piVar4 == 0) {
      iVar5 = 0xb;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cd0);
    if (*piVar4 == 0) {
      iVar5 = 0xc;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cd8);
    if (*piVar4 == 0) {
      iVar5 = 0xd;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1ce0);
    if (*piVar4 == 0) {
      iVar5 = 0xe;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1ce8);
    if (*piVar4 == 0) {
      iVar5 = 0xf;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cf0);
    if (*piVar4 == 0) {
      iVar5 = 0x10;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1cf8);
    if (*piVar4 == 0) {
      iVar5 = 0x11;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d00);
    if (*piVar4 == 0) {
      iVar5 = 0x12;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d08);
    if (*piVar4 == 0) {
      iVar5 = 0x13;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d10);
    if (*piVar4 == 0) {
      iVar5 = 0x14;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d18);
    if (*piVar4 == 0) {
      iVar5 = 0x15;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d20);
    if (*piVar4 == 0) {
      iVar5 = 0x16;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d28);
    if (*piVar4 == 0) {
      iVar5 = 0x17;
      goto LAB_000b2202;
    }
    piVar4 = (int *)(param_1 + 0x1d30);
    if (*piVar4 == 0) {
      iVar5 = 0x18;
      goto LAB_000b2202;
    }
  }
  iVar5 = 0;
LAB_000b228a:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1d9c));
  return iVar5;
}

