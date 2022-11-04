
/* qcamera::QCamera3HardwareInterface::camEvtHandle(unsigned int, cam_event_t*, void*) */

void qcamera::QCamera3HardwareInterface::camEvtHandle
               (uint param_1,cam_event_t *param_2,void *param_3)

{
  int iVar1;
  QCamera3HardwareInterface *unaff_r4;
  
  if (param_2 != (cam_event_t *)0x0) {
    unaff_r4 = (QCamera3HardwareInterface *)param_3;
  }
  if (param_2 != (cam_event_t *)0x0 && param_3 != (void *)0x0) {
    if (*(int *)param_2 == 0x40) {
      if (*(int *)(*(int *)(DAT_0003b94c + 0x3b8e0) + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      pthread_mutex_lock((pthread_mutex_t *)(unaff_r4 + 0x388));
      unaff_r4[0x214] = (QCamera3HardwareInterface)0x1;
      unblockRequestIfNecessary(unaff_r4);
      __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(unaff_r4 + 0x388));
      return;
    }
    if (*(int *)param_2 == 8) {
      pthread_mutex_lock((pthread_mutex_t *)(unaff_r4 + 0x388));
      *(undefined4 *)(unaff_r4 + 0x117910) = 5;
      pthread_mutex_unlock((pthread_mutex_t *)(unaff_r4 + 0x388));
      iVar1 = *(int *)(*(int *)(DAT_0003b940 + 0x3b8c2) + 0x20);
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_0003b958 + 0x3b922) + 0x24);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_0003b964 + 0x3b876) + 0x20);
  }
  if (iVar1 == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

