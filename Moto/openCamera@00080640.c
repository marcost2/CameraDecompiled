
/* qcamera::QCamera3HardwareInterface::openCamera(hw_device_t**) */

int __thiscall
qcamera::QCamera3HardwareInterface::openCamera
          (QCamera3HardwareInterface *this,hw_device_t **param_1)

{
  QCamera3HardwareInterface *pQVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *local_140 [68];
  undefined4 local_30;
  undefined local_2c;
  int local_28;
  
  piVar4 = *(int **)(DAT_00080734 + 0x80652);
  local_28 = *piVar4;
  local_2c = 0;
  local_30 = 0;
  local_140[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_140,(char *)(DAT_00080738 + 0x8066c));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_140);
  if (*(int *)(this + 0x117fd8) == 0) {
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0xa8));
    iVar3 = *(int *)(DAT_0008073c + 0x8069a);
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_00080744 + 0x806ba,0x37e,DAT_00080740 + 0x806ae,
                          *(undefined4 *)(this + 0x60));
    }
    iVar2 = openCamera(this);
    pQVar1 = (QCamera3HardwareInterface *)0x0;
    if (iVar2 == 0) {
      pQVar1 = this + 0x18;
    }
    *param_1 = (hw_device_t *)pQVar1;
    QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0xa8));
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0008074c + 0x806f6,0x388,DAT_00080748 + 0x806e8,
                          *(undefined4 *)(this + 0x60),iVar2);
    }
    if (iVar2 == 0) {
      iVar2 = 0;
      *(undefined4 *)(this + 0x117fd8) = 1;
    }
  }
  else {
    *param_1 = (hw_device_t *)0x0;
    iVar2 = -1;
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_140);
  if (local_140[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_140[0] + *(int *)(*local_140[0] + -0xc)));
  }
  if (*piVar4 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

