
/* qcamera::QCameraPerfLock::lock_rel_min_freq() */

uint __thiscall qcamera::QCameraPerfLock::lock_rel_min_freq(QCameraPerfLock *this)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0x40) < 0) {
    __android_log_print(6,DAT_0007d8b0 + 0x7d898,DAT_0007d8b4 + 0x7d89a,DAT_0007d8b8 + 0x7d89c);
  }
  else {
    if (*(int *)(*(int *)(DAT_0007d8bc + 0x7d846) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007d8c4 + 0x7d860,0x25b,DAT_0007d8c0 + 0x7d854,
                          *(int *)(this + 0x40));
    }
    if ((*(code **)(this + 4) != (code *)0x0) && (-1 < *(int *)(this + 0x40))) {
      uVar1 = (**(code **)(this + 4))();
      if (0x7fffffff < uVar1) {
        __android_log_print(6,DAT_0007d8c8 + 0x7d880,DAT_0007d8cc + 0x7d882);
      }
      *(undefined4 *)(this + 0x40) = 0xffffffff;
      goto LAB_0007d8a2;
    }
  }
  uVar1 = 0xffffffff;
LAB_0007d8a2:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return uVar1;
}

