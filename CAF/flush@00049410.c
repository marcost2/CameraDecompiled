
/* qcamera::QCamera3HardwareInterface::flush(bool) */

undefined4 __thiscall qcamera::QCamera3HardwareInterface::flush(QCamera3HardwareInterface *this)

{
  QCamera3HardwareInterface QVar1;
  int iVar2;
  int iVar3;
  char *in_r1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar5;
  pthread_mutex_t *__mutex;
  int *piVar6;
  int iVar7;
  pthread_mutex_t *__mutex_00;
  ulonglong uVar8;
  ulonglong uVar9;
  int in_stack_ffffffcc;
  ScopedTraceKpi aSStack48 [8];
  int local_28;
  
  piVar6 = *(int **)(DAT_00049620 + 0x49420);
  local_28 = *piVar6;
  iVar2 = DAT_00049624 + 0x4942e;
  ScopedTraceKpi::ScopedTraceKpi(aSStack48,CONCAT44(in_stack_ffffffcc,iVar2),in_r1);
  iVar7 = *(int *)(DAT_00049628 + 0x49440);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    iVar2 = DAT_0004962c + 0x4944e;
    mm_camera_debug_log();
  }
  __mutex_00 = (pthread_mutex_t *)(this + 0x388);
  pthread_mutex_lock(__mutex_00);
  uVar5 = 1;
  this[0x141] = (QCamera3HardwareInterface)0x1;
  pthread_mutex_unlock(__mutex_00);
  stopAllChannels(this);
  if (this[0x117914] != (QCamera3HardwareInterface)0x0) {
    **(undefined4 **)(this + 0x11791c) = 2;
    __mutex = *(pthread_mutex_t **)(DAT_00049634 + 0x4949c);
    pthread_mutex_lock(__mutex);
    QVar1 = this[0x117915];
    *(uint *)(*(int *)(this + 0x11791c) + 8) = (byte)QVar1 ^ 1;
    if ((byte)QVar1 == 0) {
      uVar5 = 2;
    }
    *(undefined4 *)(*(int *)(this + 0x11791c) + 4) = uVar5;
    *(undefined4 *)(*(int *)(this + 0x11791c) + 0xc) =
         *(undefined4 *)(*(int *)(DAT_00049638 + 0x494d0) + (uint)(byte)this[0x117916] * 4);
    pthread_mutex_unlock(__mutex);
    uVar8 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x90))
                      (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x11791c));
    uVar4 = (uint)(uVar8 >> 0x20);
    iVar3 = *(int *)(iVar7 + 0x20);
    if (((uint)uVar8 < 0x80000000) || (iVar3 == 0)) {
      if (-1 < (int)(uint)uVar8) goto LAB_0004951a;
    }
    else {
      iVar2 = DAT_0004963c + 0x494fe;
      mm_camera_debug_log();
      iVar3 = *(int *)(iVar7 + 0x20);
      uVar4 = extraout_r1;
    }
    uVar9 = uVar8 & 0xffffffff | (ulonglong)uVar4 << 0x20;
    if (iVar3 != 0) {
      iVar2 = DAT_00049644 + 0x4958e;
      mm_camera_debug_log();
      uVar9 = uVar8 & 0xffffffff | (ulonglong)extraout_r1_01 << 0x20;
    }
    goto LAB_00049602;
  }
LAB_0004951a:
  if (*(int *)(this + 0xdc) != 0) {
    (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x68))(**(undefined4 **)(this + 0x50));
  }
  uVar9 = setBundleInfo(this);
  iVar3 = (int)uVar9;
  if (iVar3 < 0) {
    if (*(int *)(iVar7 + 0x20) != 0) {
      iVar2 = DAT_0004964c + 0x495ae;
      mm_camera_debug_log();
      uVar9 = uVar9 & 0xffffffff | (ulonglong)extraout_r1_02 << 0x20;
      in_stack_ffffffcc = iVar3;
    }
    goto LAB_00049602;
  }
  pthread_mutex_lock(__mutex_00);
  *(undefined4 *)(this + 0x210) = 0;
  pthread_cond_signal((pthread_cond_t *)(this + 0x20c));
  iVar3 = notifyErrorForPendingRequests(this);
  if (iVar3 < 0) {
    if (*(int *)(iVar7 + 0x20) != 0) {
      iVar2 = DAT_00049654 + 0x495d0;
LAB_000495f8:
      mm_camera_debug_log();
    }
  }
  else {
    this[0x141] = (QCamera3HardwareInterface)0x0;
    if ((in_r1 == (char *)0x0) || (iVar3 = startAllChannels(this), -1 < iVar3)) {
      if (*(int *)(this + 0xdc) != 0) {
        (**(code **)((*(undefined4 **)(this + 0x50))[1] + 100))(**(undefined4 **)(this + 0x50));
      }
      pthread_mutex_unlock(__mutex_00);
      uVar9 = (ulonglong)extraout_r1_00 << 0x20;
      goto LAB_00049602;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      iVar2 = DAT_0004965c + 0x495ec;
      goto LAB_000495f8;
    }
  }
  pthread_mutex_unlock(__mutex_00);
  uVar9 = CONCAT44(extraout_r1_03,iVar3);
LAB_00049602:
  ScopedTraceKpi::_ScopedTraceKpi
            (aSStack48,CONCAT44(in_stack_ffffffcc,iVar2),(char *)(uVar9 >> 0x20));
  if (*piVar6 == local_28) {
    return (int)uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

