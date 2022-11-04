
/* qcamera::QCameraMuxer::composeMpoRoutine(void*) */

undefined4 qcamera::QCameraMuxer::composeMpoRoutine(void *param_1)

{
  bool bVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  int iVar3;
  int *piVar4;
  cam_compose_jpeg_info_t *__ptr;
  cam_compose_jpeg_info_t *__ptr_00;
  undefined4 uVar5;
  undefined4 uVar6;
  cam_compose_jpeg_info_t *pcVar7;
  pthread_mutex_t *__mutex_00;
  int iVar8;
  QCameraMuxer **ppQVar9;
  QCameraMuxer *pQVar10;
  int iVar11;
  
  iVar11 = *(int *)(DAT_000c036c + 0xc0080);
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c0374 + 0xc009c,0x9ff,DAT_000c0370 + 0xc0094);
  }
  ppQVar9 = *(QCameraMuxer ***)(DAT_000c0378 + 0xc00a4);
  pQVar10 = *ppQVar9;
  if (pQVar10 != (QCameraMuxer *)0x0) {
    QCameraCmdThread::setName((QCameraCmdThread *)(pQVar10 + 0x84),(char *)(DAT_000c0384 + 0xc00bc))
    ;
    __mutex_00 = (pthread_mutex_t *)(pQVar10 + 0xb0);
    bVar1 = false;
    __mutex = (pthread_mutex_t *)(pQVar10 + 0xbc);
    iVar2 = DAT_000c0388 + 0xc00da;
switchD_000c0162_caseD_4:
    do {
      pthread_mutex_lock(__mutex_00);
      iVar3 = *(int *)(pQVar10 + 0xac);
      if (iVar3 == 0) {
        do {
          iVar8 = pthread_cond_wait((pthread_cond_t *)(pQVar10 + 0xb4),__mutex_00);
          iVar3 = *(int *)(pQVar10 + 0xac);
        } while (iVar3 == 0);
      }
      else {
        iVar8 = 0;
      }
      *(int *)(pQVar10 + 0xac) = iVar3 + -1;
      pthread_mutex_unlock(__mutex_00);
      if (iVar8 != 0) {
        piVar4 = (int *)__errno();
        if (*piVar4 != 0x16) {
          if (*(int *)(iVar11 + 0x20) == 0) {
            return 0;
          }
          strerror(*piVar4);
          uVar6 = 0xa0f;
          iVar11 = DAT_000c038c + 0xc031c;
          uVar5 = 1;
          iVar2 = DAT_000c0390 + 0xc0328;
          goto LAB_000c0326;
        }
        goto switchD_000c0162_caseD_4;
      }
      uVar6 = QCameraCmdThread::getCmd((QCameraCmdThread *)(pQVar10 + 0x84));
      switch(uVar6) {
      case 1:
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c0394 + 0xc01a2,0xa19,iVar2);
        }
        pthread_mutex_lock(__mutex);
        *(int *)(pQVar10 + 0xb8) = *(int *)(pQVar10 + 0xb8) + 1;
        pthread_cond_signal((pthread_cond_t *)(pQVar10 + 0xc0));
        pthread_mutex_unlock(__mutex);
        bVar1 = true;
        break;
      case 2:
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c039c + 0xc01e4,0xa22,DAT_000c0398 + 0xc01dc);
        }
        pthread_mutex_lock(__mutex);
        *(int *)(pQVar10 + 0xb8) = *(int *)(pQVar10 + 0xb8) + 1;
        pthread_cond_signal((pthread_cond_t *)(pQVar10 + 0xc0));
        pthread_mutex_unlock(__mutex);
        bVar1 = false;
        break;
      case 3:
        if (bVar1) {
          if (*(int *)(iVar11 + 0x28) == 0) goto LAB_000c01f4;
          uVar6 = 0xa2c;
          iVar3 = DAT_000c03a0 + 0xc0182;
          iVar8 = DAT_000c03a4 + 0xc018a;
          do {
            mm_camera_debug_log(1,3,iVar8,uVar6,iVar3);
LAB_000c01f4:
            do {
              iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(*ppQVar9 + 0x3c));
              bVar1 = true;
              if (iVar3 != 0) goto switchD_000c0162_caseD_4;
              iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(*ppQVar9 + 0x60));
              if (iVar3 != 0) {
                bVar1 = true;
                goto switchD_000c0162_caseD_4;
              }
              __ptr = (cam_compose_jpeg_info_t *)
                      QCameraQueue::dequeue((QCameraQueue *)(*ppQVar9 + 0x3c),true);
              if (__ptr == (cam_compose_jpeg_info_t *)0x0) {
                if (*(int *)(iVar11 + 0x28) == 0) goto LAB_000c01f4;
                mm_camera_debug_log(1,3,DAT_000c03bc + 0xc02ba,0xa56,DAT_000c03b8 + 0xc02b2);
              }
              else {
                if (*(int *)(iVar11 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000c03ac + 0xc024e,0xa3a,DAT_000c03a8 + 0xc0238,
                                      *(undefined4 *)(__ptr + 0x18),__ptr,
                                      **(undefined4 **)(__ptr + 4),(*(undefined4 **)(__ptr + 4))[1])
                  ;
                }
                __ptr_00 = (cam_compose_jpeg_info_t *)
                           QCameraQueue::dequeue((QCameraQueue *)(*ppQVar9 + 0x60),true);
                if (__ptr_00 == (cam_compose_jpeg_info_t *)0x0) {
                  pcVar7 = (cam_compose_jpeg_info_t *)0x0;
                }
                else {
                  if (*(int *)(iVar11 + 0x2c) != 0) {
                    mm_camera_debug_log(1,4,DAT_000c03b4 + 0xc028e,0xa45,DAT_000c03b0 + 0xc0278,
                                        *(undefined4 *)(__ptr_00 + 0x18),__ptr_00,
                                        **(undefined4 **)(__ptr_00 + 4),
                                        (*(undefined4 **)(__ptr_00 + 4))[1]);
                  }
                  composeMpo(*ppQVar9,__ptr,__ptr_00);
                  pcVar7 = __ptr_00;
                }
                if (*(code **)(__ptr + 0x1c) != (code *)0x0) {
                  (**(code **)(__ptr + 0x1c))
                            (*(undefined4 *)(__ptr + 0x24),*(undefined4 *)(__ptr + 0x20),0);
                }
                free(__ptr);
                if (pcVar7 != (cam_compose_jpeg_info_t *)0x0) {
                  if (*(code **)(pcVar7 + 0x1c) != (code *)0x0) {
                    (**(code **)(pcVar7 + 0x1c))
                              (*(undefined4 *)(pcVar7 + 0x24),*(undefined4 *)(pcVar7 + 0x20),0);
                  }
                  free(__ptr_00);
                  goto LAB_000c01f4;
                }
              }
            } while (*(int *)(iVar11 + 0x28) == 0);
            uVar6 = 0xa62;
            iVar3 = DAT_000c03c0 + 0xc02fc;
            iVar8 = DAT_000c03c4 + 0xc0304;
          } while( true );
        }
        break;
      case 4:
        goto switchD_000c0162_caseD_4;
      }
    } while( true );
  }
  if (*(int *)(iVar11 + 0x20) == 0) {
    return 0;
  }
  uVar5 = 1;
  uVar6 = 0xa01;
  iVar11 = DAT_000c037c + 0xc00f2;
  iVar2 = DAT_000c0380 + 0xc00fa;
LAB_000c0326:
  mm_camera_debug_log(1,uVar5,iVar2,uVar6,iVar11);
  return 0;
switchD_000c0162_caseD_4:
  if (*(int *)(iVar11 + 0x28) == 0) {
    return 0;
  }
  mm_camera_debug_log(1,3,DAT_000c03cc + 0xc034e,0xa69,DAT_000c03c8 + 0xc0346);
  if (*(int *)(iVar11 + 0x28) == 0) {
    return 0;
  }
  uVar5 = 3;
  uVar6 = 0xa70;
  iVar11 = DAT_000c03d0 + 0xc0364;
  iVar2 = (int)&DAT_000c036c + DAT_000c03d4;
  goto LAB_000c0326;
}

