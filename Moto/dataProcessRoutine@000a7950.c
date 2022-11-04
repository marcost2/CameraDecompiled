
/* qcamera::QCamera3PostProcessor::dataProcessRoutine(void*) */

undefined4 qcamera::QCamera3PostProcessor::dataProcessRoutine(void *param_1)

{
  int *piVar1;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  QCameraQueue *this;
  QCameraQueue *this_00;
  QCamera3ReprocessChannel **ppQVar2;
  QCameraQueue *this_01;
  QCameraQueue *this_02;
  QCameraQueue *this_03;
  QCameraQueue *this_04;
  QCameraQueue *this_05;
  int iVar3;
  int *piVar4;
  undefined4 *__ptr;
  qcamera_hal3_jpeg_data_t *__ptr_00;
  void *pvVar5;
  qcamera_fwk_input_pp_data_t *__ptr_01;
  undefined8 *puVar6;
  mm_camera_super_buf_t **ppmVar7;
  mm_camera_super_buf_t **ppmVar8;
  QCamera3ReprocessChannel *this_06;
  mm_camera_buf_def *pmVar9;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  EVP_PKEY_CTX *ctx_02;
  EVP_PKEY_CTX *ctx_03;
  EVP_PKEY_CTX *ctx_04;
  EVP_PKEY_CTX *ctx_05;
  EVP_PKEY_CTX *extraout_r1;
  void *__src;
  mm_camera_super_buf_t *pmVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  pthread_mutex_t *__mutex_01;
  int iVar14;
  QCameraQueue *this_07;
  int iVar15;
  uint uVar16;
  undefined auVar17 [16];
  undefined8 uVar18;
  int local_68c;
  uchar local_649;
  qcamera_fwk_input_pp_data_t aqStack1608 [20];
  undefined auStack1588 [520];
  metadata_buffer_t *local_42c;
  undefined auStack1052 [984];
  mm_camera_super_buf_t *local_44;
  mm_camera_super_buf_t *local_40;
  int local_3c;
  
  piVar1 = *(int **)(DAT_000a7c94 + 0xa7966);
  local_3c = *piVar1;
  local_649 = '\x01';
  iVar14 = *(int *)(DAT_000a7c98 + 0xa797a);
  if (*(int *)(iVar14 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a7ca0 + 0xa7996,0x865,DAT_000a7c9c + 0xa798e);
  }
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x5c0),(char *)(DAT_000a7ca4 + 0xa79a4));
  this_07 = (QCameraQueue *)((int)param_1 + 0x530);
  __mutex_01 = (pthread_mutex_t *)((int)param_1 + 0x5ec);
  auVar17 = ZEXT816(0);
  iVar15 = 0;
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x5f8);
  __mutex_00 = (pthread_mutex_t *)((int)param_1 + 0x600);
  this = (QCameraQueue *)((int)param_1 + 0x59c);
  this_00 = (QCameraQueue *)((int)param_1 + 0x4e8);
  ppQVar2 = (QCamera3ReprocessChannel **)((int)param_1 + 0x474);
  this_01 = (QCameraQueue *)((int)param_1 + 0x4c4);
  this_02 = (QCameraQueue *)((int)param_1 + 0x4a0);
  this_03 = (QCameraQueue *)((int)param_1 + 0x578);
  this_04 = (QCameraQueue *)((int)param_1 + 0x47c);
  this_05 = (QCameraQueue *)((int)param_1 + 0x50c);
  do {
    while( true ) {
      pthread_mutex_lock(__mutex_01);
      iVar3 = *(int *)((int)param_1 + 0x5e8);
      if (iVar3 == 0) {
        do {
          iVar13 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x5f0),__mutex_01);
          iVar3 = *(int *)((int)param_1 + 0x5e8);
        } while (iVar3 == 0);
      }
      else {
        iVar13 = 0;
      }
      *(int *)((int)param_1 + 0x5e8) = iVar3 + -1;
      pthread_mutex_unlock(__mutex_01);
      if (iVar13 == 0) break;
      piVar4 = (int *)__errno();
      if (*piVar4 != 0x16) {
        if (*(int *)(iVar14 + 0x20) == 0) goto LAB_000a829e;
        strerror(*piVar4);
        uVar12 = 0x86f;
        iVar14 = DAT_000a82e0 + 0xa8290;
        uVar11 = 1;
        iVar15 = DAT_000a82e4 + 0xa829c;
        goto LAB_000a829a;
      }
    }
    uVar18 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x5c0));
    ctx = (EVP_PKEY_CTX *)((ulonglong)uVar18 >> 0x20);
    switch((int)uVar18) {
    case 1:
      if (*(int *)(iVar14 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000a7cac + 0xa7acc,0x878,DAT_000a7ca8 + 0xa7ac4);
        ctx = extraout_r1;
      }
      iVar15 = 1;
      local_649 = '\x01';
      QCameraQueue::init(this_00,ctx);
      QCameraQueue::init(this_05,ctx_00);
      QCameraQueue::init(this_04,ctx_01);
      QCameraQueue::init(this_02,ctx_02);
      QCameraQueue::init(this_01,ctx_03);
      QCameraQueue::init(this_03,ctx_04);
      QCameraQueue::init(this,ctx_05);
      pthread_mutex_lock(__mutex);
      *(int *)((int)param_1 + 0x5f4) = *(int *)((int)param_1 + 0x5f4) + 1;
      pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x5fc));
      pthread_mutex_unlock(__mutex);
      break;
    case 2:
      if (*(int *)(iVar14 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000a7cb4 + 0xa7aec,0x888,DAT_000a7cb0 + 0xa7ae4);
      }
      __ptr = (undefined4 *)QCameraQueue::dequeue(this_07,true);
      while (__ptr != (undefined4 *)0x0) {
        (**(code **)((int)param_1 + 0x14))(*__ptr);
        releaseJpegJobData((QCamera3PostProcessor *)param_1,(qcamera_hal3_jpeg_data_t *)__ptr);
        free(__ptr);
        __ptr = (undefined4 *)QCameraQueue::dequeue(this_07,true);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        (**(code **)((int)param_1 + 0x1c))();
        *(undefined4 *)((int)param_1 + 0x28) = 0;
      }
      local_649 = '\x01';
      QCameraQueue::flush(this_00,true);
      QCameraQueue::flush(this_05,true);
      QCameraQueue::flush(this_04,true);
      QCameraQueue::flush(this_02,true);
      QCameraQueue::flush(this_01,true);
      QCameraQueue::flush(this_03,true);
      QCameraQueue::flush(this,true);
      pthread_mutex_lock(__mutex);
      *(int *)((int)param_1 + 0x5f4) = *(int *)((int)param_1 + 0x5f4) + 1;
      pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x5fc));
      pthread_mutex_unlock(__mutex);
      iVar15 = 0;
      break;
    case 3:
      if (*(int *)(iVar14 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000a7cbc + 0xa7bb2,0x8b7,DAT_000a7cb8 + 0xa7ba6,iVar15);
      }
      local_649 = '\x01';
      if (iVar15 == 1) {
        iVar15 = QCameraQueue::isEmpty(this_07);
        if (iVar15 == 0) {
LAB_000a7c84:
          local_68c = 0;
        }
        else {
          if (*(int *)(iVar14 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000a7cc4 + 0xa7be6,0x8be,DAT_000a7cc0 + 0xa7bde);
          }
          __ptr_00 = (qcamera_hal3_jpeg_data_t *)QCameraQueue::dequeue(this_05,true);
          if (__ptr_00 == (qcamera_hal3_jpeg_data_t *)0x0) goto LAB_000a7c84;
          QCameraQueue::enqueue(this_07,__ptr_00);
          if (*(int *)(__ptr_00 + 0x10) == 0) {
            local_68c = encodeData((QCamera3PostProcessor *)param_1,__ptr_00,&local_649);
          }
          else {
            local_68c = encodeFWKData((QCamera3PostProcessor *)param_1,__ptr_00,&local_649);
          }
          if (local_68c == 0) goto LAB_000a7c84;
          QCameraQueue::dequeue(this_07,false);
          releaseJpegJobData((QCamera3PostProcessor *)param_1,__ptr_00);
          free(__ptr_00);
        }
        iVar15 = QCameraQueue::isEmpty(this_01);
        if (iVar15 == 0) {
          iVar15 = *(int *)(*(int *)((int)param_1 + 4) + 4);
          pvVar5 = (void *)QCameraQueue::dequeue(this_01,true);
          if (pvVar5 == (void *)0x0) {
            if (*(int *)(iVar14 + 0x20) != 0) {
              uVar11 = 0x902;
              iVar15 = DAT_000a804c + 0xa7d9c;
              iVar3 = DAT_000a8050 + 0xa7da4;
LAB_000a7eea:
              mm_camera_debug_log(1,1,iVar3,uVar11,iVar15);
            }
          }
          else {
            if (*(int *)(iVar14 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000a8038 + 0xa7d02,0x8dd,DAT_000a8034 + 0xa7cf4,
                                  (int)*(char *)((int)pvVar5 + 0x1c),
                                  (int)*(char *)((int)param_1 + 0x470));
            }
            iVar3 = (int)*(char *)((int)pvVar5 + 0x1c);
            if ((iVar3 < *(char *)((int)param_1 + 0x470)) &&
               (ppQVar2[iVar3] != (QCamera3ReprocessChannel *)0x0)) {
              if (*(int *)(iVar14 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000a8040 + 0xa7d44,0x8e0,DAT_000a803c + 0xa7d38,
                                    iVar3 + 1);
              }
              __aeabi_memclr8(aqStack1608,0x60c);
              __src = *(void **)((int)pvVar5 + 8);
              if (__src == (void *)0x0) {
                local_40 = *(mm_camera_super_buf_t **)((int)pvVar5 + 0x20);
                __aeabi_memcpy8(auStack1052,*(void **)(*(int *)((int)pvVar5 + 0x18) + 0x10),0x218);
                __aeabi_memcpy8(auStack1588,*(void **)(*(int *)((int)pvVar5 + 0x14) + 0x10),0x218);
                uVar16 = *(uint *)(QCameraParameters::SCENE_MODES_MAP +
                                  *(int *)(QCameraParameters::FOCUS_MODES_MAP + iVar15 + 0x1c) +
                                  0x8c);
                if (*(int *)(iVar14 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000a8058 + 0xa7e2c,0x8f0,DAT_000a8054 + 0xa7e22,uVar16
                                     );
                }
                iVar15 = QCamera3ReprocessChannel::overrideMetadata
                                   (ppQVar2[*(char *)((int)pvVar5 + 0x1c)],local_42c,
                                    *(jpeg_settings_t **)((int)pvVar5 + 0x10),uVar16);
                if ((iVar15 != 0) && (*(int *)(iVar14 + 0x20) != 0)) {
                  mm_camera_debug_log(1,1,DAT_000a8060 + 0xa7e60,0x8f5,DAT_000a805c + 0xa7e58);
                }
              }
              else {
                if (*(int *)(iVar14 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000a8048 + 0xa7d78,0x8e5,DAT_000a8044 + 0xa7d70);
                  __src = *(void **)((int)pvVar5 + 8);
                }
                __aeabi_memcpy8(aqStack1608,__src,0x60c);
                __aeabi_memcpy8(auStack1052,*(void **)(*(int *)((int)pvVar5 + 0x18) + 0x10),0x218);
              }
              if (*(int *)(iVar14 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000a8068 + 0xa7ea2,0x8f8,DAT_000a8064 + 0xa7e96,local_40
                                   );
              }
              QCameraQueue::enqueue(this_00,pvVar5);
              local_68c = QCamera3ReprocessChannel::doReprocessOffline
                                    (ppQVar2[*(char *)((int)pvVar5 + 0x1c)],aqStack1608,true);
              if ((local_68c != 0) &&
                 (QCameraQueue::dequeue(this_00,false), *(int *)(iVar14 + 0x20) != 0)) {
                uVar11 = 0x8fe;
                iVar15 = DAT_000a806c + 0xa7ee4;
                iVar3 = DAT_000a8070 + 0xa7eec;
                goto LAB_000a7eea;
              }
            }
          }
        }
        iVar15 = QCameraQueue::isEmpty(this_02);
        if ((iVar15 == 0) &&
           (__ptr_01 = (qcamera_fwk_input_pp_data_t *)QCameraQueue::dequeue(this_02,true),
           __ptr_01 != (qcamera_fwk_input_pp_data_t *)0x0)) {
          puVar6 = (undefined8 *)malloc(0x24);
          uVar11 = QCameraQueue::dequeue(this,true);
          if (puVar6 == (undefined8 *)0x0) {
            if (*(int *)(iVar14 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000a82f8 + 0xa7fbe,0x926,DAT_000a82f4 + 0xa7fb6);
            }
            local_68c = -1;
          }
          else {
            puVar6[2] = SUB168(auVar17,0);
            uVar18 = SUB168(auVar17 >> 0x40,0);
            puVar6[3] = uVar18;
            *puVar6 = SUB168(auVar17,0);
            puVar6[1] = uVar18;
            *(undefined4 *)(puVar6 + 4) = 0;
            *(undefined4 *)(puVar6 + 2) = uVar11;
            if (*ppQVar2 == (QCamera3ReprocessChannel *)0x0) {
              if (*(int *)(iVar14 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000a82f0 + 0xa7fe2,0x922,DAT_000a82ec + 0xa7fda);
              }
              local_68c = -1;
            }
            else {
              iVar15 = QCamera3ReprocessChannel::overrideFwkMetadata(*ppQVar2,__ptr_01);
              if ((iVar15 != 0) && (*(int *)(iVar14 + 0x20) != 0)) {
                mm_camera_debug_log(1,1,DAT_000a82e8 + 0xa7f60,0x915,DAT_000a82dc + 0xa7f58);
              }
              *(undefined *)((int)puVar6 + 0x1c) = 0;
              *(qcamera_fwk_input_pp_data_t **)(puVar6 + 1) = __ptr_01;
              *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(__ptr_01 + 0x608);
              QCameraQueue::enqueue(this_00,puVar6);
              local_68c = QCamera3ReprocessChannel::doReprocessOffline(*ppQVar2,__ptr_01,false);
              if (local_68c == 0) {
                local_68c = 0;
                goto LAB_000a7ff6;
              }
              QCameraQueue::dequeue(this_00,false);
            }
            free(puVar6);
          }
          free(__ptr_01);
        }
LAB_000a7ff6:
        if (*(int *)(iVar14 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000a8300 + 0xa8010,0x937,DAT_000a82fc + 0xa8008);
        }
        pthread_mutex_lock(__mutex_00);
        iVar15 = QCameraQueue::isEmpty(this_04);
        if ((iVar15 != 0) || (iVar15 = QCameraQueue::isEmpty(this_03), iVar15 != 0)) {
          pthread_mutex_unlock(__mutex_00);
          iVar15 = 1;
          break;
        }
        ppmVar7 = (mm_camera_super_buf_t **)QCameraQueue::dequeue(this_04,true);
        ppmVar8 = (mm_camera_super_buf_t **)QCameraQueue::dequeue(this_03,true);
        uVar11 = QCameraQueue::dequeue(this,true);
        pthread_mutex_unlock(__mutex_00);
        puVar6 = (undefined8 *)malloc(0x24);
        if (puVar6 == (undefined8 *)0x0) {
          if (*(int *)(iVar14 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a8308 + 0xa817e,0x944,DAT_000a8304 + 0xa8176);
          }
joined_r0x000a8182:
          if (ppmVar7 != (mm_camera_super_buf_t **)0x0) {
            pmVar10 = *ppmVar7;
            if (pmVar10 != (mm_camera_super_buf_t *)0x0) {
              if (*(QCamera3Channel **)((int)param_1 + 4) != (QCamera3Channel *)0x0) {
                QCamera3Channel::bufDone(*(QCamera3Channel **)((int)param_1 + 4),pmVar10);
                pmVar10 = *ppmVar7;
              }
              free(pmVar10);
            }
            free(ppmVar7);
          }
          iVar15 = 1;
          if (ppmVar8 == (mm_camera_super_buf_t **)0x0) break;
          QCamera3ProcessingChannel::metadataBufDone
                    (*(QCamera3ProcessingChannel **)((int)param_1 + 4),
                     (mm_camera_super_buf_t *)ppmVar8);
          ppmVar7 = ppmVar8;
        }
        else {
          if (ppmVar8 == (mm_camera_super_buf_t **)0x0) {
            if (*(int *)(iVar14 + 0x20) != 0) {
              uVar11 = 0x947;
              iVar15 = DAT_000a830c + 0xa819e;
              iVar3 = DAT_000a8310 + 0xa81a6;
LAB_000a81cc:
              mm_camera_debug_log(1,1,iVar3,uVar11,iVar15);
            }
LAB_000a8238:
            free(puVar6);
            goto joined_r0x000a8182;
          }
          if (ppmVar7 == (mm_camera_super_buf_t **)0x0) {
            if (*(int *)(iVar14 + 0x20) != 0) {
              uVar11 = 0x94a;
              iVar15 = DAT_000a8314 + 0xa81c6;
              iVar3 = DAT_000a8318 + 0xa81ce;
              goto LAB_000a81cc;
            }
            goto LAB_000a8238;
          }
          *(undefined4 *)(puVar6 + 4) = 0;
          puVar6[2] = SUB168(auVar17,0);
          uVar18 = SUB168(auVar17 >> 0x40,0);
          puVar6[3] = uVar18;
          *puVar6 = SUB168(auVar17,0);
          puVar6[1] = uVar18;
          pmVar10 = *ppmVar7;
          *(mm_camera_super_buf_t ***)((int)puVar6 + 0x14) = ppmVar8;
          *(mm_camera_super_buf_t **)((int)puVar6 + 4) = pmVar10;
          if (ppmVar8[4] != (mm_camera_super_buf_t *)0x0) {
            *(undefined4 *)((int)puVar6 + 0xc) = *(undefined4 *)(ppmVar8[4] + 0x208);
          }
          *(undefined *)((int)puVar6 + 0x1c) = 0;
          *(undefined4 *)(puVar6 + 2) = uVar11;
          *(mm_camera_super_buf_t **)(puVar6 + 4) = ppmVar7[2];
          QCameraQueue::enqueue(this_00,puVar6);
          this_06 = *ppQVar2;
          if (this_06 == (QCamera3ReprocessChannel *)0x0) {
            if (*(int *)(iVar14 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000a8328 + 0xa81ee,0x973,DAT_000a8324 + 0xa81e6);
            }
            local_68c = processPPData((QCamera3PostProcessor *)param_1,*ppmVar7,
                                      (metadata_buffer_t *)0x0);
          }
          else {
            pmVar9 = (mm_camera_buf_def *)ppmVar8[4];
            __aeabi_memclr8(aqStack1608,0x60c);
            local_40 = ppmVar7[2];
            if (*(char *)((int)param_1 + 0x470) < '\x02') {
              local_68c = QCamera3ReprocessChannel::overrideMetadata
                                    (this_06,(qcamera_hal3_pp_buffer_t *)ppmVar7,pmVar9,
                                     *(jpeg_settings_t **)(puVar6 + 2),aqStack1608);
            }
            else {
              if (*(int *)(iVar14 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000a8320 + 0xa8136,0x95f,DAT_000a831c + 0xa812e);
              }
              __aeabi_memcpy8(auStack1052,*(void **)(*ppmVar7 + 0x10),0x218);
              __aeabi_memcpy8(auStack1588,ppmVar8[4],0x218);
              local_44 = ppmVar7[1];
            }
            if (local_68c == 0) {
              local_68c = QCamera3ReprocessChannel::doReprocessOffline(*ppQVar2,aqStack1608,true);
              if (local_68c == 0) {
                local_68c = 0;
              }
              else {
                QCameraQueue::dequeue(this_00,false);
              }
            }
          }
          if (local_68c != 0) goto LAB_000a8238;
        }
        free(ppmVar7);
        iVar15 = 1;
        break;
      }
      pvVar5 = (void *)QCameraQueue::dequeue(this_05,true);
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      ppmVar7 = (mm_camera_super_buf_t **)QCameraQueue::dequeue(this_04,true);
      if (ppmVar7 != (mm_camera_super_buf_t **)0x0) {
        pmVar10 = *ppmVar7;
        if (pmVar10 != (mm_camera_super_buf_t *)0x0) {
          if (*(QCamera3Channel **)((int)param_1 + 4) != (QCamera3Channel *)0x0) {
            QCamera3Channel::bufDone(*(QCamera3Channel **)((int)param_1 + 4),pmVar10);
            pmVar10 = *ppmVar7;
          }
          free(pmVar10);
        }
        free(ppmVar7);
      }
      pmVar10 = (mm_camera_super_buf_t *)QCameraQueue::dequeue(this_03,true);
      if (pmVar10 != (mm_camera_super_buf_t *)0x0) {
        QCamera3ProcessingChannel::metadataBufDone
                  (*(QCamera3ProcessingChannel **)((int)param_1 + 4),pmVar10);
        free(pmVar10);
      }
      pvVar5 = (void *)QCameraQueue::dequeue(this_02,true);
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      break;
    case 4:
      if (*(int *)(iVar14 + 0x2c) != 0) {
        uVar11 = 4;
        uVar12 = 0x9b8;
        iVar14 = DAT_000a832c + 0xa82ce;
        iVar15 = DAT_000a8330 + 0xa82d6;
LAB_000a829a:
        mm_camera_debug_log(1,uVar11,iVar15,uVar12,iVar14);
      }
LAB_000a829e:
      if (*piVar1 == local_3c) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

