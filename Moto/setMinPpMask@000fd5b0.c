
/* qcamera::QCameraParametersIntf::setMinPpMask(unsigned long long) */

void qcamera::QCameraParametersIntf::setMinPpMask(ulonglong param_1)

{
  int *in_r0;
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 1));
  iVar1 = *in_r0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x308) = in_r2;
    *(undefined4 *)(iVar1 + 0x30c) = in_r3;
    pthread_mutex_unlock((pthread_mutex_t *)(in_r0 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd5e8 + 0xfd5e0,DAT_000fd5ec + 0xfd5e2,DAT_000fd5f0 + 0xfd5e4);
}

