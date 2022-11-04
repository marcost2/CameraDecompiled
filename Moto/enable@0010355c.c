
/* qcamera::MotMemThrottle::enable(long long) */

void qcamera::MotMemThrottle::enable(longlong param_1)

{
  int in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 4));
  uVar1 = systemTime(4);
  *(undefined4 *)(in_r0 + 0x40) = in_r2;
  *(undefined4 *)(in_r0 + 0x44) = in_r3;
  *(undefined *)(in_r0 + 0x30) = 1;
  *(undefined8 *)(in_r0 + 0x50) = 0;
  *(undefined8 *)(in_r0 + 0x58) = 0;
  *(undefined *)(in_r0 + 0xc) = 0;
  uVar1 = __aeabi_ldivmod((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),(uint)&DAT_000f4240,0);
  *(int *)(in_r0 + 0x38) = (int)uVar1;
  *(int *)(in_r0 + 0x3c) = (int)((ulonglong)uVar1 >> 0x20);
  pthread_mutex_unlock((pthread_mutex_t *)(in_r0 + 4));
  return;
}

