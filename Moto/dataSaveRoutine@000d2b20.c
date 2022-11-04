
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraPostProcessor::dataSaveRoutine(void*) */

undefined4 qcamera::QCameraPostProcessor::dataSaveRoutine(void *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *__ptr;
  ssize_t sVar4;
  void **ppvVar5;
  void *__dest;
  size_t __n;
  EVP_PKEY_CTX *extraout_r1;
  EVP_PKEY_CTX *ctx;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  pthread_mutex_t *__mutex;
  int *piVar10;
  code *pcVar11;
  QCameraQueue *this;
  int iVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  void **local_a8;
  undefined4 uStack164;
  undefined4 uStack160;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined4 uStack80;
  undefined4 local_4c;
  undefined4 uStack72;
  undefined8 uStack68;
  int local_3c;
  
  piVar10 = *(int **)(DAT_000d2eb0 + 0xd2b34);
  local_3c = *piVar10;
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x284),(char *)(DAT_000d2eb4 + 0xd2b48));
  iVar12 = *(int *)(DAT_000d2eb8 + 0xd2b50);
  if (*(int *)(iVar12 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d2ec0 + 0xd2b6c,0xc3a,DAT_000d2ebc + 0xd2b64);
  }
  this = (QCameraQueue *)((int)param_1 + 0x220);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x2b0);
  auVar13 = ZEXT816(0);
  cVar1 = '\0';
  do {
    while( true ) {
      pthread_mutex_lock(__mutex);
      iVar2 = *(int *)((int)param_1 + 0x2ac);
      if (iVar2 == 0) {
        do {
          iVar9 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x2b4),__mutex);
          iVar2 = *(int *)((int)param_1 + 0x2ac);
        } while (iVar2 == 0);
      }
      else {
        iVar9 = 0;
      }
      *(int *)((int)param_1 + 0x2ac) = iVar2 + -1;
      pthread_mutex_unlock(__mutex);
      if (iVar9 != 0) break;
      uVar14 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x284));
      ctx = (EVP_PKEY_CTX *)((ulonglong)uVar14 >> 0x20);
      switch((int)uVar14) {
      case 1:
        if (*(int *)(iVar12 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d2f48 + 0xd2e80,0xc49,DAT_000d2f44 + 0xd2e78);
          ctx = extraout_r1;
        }
        QCameraQueue::init(this,ctx);
        cVar1 = '\x01';
        break;
      case 2:
        if (*(int *)(iVar12 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d2f50 + 0xd2eaa,0xc4f,DAT_000d2f4c + 0xd2ea2);
        }
        QCameraQueue::flush(this,true);
        pthread_mutex_lock((pthread_mutex_t *)((int)param_1 + 700));
        *(int *)((int)param_1 + 0x2b8) = *(int *)((int)param_1 + 0x2b8) + 1;
        pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x2c0));
        pthread_mutex_unlock((pthread_mutex_t *)((int)param_1 + 700));
        cVar1 = '\0';
        break;
      case 3:
        if (*(int *)(iVar12 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d2f58 + 0xd2c4e,0xc5b,DAT_000d2f54 + 0xd2c42,cVar1);
        }
        __ptr = (undefined4 *)QCameraQueue::dequeue(this,true);
        if (__ptr == (undefined4 *)0x0) {
          if (*(int *)(iVar12 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d2f60 + 0xd2d44,0xc5f,DAT_000d2f5c + 0xd2d3c);
          }
        }
        else {
          QCameraQueue::flushNodes
                    ((QCameraQueue *)((int)param_1 + 0x1d8),*(FuncDef61 **)(DAT_000d2f64 + 0xd2c6a),
                     __ptr);
          if (*(int *)(iVar12 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d2f6c + 0xd2c90,0xc69,DAT_000d2f68 + 0xd2c84,*__ptr);
          }
          if (cVar1 == '\x01') {
            local_98 = SUB168(auVar13,0);
            uStack144 = SUB168(auVar13 >> 0x40,0);
            uStack72 = SUB164(auVar13 >> 0x20,0);
            uStack80 = SUB164(auVar13 >> 0x40,0);
            local_4c = SUB164(auVar13 >> 0x60,0);
            iVar2 = *(int *)((int)param_1 + 0x2c4);
            local_88 = local_98;
            uStack128 = uStack144;
            local_78 = local_98;
            uStack112 = uStack144;
            local_68 = local_98;
            uStack96 = uStack144;
            local_58 = local_98;
            uStack68 = uStack144;
            FUN_000d6e38(&local_98,0x5c,0x5c,**(undefined4 **)(DAT_000d2f70 + 0xd2cce));
            iVar9 = open((char *)&local_98,0x42,0x1ad);
            if (iVar9 < 0) {
              if (*(int *)(iVar12 + 0x20) != 0) {
                iVar2 = DAT_000d2f84 + 0xd2d5a;
                mm_camera_debug_log(1,1,DAT_000d2f88 + 0xd2d62,0xc82,iVar2);
              }
            }
            else {
              sVar4 = write(iVar9,(void *)__ptr[2],__ptr[4]);
              if (__ptr[4] == sVar4) {
                if (*(int *)(iVar12 + 0x28) != 0) {
                  uVar8 = 0xc7d;
                  iVar2 = DAT_000d2f7c + 0xd2d16;
                  uVar6 = 3;
                  iVar7 = DAT_000d2f80 + 0xd2d22;
LAB_000d2d82:
                  mm_camera_debug_log(1,uVar6,iVar7,uVar8,iVar2,sVar4);
                }
              }
              else if (*(int *)(iVar12 + 0x20) != 0) {
                uVar8 = 0xc7a;
                iVar2 = DAT_000d2f74 + 0xd2d76;
                uVar6 = 1;
                iVar7 = DAT_000d2f78 + 0xd2d84;
                goto LAB_000d2d82;
              }
              close(iVar9);
            }
            *(int *)((int)param_1 + 0x2c4) = *(int *)((int)param_1 + 0x2c4) + 1;
            pcVar11 = *(code **)(*(int *)((int)param_1 + 8) + 0x4c8);
            uVar6 = __strlen_chk(&local_98,0x5c);
            ppvVar5 = (void **)(*pcVar11)(0xffffffff,uVar6,1,
                                          *(undefined4 *)(*(int *)((int)param_1 + 8) + 0x4d0),iVar2)
            ;
            if (ppvVar5 == (void **)0x0) {
              if (*(int *)(iVar12 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000d2f90 + 0xd2e62,0xc8c,DAT_000d2f8c + 0xd2e5a);
              }
            }
            else {
              __dest = *ppvVar5;
              __n = __strlen_chk(&local_98,0x5c);
              __aeabi_memcpy8(__dest,&local_98,__n);
              if (*(int *)(iVar12 + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000d2f98 + 0xd2dec,0xc91,DAT_000d2f94 + 0xd2de4);
              }
              uStack164 = 0;
              uStack160 = 0;
              local_9c = 1;
              local_a8 = ppvVar5;
              if (*(int *)(iVar12 + 0x34) != 0) {
                mm_camera_debug_log(1,6,DAT_000d2fa0 + 0xd2e1e,0xc96,DAT_000d2f9c + 0xd2e16);
              }
              sendDataNotify((QCameraPostProcessor *)param_1,0x100,(camera_memory *)ppvVar5,'\0',
                             (camera_frame_metadata *)0x0,(qcamera_release_data_t *)&local_a8,0x4b);
            }
          }
          free(__ptr);
        }
        break;
      case 4:
        if (*(int *)(iVar12 + 0x28) == 0) goto LAB_000d2ee6;
        mm_camera_debug_log(1,3,DAT_000d2fa8 + 0xd2f1a,0xca4,DAT_000d2fa4 + 0xd2f12);
        if (*(int *)(iVar12 + 0x28) == 0) goto LAB_000d2ee6;
        uVar6 = 3;
        uVar8 = 0xcab;
        iVar12 = DAT_000d2fac + 0xd2f30;
        iVar2 = DAT_000d2fb0 + 0xd2f38;
        goto LAB_000d2ee2;
      }
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 0x16);
  if (*(int *)(iVar12 + 0x20) != 0) {
    strerror(*piVar3);
    uVar8 = 0xc40;
    iVar12 = DAT_000d2f3c + 0xd2ed8;
    uVar6 = 1;
    iVar2 = DAT_000d2f40 + 0xd2ee4;
LAB_000d2ee2:
    mm_camera_debug_log(1,uVar6,iVar2,uVar8,iVar12);
  }
LAB_000d2ee6:
  if (*piVar10 == local_3c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

