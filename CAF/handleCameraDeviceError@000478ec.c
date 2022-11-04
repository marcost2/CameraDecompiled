
/* qcamera::QCamera3HardwareInterface::handleCameraDeviceError() */

int __thiscall
qcamera::QCamera3HardwareInterface::handleCameraDeviceError(QCamera3HardwareInterface *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  int *piVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  
  piVar2 = *(int **)(DAT_000479b0 + 0x478fa);
  local_24 = *piVar2;
  __mutex = (pthread_mutex_t *)(this + 0x388);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)(this + 0x117910);
  pthread_mutex_unlock(__mutex);
  if (iVar1 == 5) {
    iVar1 = flush(this);
    if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000479b4 + 0x4793a) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(this + 0x117910) = 6;
    pthread_mutex_unlock(__mutex);
    uStack56 = 0;
    local_2c = 0;
    local_30 = 0;
    local_40 = 1;
    local_50 = 1;
    local_48 = 0;
    orchestrateNotify(this,(camera3_notify_msg *)&local_50);
  }
  else {
    iVar1 = 0;
  }
  if (*piVar2 == local_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

