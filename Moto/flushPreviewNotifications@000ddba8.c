
/* qcamera::QCameraCbNotifier::flushPreviewNotifications() */

undefined4 __thiscall qcamera::QCameraCbNotifier::flushPreviewNotifications(QCameraCbNotifier *this)

{
  if (this[0x84] != (QCameraCbNotifier)0x0) {
    QCameraQueue::flushNodes((QCameraQueue *)(this + 0x20),*(FuncDef60 **)(DAT_000ddbf8 + 0xddbba));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000ddbec + 0xddbca) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000ddbf4 + 0xddbe2,0xf7c,DAT_000ddbf0 + 0xddbda);
  }
  return 0x80000000;
}

