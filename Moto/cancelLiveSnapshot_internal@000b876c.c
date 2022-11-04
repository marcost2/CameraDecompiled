
/* qcamera::QCamera2HardwareInterface::cancelLiveSnapshot_internal() */

int __thiscall
qcamera::QCamera2HardwareInterface::cancelLiveSnapshot_internal(QCamera2HardwareInterface *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  QCameraStream *this_00;
  int *this_01;
  int *piVar4;
  int iVar5;
  undefined4 local_7ee0;
  undefined local_7edc;
  
  piVar4 = *(int **)(DAT_000b88f4 + 0xb8782);
  iVar1 = *piVar4;
  unconfigureAdvancedCapture(this);
  iVar5 = *(int *)(DAT_000b88f8 + 0xb8794);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b8900 + 0xb87b0,0x1b75,DAT_000b88fc + 0xb87a8);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
  if (*(int *)(this + 0x1e1c) == 0) {
    uVar2 = 0;
    *(undefined4 *)(this + 0x1e1c) = 0;
LAB_000b87e2:
    *(uint *)(this + 0x1e20) = uVar2;
  }
  else {
    uVar2 = *(int *)(this + 0x1e18) + 1;
    if ((uVar2 == 0) || (*(uint *)(this + 0x1e20) < uVar2)) goto LAB_000b87e2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
  if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
    QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0x8e0));
  }
  waitDeferredWork(this,(uint *)(this + 0x1da4));
  waitDeferredWork(this,(uint *)(this + 0x1da8));
  QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
  iVar3 = QCameraParametersIntf::isTNRSnapshotEnabled((QCameraParametersIntf *)(this + 0x4ac));
  this_01 = *(int **)(this + 0x9c4);
  if (iVar3 == 0) {
    if (this_01 != (int *)0x0) {
      if (*piVar4 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x000b88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (**(code **)(*this_01 + 0x18))(this_01);
        return iVar1;
      }
      goto LAB_000b88f0;
    }
    iVar3 = -0x80000000;
  }
  else {
    if ((this_01 != (int *)0x0) && (this_01[7] != 0)) {
      uVar2 = 0;
      do {
        this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex((QCameraChannel *)this_01,uVar2)
        ;
        if ((this_00 != (QCameraStream *)0x0) &&
           (iVar3 = QCameraStream::getMyType(this_00), iVar3 == 3)) goto LAB_000b8858;
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)this_01[7]);
      if (this_00 != (QCameraStream *)0x0) {
LAB_000b8858:
        if (*(int *)(iVar5 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000b8908 + 0xb8872,0x1b93,DAT_000b8904 + 0xb886a);
        }
        __aeabi_memclr8(&local_7ee0,0x7eb4);
        local_7edc = 0;
        local_7ee0 = 0xeb;
        iVar3 = QCameraStream::setParameter(this_00,(cam_stream_parm_buffer_t *)&local_7ee0);
        if ((iVar3 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000b8910 + 0xb88b0,0x1b9a,DAT_000b890c + 0xb88a8);
        }
        goto LAB_000b88da;
      }
    }
    iVar3 = 0;
  }
LAB_000b88da:
  if (*piVar4 == iVar1) {
    return iVar3;
  }
LAB_000b88f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

