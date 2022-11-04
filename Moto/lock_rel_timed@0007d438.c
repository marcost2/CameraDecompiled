
/* qcamera::QCameraPerfLock::lock_rel_timed() */

uint __thiscall qcamera::QCameraPerfLock::lock_rel_timed(QCameraPerfLock *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) != 0) {
    iVar3 = *(int *)(DAT_0007d534 + 0x7d454);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007d53c + 0x7d46c,0x18c,DAT_0007d538 + 0x7d464);
    }
    if (-1 < *(int *)(this + 0x18)) {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d54c + 0x7d490,0x191,DAT_0007d548 + 0x7d484,
                            *(int *)(this + 0x18));
      }
      if ((*(code **)(this + 4) == (code *)0x0) || (*(int *)(this + 0x18) < 0)) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (**(code **)(this + 4))();
        if ((0x7fffffff < uVar1) && (*(int *)(iVar3 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_0007d554 + 0x7d4be,0x196,DAT_0007d550 + 0x7d4b6);
        }
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
      }
      if (((this[0x24] != (QCameraPerfLock)0x0) && (*(int *)(this + 0x28) == 0)) &&
         (iVar2 = *(int *)(this + 0x1c), iVar2 != 0)) {
        (**(code **)(iVar2 + 0x88))(iVar2,*(undefined4 *)(this + 0x20),DAT_0007d558 + 0x7d50c);
      }
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d560 + 0x7d524,0x19f,DAT_0007d55c + 0x7d51c);
      }
      goto LAB_0007d526;
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_0007d544 + 0x7d4e6,0x18e,DAT_0007d540 + 0x7d4de);
    }
  }
  uVar1 = 0xffffffff;
LAB_0007d526:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return uVar1;
}

