
/* qcamera::QCamera2HardwareInterface::openCamera(hw_device_t**) */

int __thiscall
qcamera::QCamera2HardwareInterface::openCamera
          (QCamera2HardwareInterface *this,hw_device_t **param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_000b23e0 + 0xb22b4);
  if (*piVar3 != 0) {
    if ((**(byte **)(DAT_000b23e4 + 0xb22c0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b23e8 + 0xb22ce) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b23ec + 0xb23d0);
    }
  }
  if (this[100] == (QCamera2HardwareInterface)0x0) {
    iVar4 = *(int *)(DAT_000b23fc + 0xb230a);
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b2404 + 0xb232a,0x941,DAT_000b2400 + 0xb231e,
                          *(undefined4 *)(this + 0x5c));
    }
    QCameraPerfLock::lock_acq_timed((QCameraPerfLock *)(this + 0x8e0),500);
    iVar2 = openCamera(this);
    if (iVar2 == 0) {
      *param_1 = (hw_device_t *)(this + 0x14);
      iVar1 = QCameraThermalAdapter::init
                        (*(QCameraThermalAdapter **)(this + 0x850),(EVP_PKEY_CTX *)(this + 4));
      if ((iVar1 != 0) && (*(int *)(iVar4 + 0x24) != 0)) {
        mm_camera_debug_log(1,2,DAT_000b240c + 0xb237a,0x947,DAT_000b2408 + 0xb2372);
      }
    }
    else {
      *param_1 = (hw_device_t *)0x0;
    }
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b2414 + 0xb239c,0x963,DAT_000b2410 + 0xb238e,
                          *(undefined4 *)(this + 0x5c),iVar2);
    }
  }
  else {
    *param_1 = (hw_device_t *)0x0;
    if (*(int *)(*(int *)(DAT_000b23f0 + 0xb22e4) + 0x20) == 0) {
      iVar2 = -1;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b23f8 + 0xb22fc,0x93d,DAT_000b23f4 + 0xb22f4);
      iVar2 = -1;
    }
  }
  if (*piVar3 != 0) {
    if ((**(byte **)(DAT_000b2418 + 0xb23a8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b241c + 0xb23b6) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar2;
}

