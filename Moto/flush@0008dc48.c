
/* qcamera::QCamera3HardwareInterface::flush(bool) */

uint __thiscall
qcamera::QCamera3HardwareInterface::flush(QCamera3HardwareInterface *this,bool param_1)

{
  BSTBokehParam *this_00;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  pthread_mutex_t *__mutex;
  int *piVar5;
  pthread_mutex_t *__mutex_00;
  int iVar6;
  
  piVar5 = *(int **)(DAT_0008defc + 0x8dc58);
  if (*piVar5 != 0) {
    if ((**(byte **)(DAT_0008df00 + 0x8dc68) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008df04 + 0x8dc78) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0008df08 + 0x8deea);
    }
  }
  iVar6 = *(int *)(DAT_0008df0c + 0x8dc86);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008df14 + 0x8dca2,0x175a,DAT_0008df10 + 0x8dc9a);
  }
  __mutex_00 = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_lock(__mutex_00);
  this[0x1a9] = (QCamera3HardwareInterface)0x1;
  pthread_mutex_unlock(__mutex_00);
  this_00 = (BSTBokehParam *)BSTBokehParam::createInstance();
  iVar1 = BSTBokehParam::getStereoMode(this_00);
  if (iVar1 != 0) {
    piVar2 = (int *)BSTLiveBokeh::createInstance();
    (**(code **)(*piVar2 + 0x10))();
    param_1 = false;
  }
  stopAllChannels(this);
  if (this[0x117fe1] != (QCamera3HardwareInterface)0x0) {
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0008df1c + 0x8dd0e,0x176b,DAT_0008df18 + 0x8dd02,1);
    }
    **(undefined4 **)(this + 0x117fe8) = 2;
    __mutex = *(pthread_mutex_t **)(DAT_0008df20 + 0x8dd1e);
    pthread_mutex_lock(__mutex);
    uVar4 = (uint)(byte)this[0x117fe2];
    *(uint *)(*(int *)(this + 0x117fe8) + 8) = uVar4 ^ 1;
    uVar3 = 1;
    if (uVar4 == 0) {
      uVar3 = 2;
    }
    *(undefined4 *)(*(int *)(this + 0x117fe8) + 4) = uVar3;
    *(undefined4 *)(*(int *)(this + 0x117fe8) + 0xc) =
         *(undefined4 *)(*(int *)(DAT_0008df24 + 0x8dd4e) + (uint)(byte)this[0x117fe3] * 4);
    if (*(int *)(iVar6 + 0x28) != 0) {
      iVar1 = *(int *)(this + 0x117fe8);
      mm_camera_debug_log(1,3,DAT_0008df2c + 0x8dd86,0x177b,DAT_0008df28 + 0x8dd70,this[0x117fe2],
                          *(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),
                          *(undefined4 *)(iVar1 + 0xc));
    }
    pthread_mutex_unlock(__mutex);
    uVar4 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x94))
                      (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x117fe8));
    iVar1 = *(int *)(iVar6 + 0x20);
    if ((uVar4 < 0x80000000) || (iVar1 == 0)) {
      if (-1 < (int)uVar4) goto LAB_0008ddce;
    }
    else {
      mm_camera_debug_log(1,1,DAT_0008df34 + 0x8ddc0,0x1781,DAT_0008df30 + 0x8ddb8);
      iVar1 = *(int *)(iVar6 + 0x20);
    }
    if (iVar1 != 0) {
      mm_camera_debug_log(1,1,DAT_0008df3c + 0x8de50,0x1786,DAT_0008df38 + 0x8de48);
    }
    goto LAB_0008deb6;
  }
LAB_0008ddce:
  if (*(int *)(this + 0xf4) != 0) {
    (**(code **)((*(undefined4 **)(this + 100))[1] + 0x68))(**(undefined4 **)(this + 100));
  }
  uVar4 = setBundleInfo(this);
  if ((int)uVar4 < 0) {
    if (*(int *)(iVar6 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008df44 + 0x8de72,0x1791,DAT_0008df40 + 0x8de68,uVar4);
    }
    goto LAB_0008deb6;
  }
  pthread_mutex_lock(__mutex_00);
  *(undefined4 *)(this + 0x278) = 0;
  pthread_cond_signal((pthread_cond_t *)(this + 0x274));
  uVar4 = notifyErrorForPendingRequests(this);
  if ((int)uVar4 < 0) {
    if (*(int *)(iVar6 + 0x20) != 0) {
      uVar3 = 0x179e;
      iVar6 = DAT_0008df48 + 0x8de8a;
      iVar1 = DAT_0008df4c + 0x8de92;
LAB_0008deac:
      mm_camera_debug_log(1,1,iVar1,uVar3,iVar6);
    }
  }
  else {
    this[0x1a9] = (QCamera3HardwareInterface)0x0;
    if ((param_1 == false) || (uVar4 = startAllChannels(this), -1 < (int)uVar4)) {
      if (*(int *)(this + 0xf4) != 0) {
        (**(code **)((*(undefined4 **)(this + 100))[1] + 100))(**(undefined4 **)(this + 100));
      }
      pthread_mutex_unlock(__mutex_00);
      uVar4 = 0;
      goto LAB_0008deb6;
    }
    if (*(int *)(iVar6 + 0x20) != 0) {
      uVar3 = 0x17a9;
      iVar6 = DAT_0008df50 + 0x8dea6;
      iVar1 = DAT_0008df54 + 0x8deae;
      goto LAB_0008deac;
    }
  }
  pthread_mutex_unlock(__mutex_00);
LAB_0008deb6:
  if (*piVar5 != 0) {
    if ((**(byte **)(DAT_0008df58 + 0x8dec2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008df5c + 0x8ded0) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar4;
}

