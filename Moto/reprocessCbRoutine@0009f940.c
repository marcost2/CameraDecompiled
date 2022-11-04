
/* qcamera::QCamera3ProcessingChannel::reprocessCbRoutine(native_handle const**, unsigned int) */

void __thiscall
qcamera::QCamera3ProcessingChannel::reprocessCbRoutine
          (QCamera3ProcessingChannel *this,native_handle **param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_38;
  native_handle **ppnStack52;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  int local_24;
  
  piVar6 = *(int **)(DAT_0009fa60 + 0x9f952);
  local_24 = *piVar6;
  puVar3 = *(uint **)(DAT_0009fa64 + 0x9f960);
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_0009fa68 + 0x9f96c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009fa6c + 0x9f97a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009fa70 + 0x9fa4c);
    }
  }
  iVar4 = *(int *)(DAT_0009fa74 + 0x9f986);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009fa7c + 0x9f9a0,0x714,DAT_0009fa78 + 0x9f996,param_2);
  }
  uVar7 = releaseOfflineMemory(this,param_2);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar4 + 0x20);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    mm_camera_debug_log(1,1,DAT_0009fa84 + 0x9f9cc,0x717,DAT_0009fa80 + 0x9f9c0,iVar1);
  }
  if (*(code **)(this + 0x60) == (code *)0x0) {
    pcVar5 = (code *)0x0;
  }
  else {
    (**(code **)(this + 0x60))(0,0,param_2,1,*(undefined4 *)(this + 4));
    pcVar5 = *(code **)(this + 0x60);
  }
  local_38 = *(undefined4 *)(this + 0x14e0);
  local_2c = 0xffffffff;
  uStack40 = 0xffffffff;
  uStack48 = 0;
  ppnStack52 = param_1;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(0,&local_38,param_2,0,*(undefined4 *)(this + 4));
  }
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_0009fa88 + 0x9fa1c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009fa8c + 0x9fa2a) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

