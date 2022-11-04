
/* qcamera::QCamera2HardwareInterface::takeLiveSnapshot_internal() */

int __thiscall
qcamera::QCamera2HardwareInterface::takeLiveSnapshot_internal(QCamera2HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  QCameraStream *pQVar5;
  QCameraStream *this_00;
  pthread_mutex_t *__mutex;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  QCameraStream *pQVar10;
  int *piVar11;
  int *piVar12;
  char cVar13;
  uint uVar14;
  QCameraChannel *pQVar15;
  uint uVar16;
  QCameraParametersIntf *this_01;
  int *this_02;
  bool bVar17;
  int local_7ee8;
  int iStack32484;
  timespec local_7ee0;
  undefined8 local_7ed8;
  undefined8 local_7ed0;
  undefined8 uStack32456;
  undefined8 local_7ec0;
  undefined8 uStack32440;
  undefined4 local_7eb0;
  undefined4 local_7eac;
  
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar11 = *(int **)(DAT_000b84cc + 0xb814e);
  iVar1 = *piVar11;
  iVar2 = QCameraParametersIntf::getRotation(this_01);
  QCameraParametersIntf::setJpegRotation(this_01,iVar2);
  iVar2 = configureAdvancedCapture(this);
  if (iVar2 == 0) {
    QCameraParametersIntf::getStreamDimension(this_01,4,(cam_dimension_t *)&local_7ee8);
    property_get(DAT_000b84dc + 0xb8206,&local_7ee0,DAT_000b84e0 + 0xb8208);
    iVar2 = atoi((char *)&local_7ee0);
    iVar7 = QCameraParametersIntf::getRecordingHintValue(this_01);
    if (iVar7 == 0 || iVar2 == 0) {
      ppiVar3 = (int **)(this + 0x9c4);
    }
    else {
      ppiVar3 = (int **)(this + 0x9c4);
      if (0x21bfff < iStack32484 * local_7ee8) {
        ppiVar3 = (int **)(this + 0x9c0);
      }
    }
    this_02 = *ppiVar3;
    if (this_02 == (int *)0x0) {
      if (*(int *)(*(int *)(DAT_000b8508 + 0xb836e) + 0x20) != 0) {
        uVar8 = 0x1a95;
        iVar2 = DAT_000b850c + 0xb8382;
        iVar7 = DAT_000b8518 + 0xb838a;
        goto LAB_000b8188;
      }
    }
    else {
      pQVar15 = *(QCameraChannel **)(this + 0x9bc);
      piVar12 = piVar11;
      if (pQVar15 != (QCameraChannel *)0x0) {
        piVar12 = *(int **)(pQVar15 + 0x1c);
      }
      if (pQVar15 != (QCameraChannel *)0x0 && piVar12 != (int *)0x0) {
        piVar6 = (int *)0x0;
        bVar9 = 0;
LAB_000b83b2:
        pQVar5 = (QCameraStream *)QCameraChannel::getStreamByIndex(pQVar15,(uint)piVar6);
        if ((pQVar5 == (QCameraStream *)0x0) ||
           (iVar2 = QCameraStream::getMyType(pQVar5), iVar2 != 1)) goto LAB_000b83c6;
        __mutex = (pthread_mutex_t *)(this + 0x1e10);
        pthread_mutex_lock(__mutex);
        piVar12 = *(int **)(pQVar5 + 0x10c);
        if (piVar12 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar12 + 4))(piVar12);
          if (iVar2 == 0) {
            cVar13 = '\x02';
            iVar2 = *(int *)(DAT_000b8714 + 0xb861c);
            do {
              if (*(int *)(iVar2 + 0x30) != 0) {
                mm_camera_debug_log(1,5,DAT_000b871c + 0xb8638,0x1ab4,DAT_000b8718 + 0xb8630);
              }
              clock_gettime(1,&local_7ee0);
              if (local_7ee0.tv_nsec < 1000000000) {
                uVar14 = 2;
              }
              else {
                uVar14 = 3;
                local_7ee0 = local_7ee0 & 0xffffffff |
                             (ulonglong)(local_7ee0.tv_nsec + 0xc4653600) << 0x20;
              }
              iVar7 = local_7ee0.tv_sec >> 0x1f;
              uVar16 = uVar14 + local_7ee0.tv_sec;
              iVar4 = iVar7 + (uint)CARRY4(uVar14,local_7ee0.tv_sec);
              if ((int)((0x7fffffff - iVar7) - (uint)(~uVar14 < (uint)local_7ee0.tv_sec)) < 0 !=
                  (SBORROW4(0x7fffffff,iVar7) !=
                  SBORROW4(0x7fffffff - iVar7,(uint)(~uVar14 < (uint)local_7ee0.tv_sec)))) {
                iVar4 = 0x7fffffff;
                uVar16 = 0xffffffff;
              }
              if ((int)(iVar4 - (uint)(uVar16 < 0x7fffffff)) < 0 ==
                  (SBORROW4(iVar4,(uint)(uVar16 < 0x7fffffff)) != false)) {
                uVar16 = 0x7fffffff;
              }
              local_7ee0 = local_7ee0 & 0xffffffff00000000 | (ulonglong)uVar16;
              pthread_cond_timedwait((pthread_cond_t *)(this + 0x1e14),__mutex,&local_7ee0);
              if (*(int *)(iVar2 + 0x30) != 0) {
                mm_camera_debug_log(1,5,DAT_000b8730 + 0xb86c2,0x1ab7,DAT_000b872c + 0xb86ba);
              }
              iVar7 = (**(code **)(*piVar12 + 4))(piVar12);
              cVar13 = cVar13 + -1;
            } while ((cVar13 != '\0') && (iVar7 == 0));
          }
          pthread_mutex_unlock(__mutex);
          goto LAB_000b825a;
        }
        if (*(int *)(*(int *)(DAT_000b8720 + 0xb86ea) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b8728 + 0xb8702,0x1aae,DAT_000b8724 + 0xb86fa);
        }
        pthread_mutex_unlock(__mutex);
        iVar2 = -0xc;
        goto LAB_000b81d8;
      }
LAB_000b825a:
      iVar2 = queueDeferredWork((DeferredWorkCmd)this,1);
      *(int *)(this + 0x1da4) = iVar2;
      if (iVar2 == 0) {
        if (*(int *)(*(int *)(DAT_000b8510 + 0xb8392) + 0x20) != 0) {
          uVar8 = 0x1acc;
          iVar2 = DAT_000b8514 + 0xb83a6;
          iVar7 = DAT_000b8734 + 0xb83ae;
          goto LAB_000b8188;
        }
      }
      else {
        iVar2 = queueDeferredWork((DeferredWorkCmd)this,4);
        *(int *)(this + 0x1da8) = iVar2;
        if (iVar2 == 0) {
          iVar2 = *(int *)(DAT_000b8738 + 0xb83d6);
          if (*(int *)(iVar2 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000b8740 + 0xb83ee,0x1ad5,DAT_000b873c + 0xb83e6);
          }
          iVar7 = waitDeferredWork(this,(uint *)(this + 0x1da4));
          bVar17 = iVar7 != 0;
          if (bVar17) {
            iVar7 = *(int *)(iVar2 + 0x20);
          }
          if (bVar17 && iVar7 != 0) {
            mm_camera_debug_log(1,1,DAT_000b8748 + 0xb841a,0x1ad7,DAT_000b8744 + 0xb8412);
          }
          QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
        }
        else {
          QCameraParametersIntf::getStreamDimension(this_01,4,(cam_dimension_t *)&local_7ee8);
          property_get(DAT_000b84e4 + 0xb82a8,&local_7ee0,DAT_000b84e8 + 0xb82aa);
          iVar2 = atoi((char *)&local_7ee0);
          iVar7 = QCameraParametersIntf::getRecordingHintValue(this_01);
          if ((iVar7 == 0 || iVar2 == 0) || (iStack32484 * local_7ee8 < 0x21c000)) {
            iVar2 = QCameraParametersIntf::is4k2kVideoResolution(this_01);
            if ((iVar2 == 0) &&
               (iVar2 = configureOnlineRotation(this,*(QCameraChannel **)(this + 0x9c4)), iVar2 != 0
               )) {
              iVar7 = *(int *)(DAT_000b84ec + 0xb82ea);
              if (*(int *)(iVar7 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000b84f4 + 0xb8302,0x1aeb,DAT_000b84f0 + 0xb82fa);
              }
              iVar4 = waitDeferredWork(this,(uint *)(this + 0x1da4));
              bVar17 = iVar4 != 0;
              if (bVar17) {
                iVar4 = *(int *)(iVar7 + 0x20);
              }
              if (bVar17 && iVar4 != 0) {
                mm_camera_debug_log(1,1,DAT_000b84fc + 0xb832c,0x1aed,DAT_000b84f8 + 0xb8324);
              }
              iVar4 = waitDeferredWork(this,(uint *)(this + 0x1da8));
              bVar17 = iVar4 != 0;
              if (bVar17) {
                iVar4 = *(int *)(iVar7 + 0x20);
              }
              if (bVar17 && iVar4 != 0) {
                mm_camera_debug_log(1,1,DAT_000b8504 + 0xb835a,0x1af0,DAT_000b8500 + 0xb8352);
              }
              QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
              goto LAB_000b81d8;
            }
            iVar2 = QCameraParametersIntf::isTNRSnapshotEnabled(this_01);
            if ((iVar2 != 0) && (this_02[7] != 0)) {
              uVar14 = 0;
              do {
                pQVar5 = (QCameraStream *)
                         QCameraChannel::getStreamByIndex((QCameraChannel *)this_02,uVar14);
                if ((pQVar5 != (QCameraStream *)0x0) &&
                   (iVar2 = QCameraStream::getMyType(pQVar5), iVar2 == 3)) goto LAB_000b8462;
                uVar14 = uVar14 + 1;
              } while (uVar14 < (uint)this_02[7]);
              if (pQVar5 != (QCameraStream *)0x0) {
LAB_000b8462:
                iVar2 = *(int *)(DAT_000b874c + 0xb8468);
                if (*(int *)(iVar2 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000b8754 + 0xb8480,0x1b01,DAT_000b8750 + 0xb8478);
                }
                __aeabi_memclr8(&local_7ee0,0x7eb4);
                local_7ee0.tv_nsec = (uint)(local_7ee0 >> 0x20) & 0xffffff00 | 1;
                local_7ee0 = CONCAT44(local_7ee0.tv_nsec,0xeb);
                iVar4 = QCameraStream::setParameter(pQVar5,(cam_stream_parm_buffer_t *)&local_7ee0);
                iVar7 = iVar4;
                if (iVar4 != 0) {
                  iVar7 = *(int *)(iVar2 + 0x20);
                }
                if (iVar4 != 0 && iVar7 != 0) {
                  mm_camera_debug_log(1,1,DAT_000b875c + 0xb84c8,0x1b08,DAT_000b8758 + 0xb84c0);
                }
                goto LAB_000b85da;
              }
            }
            iVar2 = QCameraParametersIntf::is4k2kVideoResolution(this_01);
            if (((iVar2 == 0) &&
                (pQVar15 = *(QCameraChannel **)(this + 0x9bc), pQVar15 != (QCameraChannel *)0x0)) &&
               (uVar14 = *(uint *)(pQVar15 + 0x1c), uVar14 != 0)) {
              uVar16 = 0;
              pQVar5 = (QCameraStream *)0x0;
              do {
                this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(pQVar15,uVar16);
                pQVar10 = pQVar5;
                if (((this_00 != (QCameraStream *)0x0) &&
                    (iVar2 = QCameraStream::getMyType(this_00), pQVar10 = this_00, iVar2 != 7)) &&
                   ((iVar2 = QCameraStream::getMyType(this_00), pQVar10 = pQVar5, iVar2 == 1 &&
                    (iVar2 = QCameraParametersIntf::isHfrMode(this_01), iVar2 == 0)))) {
                  QCameraParametersIntf::isLinkPreviewForLiveShot(this_01);
                }
                uVar16 = uVar16 + 1;
                pQVar5 = pQVar10;
              } while (uVar14 != uVar16);
              if (((pQVar10 != (QCameraStream *)0x0) &&
                  (iVar2 = (**(code **)(*this_02 + 0x10))(this_02,pQVar15,pQVar10), iVar2 != 0)) &&
                 (*(int *)(*(int *)(DAT_000b8760 + 0xb8586) + 0x20) != 0)) {
                mm_camera_debug_log(1,1,DAT_000b8768 + 0xb85a0,0x1b37,DAT_000b8764 + 0xb8594,iVar2);
              }
            }
            iVar4 = (**(code **)(*this_02 + 0x14))(this_02);
          }
          else {
            local_7ed8 = 0;
            local_7ee0 = 0x100000000;
            iVar4 = QCameraVideoChannel::takePicture
                              ((QCameraVideoChannel *)this_02,(mm_camera_req_buf_t *)&local_7ee0);
          }
LAB_000b85da:
          if (iVar4 == 0) {
            iVar2 = 0;
            goto LAB_000b81d8;
          }
        }
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000b84d0 + 0xb8172) + 0x20) != 0) {
    uVar8 = 0x1a8a;
    iVar2 = DAT_000b84d4 + 0xb8182;
    iVar7 = DAT_000b84d8 + 0xb818a;
LAB_000b8188:
    mm_camera_debug_log(1,1,iVar7,uVar8,iVar2);
  }
  if (this[0x54c] != (QCamera2HardwareInterface)0x0) {
    QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x1a,(void *)0x0);
  }
  local_7eac = 0;
  local_7eb0 = 0;
  local_7ec0 = 0;
  uStack32440 = 0;
  local_7ed0 = 0;
  uStack32456 = 0;
  local_7ed8 = 0x80000000;
  local_7ee0 = 0x100000000;
  iVar2 = QCameraCbNotifier::notifyCallback
                    ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_7ee0);
LAB_000b81d8:
  if (*piVar11 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
LAB_000b83c6:
  bVar9 = bVar9 + 1;
  piVar6 = (int *)(uint)bVar9;
  if (piVar12 <= piVar6) goto LAB_000b825a;
  goto LAB_000b83b2;
}

