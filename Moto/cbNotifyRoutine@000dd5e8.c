
/* qcamera::QCameraCbNotifier::cbNotifyRoutine(void*) */

undefined4 qcamera::QCameraCbNotifier::cbNotifyRoutine(void *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iVar10;
  pthread_mutex_t *__mutex;
  QCameraQueue *this;
  int iVar11;
  int iVar12;
  int local_2c;
  
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x44),(char *)(DAT_000dd950 + 0xdd5fc));
  iVar11 = *(int *)(DAT_000dd954 + 0xdd604);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000dd95c + 0xdd620,0xe18,DAT_000dd958 + 0xdd618);
  }
  this = (QCameraQueue *)((int)param_1 + 0x20);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x70);
  bVar1 = false;
  local_2c = 0;
  bVar5 = 0;
LAB_000dd63c:
  iVar12 = 0;
switchD_000dd6aa_caseD_4:
  do {
    pthread_mutex_lock(__mutex);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    if (iVar2 == 0) {
      do {
        iVar10 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x74),__mutex);
        iVar2 = *(int *)((int)param_1 + 0x6c);
      } while (iVar2 == 0);
    }
    else {
      iVar10 = 0;
    }
    *(int *)((int)param_1 + 0x6c) = iVar2 + -1;
    pthread_mutex_unlock(__mutex);
    if (iVar10 == 0) {
      uVar9 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x44));
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000dd964 + 0xdd6a2,0xe24,DAT_000dd960 + 0xdd698,uVar9);
      }
      goto LAB_000dd6a4;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 0x16);
  if (*(int *)(iVar11 + 0x2c) == 0) {
    return 0;
  }
  strerror(*piVar3);
  uVar9 = 0xe1e;
  iVar11 = DAT_000dda78 + 0xdda3a;
  iVar12 = DAT_000dda7c + 0xdda46;
  goto LAB_000dda44;
LAB_000dd6a4:
  switch(uVar9) {
  case 1:
    goto switchD_000dd6aa_caseD_1;
  case 2:
    QCameraQueue::flushNodes(this,*(FuncDef60 **)(DAT_000dd968 + 0xdd6bc));
    bVar1 = false;
    local_2c = 0;
    goto LAB_000dd63c;
  case 3:
    break;
  case 4:
    QCameraQueue::flush(this,true);
    if (*(int *)(iVar11 + 0x2c) != 0) {
      uVar9 = 0xf02;
      iVar11 = DAT_000ddae8 + 0xdda6c;
      iVar12 = (int)&DAT_000dda74 + DAT_000ddaec;
LAB_000dda44:
      mm_camera_debug_log(1,4,iVar12,uVar9,iVar11);
    }
    return 0;
  default:
    goto switchD_000dd6aa_caseD_4;
  }
  puVar4 = (undefined4 *)QCameraQueue::dequeue(this,true);
  if (puVar4 == (undefined4 *)0x0) {
    if (*(int *)(iVar11 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000dd970 + 0xdd6f2,0xef4,DAT_000dd96c + 0xdd6ea);
    }
    goto switchD_000dd6aa_caseD_4;
  }
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000dda88 + 0xdd716,0xe43,DAT_000dda74 + 0xdd70a,*puVar4);
  }
  iVar2 = QCamera2HardwareInterface::msgTypeEnabledWithLock
                    (*(QCamera2HardwareInterface **)((int)param_1 + 0x1c),puVar4[1]);
  if (iVar2 == 0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ddae4 + 0xdd7b0,0xeec,DAT_000ddae0 + 0xdd7a4,puVar4[1]);
    }
    pcVar8 = (code *)puVar4[0xb];
    if (pcVar8 == (code *)0x0) goto LAB_000dd642;
    uVar9 = puVar4[9];
    uVar6 = puVar4[10];
    uVar7 = 0xffffffda;
  }
  else {
    switch(*puVar4) {
    case 0:
      if (puVar4[1] == 4) {
        if (**(int **)(DAT_000dda8c + 0xdd73e) != 0) {
          if ((**(byte **)(DAT_000dda90 + 0xdd748) & 1) == 0) {
            atrace_setup();
          }
          if ((int)((uint)*(byte *)(*(int *)(DAT_000dda94 + 0xdd758) + 1) << 0x1d) < 0) {
            atrace_int_body(DAT_000dda98 + 0xdd9dc,0);
          }
        }
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000ddaa0 + 0xdd77a,0xe50,DAT_000dda9c + 0xdd772);
        }
      }
      if (*(code **)((int)param_1 + 4) == (code *)0x0) {
        if (*(int *)(iVar11 + 0x24) != 0) {
          uVar9 = 2;
          uVar6 = 0xe58;
          iVar2 = DAT_000ddaa4 + 0xdd92e;
          iVar10 = DAT_000ddaa8 + 0xdd936;
LAB_000dd98c:
          mm_camera_debug_log(1,uVar9,iVar10,uVar6,iVar2);
        }
      }
      else {
        (**(code **)((int)param_1 + 4))
                  (puVar4[1],puVar4[2],puVar4[3],*(undefined4 *)((int)param_1 + 0x10));
      }
      break;
    case 1:
      if (*(code **)((int)param_1 + 8) == (code *)0x0) {
        if (*(int *)(iVar11 + 0x24) != 0) {
          uVar9 = 2;
          uVar6 = 0xe69;
          iVar2 = DAT_000ddaac + 0xdd948;
          iVar10 = (int)&DAT_000dd950 + DAT_000ddab0;
          goto LAB_000dd98c;
        }
      }
      else {
        (**(code **)((int)param_1 + 8))
                  (puVar4[1],puVar4[4],puVar4[5],puVar4[8],*(undefined4 *)((int)param_1 + 0x10));
      }
      break;
    case 2:
      if (*(code **)((int)param_1 + 0xc) == (code *)0x0) {
        if (*(int *)(iVar11 + 0x20) != 0) {
          uVar9 = 1;
          uVar6 = 0xe7a;
          iVar2 = DAT_000ddab4 + 0xdd986;
          iVar10 = DAT_000ddab8 + 0xdd98e;
          goto LAB_000dd98c;
        }
      }
      else {
        (**(code **)((int)param_1 + 0xc))
                  (puVar4[6],puVar4[7],puVar4[1],puVar4[4],puVar4[5],
                   *(undefined4 *)((int)param_1 + 0x10));
      }
      break;
    case 3:
      if ((bVar1) && (*(int *)((int)param_1 + 8) != 0)) {
        if ((bVar5 & 1) == 0) {
          iVar12 = iVar12 + 1;
          if (*(int *)(iVar11 + 0x34) != 0) {
            mm_camera_debug_log(1,6,DAT_000ddac0 + 0xdd872,0xeb6,DAT_000ddabc + 0xdd864,iVar12,
                                local_2c);
          }
          if ((local_2c != 0) && (local_2c == iVar12)) {
            if (*(int *)(iVar11 + 0x34) != 0) {
              mm_camera_debug_log(1,6,DAT_000ddac8 + 0xdd896,0xeb9,DAT_000ddac4 + 0xdd88e);
            }
            QCamera2HardwareInterface::processSyncEvt
                      (*(QCamera2HardwareInterface **)((int)param_1 + 0x1c),0x24,(void *)0x0);
            iVar12 = local_2c;
          }
        }
        pcVar8 = *(code **)((int)param_1 + 0x14);
        if (pcVar8 == (code *)0x0) {
          if (*(code **)((int)param_1 + 8) != (code *)0x0) {
            (**(code **)((int)param_1 + 8))
                      (puVar4[1],puVar4[4],puVar4[5],puVar4[8],*(undefined4 *)((int)param_1 + 0x10))
            ;
            if ((code *)puVar4[0xb] != (code *)0x0) {
              (*(code *)puVar4[0xb])(puVar4[9],puVar4[10],0);
            }
          }
        }
        else {
          if (*(int *)(iVar11 + 0x34) != 0) {
            mm_camera_debug_log(1,6,DAT_000ddad4 + 0xdd8de,0xec5,DAT_000ddad0 + 0xdd8c8,
                                DAT_000ddacc + 0xdd8ca,
                                *(undefined4 *)(*(int *)((int)param_1 + 0x1c) + 0x5c),puVar4[9],
                                puVar4[0xc]);
            pcVar8 = *(code **)((int)param_1 + 0x14);
          }
          (*pcVar8)(puVar4[1],puVar4[4],puVar4[5],puVar4[8],*(undefined4 *)((int)param_1 + 0x18),
                    puVar4[0xc],puVar4[0xb],puVar4[10],puVar4[9]);
        }
      }
      android::CameraHalWatchdog::GlobalWatchdog::stop((ulong)"s19PREVIEW_FORMATS_MAPE",true);
      goto LAB_000dd642;
    default:
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ddadc + 0xdd7e0,0xee1,DAT_000ddad8 + 0xdd7d4,*puVar4);
      }
      pcVar8 = (code *)puVar4[0xb];
      if (pcVar8 == (code *)0x0) goto LAB_000dd642;
      uVar9 = puVar4[9];
      uVar6 = puVar4[10];
      uVar7 = 0xffffffea;
      goto LAB_000dd99e;
    }
    pcVar8 = (code *)puVar4[0xb];
    if (pcVar8 == (code *)0x0) goto LAB_000dd642;
    uVar9 = puVar4[9];
    uVar6 = puVar4[10];
    uVar7 = 0;
  }
LAB_000dd99e:
  (*pcVar8)(uVar9,uVar6,uVar7);
LAB_000dd642:
  operator_delete(puVar4);
  goto switchD_000dd6aa_caseD_4;
switchD_000dd6aa_caseD_1:
  local_2c = QCameraParametersIntf::getNumOfSnapshots
                       ((QCameraParametersIntf *)(*(int *)((int)param_1 + 0x1c) + 0x4ac));
  bVar1 = true;
  bVar5 = *(byte *)(*(int *)((int)param_1 + 0x1c) + 0xa9e);
  if (bVar5 != 0) {
    bVar5 = 1;
  }
  if (*(int *)(iVar11 + 0x2c) != 0) {
    bVar1 = true;
    mm_camera_debug_log(1,4,DAT_000dda84 + 0xdda22,0xe2f,DAT_000dda80 + 0xdda18,local_2c);
  }
  goto LAB_000dd63c;
}

