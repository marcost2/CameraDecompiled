
/* qcamera::QCameraPostProcessor::processData(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::processData
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *__ptr;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  void **ppvVar11;
  int *piVar12;
  int local_2c;
  
  piVar12 = *(int **)(DAT_000d4858 + 0xd4536);
  iVar2 = *piVar12;
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(*(int *)(DAT_000d485c + 0xd456e) + 0x20) != 0) {
      uVar8 = 1000;
      iVar10 = DAT_000d4860 + 0xd457e;
      iVar3 = DAT_000d4864 + 0xd4586;
LAB_000d45a2:
      mm_camera_debug_log(1,1,iVar3,uVar8,iVar10);
    }
  }
  else {
    if (param_1 != (mm_camera_super_buf_t *)0x0) {
      local_2c = 0;
      if (*(uint *)(param_1 + 8) != 0) {
        uVar7 = 0;
        do {
          iVar10 = *(int *)(param_1 + uVar7 * 4 + 0x10);
          if (*(int *)(iVar10 + 4) == 7) {
            local_2c = iVar10;
            if (iVar10 != 0) {
              QCamera2HardwareInterface::updateMetadata
                        (*(QCamera2HardwareInterface **)(this + 8),
                         *(metadata_buffer_t **)(iVar10 + 0x208));
              bVar1 = false;
              goto LAB_000d45c8;
            }
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 8));
      }
      iVar10 = 0;
      bVar1 = true;
LAB_000d45c8:
      iVar3 = QCamera2HardwareInterface::needReprocess(*(QCamera2HardwareInterface **)(this + 8));
      iVar4 = *(int *)(this + 8);
      if (iVar3 == 0) {
        iVar3 = QCameraParametersIntf::isNV16PictureFormat((QCameraParametersIntf *)(iVar4 + 0x4ac))
        ;
        if ((iVar3 == 0) &&
           (iVar3 = QCameraParametersIntf::isNV21PictureFormat
                              ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac)), iVar3 == 0))
        {
          iVar3 = QCameraStateMachine::isNonZSLCaptureRunning
                            ((QCameraStateMachine *)(*(int *)(this + 8) + 0x4dc));
          if ((iVar3 == 0) &&
             ((*(QCamera2HardwareInterface **)(this + 8))[0xa9e] == (QCamera2HardwareInterface)0x0))
          {
            QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)(this + 8));
          }
          iVar3 = *(int *)(DAT_000d4950 + 0xd47d4);
          if (*(int *)(iVar3 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d4958 + 0xd47f0,0x460,DAT_000d4954 + 0xd47e8);
          }
          __ptr = (undefined8 *)malloc(0x2c);
          if (__ptr != (undefined8 *)0x0) {
            *(undefined8 *)((int)__ptr + 0x1c) = 0;
            *(undefined8 *)((int)__ptr + 0x24) = 0;
            __ptr[2] = 0;
            __ptr[3] = 0;
            *__ptr = 0;
            __ptr[1] = 0;
            *(mm_camera_super_buf_t **)(__ptr + 1) = param_1;
            if (!bVar1) {
              *(undefined4 *)(__ptr + 2) = *(undefined4 *)(iVar10 + 0x208);
            }
            iVar10 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x1b4),__ptr);
            if (iVar10 != 0) goto LAB_000d4834;
            if (*(int *)(iVar3 + 0x24) != 0) {
              mm_camera_debug_log(1,2,DAT_000d4968 + 0xd48f8,0x472,DAT_000d4964 + 0xd48f0);
            }
            releaseJpegJobData(this,(qcamera_jpeg_data_t *)__ptr);
            goto LAB_000d47ae;
          }
          if (*(int *)(iVar3 + 0x20) == 0) goto LAB_000d48d8;
          uVar8 = 0x464;
          iVar10 = DAT_000d495c + 0xd48d0;
          iVar3 = DAT_000d4960 + 0xd48d8;
          goto LAB_000d476c;
        }
        iVar10 = QCameraParametersIntf::isYUVFrameInfoNeeded
                           ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if (iVar10 != 0) {
          setYUVFrameInfo(this,param_1);
        }
        processRawData(this,param_1);
      }
      else {
        if (*(char *)(iVar4 + 0xa9e) == '\0') {
          iVar10 = QCameraStateMachine::isNonZSLCaptureRunning
                             ((QCameraStateMachine *)(iVar4 + 0x4dc));
          if (iVar10 == 0) goto LAB_000d4630;
          if (*(char *)(*(int *)(this + 8) + 0xa9e) != '\0') goto LAB_000d45da;
        }
        else {
LAB_000d45da:
          iVar10 = QCamera2HardwareInterface::isCaptureShutterEnabled();
          if (iVar10 != 0) {
LAB_000d4630:
            QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)(this + 8));
          }
        }
        if (1 < **(uint **)(DAT_000d491c + 0xd463c)) {
          if ((**(byte **)(DAT_000d4920 + 0xd4648) & 1) == 0) {
            atrace_setup();
          }
          if ((int)((uint)*(byte *)(*(int *)(DAT_000d4924 + 0xd4658) + 1) << 0x1d) < 0) {
            atrace_int_body(DAT_000d4928 + 0xd4914,1);
          }
        }
        iVar10 = *(int *)(DAT_000d492c + 0xd4666);
        if (*(int *)(iVar10 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d4934 + 0xd4682,0x412,DAT_000d4930 + 0xd467a);
        }
        __ptr = (undefined8 *)malloc(0x20);
        if (__ptr == (undefined8 *)0x0) {
          if (*(int *)(iVar10 + 0x20) == 0) {
LAB_000d48d8:
            uVar8 = 0xfffffff4;
            goto LAB_000d4844;
          }
          uVar8 = 0x418;
          iVar10 = DAT_000d4938 + 0xd4766;
          iVar3 = DAT_000d493c + 0xd476e;
LAB_000d476c:
          mm_camera_debug_log(1,1,iVar3,uVar8,iVar10);
          uVar8 = 0xfffffff4;
          goto LAB_000d4844;
        }
        __ptr[2] = 0;
        __ptr[3] = 0;
        *__ptr = 0;
        __ptr[1] = 0;
        *(mm_camera_super_buf_t **)(__ptr + 1) = param_1;
        *(undefined2 *)((int)__ptr + 4) = 0;
        *(mm_camera_super_buf_t **)((int)__ptr + 0x14) = param_1;
        if ((*(int *)(param_1 + 8) != 0) &&
           (iVar3 = QCamera2HardwareInterface::isRegularCapture
                              (*(QCamera2HardwareInterface **)(this + 8)), iVar3 != 0)) {
          uVar9 = *(uint *)(param_1 + 8);
          uVar7 = (uint)((ulonglong)uVar9 * 0x218);
          iVar3 = (int)((ulonglong)uVar9 * 0x218 >> 0x20);
          if (iVar3 != 0) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            uVar7 = 0xffffffff;
          }
          pvVar5 = operator_new__(uVar7);
          if (uVar9 != 0) {
            __dest = pvVar5;
            ppvVar11 = (void **)(param_1 + 0x10);
            do {
              __aeabi_memcpy8(__dest,*ppvVar11,0x218);
              *ppvVar11 = __dest;
              __dest = (void *)((int)__dest + 0x218);
              uVar9 = uVar9 - 1;
              ppvVar11 = ppvVar11 + 1;
            } while (uVar9 != 0);
          }
          *(undefined *)((int)__ptr + 0xc) = 1;
          *(void **)(__ptr + 2) = pvVar5;
        }
        if (*(int *)(this + 4) != 0) {
          iVar3 = getOfflinePPInputBuffer(this,param_1);
          *(int *)((int)__ptr + 0x1c) = iVar3;
          if (iVar3 != 0) {
            *(undefined *)(__ptr + 3) = 1;
          }
        }
        iVar3 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x16c),__ptr);
        if (iVar3 == 0) {
          if (*(int *)(iVar10 + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000d4944 + 0xd4790,0x441,DAT_000d4940 + 0xd4788);
          }
          piVar6 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                    (*(QCamera2HardwareInterface **)(this + 8),
                                     *(uint *)(param_1 + 4));
          if (piVar6 == (int *)0x0) {
            if (0 < (char)this[0x140]) {
              iVar3 = 0;
              do {
                piVar6 = *(int **)(this + iVar3 * 4 + 0x144);
                if ((piVar6 != (int *)0x0) && (piVar6[4] == *(int *)(param_1 + 4)))
                goto LAB_000d479e;
                iVar3 = iVar3 + 1;
              } while (iVar3 < (char)this[0x140]);
            }
            if (*(int *)(iVar10 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d494c + 0xd48ba,0x79f,DAT_000d4948 + 0xd48ae,
                                  *(undefined4 *)(param_1 + 4));
            }
          }
          else {
LAB_000d479e:
            (**(code **)(*piVar6 + 0x1c))(piVar6,param_1);
          }
          free(param_1);
LAB_000d47ae:
          free(__ptr);
          uVar8 = 0;
          goto LAB_000d4844;
        }
        iVar3 = QCameraParametersIntf::isAdvCamFeaturesEnabled
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        iVar10 = iVar3;
        if (iVar3 != 0) {
          iVar10 = local_2c;
        }
        if (iVar3 != 0 && iVar10 != 0) {
          android::VectorImpl::add(this + 0x2d8);
        }
      }
LAB_000d4834:
      uVar8 = 0;
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),3,'\0','\0');
      goto LAB_000d4844;
    }
    if (*(int *)(*(int *)(DAT_000d4868 + 0xd458c) + 0x20) != 0) {
      uVar8 = 0x3ed;
      iVar10 = DAT_000d486c + 0xd459c;
      iVar3 = DAT_000d4870 + 0xd45a4;
      goto LAB_000d45a2;
    }
  }
  uVar8 = 0x80000000;
LAB_000d4844:
  if (*piVar12 == iVar2) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

