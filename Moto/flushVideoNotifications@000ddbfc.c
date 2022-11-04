
/* qcamera::QCameraCbNotifier::flushVideoNotifications() */

undefined4 __thiscall qcamera::QCameraCbNotifier::flushVideoNotifications(QCameraCbNotifier *this)

{
  if (this[0x84] != (QCameraCbNotifier)0x0) {
    QCameraQueue::flushNodes((QCameraQueue *)(this + 0x20),*(FuncDef60 **)(DAT_000ddc4c + 0xddc0e));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000ddc40 + 0xddc1e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000ddc48 + 0xddc36,0xf92,DAT_000ddc44 + 0xddc2e);
  }
  return 0x80000000;
}

