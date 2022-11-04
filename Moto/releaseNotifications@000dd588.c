
/* qcamera::QCameraCbNotifier::releaseNotifications(void*, void*) */

void qcamera::QCameraCbNotifier::releaseNotifications(void *param_1,void *param_2)

{
  if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) &&
     (*(code **)((int)param_1 + 0x2c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000dd5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)param_1 + 0x2c))
              (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0x28),0x80000002)
    ;
    return;
  }
  return;
}

