
/* qcamera::QCameraPostProcessor::processJpegEvt(qcamera::qcamera_jpeg_evt_payload_t*) */

int __thiscall
qcamera::QCameraPostProcessor::processJpegEvt
          (QCameraPostProcessor *this,qcamera_jpeg_evt_payload_t *param_1)

{
  undefined8 *__ptr;
  int iVar1;
  QCamera2HardwareInterface *this_00;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void **ppvVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  void **local_30;
  undefined4 uStack44;
  undefined4 local_28;
  undefined4 uStack36;
  int local_20;
  
  piVar11 = *(int **)(DAT_000d500c + 0xd4daa);
  local_20 = *piVar11;
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(*(int *)(DAT_000d5030 + 0xd4ebc) + 0x20) == 0) {
      iVar1 = -0x80000000;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000d5038 + 0xd4ed4,0x4b4,DAT_000d5034 + 0xd4ecc);
      iVar1 = -0x80000000;
    }
    goto LAB_000d517e;
  }
  QCamera2HardwareInterface::kpi_jpeg_stream_cb_routine(*(QCamera2HardwareInterface **)(this + 8));
  if ((this[0x2c8] == (QCameraPostProcessor)0x0) || (*(char *)(*(int *)(this + 8) + 0xa9e) == '\0'))
  {
    iVar12 = *(int *)(DAT_000d5010 + 0xd4e12);
    if (*(int *)(iVar12 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d5018 + 0xd4e32,0x4d3,DAT_000d5014 + 0xd4e26,0x4b);
    }
    QCameraQueue::flushNodes
              ((QCameraQueue *)(this + 0x1d8),*(FuncDef61 **)(DAT_000d501c + 0xd4e3c),param_1);
    if (0 < *(int *)(this + 0x17c)) {
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),3,'\0','\0');
    }
    if (*(int *)(iVar12 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d5024 + 0xd4e78,0x4e9,DAT_000d5020 + 0xd4e6c,
                          *(undefined4 *)param_1);
    }
    this_00 = *(QCamera2HardwareInterface **)(this + 8);
    if ((this_00[0x1c22] == (QCamera2HardwareInterface)0x0) &&
       ((*(int *)(this_00 + 0x4c0) == 0 ||
        (iVar1 = QCamera2HardwareInterface::msgTypeEnabledWithLock(this_00,0x100), iVar1 == 0)))) {
      if (*(int *)(iVar12 + 0x24) == 0) {
        iVar1 = 0;
      }
      else {
        mm_camera_debug_log(1,2,DAT_000d5290 + 0xd4f26,0x4f3,DAT_000d528c + 0xd4f1e);
        iVar1 = 0;
      }
    }
    else if (*(int *)(param_1 + 4) == 1) {
      iVar1 = -0x7ffffffe;
      if (*(int *)(iVar12 + 0x20) == 0) {
LAB_000d4f84:
        QCamera2HardwareInterface::sendEvtNotify
                  (*(QCamera2HardwareInterface **)(this + 8),1,-0x80000000,0);
      }
      else {
        mm_camera_debug_log(1,1,DAT_000d502c + 0xd4eb0,0x4fb,DAT_000d5028 + 0xd4ea4,1);
LAB_000d4eb2:
        ppvVar9 = (void **)0x0;
        iVar2 = iVar1;
LAB_000d50b2:
        iVar1 = iVar2;
        if (*(int *)(iVar12 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d52b8 + 0xd50cc,0x55c,DAT_000d52b4 + 0xd50c4);
        }
        QCamera2HardwareInterface::sendEvtNotify
                  (*(QCamera2HardwareInterface **)(this + 8),1,-0x80000000,0);
        if (ppvVar9 != (void **)0x0) {
          (*(code *)ppvVar9[3])(ppvVar9);
        }
      }
    }
    else {
      pvVar3 = *(void **)(param_1 + 8);
      if (this[0x2ca] == (QCameraPostProcessor)0x0) {
        ppvVar9 = (void **)0x0;
        pvVar10 = (void *)0x0;
        pvVar4 = pvVar3;
      }
      else {
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          ppvVar9 = *(void ***)((int)pvVar3 + 4);
          if (ppvVar9 != (void **)0x0) {
            pvVar4 = *ppvVar9;
            pvVar10 = pvVar3;
            goto LAB_000d4fb0;
          }
        }
        ppvVar9 = (void **)0x0;
        pvVar4 = (void *)0x0;
        pvVar10 = pvVar3;
      }
LAB_000d4fb0:
      QCamera2HardwareInterface::dumpJpegToFile
                (*(QCamera2HardwareInterface **)(this + 8),pvVar4,*(uint *)(param_1 + 0x10),
                 *(uint *)param_1);
      if (*(int *)(iVar12 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d5298 + 0xd4fd8,0x50e,DAT_000d5294 + 0xd4fcc,
                            *(undefined4 *)(param_1 + 0x10));
      }
      iVar1 = *(int *)(this + 8);
      if (*(char *)(iVar1 + 0x1c22) != '\0') {
        pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0x1c68));
        pthread_cond_signal((pthread_cond_t *)(*(int *)(this + 8) + 0x1c6c));
        pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(this + 8) + 0x1c68));
        iVar1 = 0;
        goto LAB_000d5174;
      }
      if (this[0x2ca] == (QCameraPostProcessor)0x0) {
        ppvVar9 = (void **)(**(code **)(iVar1 + 0x4c8))
                                     (0xffffffff,*(undefined4 *)(param_1 + 0x10),1,
                                      *(undefined4 *)(iVar1 + 0x4d0));
        if (ppvVar9 == (void **)0x0) {
          if (*(int *)(iVar12 + 0x20) == 0) {
            iVar1 = -0xc;
            goto LAB_000d4f84;
          }
          mm_camera_debug_log(1,1,DAT_000d52a0 + 0xd5256,0x51d,DAT_000d529c + 0xd524e);
          iVar1 = -0xc;
          goto LAB_000d4eb2;
        }
        __aeabi_memcpy8(*ppvVar9,*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x10));
        uVar8 = 0xc;
        do {
          uVar7 = uVar8;
          iVar1 = *(int *)((int)pvVar10 + 0x10) + uVar7;
          if (((((((*(char *)(iVar1 + -0xc) == 'e') && (*(char *)(iVar1 + -0xb) == '5')) &&
                 (*(char *)(iVar1 + -10) == '\0')) &&
                ((*(char *)(iVar1 + -9) == '\t' && (*(char *)(iVar1 + -8) == '\0')))) &&
               ((*(char *)(iVar1 + -7) == '\0' &&
                ((*(char *)(iVar1 + -6) == '\0' && (*(char *)(iVar1 + -5) == '\x01')))))) &&
              (*(char *)(iVar1 + -4) == '\x12')) &&
             (((*(char *)(iVar1 + -3) == '4' && (*(char *)(iVar1 + -2) == 'V')) &&
              (*(char *)(iVar1 + -1) == 'x')))) {
            uVar6 = *(uint *)(param_1 + 0x10);
            break;
          }
          uVar6 = *(uint *)(param_1 + 0x10);
          uVar8 = uVar7 + 1;
        } while (uVar7 < uVar6);
        if (uVar7 < uVar6) {
          uVar8 = *(uint *)(*(int *)(this + 8) + 8000);
          *(uint *)(*(int *)(this + 8) + 8000) =
               uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
               uVar8 >> 0x18;
          *(undefined4 *)(uVar7 + *(int *)((int)pvVar10 + 0x10) + -4) =
               *(undefined4 *)(*(int *)(this + 8) + 8000);
        }
      }
      if (*(int *)(iVar12 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d52a8 + 0xd5060,0x546,DAT_000d52a4 + 0xd5058);
      }
      iVar1 = 0;
      local_28 = 0;
      uStack36 = 0;
      uStack44 = 0;
      local_30 = ppvVar9;
      if (*(int *)(iVar12 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000d52b0 + 0xd5086,0x54a,DAT_000d52ac + 0xd507e);
      }
      iVar2 = sendDataNotify(this,0x100,(camera_memory *)ppvVar9,'\0',(camera_frame_metadata *)0x0,
                             (qcamera_release_data_t *)&local_30,0x4b);
      *(int *)(*(int *)(this + 8) + 0x1dbc) = *(int *)(*(int *)(this + 8) + 0x1dbc) + 1;
      if (iVar2 != 0) goto LAB_000d50b2;
    }
    iVar2 = QCameraParametersIntf::isUbiRefocus
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(*(int *)(this + 8) + 0x1dbc),
       iVar2 = QCameraParametersIntf::getRefocusOutputCount
                         ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac)), iVar5 + 1 == iVar2
       )) {
      *(int *)(*(int *)(this + 8) + 0x1dbc) = *(int *)(*(int *)(this + 8) + 0x1dbc) + 1;
      ppvVar9 = *(void ***)(this + 0x164);
      *(undefined4 *)(this + 0x164) = 0;
      local_30 = ppvVar9;
      if (*(int *)(iVar12 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d52c0 + 0xd5136,0x570,DAT_000d52bc + 0xd512e);
      }
      iVar1 = sendDataNotify(this,0x100,(camera_memory *)ppvVar9,'\0',(camera_frame_metadata *)0x0,
                             (qcamera_release_data_t *)&local_30,0x4b);
      if ((iVar1 != 0) &&
         (QCamera2HardwareInterface::sendEvtNotify
                    (*(QCamera2HardwareInterface **)(this + 8),1,-0x80000000,0),
         ppvVar9 != (void **)0x0)) {
        (*(code *)ppvVar9[3])(ppvVar9);
      }
      *(undefined4 *)(this + 0x164) = 0;
    }
  }
  else {
    __ptr = (undefined8 *)malloc(0x14);
    if (__ptr == (undefined8 *)0x0) {
      if (*(int *)(*(int *)(DAT_000d5274 + 0xd4f38) + 0x20) == 0) {
        iVar1 = -0xc;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000d527c + 0xd4f50,0x4c5,DAT_000d5278 + 0xd4f48);
        iVar1 = -0xc;
      }
      goto LAB_000d517e;
    }
    uVar13 = *(undefined8 *)(param_1 + 8);
    *__ptr = *(undefined8 *)param_1;
    __ptr[1] = uVar13;
    *(undefined4 *)(__ptr + 2) = *(undefined4 *)(param_1 + 0x10);
    iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x220),__ptr);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000d5280 + 0xd4f5e) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000d5288 + 0xd4f76,0x4cc,DAT_000d5284 + 0xd4f6e);
      }
      free(__ptr);
      iVar1 = 0;
      goto LAB_000d517e;
    }
    iVar1 = 0;
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x284),3,'\0','\0');
  }
LAB_000d5174:
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),3,'\0','\0');
LAB_000d517e:
  if (*piVar11 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

