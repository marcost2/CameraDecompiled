
/* qcamera::QCamera2HardwareInterface::camEvtHandle(unsigned int, cam_event_t*, void*) */

void qcamera::QCamera2HardwareInterface::camEvtHandle
               (uint param_1,cam_event_t *param_2,void *param_3)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  void *unaff_r5;
  
  if (param_2 != (cam_event_t *)0x0) {
    unaff_r5 = param_3;
  }
  if (param_2 == (cam_event_t *)0x0 || param_3 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000b29a4 + 0xb289e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b29ac + 0xb28b6,0x1d49,DAT_000b29a8 + 0xb28ae);
    }
    return;
  }
  __ptr = (int *)malloc(8);
  if (__ptr == (int *)0x0) {
    return;
  }
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  *__ptr = iVar1;
  __ptr[1] = iVar2;
  if (iVar1 == 8) {
    pthread_mutex_lock((pthread_mutex_t *)((int)unaff_r5 + 0x1d9c));
    pthread_cond_broadcast((pthread_cond_t *)((int)unaff_r5 + 0x1da0));
    if (*(int *)(*(int *)(DAT_000b2998 + 0xb2916) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b29a0 + 0xb292e,0x1d41,DAT_000b299c + 0xb2926);
    }
    pthread_mutex_unlock((pthread_mutex_t *)((int)unaff_r5 + 0x1d9c));
LAB_000b2936:
    QCameraStateMachine::procEvt((QCameraStateMachine *)((int)unaff_r5 + 0x4dc),0x22,__ptr);
    return;
  }
  if (iVar1 == 0x20) {
    if (*(char *)((int)unaff_r5 + 0x1c23) != '\0') goto LAB_000b2982;
    pthread_mutex_lock((pthread_mutex_t *)((int)unaff_r5 + 0x1c68));
    *(undefined *)((int)unaff_r5 + 0x1c23) = 1;
  }
  else {
    if (iVar1 != 0x10) goto LAB_000b2936;
    if (*(char *)((int)unaff_r5 + 0x1c22) != '\0') goto LAB_000b2982;
    pthread_mutex_lock((pthread_mutex_t *)((int)unaff_r5 + 0x1c68));
    *(char *)((int)unaff_r5 + 0x1c22) = '\x01';
  }
  pthread_mutex_unlock((pthread_mutex_t *)((int)unaff_r5 + 0x1c68));
  iVar1 = pthread_create((pthread_t *)((int)unaff_r5 + 0xaa4),(pthread_attr_t *)0x0,
                         *(__start_routine **)(DAT_000b2990 + 0xb2970),unaff_r5);
  if (iVar1 == 0) {
    pthread_setname_np(*(pthread_t *)((int)unaff_r5 + 0xaa4),(char *)(DAT_000b2994 + 0xb2980));
  }
LAB_000b2982:
  free(__ptr);
  return;
}

