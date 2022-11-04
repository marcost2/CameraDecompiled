
/* qcamera::QCamera3HardwareInterface::configureStreams(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::configureStreams
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_00081b00 + 0x81a82);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_00081b04 + 0x81a8e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00081b08 + 0x81a9c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00081b0c + 0x81aee);
    }
  }
  QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0xa8));
  uVar1 = configureStreamsPerfLocked(this,param_1);
  QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0xa8));
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_00081b10 + 0x81ac8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00081b14 + 0x81ad6) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar1;
}

