
/* qcamera::QCamera2HardwareInterface::waitDeferredWork(unsigned int&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::waitDeferredWork(QCamera2HardwareInterface *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  pthread_mutex_t *__mutex;
  timespec local_30;
  int local_28;
  
  piVar6 = *(int **)(DAT_000b2e20 + 0xb2d28);
  local_28 = *piVar6;
  __mutex = (pthread_mutex_t *)(this + 0x1d9c);
  pthread_mutex_lock(__mutex);
  if (*param_1 == 0) {
    uVar3 = 0;
    if (*(int *)(*(int *)(DAT_000b2e24 + 0xb2dea) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b2e2c + 0xb2e04,0x387f,DAT_000b2e28 + 0xb2dfa,0);
    }
  }
  else {
    iVar1 = checkDeferredWork(this,param_1);
    if (iVar1 != 0) {
      do {
        clock_gettime(1,&local_30);
        if (local_30.tv_nsec < 1000000000) {
          uVar4 = 5;
        }
        else {
          local_30.tv_nsec = local_30.tv_nsec + -1000000000;
          uVar4 = 6;
        }
        iVar1 = local_30.tv_sec >> 0x1f;
        uVar5 = uVar4 + local_30.tv_sec;
        iVar2 = iVar1 + (uint)CARRY4(uVar4,local_30.tv_sec);
        if ((int)((0x7fffffff - iVar1) - (uint)(~uVar4 < (uint)local_30.tv_sec)) < 0 !=
            (SBORROW4(0x7fffffff,iVar1) !=
            SBORROW4(0x7fffffff - iVar1,(uint)(~uVar4 < (uint)local_30.tv_sec)))) {
          iVar2 = 0x7fffffff;
          uVar5 = 0xffffffff;
        }
        local_30.tv_sec = uVar5;
        if ((int)(iVar2 - (uint)(uVar5 < 0x7fffffff)) < 0 ==
            (SBORROW4(iVar2,(uint)(uVar5 < 0x7fffffff)) != false)) {
          local_30.tv_sec = 0x7fffffff;
        }
        pthread_cond_timedwait((pthread_cond_t *)(this + 0x1da0),__mutex,&local_30);
        iVar1 = checkDeferredWork(this,param_1);
      } while (iVar1 != 0);
    }
    uVar3 = getDefJobStatus(this,param_1);
  }
  pthread_mutex_unlock(__mutex);
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

