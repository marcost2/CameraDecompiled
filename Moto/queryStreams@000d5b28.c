
/* qcamera::QCameraPostProcessor::queryStreams(qcamera::QCameraStream**, qcamera::QCameraStream**,
   qcamera::QCameraStream**, mm_camera_buf_def**, mm_camera_buf_def**, mm_camera_super_buf_t*,
   mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::queryStreams
          (QCameraPostProcessor *this,QCameraStream **param_1,QCameraStream **param_2,
          QCameraStream **param_3,mm_camera_buf_def **param_4,mm_camera_buf_def **param_5,
          mm_camera_super_buf_t *param_6,mm_camera_super_buf_t *param_7)

{
  QCameraChannel *pQVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  QCameraStream *pQVar5;
  uint uVar6;
  
  if (param_6 == (mm_camera_super_buf_t *)0x0) {
    return 0xffffffed;
  }
  pQVar1 = (QCameraChannel *)
           QCamera2HardwareInterface::getChannelByHandle
                     (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_6 + 4));
  if (pQVar1 == (QCameraChannel *)0x0) {
    if (0 < (char)this[0x140]) {
      iVar2 = 0;
      do {
        pQVar1 = *(QCameraChannel **)(this + iVar2 * 4 + 0x144);
        if ((pQVar1 != (QCameraChannel *)0x0) && (*(int *)(pQVar1 + 0x10) == *(int *)(param_6 + 4)))
        goto LAB_000d5b46;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (char)this[0x140]);
    }
    if (*(int *)(*(int *)(DAT_000d5d30 + 0xd5bba) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000d5d38 + 0xd5bd6,0x8af,DAT_000d5d34 + 0xd5bca,
                          *(undefined4 *)(param_6 + 4));
    }
    return 0xffffffea;
  }
LAB_000d5b46:
  iVar2 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  if (iVar2 != 0) {
    iVar2 = QCameraParametersIntf::getFlipMode
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),3);
    iVar3 = QCameraParametersIntf::getFlipMode
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),1);
    if (iVar2 != iVar3) {
      uVar4 = 0;
      goto LAB_000d5be0;
    }
  }
  uVar4 = QCameraParametersIntf::generateThumbFromMain
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  uVar4 = uVar4 ^ 1;
LAB_000d5be0:
  *param_3 = (QCameraStream *)0x0;
  *param_2 = (QCameraStream *)0x0;
  *param_1 = (QCameraStream *)0x0;
  *param_5 = (mm_camera_buf_def *)0x0;
  *param_4 = (mm_camera_buf_def *)0x0;
  if (*(int *)(param_6 + 8) != 0) {
    uVar6 = 0;
    do {
      pQVar5 = (QCameraStream *)
               QCameraChannel::getStreamByHandle(pQVar1,**(uint **)(param_6 + uVar6 * 4 + 0x10));
      if (pQVar5 != (QCameraStream *)0x0) {
        iVar2 = QCameraStream::isTypeOf(pQVar5,3);
        if ((((iVar2 == 0) && (iVar2 = QCameraStream::isOrignalTypeOf(pQVar5,3), iVar2 == 0)) &&
            (iVar2 = QCameraStream::isTypeOf(pQVar5,4), iVar2 == 0)) &&
           ((iVar2 = QCameraStream::isOrignalTypeOf(pQVar5,4), iVar2 == 0 &&
            (iVar2 = QCameraStream::isOrignalTypeOf(pQVar5,8), iVar2 == 0)))) {
          if ((uVar4 != 0) &&
             (((iVar2 = QCameraStream::isTypeOf(pQVar5,1), iVar2 != 0 ||
               (iVar2 = QCameraStream::isTypeOf(pQVar5,2), iVar2 != 0)) ||
              ((iVar2 = QCameraStream::isOrignalTypeOf(pQVar5,1), iVar2 != 0 ||
               (iVar2 = QCameraStream::isOrignalTypeOf(pQVar5,2), iVar2 != 0)))))) {
            *param_2 = pQVar5;
            *param_5 = *(mm_camera_buf_def **)(param_6 + uVar6 * 4 + 0x10);
          }
        }
        else {
          *param_1 = pQVar5;
          *param_4 = *(mm_camera_buf_def **)(param_6 + uVar6 * 4 + 0x10);
        }
        iVar2 = QCameraStream::isTypeOf(pQVar5,9);
        if (iVar2 != 0) {
          *param_3 = pQVar5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_6 + 8));
  }
  if (uVar4 != 0) {
    if ((param_7 == (mm_camera_super_buf_t *)0x0) || (*param_5 != (mm_camera_buf_def *)0x0)) {
      return 0;
    }
    pQVar1 = (QCameraChannel *)
             QCamera2HardwareInterface::getChannelByHandle
                       (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_7 + 4));
    if ((pQVar1 != (QCameraChannel *)0x0) && (*(int *)(param_7 + 8) != 0)) {
      uVar4 = 0;
      do {
        pQVar5 = (QCameraStream *)
                 QCameraChannel::getStreamByHandle(pQVar1,**(uint **)(param_7 + uVar4 * 4 + 0x10));
        if ((pQVar5 != (QCameraStream *)0x0) &&
           ((iVar2 = QCameraStream::isTypeOf(pQVar5,1), iVar2 != 0 ||
            (iVar2 = QCameraStream::isTypeOf(pQVar5,2), iVar2 != 0)))) {
          *param_2 = pQVar5;
          *param_5 = *(mm_camera_buf_def **)(param_7 + uVar4 * 4 + 0x10);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_7 + 8));
    }
  }
  return 0;
}

