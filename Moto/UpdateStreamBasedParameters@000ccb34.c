
/* qcamera::QCameraChannel::UpdateStreamBasedParameters(qcamera::QCameraParametersIntf&) */

int __thiscall
qcamera::QCameraChannel::UpdateStreamBasedParameters
          (QCameraChannel *this,QCameraParametersIntf *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  QCameraStream *pQVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_7edc;
  undefined4 local_7ed8 [8109];
  
  piVar1 = *(int **)(DAT_000ccd74 + 0xccb4a);
  iVar2 = *piVar1;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
  iVar3 = QCameraParametersIntf::isPreviewFlipChanged(param_1);
  if ((iVar3 == 0) || (*(int *)(this + 0x1c) == 0)) {
    iVar3 = 0;
  }
  else {
    uVar7 = 0;
    iVar3 = 0;
    iVar8 = *(int *)(DAT_000ccd78 + 0xccb7c);
    iVar4 = DAT_000ccd7c + 0xccb84;
    do {
      pQVar5 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4);
      if (((pQVar5 != (QCameraStream *)0x0) && (*(int *)(this + 0x10) == *(int *)(pQVar5 + 100))) &&
         ((iVar6 = QCameraStream::isTypeOf(pQVar5,1), iVar6 != 0 ||
          (iVar6 = QCameraStream::isOrignalTypeOf
                             (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),1), iVar6 != 0)
          ))) {
        __aeabi_memclr8(local_7ed8,0x7eb0);
        local_7edc = 0x62;
        local_7ed8[0] = QCameraParametersIntf::getFlipMode(param_1,1);
        iVar3 = QCameraStream::setParameter
                          (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),
                           (cam_stream_parm_buffer_t *)&local_7edc);
        if ((iVar3 != 0) && (*(int *)(iVar8 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000ccd80 + 0xccbea,0x259,iVar4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(this + 0x1c));
  }
  iVar4 = QCameraParametersIntf::isVideoFlipChanged(param_1);
  bVar9 = iVar4 != 0;
  if (bVar9) {
    iVar4 = *(int *)(this + 0x1c);
  }
  if (bVar9 && iVar4 != 0) {
    uVar7 = 0;
    iVar8 = *(int *)(DAT_000ccd84 + 0xccc4c);
    iVar4 = DAT_000ccd88 + 0xccc54;
    do {
      pQVar5 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4);
      if (((pQVar5 != (QCameraStream *)0x0) && (*(int *)(this + 0x10) == *(int *)(pQVar5 + 100))) &&
         ((iVar6 = QCameraStream::isTypeOf(pQVar5,4), iVar6 != 0 ||
          (iVar6 = QCameraStream::isOrignalTypeOf
                             (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),4), iVar6 != 0)
          ))) {
        __aeabi_memclr8(local_7ed8,0x7eb0);
        local_7edc = 0x62;
        local_7ed8[0] = QCameraParametersIntf::getFlipMode(param_1,4);
        iVar3 = QCameraStream::setParameter
                          (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),
                           (cam_stream_parm_buffer_t *)&local_7edc);
        if ((iVar3 != 0) && (*(int *)(iVar8 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000ccd8c + 0xcccba,0x26c,iVar4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(this + 0x1c));
  }
  iVar4 = QCameraParametersIntf::isSnapshotFlipChanged(param_1);
  bVar9 = iVar4 != 0;
  if (bVar9) {
    iVar4 = *(int *)(this + 0x1c);
  }
  if (bVar9 && iVar4 != 0) {
    uVar7 = 0;
    iVar8 = *(int *)(DAT_000ccd90 + 0xcccd8);
    iVar4 = DAT_000ccd94 + 0xccce0;
    do {
      pQVar5 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4);
      if (((pQVar5 != (QCameraStream *)0x0) && (*(int *)(this + 0x10) == *(int *)(pQVar5 + 100))) &&
         ((iVar6 = QCameraStream::isTypeOf(pQVar5,3), iVar6 != 0 ||
          (((iVar6 = QCameraStream::isOrignalTypeOf
                               (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),3),
            iVar6 != 0 ||
            (iVar6 = QCameraStream::isTypeOf
                               (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),2),
            iVar6 != 0)) ||
           (iVar6 = QCameraStream::isOrignalTypeOf
                              (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),2), iVar6 != 0
           )))))) {
        __aeabi_memclr8(local_7ed8,0x7eb0);
        local_7edc = 0x62;
        local_7ed8[0] = QCameraParametersIntf::getFlipMode(param_1,3);
        iVar3 = QCameraStream::setParameter
                          (*(QCameraStream **)(*(int *)(this + 0x18) + uVar7 * 4),
                           (cam_stream_parm_buffer_t *)&local_7edc);
        if ((iVar3 != 0) && (*(int *)(iVar8 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000ccd98 + 0xccd62,0x281,iVar4);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(this + 0x1c));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
  if (*piVar1 == iVar2) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

