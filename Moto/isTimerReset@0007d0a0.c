
/* qcamera::QCameraPerfLock::isTimerReset() */

undefined4 __thiscall qcamera::QCameraPerfLock::isTimerReset(QCameraPerfLock *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(int *)(this + 0x28) != 0) {
      lVar5 = systemTime(1);
      uVar3 = *(uint *)(this + 0x2c);
      uVar6 = __aeabi_ldivmod((uint)(lVar5 - *(longlong *)(this + 0x30)),
                              (uint)((ulonglong)(lVar5 - *(longlong *)(this + 0x30)) >> 0x20),
                              (uint)&DAT_000f4240,0);
      iVar1 = (int)((ulonglong)uVar6 >> 0x20);
      bVar4 = uVar3 < (uint)uVar6;
      if ((int)(-(uint)bVar4 - iVar1) < 0 != (SBORROW4(-iVar1,(uint)bVar4) != false)) {
        uVar2 = 1;
        *(undefined4 *)(this + 0x28) = 0;
        *(undefined4 *)(this + 0x2c) = 0;
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return uVar2;
}

