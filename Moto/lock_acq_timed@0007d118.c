
/* qcamera::QCameraPerfLock::lock_acq_timed(int) */

int __thiscall qcamera::QCameraPerfLock::lock_acq_timed(QCameraPerfLock *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_30;
  undefined4 local_28;
  int local_20;
  
  piVar4 = *(int **)(DAT_0007d294 + 0x7d128);
  local_20 = *piVar4;
  iVar3 = *(int *)(DAT_0007d298 + 0x7d136);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007d2a0 + 0x7d14e,0x122,DAT_0007d29c + 0x7d146);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = -1;
  }
  else {
    local_30 = *(undefined8 *)(DAT_0007d2a4 + 0x7d166);
    local_28 = *(undefined4 *)(DAT_0007d2a4 + 0x7d16e);
    if (*(int *)(this + 0x28) != 0) {
      lVar5 = systemTime(1);
      iVar2 = *(int *)(this + 0x2c);
      iVar1 = __aeabi_ldivmod((uint)(lVar5 - *(longlong *)(this + 0x30)),
                              (uint)((ulonglong)(lVar5 - *(longlong *)(this + 0x30)) >> 0x20),
                              (uint)&DAT_000f4240,0);
      param_1 = (iVar2 + param_1) - iVar1;
    }
    uVar6 = systemTime(1);
    *(undefined4 *)(this + 0x28) = 1;
    *(int *)(this + 0x2c) = param_1;
    *(int *)(this + 0x30) = (int)uVar6;
    *(int *)(this + 0x34) = (int)((ulonglong)uVar6 >> 0x20);
    if (this[0x24] != (QCameraPerfLock)0x0) {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d2ac + 0x7d1c8,0x134,DAT_0007d2a8 + 0x7d1bc,1);
      }
      iVar1 = *(int *)(this + 0x1c);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0x88))(iVar1,*(undefined4 *)(this + 0x20),DAT_0007d2b0 + 0x7d1da);
      }
    }
    if ((*(code **)this == (code *)0x0) || (-1 < *(int *)(this + 0x18))) {
      iVar1 = -1;
    }
    else {
      iVar1 = (**(code **)this)(*(int *)(this + 0x18),param_1,&local_30,3);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0007d2b8 + 0x7d264,0x13b,DAT_0007d2b4 + 0x7d25a,iVar1);
      }
      if (iVar1 < 0) {
        if (*(int *)(iVar3 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0007d2c0 + 0x7d28a,0x13d,DAT_0007d2bc + 0x7d282);
        }
      }
      else {
        *(int *)(this + 0x18) = iVar1;
      }
    }
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007d2c8 + 0x7d206,0x142,DAT_0007d2c4 + 0x7d1fa,
                          *(undefined4 *)(this + 0x18));
    }
  }
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007d2d0 + 0x7d226,0x145,DAT_0007d2cc + 0x7d21e);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  if (*piVar4 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

