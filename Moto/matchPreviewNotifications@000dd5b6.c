
/* qcamera::QCameraCbNotifier::matchPreviewNotifications(void*, void*) */

longlong qcamera::QCameraCbNotifier::matchPreviewNotifications(void *param_1,void *param_2)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    param_2 = *param_1;
    if (param_2 == (void *)0x1) {
      param_1 = *(void **)((int)param_1 + 4);
    }
    if (param_2 == (void *)0x1 && param_1 == (void *)0x10) {
      return CONCAT44(param_2,1);
    }
  }
  return ZEXT48(param_2) << 0x20;
}

