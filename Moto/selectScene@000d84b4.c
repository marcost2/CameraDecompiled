
/* qcamera::QCamera2HardwareInterface::selectScene(qcamera::QCameraChannel*, mm_camera_super_buf_t*)
    */

int __thiscall
qcamera::QCamera2HardwareInterface::selectScene
          (QCamera2HardwareInterface *this,QCameraChannel *param_1,mm_camera_super_buf_t *param_2)

{
  int iVar1;
  QCameraStream *pQVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  mm_camera_super_buf_t *unaff_r6;
  
  if (param_1 != (QCameraChannel *)0x0) {
    unaff_r6 = param_2;
  }
  if (param_1 == (QCameraChannel *)0x0 || param_2 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000d865c + 0xd84cc) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d8664 + 0xd84e4,0x1b7,DAT_000d8660 + 0xd84dc);
    }
    return -0x16;
  }
  iVar1 = QCameraParametersIntf::getSelectedScene((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 == 0x17) {
    if (*(int *)(*(int *)(DAT_000d8668 + 0xd8504) + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000d8670 + 0xd851c,0x1bd,DAT_000d866c + 0xd8514);
    }
    return 0;
  }
  if (*(int *)(unaff_r6 + 8) != 0) {
    uVar5 = 0;
    do {
      pQVar2 = (QCameraStream *)
               QCameraChannel::getStreamByHandle(param_1,**(uint **)(unaff_r6 + uVar5 * 4 + 0x10));
      if ((pQVar2 != (QCameraStream *)0x0) &&
         (iVar3 = QCameraStream::isTypeOf(pQVar2,7), iVar3 != 0)) {
        if (*(int *)(unaff_r6 + uVar5 * 4 + 0x10) != 0) {
          iVar3 = *(int *)(*(int *)(unaff_r6 + uVar5 * 4 + 0x10) + 0x208);
          if ((iVar3 == 0) || (*(char *)(iVar3 + 0x40) == '\0')) {
            if (*(int *)(*(int *)(DAT_000d8698 + 0xd85f8) + 0x20) == 0) {
              return -0x13;
            }
            uVar4 = 0x1ef;
            iVar1 = DAT_000d869c + 0xd860a;
            iVar3 = DAT_000d86a0 + 0xd8612;
            goto LAB_000d8568;
          }
          if (*(int *)(iVar3 + 0x2514) != iVar1) {
            return 0;
          }
          if (*(int *)(this + 0x4c0) == 0) {
            return 0;
          }
          iVar1 = msgTypeEnabledWithLock(this,0x10);
          if (iVar1 < 1) {
            return 0;
          }
          if (*(int *)(unaff_r6 + 8) == 0) goto LAB_000d85d2;
          uVar5 = 0;
          goto LAB_000d85b2;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(unaff_r6 + 8));
  }
  if (*(int *)(*(int *)(DAT_000d8674 + 0xd8552) + 0x20) == 0) {
    return -0x13;
  }
  uVar4 = 0x1cc;
  iVar1 = DAT_000d8678 + 0xd8562;
  iVar3 = DAT_000d867c + 0xd856a;
  goto LAB_000d8568;
  while (uVar5 = uVar5 + 1, uVar5 < *(uint *)(unaff_r6 + 8)) {
LAB_000d85b2:
    pQVar2 = (QCameraStream *)
             QCameraChannel::getStreamByHandle(param_1,**(uint **)(unaff_r6 + uVar5 * 4 + 0x10));
    if ((pQVar2 != (QCameraStream *)0x0) && (iVar1 = QCameraStream::isTypeOf(pQVar2,1), iVar1 != 0))
    {
      iVar1 = *(int *)(unaff_r6 + uVar5 * 4 + 0x10);
      if (iVar1 != 0) {
        iVar1 = sendPreviewCallback(this,pQVar2,*(QCameraMemory **)(iVar1 + 0x210),
                                    *(uint *)(iVar1 + 0xc));
        if (iVar1 == 0) {
          QCameraParametersIntf::setSelectedScene((QCameraParametersIntf *)(this + 0x4ac),0x17);
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000d868c + 0xd8634) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d8694 + 0xd864e,0x1e5,DAT_000d8690 + 0xd8646);
          return iVar1;
        }
        return iVar1;
      }
      break;
    }
  }
LAB_000d85d2:
  if (*(int *)(*(int *)(DAT_000d8680 + 0xd85d8) + 0x20) == 0) {
    return -0x13;
  }
  uVar4 = 0x1ea;
  iVar1 = DAT_000d8684 + 0xd85ea;
  iVar3 = DAT_000d8688 + 0xd85f2;
LAB_000d8568:
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar1);
  return -0x13;
}

