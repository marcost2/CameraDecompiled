
/* qcamera::QCamera2HardwareInterface::playShutter() */

void __thiscall qcamera::QCamera2HardwareInterface::playShutter(QCamera2HardwareInterface *this)

{
  int *piVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar1 = *(int **)(DAT_000bcab0 + 0xbc9fc);
  local_18 = *piVar1;
  if (*(int *)(this + 0x4bc) == 0) {
LAB_000bca1e:
    if (*(int *)(*(int *)(DAT_000bcab4 + 0xbca24) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000bcabc + 0xbca3c,0x280c,DAT_000bcab8 + 0xbca34);
      if (*piVar1 == local_18) {
        return;
      }
      goto LAB_000bcaaa;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    iVar2 = *(int *)(this + 0x4b4);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (-1 < iVar2 << 0x1e) goto LAB_000bca1e;
    if (*(int *)(*(int *)(DAT_000bcac0 + 0xbca50) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bcac8 + 0xbca68,0x280f,DAT_000bcac4 + 0xbca60);
    }
    local_1c = 0;
    local_20 = 0;
    local_30 = 0;
    uStack40 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_48 = 0;
    local_50 = 0x200000000;
    QCameraCbNotifier::notifyCallback
              ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_50);
  }
  if (*piVar1 == local_18) {
    return;
  }
LAB_000bcaaa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

