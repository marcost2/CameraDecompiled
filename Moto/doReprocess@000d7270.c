
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraPostProcessor::doReprocess() */

int __thiscall qcamera::QCameraPostProcessor::doReprocess(QCameraPostProcessor *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  int iVar4;
  mm_camera_super_buf_t *pmVar5;
  QCameraChannel *pQVar6;
  QCameraStream *pQVar7;
  int iVar8;
  void *__ptr_00;
  mm_camera_super_buf_t *pmVar9;
  uint uVar10;
  undefined4 uVar11;
  mm_camera_buf_def *pmVar12;
  undefined *puVar13;
  undefined4 uVar14;
  QCameraStream *pQVar15;
  mm_camera_super_buf_t *pmVar16;
  mm_camera_buf_def *pmVar17;
  int iVar18;
  int iVar19;
  pthread_mutex_t *__mutex;
  QCameraReprocessChannel **ppQVar20;
  bool bVar21;
  undefined8 uVar22;
  uint local_34;
  
  uVar22 = QCameraQueue::peek((QCameraQueue *)(this + 0x16c));
  pmVar9 = (mm_camera_super_buf_t *)((ulonglong)uVar22 >> 0x20);
  iVar3 = (int)uVar22;
  if (iVar3 != 0) {
    pmVar9 = *(mm_camera_super_buf_t **)(iVar3 + 8);
  }
  if ((((iVar3 == 0 || pmVar9 == (mm_camera_super_buf_t *)0x0) ||
       (iVar3 = validatePostProcess(this,pmVar9), iVar3 == 0)) ||
      (__ptr = (void *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x16c),true),
      __ptr == (void *)0x0)) ||
     ((pmVar9 = *(mm_camera_super_buf_t **)((int)__ptr + 8), pmVar9 == (mm_camera_super_buf_t *)0x0
      || (pmVar16 = *(mm_camera_super_buf_t **)((int)__ptr + 0x14),
         pmVar16 == (mm_camera_super_buf_t *)0x0)))) {
    return 0;
  }
  cVar1 = *(char *)((int)__ptr + 5);
  iVar19 = (int)cVar1;
  cVar2 = *(char *)((int)__ptr + 4);
  iVar3 = *(int *)(DAT_000d75f8 + 0xd72d0);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d7600 + 0xd72f4,0xdce,DAT_000d75fc + 0xd72e4,pmVar9,pmVar16,
                        (int)cVar2,iVar19);
  }
  iVar4 = QCameraParametersIntf::getManualCaptureMode
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  pmVar5 = pmVar9;
  if (2 < iVar4) {
    pmVar5 = pmVar16;
  }
  if (cVar1 != '\0') {
    pmVar5 = pmVar9;
  }
  uVar10 = (uint)(char)this[0x140];
  if (7 < (int)uVar10) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      return -0x80000000;
    }
    mm_camera_debug_log(1,1,DAT_000d7608 + 0xd7334,0xdd8,DAT_000d7604 + 0xd732c);
    return -0x80000000;
  }
  if ((int)uVar10 < 1) {
    pmVar17 = (mm_camera_buf_def *)0x0;
    pQVar15 = (QCameraStream *)0x0;
    local_34 = 0;
  }
  else {
    iVar4 = 0;
    pQVar15 = (QCameraStream *)0x0;
    pmVar17 = (mm_camera_buf_def *)0x0;
    local_34 = 0;
    do {
      pQVar6 = *(QCameraChannel **)(this + iVar4 * 4 + 0x144);
      if (pQVar6 != (QCameraChannel *)0x0) {
        if (*(int *)(pmVar9 + 8) != 0) {
          iVar18 = 4;
          while ((pQVar7 = (QCameraStream *)
                           QCameraChannel::getStreamByHandle
                                     (pQVar6,**(uint **)(pmVar9 + iVar18 * 4)),
                 pQVar7 == (QCameraStream *)0x0 ||
                 (iVar8 = QCameraStream::isOrignalTypeOf(pQVar7,7), iVar8 == 0))) {
            if (*(uint *)(pmVar9 + 8) <= iVar18 - 3U) goto LAB_000d73a6;
            pQVar6 = *(QCameraChannel **)(this + iVar4 * 4 + 0x144);
            iVar18 = iVar18 + 1;
          }
          pmVar17 = *(mm_camera_buf_def **)(pmVar9 + iVar18 * 4);
          local_34 = *(uint *)(pmVar17 + 0xc);
          pQVar15 = pQVar7;
        }
LAB_000d73a6:
        if (pmVar17 != (mm_camera_buf_def *)0x0 && pQVar15 != (QCameraStream *)0x0) {
          if (*(int *)(iVar3 + 0x2c) == 0) goto LAB_000d7490;
          uVar11 = 0xdf5;
          iVar4 = DAT_000d769c + 0xd745c;
          iVar18 = DAT_000d76a0 + 0xd7468;
          goto LAB_000d748c;
        }
        uVar10 = (uint)(byte)this[0x140];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (char)uVar10);
  }
  if (pmVar17 == (mm_camera_buf_def *)0x0 && pQVar15 == (QCameraStream *)0x0) {
    if ((char)uVar10 < '\x01') {
      pmVar17 = (mm_camera_buf_def *)0x0;
      pQVar15 = (QCameraStream *)0x0;
    }
    else {
      iVar4 = 0;
      pQVar15 = (QCameraStream *)0x0;
      pmVar17 = (mm_camera_buf_def *)0x0;
      do {
        pQVar6 = *(QCameraChannel **)(*(int *)(this + iVar4 * 4 + 0x144) + 0x54);
        if (pQVar6 != (QCameraChannel *)0x0) {
          if (*(int *)(pmVar16 + 8) != 0) {
            uVar10 = 0;
            do {
              pQVar7 = (QCameraStream *)
                       QCameraChannel::getStreamByHandle
                                 (pQVar6,**(uint **)(pmVar16 + uVar10 * 4 + 0x10));
              if ((pQVar7 != (QCameraStream *)0x0) &&
                 (iVar18 = QCameraStream::isTypeOf(pQVar7,7), iVar18 != 0)) {
                pmVar17 = *(mm_camera_buf_def **)(pmVar16 + uVar10 * 4 + 0x10);
                local_34 = *(uint *)(pmVar17 + 0xc);
                pQVar15 = pQVar7;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(pmVar16 + 8));
          }
          if (pmVar17 != (mm_camera_buf_def *)0x0 && pQVar15 != (QCameraStream *)0x0) {
            if (*(int *)(iVar3 + 0x2c) != 0) {
              uVar11 = 0xe0c;
              iVar4 = DAT_000d76a4 + 0xd7482;
              iVar18 = DAT_000d76a8 + 0xd748e;
LAB_000d748c:
              mm_camera_debug_log(1,4,iVar18,uVar11,iVar4,local_34 & 0xff);
            }
            break;
          }
          uVar10 = (uint)(byte)this[0x140];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (char)uVar10);
    }
  }
LAB_000d7490:
  iVar4 = QCameraParametersIntf::isAdvCamFeaturesEnabled
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  if (iVar4 != 0) {
    syncStreamParams(this,pmVar9,pmVar16);
  }
  if (*(int *)(this + iVar19 * 4 + 0x144) == 0) {
    if (*(int *)(iVar3 + 0x20) != 0) {
      uVar11 = 1;
      uVar14 = 0xe67;
      iVar3 = DAT_000d76cc + 0xd752e;
      puVar13 = (undefined *)(DAT_000d76d0 + 0xd7536);
LAB_000d754c:
      mm_camera_debug_log(1,uVar11,puVar13,uVar14,iVar3);
    }
  }
  else {
    ppQVar20 = (QCameraReprocessChannel **)(this + iVar19 * 4 + 0x144);
    *(char *)((int)__ptr + 4) = cVar2 + '\x01';
    uVar10 = QCamera2HardwareInterface::isRegularCapture(*(QCamera2HardwareInterface **)(this + 8));
    bVar21 = uVar10 == 0;
    if (bVar21) {
      uVar10 = (uint)*(byte *)((int)__ptr + 0x18);
    }
    if (bVar21 && uVar10 == 0) {
      *(int *)(this + 0x2d4) = *(int *)(this + 0x2d4) + 1;
      iVar19 = QCameraQueue::enqueue((QCameraQueue *)(this + 400),__ptr);
      if (iVar19 != 0) {
        uVar10 = QCameraParametersIntf::getNumberInBufsForSingleShot
                           ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if (*(uint *)(this + 0x2d4) == (*(uint *)(this + 0x2d4) / uVar10) * uVar10) {
          iVar19 = QCameraParametersIntf::getNumberOutBufsForSingleShot
                             ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
          iVar4 = QCameraParametersIntf::getNumberInBufsForSingleShot
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
          if (0 < iVar19 - iVar4) {
            iVar18 = 0;
            do {
              __ptr_00 = calloc(1,0x20);
              if (__ptr_00 == (void *)0x0) {
                if (*(int *)(iVar3 + 0x20) != 0) {
                  mm_camera_debug_log(1,1,DAT_000d76c0 + 0xd766e,0xe4e,DAT_000d76bc + 0xd7666);
                }
                break;
              }
              *(undefined *)((int)__ptr_00 + 4) = *(undefined *)((int)__ptr + 4);
              iVar8 = QCameraQueue::enqueue((QCameraQueue *)(this + 400),__ptr_00);
              if (iVar8 == 0) {
                if (*(int *)(iVar3 + 0x24) != 0) {
                  mm_camera_debug_log(1,2,DAT_000d76c8 + 0xd768a,0xe54,DAT_000d76c4 + 0xd7682);
                }
                releaseOngoingPPData(__ptr_00,this);
                free(__ptr_00);
                return 0;
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < iVar19 - iVar4);
          }
        }
        iVar3 = QCameraReprocessChannel::doReprocess
                          (*ppQVar20,pmVar5,(QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),
                           pQVar15,(uchar)local_34);
        if (iVar3 == 0) {
          return 0;
        }
        goto LAB_000d7554;
      }
      if (*(int *)(iVar3 + 0x24) != 0) {
        uVar11 = 2;
        uVar14 = 0xe3d;
        iVar3 = DAT_000d76b4 + 0xd75ee;
        puVar13 = &UNK_000d75f6 + DAT_000d76b8;
        goto LAB_000d754c;
      }
    }
    else {
      *(int *)(this + 0x2d4) = *(int *)(this + 0x2d4) + 1;
      iVar19 = QCameraQueue::enqueue((QCameraQueue *)(this + 400),__ptr);
      if (iVar19 != 0) {
        __mutex = (pthread_mutex_t *)(this + 0x2f0);
        pthread_mutex_lock(__mutex);
        uVar22 = QCameraReprocessChannel::doReprocessOffline
                           (*ppQVar20,pmVar5,pmVar17,
                            (QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        pmVar12 = (mm_camera_buf_def *)((ulonglong)uVar22 >> 0x20);
        iVar3 = (int)uVar22;
        if (iVar3 == 0) {
          bVar21 = *(char *)((int)__ptr + 0x18) != '\0';
          if (bVar21) {
            pmVar12 = *(mm_camera_buf_def **)((int)__ptr + 0x1c);
          }
          if (bVar21 && pmVar12 != (mm_camera_buf_def *)0x0) {
            QCameraReprocessChannel::doReprocessOffline
                      (*ppQVar20,pmVar12,pmVar17,(QCameraStream *)0x0);
          }
          pthread_mutex_unlock(__mutex);
          return 0;
        }
        pthread_mutex_unlock(__mutex);
        goto LAB_000d7554;
      }
      if (*(int *)(iVar3 + 0x24) != 0) {
        uVar11 = 2;
        uVar14 = 0xe32;
        iVar3 = DAT_000d76ac + 0xd7546;
        puVar13 = (undefined *)(DAT_000d76b0 + 0xd754e);
        goto LAB_000d754c;
      }
    }
  }
  iVar3 = -0x80000000;
LAB_000d7554:
  releaseOngoingPPData(__ptr,this);
  free(__ptr);
  return iVar3;
}

