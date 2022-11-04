
/* qcamera::QCameraPostProcessor::processRawImageImpl(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::processRawImageImpl
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  QCameraChannel *this_00;
  QCameraStream *this_01;
  int iVar1;
  void **ppvVar2;
  QCamera2HardwareInterface *this_02;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  mm_camera_buf_def *pmVar7;
  int *piVar8;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  
  piVar8 = *(int **)(DAT_000d723c + 0xd6f20);
  local_28 = *piVar8;
  this_00 = (QCameraChannel *)
            QCamera2HardwareInterface::getChannelByHandle
                      (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
  if (this_00 == (QCameraChannel *)0x0) {
    if (0 < (char)this[0x140]) {
      iVar1 = 0;
      do {
        this_00 = *(QCameraChannel **)(this + iVar1 * 4 + 0x144);
        if ((this_00 != (QCameraChannel *)0x0) &&
           (*(int *)(this_00 + 0x10) == *(int *)(param_1 + 4))) goto LAB_000d6f36;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (char)this[0x140]);
    }
    if (*(int *)(*(int *)(DAT_000d7240 + 0xd6fae) + 0x20) == 0) goto LAB_000d702c;
    uVar4 = 0xbb3;
    iVar1 = DAT_000d7268 + 0xd6fc0;
    iVar3 = DAT_000d726c + 0xd6fcc;
  }
  else {
LAB_000d6f36:
    if (*(int *)(param_1 + 8) != 0) {
      uVar5 = 0;
      do {
        this_01 = (QCameraStream *)
                  QCameraChannel::getStreamByHandle(this_00,**(uint **)(param_1 + uVar5 * 4 + 0x10))
        ;
        if ((this_01 != (QCameraStream *)0x0) &&
           ((((iVar1 = QCameraStream::isTypeOf(this_01,3), iVar1 != 0 ||
              (iVar1 = QCameraStream::isTypeOf(this_01,8), iVar1 != 0)) ||
             (iVar1 = QCameraStream::isOrignalTypeOf(this_01,3), iVar1 != 0)) ||
            (iVar1 = QCameraStream::isOrignalTypeOf(this_01,8), iVar1 != 0)))) {
          pmVar7 = *(mm_camera_buf_def **)(param_1 + uVar5 * 4 + 0x10);
          if (pmVar7 != (mm_camera_buf_def *)0x0) {
            piVar6 = *(int **)(pmVar7 + 0x210);
            iVar1 = QCameraParametersIntf::isZSLMode
                              ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = (int)this_00 - *(int *)(this + 0x144);
              if (iVar1 != 0) {
                iVar1 = 1;
              }
            }
            if (piVar6 == (int *)0x0) {
LAB_000d704a:
              if (*(int *)(*(int *)(DAT_000d725c + 0xd7050) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000d7264 + 0xd7068,0xc1f,DAT_000d7260 + 0xd7060);
              }
              uVar4 = 0x80000000;
              goto LAB_000d7030;
            }
            if (iVar1 == 0) {
              ppvVar2 = (void **)(**(code **)(*(int *)(this + 8) + 0x4c8))
                                           (0xffffffff,*(undefined4 *)(pmVar7 + 0x20c),1,
                                            *(undefined4 *)(*(int *)(this + 8) + 0x4d0));
              if (ppvVar2 == (void **)0x0) {
                if (*(int *)(*(int *)(DAT_000d7250 + 0xd7198) + 0x20) != 0) {
                  mm_camera_debug_log(1,1,DAT_000d7258 + 0xd71b0,0xbda,DAT_000d7254 + 0xd71a8);
                }
                uVar4 = 0xfffffff4;
                goto LAB_000d7030;
              }
              __aeabi_memcpy8(*ppvVar2,*(void **)(pmVar7 + 0x208),*(size_t *)(pmVar7 + 0x20c));
            }
            else {
              ppvVar2 = (void **)(**(code **)(*piVar6 + 0x1c))
                                           (piVar6,*(undefined4 *)(pmVar7 + 0xc),0);
              if (ppvVar2 == (void **)0x0) goto LAB_000d704a;
            }
            if ((*(int *)(pmVar7 + 4) == 3) ||
               (iVar3 = QCameraStream::isOrignalTypeOf(this_01,3), iVar3 != 0)) {
              QCamera2HardwareInterface::dumpFrameToFile
                        (*(QCamera2HardwareInterface **)(this + 8),this_01,pmVar7,4,(char *)0x0);
              this_02 = *(QCamera2HardwareInterface **)(this + 8);
            }
            else {
              uVar4 = 0;
              QCamera2HardwareInterface::dumpFrameToFile
                        (*(QCamera2HardwareInterface **)(this + 8),this_01,pmVar7,0x10,(char *)0x0);
              this_02 = *(QCamera2HardwareInterface **)(this + 8);
              if (this_02[0x1c23] != (QCamera2HardwareInterface)0x0) {
                *(undefined4 *)(this + 0x2fc) = 0;
                *(undefined4 *)(this + 0x2f8) = 0;
                QCameraStream::getFrameDimension(this_01,(cam_dimension_t *)(this + 0x2f8));
                pthread_mutex_lock((pthread_mutex_t *)(*(int *)(this + 8) + 0x1c68));
                pthread_cond_signal((pthread_cond_t *)(*(int *)(this + 8) + 0x1c6c));
                pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(this + 8) + 0x1c68));
                (*(code *)ppvVar2[3])(ppvVar2);
                goto LAB_000d7030;
              }
            }
            if ((*(int *)(this_02 + 0x4c0) != 0) &&
               (iVar3 = QCamera2HardwareInterface::msgTypeEnabledWithLock(this_02,0x80), 0 < iVar3))
            {
              local_58 = 0;
              local_38 = 0;
              local_30 = 0;
              local_48 = 0;
              local_40 = 0;
              local_60 = 0x8000000001;
              local_50 = ZEXT48(ppvVar2);
              QCameraCbNotifier::notifyCallback
                        ((QCameraCbNotifier *)(*(int *)(this + 8) + 0x854),
                         (qcamera_callback_argm_t *)&local_60);
            }
            if ((*(int *)(*(QCamera2HardwareInterface **)(this + 8) + 0x4bc) != 0) &&
               (iVar3 = QCamera2HardwareInterface::msgTypeEnabledWithLock
                                  (*(QCamera2HardwareInterface **)(this + 8),0x200), 0 < iVar3)) {
              local_30 = 0;
              local_40 = 0;
              local_38 = 0;
              local_50 = 0;
              local_48 = 0;
              local_60 = 0x20000000000;
              local_58 = 0;
              QCameraCbNotifier::notifyCallback
                        ((QCameraCbNotifier *)(*(int *)(this + 8) + 0x854),
                         (qcamera_callback_argm_t *)&local_60);
            }
            if ((*(int *)(*(QCamera2HardwareInterface **)(this + 8) + 0x4c0) == 0) ||
               (iVar3 = QCamera2HardwareInterface::msgTypeEnabledWithLock
                                  (*(QCamera2HardwareInterface **)(this + 8),0x100), iVar3 < 1)) {
              (*(code *)ppvVar2[3])(ppvVar2);
              uVar4 = 0;
            }
            else {
              local_58 = 0;
              if (iVar1 == 0) {
                local_60 = ZEXT48(ppvVar2);
              }
              else {
                local_60 = ZEXT48(param_1) << 0x20;
              }
              uVar4 = sendDataNotify(this,0x100,(camera_memory *)ppvVar2,'\0',
                                     (camera_frame_metadata *)0x0,
                                     (qcamera_release_data_t *)&local_60,0);
            }
            goto LAB_000d7030;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 8));
    }
    if (*(int *)(*(int *)(DAT_000d7244 + 0xd7012) + 0x20) == 0) goto LAB_000d702c;
    uVar4 = 0xbc8;
    iVar1 = DAT_000d7248 + 0xd7022;
    iVar3 = DAT_000d724c + 0xd702a;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar1);
LAB_000d702c:
  uVar4 = 0xffffffea;
LAB_000d7030:
  if (*piVar8 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

