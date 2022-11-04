
/* qcamera::QCameraPerfLock::lock_acq_min_freq() */

int __thiscall qcamera::QCameraPerfLock::lock_acq_min_freq(QCameraPerfLock *this)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  int local_18;
  
  piVar2 = *(int **)(DAT_0007d818 + 0x7d7b8);
  local_18 = *piVar2;
  local_1c = 0x206;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if ((*(code **)this != (code *)0x0) && (*(int *)(this + 0x40) < 1)) {
    iVar1 = (**(code **)this)(0,0,&local_1c,1);
    if (iVar1 != -1) {
      *(int *)(this + 0x40) = iVar1;
      goto LAB_0007d7d6;
    }
    __android_log_print(6,DAT_0007d81c + 0x7d80a,DAT_0007d820 + 0x7d80c,DAT_0007d824 + 0x7d80e);
  }
  iVar1 = -1;
LAB_0007d7d6:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

