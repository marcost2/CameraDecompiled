
/* qcamera::QCamera2HardwareInterface::stopRecording() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::stopRecording(QCamera2HardwareInterface *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b570c + 0xb5684);
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b5714 + 0xb569c,0x1275,DAT_000b5710 + 0xb5694);
  }
  iVar1 = QCameraParametersIntf::isTNRSnapshotEnabled((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 != 0) {
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b571c + 0xb56c0,0x1278,DAT_000b5718 + 0xb56b8);
    }
    if (*(int **)(this + 0x9c4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9c4) + 0x18))();
    }
  }
  if (*(int **)(this + 0x9c0) == (int *)0x0) {
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = (**(code **)(**(int **)(this + 0x9c0) + 0x18))();
  }
  QCameraCbNotifier::flushVideoNotifications((QCameraCbNotifier *)(this + 0x854));
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b5724 + 0xb5704,0x1285,DAT_000b5720 + 0xb56fa,uVar2);
  }
  return uVar2;
}

