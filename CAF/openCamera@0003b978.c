
/* qcamera::QCamera3HardwareInterface::openCamera(hw_device_t**) */

int __thiscall
qcamera::QCamera3HardwareInterface::openCamera
          (QCamera3HardwareInterface *this,hw_device_t **param_1)

{
  QCamera3HardwareInterface *pQVar1;
  hw_device_t **extraout_r1;
  hw_device_t **extraout_r1_00;
  hw_device_t **pphVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x117910) == 0) {
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x98));
    iVar4 = *(int *)(DAT_0003ba14 + 0x3b9aa);
    pphVar2 = extraout_r1;
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log();
      pphVar2 = extraout_r1_00;
    }
    iVar3 = openCamera(this,pphVar2);
    pQVar1 = (QCamera3HardwareInterface *)0x0;
    if (iVar3 == 0) {
      pQVar1 = this + 4;
    }
    *param_1 = (hw_device_t *)pQVar1;
    QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0x98));
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log();
    }
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x117910) = 1;
      iVar3 = 0;
    }
  }
  else {
    *param_1 = (hw_device_t *)0x0;
    iVar3 = -1;
  }
  return iVar3;
}

