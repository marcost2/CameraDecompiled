
/* qcamera::QCamera3HardwareInterface::hdrPlusPerfLock(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::hdrPlusPerfLock
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    iVar2 = *(int *)(*(int *)(DAT_00043ec4 + 0x43e52) + 0x20);
  }
  else {
    piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x208);
    piVar4 = piVar3;
    piVar1 = piVar3;
    if (piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 0x313d;
      piVar4 = piVar3 + 0x312a;
    }
    if (piVar4 != (int *)0x0 && piVar1 != (int *)0x0) {
      bVar5 = piVar3 != (int *)0x0;
      if (bVar5) {
        piVar3 = (int *)*piVar4;
      }
      if ((bVar5 && piVar3 != (int *)0x0) && (*(int *)(this + 0x1178f8) == *piVar1)) {
        QCameraPerfLock::lock_acq_timed((QCameraPerfLock *)(this + 0x98),7000);
      }
      iVar2 = QCameraPerfLock::isTimerReset((QCameraPerfLock *)(this + 0x98));
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)(this + 0x1178f8) = 0xffffffff;
      QCameraPerfLock::__ThumbV7PILongThunk__ZN7qcamera15QCameraPerfLock14lock_rel_timedEv
                ((QCameraPerfLock *)(this + 0x98));
      return;
    }
    iVar2 = *(int *)(*(int *)(DAT_00043ed0 + 0x43e32) + 0x20);
  }
  if (iVar2 == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

