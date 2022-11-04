
/* qcamera::QCameraPostProcessor::processPPData(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::processPPData
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  void *__ptr;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 *__ptr_00;
  QCameraChannel *this_00;
  QCameraStream *this_01;
  int iVar7;
  uint uVar8;
  int *piVar9;
  mm_camera_buf_def *pmVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  char acStack132 [92];
  int local_28;
  
  piVar9 = *(int **)(DAT_000d5674 + 0xd52e4);
  local_28 = *piVar9;
  iVar13 = *(int *)(DAT_000d5678 + 0xd52ee);
  if (*(int *)(iVar13 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d5680 + 0xd530a,0x5a1,DAT_000d567c + 0xd5302);
  }
  iVar3 = QCameraParametersIntf::generateThumbFromMain
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(iVar13 + 0x20) == 0) {
      uVar6 = 0x80000000;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000d5690 + 0xd544e,0x5a4,DAT_000d568c + 0xd5446);
      uVar6 = 0x80000000;
    }
  }
  else {
    __ptr = (void *)QCameraQueue::dequeue((QCameraQueue *)(this + 400),true);
    if (__ptr == (void *)0x0) {
      if (*(int *)(iVar13 + 0x20) == 0) {
LAB_000d57ea:
        uVar6 = 0xffffffea;
      }
      else {
        uVar6 = 0x5aa;
        iVar13 = DAT_000d5694 + 0xd546c;
        iVar3 = DAT_000d5698 + 0xd5474;
LAB_000d54f8:
        mm_camera_debug_log(1,1,iVar3,uVar6,iVar13);
        uVar6 = 0xffffffea;
      }
    }
    else {
      if (iVar3 == 0) {
        if ((*(int *)((int)__ptr + 8) == 0) || (*(int *)((int)__ptr + 0x14) == 0)) {
          if (*(int *)(iVar13 + 0x20) == 0) goto LAB_000d57ea;
          uVar6 = 0x5e3;
          iVar13 = DAT_000d569c + 0xd54f2;
          iVar3 = DAT_000d587c + 0xd54fa;
          goto LAB_000d54f8;
        }
        iVar3 = QCameraParametersIntf::isNV16PictureFormat
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if ((iVar3 != 0) ||
           (iVar3 = QCameraParametersIntf::isNV21PictureFormat
                              ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac)), iVar3 != 0))
        {
          releaseOngoingPPData(__ptr,this);
          free(__ptr);
          iVar13 = QCameraParametersIntf::isYUVFrameInfoNeeded
                             ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
          if (iVar13 != 0) {
            setYUVFrameInfo(this,param_1);
          }
          if (*piVar9 == local_28) {
            uVar6 = processRawData(this,param_1);
            return uVar6;
          }
          goto LAB_000d5876;
        }
      }
      cVar1 = *(char *)((int)__ptr + 4);
      iVar3 = (int)cVar1;
      if ((((*(char *)(*(int *)(this + 8) + 0xa9e) != '\0') &&
           (iVar4 = QCameraParametersIntf::getQuadraCfa
                              ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac)),
           iVar3 == 2 || iVar4 == 0)) &&
          (iVar4 = QCamera2HardwareInterface::isCaptureShutterEnabled(), iVar4 == 0)) &&
         ((*(QCamera2HardwareInterface **)(this + 8))[0x1dfd] == (QCamera2HardwareInterface)0x0)) {
        QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)(this + 8));
      }
      *(undefined *)(*(int *)(this + 8) + 0x1dfd) = 0;
      iVar4 = (int)*(char *)((int)__ptr + 5);
      if (1 < iVar3) {
        iVar11 = *(int *)((int)__ptr + 8);
        if (iVar11 != 0) {
          piVar5 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                    (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(iVar11 + 4)
                                    );
          if (piVar5 == (int *)0x0) {
            if (0 < (char)this[0x140]) {
              iVar7 = 0;
              do {
                piVar5 = *(int **)(this + iVar7 * 4 + 0x144);
                if ((piVar5 != (int *)0x0) && (piVar5[4] == *(int *)(iVar11 + 4)))
                goto LAB_000d53a0;
                iVar7 = iVar7 + 1;
              } while (iVar7 < (char)this[0x140]);
            }
            if (*(int *)(iVar13 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d5884 + 0xd5670,0x79f,DAT_000d5880 + 0xd5664,
                                  *(undefined4 *)(iVar11 + 4));
            }
          }
          else {
LAB_000d53a0:
            (**(code **)(*piVar5 + 0x1c))(piVar5,iVar11);
          }
        }
        free(*(void **)((int)__ptr + 8));
        *(undefined4 *)((int)__ptr + 8) = 0;
      }
      if (*(int *)(iVar13 + 0x2c) != 0) {
        uVar6 = QCameraParametersIntf::getReprocCount
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        mm_camera_debug_log(1,4,DAT_000d5688 + 0xd53e4,0x635,DAT_000d5684 + 0xd53d4,iVar3,iVar4,
                            uVar6);
      }
      iVar11 = QCameraParametersIntf::getReprocCount
                         ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
      if (iVar3 < iVar11) {
        *(mm_camera_super_buf_t **)((int)__ptr + 8) = param_1;
        if ((*(char *)(*(int *)(this + iVar4 * 4 + 0x144) + 0x60) == cVar1) &&
           (*(int *)(this + iVar4 * 4 + 0x148) != 0)) {
          *(char *)((int)__ptr + 5) = *(char *)((int)__ptr + 5) + '\x01';
        }
        iVar3 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x16c),__ptr);
        if (iVar3 == 0) {
          if (*(int *)(iVar13 + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000d588c + 0xd55b0,0x647,DAT_000d5888 + 0xd55a8);
          }
          releaseOngoingPPData(__ptr,this);
          free(__ptr);
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        __ptr_00 = (undefined8 *)malloc(0x2c);
        if (__ptr_00 == (undefined8 *)0x0) {
          if (*(int *)(iVar13 + 0x20) == 0) {
            uVar6 = 0xfffffff4;
          }
          else {
            mm_camera_debug_log(1,1,DAT_000d5894 + 0xd55e2,0x653,DAT_000d5890 + 0xd55da);
            uVar6 = 0xfffffff4;
          }
          goto LAB_000d57ee;
        }
        *(undefined8 *)((int)__ptr_00 + 0x1c) = 0;
        *(undefined8 *)((int)__ptr_00 + 0x24) = 0;
        __ptr_00[2] = 0;
        __ptr_00[3] = 0;
        *__ptr_00 = 0;
        __ptr_00[1] = 0;
        *(mm_camera_super_buf_t **)(__ptr_00 + 1) = param_1;
        *(undefined4 *)((int)__ptr_00 + 0xc) = *(undefined4 *)((int)__ptr + 0x14);
        *(undefined4 *)((int)__ptr_00 + 0x1c) = *(undefined4 *)((int)__ptr + 0x10);
        *(undefined *)(__ptr_00 + 3) = *(undefined *)((int)__ptr + 0xc);
        *(undefined4 *)(__ptr_00 + 5) = *(undefined4 *)((int)__ptr + 0x1c);
        *(undefined *)((int)__ptr_00 + 0x24) = *(undefined *)((int)__ptr + 0x18);
        uVar14 = QCameraParametersIntf::isAdvCamFeaturesEnabled
                           ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        uVar12 = (uint)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 == 0) {
          iVar3 = *(int *)((int)__ptr + 0x14);
          if (iVar3 != 0) {
            uVar12 = *(uint *)(iVar3 + 8);
          }
          if (iVar3 != 0 && uVar12 != 0) {
            uVar8 = 0;
            do {
              iVar4 = *(int *)(iVar3 + 0x10 + uVar8 * 4);
              if (*(int *)(iVar4 + 4) == 7) {
                if (iVar4 != 0) goto LAB_000d56b4;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar12);
          }
          if (*(uint *)(param_1 + 8) != 0) {
            uVar12 = 0;
            do {
              iVar4 = *(int *)(param_1 + uVar12 * 4 + 0x10);
              if (*(int *)(iVar4 + 4) == 7) goto LAB_000d56b2;
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_1 + 8));
          }
        }
        else {
          iVar3 = QCameraParametersIntf::getExifBufIndex
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),
                             *(uint *)(this + 0x2ec));
          if (*(uint *)(this + 0x2e0) < iVar3 + 1U) {
            if (*(int *)(iVar13 + 0x24) != 0) {
              mm_camera_debug_log(1,2,DAT_000d589c + 0xd5590,0x667,DAT_000d5898 + 0xd5582,
                                  *(uint *)(this + 0x2e0),iVar3);
            }
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(this + 0x2dc) + iVar3 * 4);
          }
          *(int *)(this + 0x2ec) = *(int *)(this + 0x2ec) + 1;
LAB_000d56b2:
          if (iVar4 != 0) {
LAB_000d56b4:
            *(undefined4 *)(__ptr_00 + 2) = *(undefined4 *)(iVar4 + 0x208);
          }
        }
        iVar3 = QCameraParametersIntf::getQuadraCfa
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if (iVar3 != 0) {
          this_00 = (QCameraChannel *)
                    QCamera2HardwareInterface::getChannelByHandle
                              (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
          if (this_00 == (QCameraChannel *)0x0) {
            if (0 < (char)this[0x140]) {
              iVar3 = 0;
              do {
                this_00 = *(QCameraChannel **)(this + iVar3 * 4 + 0x144);
                if ((this_00 != (QCameraChannel *)0x0) &&
                   (*(int *)(this_00 + 0x10) == *(int *)(param_1 + 4))) goto LAB_000d56de;
                iVar3 = iVar3 + 1;
              } while (iVar3 < (char)this[0x140]);
            }
            if (*(int *)(iVar13 + 0x20) == 0) goto LAB_000d57ea;
            uVar6 = 0x693;
            iVar13 = DAT_000d58bc + 0xd57de;
            iVar3 = DAT_000d58c0 + 0xd57ea;
            goto LAB_000d54f8;
          }
LAB_000d56de:
          if (*(int *)(param_1 + 8) != 0) {
            uVar12 = 0;
            do {
              this_01 = (QCameraStream *)
                        QCameraChannel::getStreamByHandle
                                  (this_00,**(uint **)(param_1 + uVar12 * 4 + 0x10));
              if ((this_01 != (QCameraStream *)0x0) &&
                 (iVar3 = QCameraStream::isOrignalTypeOf(this_01,7), iVar3 != 0)) {
                pmVar10 = *(mm_camera_buf_def **)(param_1 + uVar12 * 4 + 0x10);
                if (pmVar10 != (mm_camera_buf_def *)0x0) {
                  *(undefined4 *)(__ptr_00 + 2) = *(undefined4 *)(pmVar10 + 0x208);
                  property_get(DAT_000d58a0 + 0xd583a,acStack132,DAT_000d58a4 + 0xd583c);
                  iVar3 = atoi(acStack132);
                  if ((iVar3 != 0) &&
                     ("Failed to Q new buffer to stream"[*(int *)(__ptr_00 + 2) + 8] != '\0')) {
                    QCamera2HardwareInterface::dumpMetadataToFile
                              (*(QCamera2HardwareInterface **)(this + 8),this_01,pmVar10,
                               (char *)(DAT_000d58a8 + 0xd586a));
                  }
                }
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_1 + 8));
          }
        }
        iVar3 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x1b4),__ptr_00);
        if (iVar3 == 0) {
          if (*(int *)(iVar13 + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000d58b0 + 0xd5742,0x6b1,DAT_000d58ac + 0xd573a);
          }
          releaseJpegJobData(this,(qcamera_jpeg_data_t *)__ptr_00);
          free(__ptr_00);
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        pthread_mutex_lock((pthread_mutex_t *)(this + 0x2f0));
        free(__ptr);
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2f0));
      }
      if (*(int *)(iVar13 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000d58b8 + 0xd5784,0x6c0,DAT_000d58b4 + 0xd577c);
      }
      if (bVar2) {
        uVar6 = 0;
        QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),3,'\0','\0');
      }
      else {
        uVar6 = 0;
      }
    }
  }
LAB_000d57ee:
  if (*piVar9 == local_28) {
    return uVar6;
  }
LAB_000d5876:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

