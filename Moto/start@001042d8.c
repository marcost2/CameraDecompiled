
/* android::CameraHalWatchdog::GlobalWatchdog::start(unsigned long, long, char const*) */

undefined4
android::CameraHalWatchdog::GlobalWatchdog::start(ulong param_1,long param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 *this;
  int iVar2;
  undefined4 uVar3;
  pthread_mutex_t *__mutex;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined auStack72 [32];
  int local_28;
  
  piVar4 = *(int **)(DAT_001044d4 + 0x1042ea);
  local_28 = *piVar4;
  __mutex = *(pthread_mutex_t **)(DAT_001044d8 + 0x1042f8);
  pthread_mutex_lock(__mutex);
  piVar6 = *(int **)(DAT_001044dc + 0x104304);
  if (*piVar6 == 0) {
    iVar5 = 0;
  }
  else if (piVar6[1] == 0) {
    iVar5 = 1;
  }
  else if (piVar6[2] == 0) {
    iVar5 = 2;
  }
  else if (piVar6[3] == 0) {
    iVar5 = 3;
  }
  else if (piVar6[4] == 0) {
    iVar5 = 4;
  }
  else if (piVar6[5] == 0) {
    iVar5 = 5;
  }
  else if (piVar6[6] == 0) {
    iVar5 = 6;
  }
  else if (piVar6[7] == 0) {
    iVar5 = 7;
  }
  else if (piVar6[8] == 0) {
    iVar5 = 8;
  }
  else if (piVar6[9] == 0) {
    iVar5 = 9;
  }
  else if (piVar6[10] == 0) {
    iVar5 = 10;
  }
  else if (piVar6[0xb] == 0) {
    iVar5 = 0xb;
  }
  else if (piVar6[0xc] == 0) {
    iVar5 = 0xc;
  }
  else if (piVar6[0xd] == 0) {
    iVar5 = 0xd;
  }
  else if (piVar6[0xe] == 0) {
    iVar5 = 0xe;
  }
  else if (piVar6[0xf] == 0) {
    iVar5 = 0xf;
  }
  else if (piVar6[0x10] == 0) {
    iVar5 = 0x10;
  }
  else if (piVar6[0x11] == 0) {
    iVar5 = 0x11;
  }
  else if (piVar6[0x12] == 0) {
    iVar5 = 0x12;
  }
  else {
    if (piVar6[0x13] != 0) {
      __android_log_print(6,DAT_001044e8 + 0x1043ba,DAT_001044ec + 0x1043bc,param_1,auStack72);
      uVar3 = 0;
      goto LAB_001044b8;
    }
    iVar5 = 0x13;
  }
  puVar1 = (undefined4 *)operator_new(0xc);
  uVar7 = param_1;
  FUN_000d6e38(auStack72,0x20,0x20,DAT_001044e0 + 0x104456);
  iVar2 = **(int **)(DAT_001044e4 + 0x10445e);
  **(int **)(DAT_001044e4 + 0x10445e) = iVar2 + 1;
  puVar1[1] = param_1;
  puVar1[2] = iVar2;
  this = (undefined4 *)operator_new(0x118);
  *(undefined *)(this + 0x45) = 0;
  this[0x44] = param_2;
  *this = 0;
  __aeabi_memclr8(this + 1,0x100);
  __strncpy_chk2(this + 1,auStack72,0x100,0x100,0x20,uVar7);
  *(undefined *)((int)this + 0x103) = 0;
  AutoWatchdog::startWatchdog((AutoWatchdog *)this);
  *puVar1 = this;
  piVar6[iVar5] = (int)puVar1;
  uVar3 = 1;
LAB_001044b8:
  pthread_mutex_unlock(__mutex);
  if (*piVar4 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

