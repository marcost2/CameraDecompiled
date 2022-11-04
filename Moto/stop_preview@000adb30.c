
/* qcamera::QCamera2HardwareInterface::stop_preview(camera_device*) */

void qcamera::QCamera2HardwareInterface::stop_preview(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QCamera2HardwareInterface *this;
  int iVar4;
  int *piVar5;
  int *piVar6;
  qcamera_api_result_t aqStack328 [16];
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_000adca8 + 0xadb42);
  local_20 = *piVar5;
  android::CameraHalWatchdog::GlobalWatchdog::stop((ulong)"s19PREVIEW_FORMATS_MAPE",false);
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_000adcac + 0xadb68));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  piVar6 = *(int **)(DAT_000adcb0 + 0xadb76);
  if (*piVar6 != 0) {
    if ((**(byte **)(DAT_000adcb4 + 0xadb84) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000adcb8 + 0xadb92) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000adcbc + 0xadc94);
    }
  }
  this = *(QCamera2HardwareInterface **)(param_1 + 0x44);
  if (this == (QCamera2HardwareInterface *)0x0) {
    if (*(int *)(*(int *)(DAT_000adcc0 + 0xadba0) + 0x20) == 0) goto LAB_000adc40;
    uVar2 = 1;
    uVar3 = 0x2d7;
    iVar4 = DAT_000adcc4 + 0xadc12;
    iVar1 = DAT_000adcc8 + 0xadc1a;
  }
  else {
    iVar4 = *(int *)(DAT_000adcc0 + 0xadba0);
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000adcd0 + 0xadbbe,0x2db,DAT_000adccc + 0xadbb2,
                          *(undefined4 *)(this + 0x5c));
    }
    MotMemThrottle::disable((MotMemThrottle *)(this + 0x1e28));
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x8e0));
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if ((this[0x54c] != (QCamera2HardwareInterface)0x0) &&
       (iVar1 = QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0xf,(void *)0x0),
       iVar1 == 0)) {
      waitAPIResult(this,0xf,aqStack328);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (*(int *)(iVar4 + 0x34) == 0) goto LAB_000adc40;
    uVar2 = 6;
    uVar3 = 0x2f0;
    iVar4 = DAT_000adcd4 + 0xadc34;
    iVar1 = DAT_000adcd8 + 0xadc3e;
  }
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar4);
LAB_000adc40:
  if (*piVar6 != 0) {
    if ((**(byte **)(DAT_000adcdc + 0xadc4c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000adce0 + 0xadc5a) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

