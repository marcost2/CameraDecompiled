
/* qcamera::QCamera3HardwareInterface::flush(camera3_device const*) */

undefined4 __thiscall qcamera::QCamera3HardwareInterface::flush(QCamera3HardwareInterface *this)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  QCamera3HardwareInterface *this_00;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0003a774 + 0x3a6b0);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  this_00 = *(QCamera3HardwareInterface **)(this + 0x44);
  if (this_00 == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffea;
  }
  else {
    __mutex = (pthread_mutex_t *)(this_00 + 0x388);
    pthread_mutex_lock(__mutex);
    if (*(int *)(this_00 + 0x117910) == 4) {
      pthread_mutex_unlock(__mutex);
      uVar1 = flush(this_00);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
    }
    else if (*(int *)(this_00 + 0x117910) == 5) {
      pthread_mutex_unlock(__mutex);
      handleCameraDeviceError(this_00);
      uVar1 = 0xffffffed;
    }
    else {
      if (*(int *)(iVar2 + 0x34) != 0) {
        mm_camera_debug_log();
      }
      pthread_mutex_unlock(__mutex);
      uVar1 = 0;
    }
  }
  return uVar1;
}

