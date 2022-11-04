
/* qcamera::QCameraCbNotifier::matchSnapshotNotifications(void*, void*) */

undefined4 qcamera::QCameraCbNotifier::matchSnapshotNotifications(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
  if ((param_1 != (void *)0x0) && (*param_1 == 3)) {
    return 1;
  }
  return 0;
}

