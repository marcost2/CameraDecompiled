
/* qcamera::QCamera2HardwareInterface::cancelPicture() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::cancelPicture(QCamera2HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  QCameraParametersIntf *this_00;
  QCameraPicChannel *this_01;
  
  waitDeferredWork(this,(uint *)(this + 0x1da4));
  waitDeferredWork(this,(uint *)(this + 0x1da8));
  QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
  unconfigureAdvancedCapture(this);
  if (*(int *)(*(int *)(DAT_000b8038 + 0xb7f36) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b8040 + 0xb7f4e,0x18da,DAT_000b803c + 0xb7f46);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
  if (*(int *)(this + 0x1e1c) == 0) {
    uVar1 = 0;
    *(undefined4 *)(this + 0x1e1c) = 0;
  }
  else {
    uVar1 = *(int *)(this + 0x1e18) + 1;
    if ((uVar1 != 0) && (uVar1 <= *(uint *)(this + 0x1e20))) goto LAB_000b7f86;
  }
  *(uint *)(this + 0x1e20) = uVar1;
LAB_000b7f86:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
  if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
    QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0x8e0));
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar2 = QCameraParametersIntf::isZSLMode(this_00);
  if (iVar2 == 0) {
    iVar2 = QCameraParametersIntf::isJpegPictureFormat(this_00);
    if (((iVar2 == 0) && (iVar2 = QCameraParametersIntf::isNV16PictureFormat(this_00), iVar2 == 0))
       && (iVar2 = QCameraParametersIntf::isNV21PictureFormat(this_00), iVar2 == 0)) {
      if (*(int **)(this + 0x9c8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x9c8) + 0x18))();
        if (*(int **)(this + 0x9c8) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c8) + 4))();
          *(undefined4 *)(this + 0x9c8) = 0;
        }
      }
    }
    else if (*(int **)(this + 0x9b8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9b8) + 0x18))();
      if (*(int **)(this + 0x9b8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x9b8) + 4))();
        *(undefined4 *)(this + 0x9b8) = 0;
      }
    }
  }
  else {
    iVar2 = QCameraParametersIntf::getofflineRAW(this_00);
    iVar3 = 0x9b4;
    if (iVar2 != 0) {
      iVar3 = 0x9c8;
    }
    this_01 = *(QCameraPicChannel **)(this + iVar3);
    if (this_01 != (QCameraPicChannel *)0x0) {
      QCameraPicChannel::cancelPicture(this_01);
      if (*(int **)(this + 0x9c8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x9c8) + 0x18))();
      }
      stopAdvancedCapture(this,this_01);
    }
  }
  return 0;
}

