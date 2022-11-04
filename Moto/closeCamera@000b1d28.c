
/* qcamera::QCamera2HardwareInterface::closeCamera() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::closeCamera(QCamera2HardwareInterface *this)

{
  int iVar1;
  int __status;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(DAT_000b1f48 + 0xb1d36);
  iVar1 = *piVar2;
  iVar3 = *(int *)(DAT_000b1f4c + 0xb1d44);
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b1f54 + 0xb1d60,0xae0,DAT_000b1f50 + 0xb1d58);
  }
  if (this[100] != (QCamera2HardwareInterface)0x0) {
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b1f5c + 0xb1d8a,0xaea,DAT_000b1f58 + 0xb1d7e,
                          *(undefined4 *)(this + 0x5c));
    }
    MotSmoothZoom::stopThread(*(MotSmoothZoom **)(this + 0x1ec8));
    this[100] = (QCamera2HardwareInterface)0x0;
    QCameraParametersIntf::setStreamConfigure
              (SUB41((QCameraParametersIntf *)(this + 0x4ac),0),false,false,(uint *)0x1);
    QCameraParametersIntf::deinit((QCameraParametersIntf *)(this + 0x4ac));
                    /* WARNING: Subroutine does not return */
    QCameraCbNotifier::exit((QCameraCbNotifier *)(this + 0x854),__status);
  }
  if (*piVar2 == iVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

