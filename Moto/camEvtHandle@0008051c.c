
/* qcamera::QCamera3HardwareInterface::camEvtHandle(unsigned int, cam_event_t*, void*) */

void qcamera::QCamera3HardwareInterface::camEvtHandle
               (uint param_1,cam_event_t *param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  void *unaff_r4;
  
  if (param_2 != (cam_event_t *)0x0) {
    unaff_r4 = param_3;
  }
  if (param_2 != (cam_event_t *)0x0 && param_3 != (void *)0x0) {
    if (*(int *)param_2 == 0x40) {
      if (*(int *)(*(int *)(DAT_00080614 + 0x805a6) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008061c + 0x805be,0x354,DAT_00080618 + 0x805b6);
      }
      pthread_mutex_lock((pthread_mutex_t *)((int)unaff_r4 + 0x3f0));
      *(undefined *)((int)unaff_r4 + 0x27c) = 1;
      pthread_cond_signal((pthread_cond_t *)((int)unaff_r4 + 0x274));
      pthread_mutex_unlock((pthread_mutex_t *)((int)unaff_r4 + 0x3f0));
      return;
    }
    if (*(int *)param_2 == 8) {
      pthread_mutex_lock((pthread_mutex_t *)((int)unaff_r4 + 0x3f0));
      *(undefined4 *)((int)unaff_r4 + 0x117fd8) = 5;
      pthread_mutex_unlock((pthread_mutex_t *)((int)unaff_r4 + 0x3f0));
      if (*(int *)(*(int *)(DAT_00080608 + 0x8057c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00080610 + 0x80594,0x34d,DAT_0008060c + 0x8058c);
      }
      android::forceRestartCameraserverSilent();
      return;
    }
    if (*(int *)(*(int *)(DAT_00080620 + 0x805ea) + 0x24) == 0) {
      return;
    }
    uVar4 = 0x35d;
    iVar1 = DAT_00080624 + 0x805fa;
    uVar2 = 2;
    puVar3 = &UNK_00080606 + DAT_00080628;
  }
  else {
    if (*(int *)(*(int *)(DAT_0008062c + 0x80532) + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x361;
    iVar1 = DAT_00080630 + 0x80542;
    puVar3 = (undefined *)(DAT_00080634 + 0x8054a);
  }
  mm_camera_debug_log(1,uVar2,puVar3,uVar4,iVar1);
  return;
}

