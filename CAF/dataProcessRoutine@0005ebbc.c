
/* qcamera::QCamera3PostProcessor::dataProcessRoutine(void*) */

undefined4 qcamera::QCamera3PostProcessor::dataProcessRoutine(void *param_1)

{
  QCameraQueue *this;
  QCameraQueue *this_00;
  QCameraQueue *this_01;
  QCameraQueue *this_02;
  QCameraQueue *this_03;
  QCameraQueue *this_04;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  mm_camera_super_buf_t **ppmVar5;
  mm_camera_super_buf_t *__ptr;
  qcamera_hal3_jpeg_data_t *__ptr_00;
  qcamera_fwk_input_pp_data_t *__ptr_01;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *in_r2;
  undefined8 *puVar8;
  mm_camera_super_buf_t **in_r3;
  pthread_mutex_t *__mutex;
  QCameraQueue *this_05;
  int *piVar9;
  void *pvVar10;
  mm_camera_super_buf_t **ppmVar11;
  undefined auVar12 [16];
  undefined4 *in_stack_fffff968;
  mm_camera_super_buf_t *in_stack_fffff96c;
  int in_stack_fffff970;
  uint in_stack_fffff974;
  void *in_stack_fffff978;
  mm_camera_super_buf_t *local_654;
  undefined8 uStack1616;
  undefined4 local_648;
  undefined local_641;
  undefined4 local_640 [384];
  mm_camera_super_buf_t *local_40;
  int local_3c;
  
  piVar9 = *(int **)(DAT_0005ef4c + 0x5ebd2);
  local_3c = *piVar9;
  local_641 = 1;
  pvVar10 = *(void **)(DAT_0005ef50 + 0x5ebe8);
  if (*(int *)((int)pvVar10 + 0x2c) != 0) {
    in_stack_fffff968 = (undefined4 *)(DAT_0005ef54 + 0x5ebf6);
    in_r2 = (undefined8 *)(DAT_0005ef58 + 0x5ebfc);
    in_r3 = (mm_camera_super_buf_t **)0x832;
    mm_camera_debug_log();
  }
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 800),(char *)(DAT_0005ef5c + 0x5ec10));
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x360);
  this_05 = (QCameraQueue *)((int)param_1 + 0x248);
  this = (QCameraQueue *)((int)param_1 + 0x2fc);
  this_00 = (QCameraQueue *)((int)param_1 + 0x2d8);
  this_01 = (QCameraQueue *)((int)param_1 + 0x224);
  this_02 = (QCameraQueue *)((int)param_1 + 0x200);
  this_03 = (QCameraQueue *)((int)param_1 + 0x26c);
  this_04 = (QCameraQueue *)((int)param_1 + 0x290);
  auVar12 = ZEXT816(0);
  local_654 = (mm_camera_super_buf_t *)0x0;
  do {
    while (iVar1 = cam_sem_wait((cam_semaphore_t *)((int)param_1 + 0x348)), iVar1 == 0) {
      uVar3 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 800));
      switch(uVar3) {
      case 1:
        if (*(int *)((int)pvVar10 + 0x28) != 0) {
          in_stack_fffff968 = (undefined4 *)(DAT_0005ef68 + 0x5ed84);
          in_r2 = (undefined8 *)(DAT_0005ef6c + 0x5ed8a);
          in_r3 = (mm_camera_super_buf_t **)0x845;
          mm_camera_debug_log();
        }
        local_654 = (mm_camera_super_buf_t *)0x1;
        local_641 = 1;
        QCameraQueue::init(this_05);
        QCameraQueue::init(this_03);
        QCameraQueue::init(this_02);
        QCameraQueue::init(this_01);
        QCameraQueue::init(this_00);
        QCameraQueue::init(this);
        cam_sem_post((cam_semaphore_t *)((int)param_1 + 0x354));
        break;
      case 2:
        if (*(int *)((int)pvVar10 + 0x28) != 0) {
          in_stack_fffff968 = (undefined4 *)(DAT_0005ef70 + 0x5edd6);
          in_r2 = (undefined8 *)(DAT_0005ef74 + 0x5eddc);
          in_r3 = (mm_camera_super_buf_t **)0x854;
          mm_camera_debug_log();
        }
        puVar7 = (undefined4 *)QCameraQueue::dequeue(this_04,true);
        while (puVar7 != (undefined4 *)0x0) {
          (**(code **)((int)param_1 + 0x14))(*puVar7);
          releaseJpegJobData((QCamera3PostProcessor *)param_1,(qcamera_hal3_jpeg_data_t *)puVar7);
          free(puVar7);
          puVar7 = (undefined4 *)QCameraQueue::dequeue(this_04,true);
        }
        if (*(int *)((int)param_1 + 0x28) != 0) {
          (**(code **)((int)param_1 + 0x1c))();
          *(undefined4 *)((int)param_1 + 0x28) = 0;
        }
        local_641 = 1;
        QCameraQueue::flush(this_05);
        QCameraQueue::flush(this_03);
        QCameraQueue::flush(this_02);
        QCameraQueue::flush(this_01);
        QCameraQueue::flush(this_00);
        QCameraQueue::flush(this);
        cam_sem_post((cam_semaphore_t *)((int)param_1 + 0x354));
        local_654 = (mm_camera_super_buf_t *)0x0;
        break;
      case 3:
        if (*(int *)((int)pvVar10 + 0x28) != 0) {
          in_stack_fffff968 = (undefined4 *)(DAT_0005ef60 + 0x5ece4);
          in_r2 = (undefined8 *)(DAT_0005ef64 + 0x5ecec);
          in_r3 = (mm_camera_super_buf_t **)0x880;
          in_stack_fffff96c = local_654;
          mm_camera_debug_log();
        }
        local_641 = 1;
        if (local_654 == (mm_camera_super_buf_t *)0x1) {
          iVar1 = QCameraQueue::isEmpty(this_04);
          if (iVar1 != 0) {
            if (*(int *)((int)pvVar10 + 0x2c) != 0) {
              in_stack_fffff968 = (undefined4 *)(DAT_0005ef78 + 0x5ee44);
              in_r2 = (undefined8 *)(DAT_0005ef7c + 0x5ee4a);
              in_r3 = (mm_camera_super_buf_t **)0x887;
              mm_camera_debug_log();
            }
            __ptr_00 = (qcamera_hal3_jpeg_data_t *)QCameraQueue::dequeue(this_03,true);
            if (__ptr_00 != (qcamera_hal3_jpeg_data_t *)0x0) {
              QCameraQueue::enqueue
                        (this_04,(cam_mapping_buf_type)__ptr_00,(uint)in_r2,(uint)in_r3,
                         (int)in_stack_fffff968,(uint)in_stack_fffff96c,in_stack_fffff970,
                         in_stack_fffff974,in_stack_fffff978);
              if (*(int *)(__ptr_00 + 0x10) == 0) {
                in_r2 = (undefined8 *)&local_641;
                iVar1 = encodeData((QCamera3PostProcessor *)param_1,__ptr_00,(uchar *)in_r2);
              }
              else {
                in_r2 = (undefined8 *)&local_641;
                iVar1 = encodeFWKData((QCamera3PostProcessor *)param_1,__ptr_00,(uchar *)in_r2);
              }
              if (iVar1 != 0) {
                QCameraQueue::dequeue(this_04,false);
                releaseJpegJobData((QCamera3PostProcessor *)param_1,__ptr_00);
                free(__ptr_00);
              }
            }
          }
          iVar1 = QCameraQueue::isEmpty(this_01);
          if ((iVar1 == 0) &&
             (__ptr_01 = (qcamera_fwk_input_pp_data_t *)QCameraQueue::dequeue(this_01,true),
             __ptr_01 != (qcamera_fwk_input_pp_data_t *)0x0)) {
            puVar6 = (undefined8 *)malloc(0x18);
            uVar3 = QCameraQueue::dequeue(this,true);
            if (puVar6 == (undefined8 *)0x0) {
              in_r2 = puVar6;
              if (*(int *)((int)pvVar10 + 0x20) != 0) {
                in_stack_fffff968 = (undefined4 *)(DAT_0005f284 + 0x5ef3a);
                in_r2 = (undefined8 *)(DAT_0005f288 + 0x5ef40);
                in_r3 = (mm_camera_super_buf_t **)0x8bc;
                mm_camera_debug_log();
              }
            }
            else {
              *(undefined4 *)(puVar6 + 2) = uVar3;
              *puVar6 = SUB168(auVar12,0);
              puVar6[1] = SUB168(auVar12 >> 0x40,0);
              *(undefined4 *)((int)puVar6 + 0x14) = 0;
              if (*(QCamera3ReprocessChannel **)((int)param_1 + 0x1f0) ==
                  (QCamera3ReprocessChannel *)0x0) {
                if (*(int *)((int)pvVar10 + 0x20) != 0) {
                  in_stack_fffff968 = (undefined4 *)(DAT_0005f27c + 0x5ef8c);
                  in_r3 = (mm_camera_super_buf_t **)0x8b8;
                  mm_camera_debug_log();
                }
              }
              else {
                puVar8 = puVar6;
                iVar1 = QCamera3ReprocessChannel::overrideFwkMetadata
                                  (*(QCamera3ReprocessChannel **)((int)param_1 + 0x1f0),__ptr_01);
                if ((iVar1 != 0) && (*(int *)((int)pvVar10 + 0x20) != 0)) {
                  in_stack_fffff968 = (undefined4 *)(DAT_0005f274 + 0x5eef8);
                  puVar8 = (undefined8 *)(DAT_0005f278 + 0x5eefe);
                  in_r3 = (mm_camera_super_buf_t **)0x8ad;
                  mm_camera_debug_log();
                }
                *(qcamera_fwk_input_pp_data_t **)(puVar6 + 1) = __ptr_01;
                QCameraQueue::enqueue
                          (this_05,(cam_mapping_buf_type)puVar6,(uint)puVar8,(uint)in_r3,
                           (int)in_stack_fffff968,(uint)in_stack_fffff96c,in_stack_fffff970,
                           in_stack_fffff974,in_stack_fffff978);
                in_r2 = (undefined8 *)0x0;
                iVar1 = QCamera3ReprocessChannel::doReprocessOffline
                                  (*(QCamera3ReprocessChannel **)((int)param_1 + 0x1f0),__ptr_01,
                                   false);
                if (iVar1 == 0) goto LAB_0005efaa;
                QCameraQueue::dequeue(this_05,false);
              }
              free(puVar6);
              in_r2 = puVar6;
            }
            free(__ptr_01);
          }
LAB_0005efaa:
          if (*(int *)((int)pvVar10 + 0x28) != 0) {
            in_stack_fffff968 = (undefined4 *)(DAT_0005f28c + 0x5efb6);
            in_r2 = (undefined8 *)(DAT_0005f290 + 0x5efbc);
            in_r3 = (mm_camera_super_buf_t **)0x8cd;
            mm_camera_debug_log();
          }
          pthread_mutex_lock(__mutex);
          iVar1 = android::List<qcamera::ReprocessBuffer>::size
                            ((List_qcamera__ReprocessBuffer_ *)((int)param_1 + 0x1f8));
          if (iVar1 == 0) {
            pthread_mutex_unlock(__mutex);
            local_654 = (mm_camera_super_buf_t *)0x1;
          }
          else {
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_648);
            android::List<qcamera::ReprocessBuffer>::begin();
            local_648 = local_640[0];
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)local_640);
            puVar7 = (undefined4 *)
                     android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_648);
            ppmVar5 = (mm_camera_super_buf_t **)*puVar7;
            iVar1 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_648);
            puVar7 = *(undefined4 **)(iVar1 + 4);
            android::List<qcamera::ReprocessBuffer>::begin();
            in_r2 = &uStack1616;
            android::List<qcamera::ReprocessBuffer>::erase((int)&uStack1616 + 4);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)((int)&uStack1616 + 4));
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&uStack1616);
            if (*(int *)((int)pvVar10 + 0x2c) != 0) {
              in_stack_fffff96c = ppmVar5[2];
              in_stack_fffff970 = puVar7[1];
              in_stack_fffff968 = (undefined4 *)(DAT_0005f294 + 0x5f040);
              in_r2 = (undefined8 *)(DAT_0005f298 + 0x5f04a);
              in_r3 = (mm_camera_super_buf_t **)0x8d6;
              mm_camera_debug_log();
            }
            ppmVar11 = (mm_camera_super_buf_t **)*puVar7;
            uVar3 = QCameraQueue::dequeue(this,true);
            pthread_mutex_unlock(__mutex);
            puVar6 = (undefined8 *)malloc(0x18);
            if (puVar6 == (undefined8 *)0x0) {
              if (*(int *)((int)pvVar10 + 0x20) != 0) {
                in_stack_fffff968 = (undefined4 *)(DAT_0005f29c + 0x5f148);
                in_r2 = (undefined8 *)(DAT_0005f2a0 + 0x5f14e);
                in_r3 = (mm_camera_super_buf_t **)0x8df;
                mm_camera_debug_log();
              }
LAB_0005f1d8:
              if (ppmVar5 != (mm_camera_super_buf_t **)0x0) {
                if (*ppmVar5 != (mm_camera_super_buf_t *)0x0) {
                  releaseSuperBuf((QCamera3PostProcessor *)param_1,*ppmVar5);
                  free(*ppmVar5);
                }
                free(ppmVar5);
              }
              if (ppmVar11 != (mm_camera_super_buf_t **)0x0) {
                QCamera3ProcessingChannel::metadataBufDone
                          (*(QCamera3ProcessingChannel **)((int)param_1 + 4),
                           (mm_camera_super_buf_t *)ppmVar11);
                ppmVar5 = ppmVar11;
                goto LAB_0005f204;
              }
            }
            else {
              in_r3 = ppmVar5;
              if (ppmVar11 == (mm_camera_super_buf_t **)0x0) {
                if (*(int *)((int)pvVar10 + 0x20) != 0) {
                  in_stack_fffff968 = (undefined4 *)(DAT_0005f2a4 + 0x5f166);
                  in_r2 = (undefined8 *)(DAT_0005f2a8 + 0x5f16c);
                  in_r3 = (mm_camera_super_buf_t **)0x8e2;
LAB_0005f18c:
                  mm_camera_debug_log();
                }
LAB_0005f1d2:
                free(puVar6);
                goto LAB_0005f1d8;
              }
              if (ppmVar5 == (mm_camera_super_buf_t **)0x0) {
                if (*(int *)((int)pvVar10 + 0x20) != 0) {
                  in_stack_fffff968 = (undefined4 *)(DAT_0005f2ac + 0x5f180);
                  in_r2 = (undefined8 *)(DAT_0005f2b0 + 0x5f186);
                  in_r3 = (mm_camera_super_buf_t **)0x8e5;
                  goto LAB_0005f18c;
                }
                goto LAB_0005f1d2;
              }
              *(undefined4 *)(puVar6 + 2) = 0;
              *puVar6 = SUB168(auVar12,0);
              puVar6[1] = SUB168(auVar12 >> 0x40,0);
              *(undefined4 *)((int)puVar6 + 0x14) = 0;
              in_r2 = (undefined8 *)*ppmVar5;
              *(undefined4 *)((int)puVar6 + 0x14) = ppmVar11;
              *(undefined8 **)((int)puVar6 + 4) = in_r2;
              if (ppmVar11[4] != (mm_camera_super_buf_t *)0x0) {
                *(undefined4 *)((int)puVar6 + 0xc) = *(undefined4 *)(ppmVar11[4] + 0x208);
              }
              *(undefined4 *)(puVar6 + 2) = uVar3;
              QCameraQueue::enqueue
                        (this_05,(cam_mapping_buf_type)puVar6,(uint)in_r2,(uint)ppmVar5,
                         (int)in_stack_fffff968,(uint)in_stack_fffff96c,in_stack_fffff970,
                         in_stack_fffff974,in_stack_fffff978);
              if (*(int *)((int)param_1 + 0x1f0) == 0) {
                if (*(int *)((int)pvVar10 + 0x20) != 0) {
                  in_stack_fffff968 = (undefined4 *)(DAT_0005f2b4 + 0x5f1a6);
                  in_r2 = (undefined8 *)(DAT_0005f2b8 + 0x5f1ac);
                  in_r3 = (mm_camera_super_buf_t **)0x905;
                  mm_camera_debug_log();
                }
                iVar1 = processPPData((QCamera3PostProcessor *)param_1,*ppmVar5);
              }
              else {
                in_r2 = (undefined8 *)ppmVar11[4];
                in_stack_fffff968 = local_640;
                __aeabi_memclr4(in_stack_fffff968,0x604);
                local_40 = ppmVar5[2];
                in_r3 = *(mm_camera_super_buf_t ***)(puVar6 + 2);
                iVar1 = QCamera3ReprocessChannel::overrideMetadata
                                  (*(QCamera3ReprocessChannel **)((int)param_1 + 0x1f0),
                                   (qcamera_hal3_pp_buffer_t *)ppmVar5,(mm_camera_buf_def *)in_r2,
                                   (jpeg_settings_t *)in_r3,
                                   (qcamera_fwk_input_pp_data_t *)in_stack_fffff968);
                in_stack_fffff978 = pvVar10;
                if (iVar1 == 0) {
                  in_r2 = (undefined8 *)0x1;
                  iVar1 = QCamera3ReprocessChannel::doReprocessOffline
                                    (*(QCamera3ReprocessChannel **)((int)param_1 + 0x1f0),
                                     (qcamera_fwk_input_pp_data_t *)local_640,true);
                  if (iVar1 == 0) {
                    iVar1 = 0;
                    in_stack_fffff978 = pvVar10;
                  }
                  else {
                    QCameraQueue::dequeue(this_05,false);
                    in_stack_fffff978 = pvVar10;
                  }
                }
              }
              if (iVar1 != 0) goto LAB_0005f1d2;
LAB_0005f204:
              free(ppmVar5);
            }
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_648);
            local_654 = (mm_camera_super_buf_t *)0x1;
          }
        }
        else {
          pvVar4 = (void *)QCameraQueue::dequeue(this_03,true);
          if (pvVar4 != (void *)0x0) {
            free(pvVar4);
          }
          ppmVar5 = (mm_camera_super_buf_t **)QCameraQueue::dequeue(this_02,true);
          if (ppmVar5 != (mm_camera_super_buf_t **)0x0) {
            if (*ppmVar5 != (mm_camera_super_buf_t *)0x0) {
              releaseSuperBuf((QCamera3PostProcessor *)param_1,*ppmVar5);
              free(*ppmVar5);
            }
            free(ppmVar5);
          }
          __ptr = (mm_camera_super_buf_t *)QCameraQueue::dequeue(this_00,true);
          if (__ptr != (mm_camera_super_buf_t *)0x0) {
            QCamera3ProcessingChannel::metadataBufDone
                      (*(QCamera3ProcessingChannel **)((int)param_1 + 4),__ptr);
            free(__ptr);
          }
          pvVar4 = (void *)QCameraQueue::dequeue(this_01,true);
          if (pvVar4 != (void *)0x0) {
            free(pvVar4);
          }
        }
        break;
      case 4:
        if (*(int *)((int)pvVar10 + 0x2c) != 0) {
LAB_0005f22c:
          mm_camera_debug_log();
        }
LAB_0005f230:
        if (*piVar9 != local_3c) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return 0;
      }
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 0x16);
  if (*(int *)((int)pvVar10 + 0x20) == 0) goto LAB_0005f230;
  strerror(*piVar2);
  goto LAB_0005f22c;
}

