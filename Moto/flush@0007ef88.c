
/* qcamera::QCamera3HardwareInterface::flush(camera3_device const*) */

undefined4 qcamera::QCamera3HardwareInterface::flush(camera3_device *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  QCamera3HardwareInterface *this;
  int *piVar3;
  int iVar4;
  int *local_130 [68];
  undefined4 local_20;
  undefined local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_0007f0a0 + 0x7ef94);
  local_18 = *piVar3;
  iVar4 = *(int *)(DAT_0007f0a4 + 0x7ef9e);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007f0ac + 0x7efb6,0x3146,DAT_0007f0a8 + 0x7efae);
  }
  local_1c = 0;
  local_20 = 0;
  local_130[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_130,(char *)(DAT_0007f0b0 + 0x7efcc));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_130);
  this = *(QCamera3HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007f0b8 + 0x7f01e,0x314d,DAT_0007f0b4 + 0x7f016);
    }
    uVar2 = 0xffffffea;
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x3f0);
    pthread_mutex_lock(__mutex);
    iVar1 = *(int *)(this + 0x117fd8);
    if (iVar1 == 4) {
      pthread_mutex_unlock(__mutex);
      uVar2 = flush(this,true);
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007f0c8 + 0x7f04e,0x3165,DAT_0007f0c4 + 0x7f046);
      }
    }
    else if (iVar1 == 5) {
      pthread_mutex_unlock(__mutex);
      handleCameraDeviceError(this);
      uVar2 = 0xffffffed;
    }
    else {
      if (*(int *)(iVar4 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_0007f0c0 + 0x7f06c,0x315e,DAT_0007f0bc + 0x7f060,iVar1);
      }
      pthread_mutex_unlock(__mutex);
      uVar2 = 0;
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_130);
  if (local_130[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_130[0] + *(int *)(*local_130[0] + -0xc)));
  }
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

