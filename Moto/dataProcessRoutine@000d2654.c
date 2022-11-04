
/* qcamera::QCameraPostProcessor::dataProcessRoutine(void*) */

undefined4 qcamera::QCameraPostProcessor::dataProcessRoutine(void *param_1)

{
  pthread_mutex_t *__mutex;
  QCameraQueue *this;
  QCameraQueue *this_00;
  QCameraQueue *this_01;
  QCameraQueue *this_02;
  int iVar1;
  int *piVar2;
  qcamera_jpeg_data_t *__ptr;
  void *pvVar3;
  mm_camera_super_buf_t *__ptr_00;
  undefined4 *__ptr_01;
  EVP_PKEY_CTX *extraout_r1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  EVP_PKEY_CTX *ctx_02;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  pthread_mutex_t *__mutex_00;
  undefined8 uVar10;
  
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x244),(char *)(DAT_000d2968 + 0xd2668));
  iVar7 = *(int *)(DAT_000d296c + 0xd2670);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d2974 + 0xd2688,0xcc4,DAT_000d2970 + 0xd2680);
  }
  __mutex_00 = (pthread_mutex_t *)((int)param_1 + 0x270);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x27c);
  this = (QCameraQueue *)((int)param_1 + 0x1d8);
  this_00 = (QCameraQueue *)((int)param_1 + 0x16c);
  this_01 = (QCameraQueue *)((int)param_1 + 0x1fc);
  this_02 = (QCameraQueue *)((int)param_1 + 0x1b4);
LAB_000d2718:
  cVar8 = '\0';
switchD_000d278a_caseD_4:
  do {
    pthread_mutex_lock(__mutex_00);
    iVar1 = *(int *)((int)param_1 + 0x26c);
    if (iVar1 == 0) {
      do {
        iVar9 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x274),__mutex_00);
        iVar1 = *(int *)((int)param_1 + 0x26c);
      } while (iVar1 == 0);
    }
    else {
      iVar9 = 0;
    }
    *(int *)((int)param_1 + 0x26c) = iVar1 + -1;
    pthread_mutex_unlock(__mutex_00);
    if (iVar9 == 0) goto LAB_000d277e;
    piVar2 = (int *)__errno();
  } while (*piVar2 == 0x16);
  if (*(int *)(iVar7 + 0x20) == 0) {
    return 0;
  }
  strerror(*piVar2);
  uVar6 = 0xcca;
  iVar7 = DAT_000d2ae0 + 0xd2aae;
  uVar4 = 1;
  puVar5 = (undefined *)(DAT_000d2ae4 + 0xd2aba);
  goto LAB_000d2ab8;
LAB_000d277e:
  uVar10 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x244));
  ctx = (EVP_PKEY_CTX *)((ulonglong)uVar10 >> 0x20);
  switch((int)uVar10) {
  case 1:
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d2aec + 0xd28c4,0xcd3,DAT_000d2ae8 + 0xd28bc);
      ctx = extraout_r1;
    }
    QCameraQueue::init((QCameraQueue *)((int)param_1 + 400),ctx);
    QCameraQueue::init(this_02,ctx_00);
    QCameraQueue::init(this_00,ctx_01);
    QCameraQueue::init(this_01,ctx_02);
    cVar8 = '\x01';
    QCameraCmdThread::sendCmd((QCameraCmdThread *)((int)param_1 + 0x284),1,'\0','\0');
    pthread_mutex_lock(__mutex);
    *(int *)((int)param_1 + 0x278) = *(int *)((int)param_1 + 0x278) + 1;
    pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x280));
    pthread_mutex_unlock(__mutex);
    break;
  case 2:
    goto switchD_000d278a_caseD_2;
  case 3:
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d2afc + 0xd27b0,0xd22,DAT_000d2af8 + 0xd27a6,cVar8);
    }
    __ptr = (qcamera_jpeg_data_t *)QCameraQueue::dequeue(this_02,true);
    if (cVar8 == '\x01') {
      if (__ptr != (qcamera_jpeg_data_t *)0x0) {
        iVar1 = QCameraParametersIntf::isAdvCamFeaturesEnabled
                          ((QCameraParametersIntf *)(*(int *)((int)param_1 + 8) + 0x4ac));
        if (iVar1 != 0) {
          syncStreamParams((QCameraPostProcessor *)param_1,*(mm_camera_super_buf_t **)(__ptr + 8),
                           (mm_camera_super_buf_t *)0x0);
        }
        iVar1 = QCameraQueue::enqueue(this,__ptr);
        if (iVar1 == 0) {
          if (*(int *)(iVar7 + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000d2b04 + 0xd2926,0xd3d,DAT_000d2b00 + 0xd291e);
          }
          releaseJpegJobData((QCameraPostProcessor *)param_1,__ptr);
          free(__ptr);
        }
        else {
          iVar1 = encodeData((QCameraPostProcessor *)param_1,__ptr,(uchar *)((int)param_1 + 0x2d0));
          if (iVar1 != 0) {
            QCameraQueue::dequeue(this,false);
            releaseJpegJobData((QCameraPostProcessor *)param_1,__ptr);
            free(__ptr);
            QCamera2HardwareInterface::sendEvtNotify
                      (*(QCamera2HardwareInterface **)((int)param_1 + 8),1,-0x80000000,0);
          }
        }
      }
      __ptr_00 = (mm_camera_super_buf_t *)QCameraQueue::dequeue(this_01,true);
      if (__ptr_00 != (mm_camera_super_buf_t *)0x0) {
        QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)((int)param_1 + 8));
        iVar1 = processRawImageImpl((QCameraPostProcessor *)param_1,__ptr_00);
        if (iVar1 != 0) {
          piVar2 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                    (*(QCamera2HardwareInterface **)((int)param_1 + 8),
                                     *(uint *)(__ptr_00 + 4));
          if (piVar2 == (int *)0x0) {
            if (0 < *(char *)((int)param_1 + 0x140)) {
              iVar1 = 0;
              do {
                piVar2 = *(int **)((int)param_1 + iVar1 * 4 + 0x144);
                if ((piVar2 != (int *)0x0) && (piVar2[4] == *(int *)(__ptr_00 + 4)))
                goto LAB_000d295e;
                iVar1 = iVar1 + 1;
              } while (iVar1 < *(char *)((int)param_1 + 0x140));
            }
            if (*(int *)(iVar7 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d2b0c + 0xd29b8,0x79f,DAT_000d2b08 + 0xd29ac,
                                  *(undefined4 *)(__ptr_00 + 4));
            }
          }
          else {
LAB_000d295e:
            (**(code **)(*piVar2 + 0x1c))(piVar2,__ptr_00);
          }
          free(__ptr_00);
          QCamera2HardwareInterface::sendEvtNotify
                    (*(QCamera2HardwareInterface **)((int)param_1 + 8),1,-0x80000000,0);
        }
      }
      iVar1 = doReprocess((QCameraPostProcessor *)param_1);
      if (iVar1 == 0) {
        iVar1 = QCamera2HardwareInterface::isRegularCapture
                          (*(QCamera2HardwareInterface **)((int)param_1 + 8));
        cVar8 = '\x01';
        if (iVar1 != 0) {
          QCamera2HardwareInterface::processAPI
                    (*(qcamera_sm_evt_enum_t *)((int)param_1 + 8),(void *)0x26);
          cVar8 = '\x01';
        }
      }
      else {
        cVar8 = '\x01';
        QCamera2HardwareInterface::sendEvtNotify
                  (*(QCamera2HardwareInterface **)((int)param_1 + 8),1,-0x80000000,0);
      }
    }
    else {
      if (__ptr != (qcamera_jpeg_data_t *)0x0) {
        releaseJpegJobData((QCameraPostProcessor *)param_1,__ptr);
        free(__ptr);
      }
      pvVar3 = (void *)QCameraQueue::dequeue(this_01,true);
      if (pvVar3 != (void *)0x0) {
        piVar2 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                  (*(QCamera2HardwareInterface **)((int)param_1 + 8),
                                   *(uint *)((int)pvVar3 + 4));
        if (piVar2 == (int *)0x0) {
          if (0 < *(char *)((int)param_1 + 0x140)) {
            iVar1 = 0;
            do {
              piVar2 = *(int **)((int)param_1 + iVar1 * 4 + 0x144);
              if ((piVar2 != (int *)0x0) && (piVar2[4] == *(int *)((int)pvVar3 + 4)))
              goto LAB_000d27f6;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(char *)((int)param_1 + 0x140));
          }
          if (*(int *)(iVar7 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d2b14 + 0xd284a,0x79f,DAT_000d2b10 + 0xd283e,
                                *(undefined4 *)((int)pvVar3 + 4));
          }
        }
        else {
LAB_000d27f6:
          (**(code **)(*piVar2 + 0x1c))(piVar2,pvVar3);
        }
        free(pvVar3);
      }
      QCameraQueue::flush(this_00,true);
    }
    break;
  case 4:
    if (*(int *)(iVar7 + 0x28) != 0) {
      uVar4 = 3;
      uVar6 = 0xd89;
      iVar7 = DAT_000d2b18 + 0xd2ad6;
      puVar5 = &UNK_000d2ade + DAT_000d2b1c;
LAB_000d2ab8:
      mm_camera_debug_log(1,uVar4,puVar5,uVar6,iVar7);
    }
    return 0;
  }
  goto switchD_000d278a_caseD_4;
switchD_000d278a_caseD_2:
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d2af4 + 0xd2a10,0xce5,DAT_000d2af0 + 0xd2a08);
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)((int)param_1 + 0x284),2,'\x01','\x01');
  __ptr_01 = (undefined4 *)QCameraQueue::dequeue(this,true);
  while (__ptr_01 != (undefined4 *)0x0) {
    (**(code **)((int)param_1 + 0x18))(*__ptr_01);
    releaseJpegJobData((QCameraPostProcessor *)param_1,(qcamera_jpeg_data_t *)__ptr_01);
    free(__ptr_01);
    __ptr_01 = (undefined4 *)QCameraQueue::dequeue(this,true);
  }
  if (*(int *)((int)param_1 + 0x34) != 0) {
    (**(code **)((int)param_1 + 0x20))();
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x2cc);
  if (0 < iVar1) {
    iVar9 = 0;
    do {
      pvVar3 = *(void **)((int)param_1 + iVar9 * 4 + 0x38);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        *(undefined4 *)((int)param_1 + iVar9 * 4 + 0x38) = 0;
        iVar1 = *(int *)((int)param_1 + 0x2cc);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  if (*(int **)((int)param_1 + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x138) + 4))();
    *(undefined4 *)((int)param_1 + 0x138) = 0;
  }
  QCameraQueue::flush((QCameraQueue *)((int)param_1 + 400),true);
  QCameraQueue::flush(this_02,true);
  QCameraQueue::flush(this_00,true);
  QCameraQueue::flush(this_01,true);
  pthread_mutex_lock(__mutex);
  *(int *)((int)param_1 + 0x278) = *(int *)((int)param_1 + 0x278) + 1;
  pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x280));
  pthread_mutex_unlock(__mutex);
  *(undefined *)((int)param_1 + 0x2d0) = 1;
  goto LAB_000d2718;
}

