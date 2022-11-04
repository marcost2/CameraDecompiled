
/* qcamera::QCameraPerfLock::lock_rel() */

uint __thiscall qcamera::QCameraPerfLock::lock_rel(QCameraPerfLock *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) != 0) {
    iVar3 = *(int *)(DAT_0007d65c + 0x7d580);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007d664 + 0x7d598,0x1b6,DAT_0007d660 + 0x7d590);
    }
    if (-1 < *(int *)(this + 0x14)) {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d674 + 0x7d5bc,0x1bb,DAT_0007d670 + 0x7d5b0,
                            *(int *)(this + 0x14));
      }
      if ((*(code **)(this + 4) == (code *)0x0) || (*(int *)(this + 0x14) < 0)) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (**(code **)(this + 4))();
        if ((0x7fffffff < uVar1) && (*(int *)(iVar3 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_0007d67c + 0x7d5ea,0x1c0,DAT_0007d678 + 0x7d5e2);
        }
        *(undefined4 *)(this + 0x14) = 0xffffffff;
      }
      uVar2 = (uint)(byte)this[0x24];
      bVar4 = uVar2 != 0;
      if (bVar4) {
        uVar2 = *(uint *)(this + 0x1c);
      }
      if (bVar4 && uVar2 != 0) {
        (**(code **)(uVar2 + 0x88))(uVar2,*(undefined4 *)(this + 0x20),DAT_0007d680 + 0x7d634);
      }
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d688 + 0x7d64c,0x1c8,DAT_0007d684 + 0x7d644);
      }
      goto LAB_0007d64e;
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_0007d66c + 0x7d60c,0x1b8,DAT_0007d668 + 0x7d604);
    }
  }
  uVar1 = 0xffffffff;
LAB_0007d64e:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return uVar1;
}

