
/* qcamera::QCameraPerfLock::lock_deinit() */

void __thiscall qcamera::QCameraPerfLock::lock_deinit(QCameraPerfLock *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  if (*(int *)(this + 0xc) == 0) goto LAB_0007ce38;
  iVar6 = *(int *)(DAT_0007ce44 + 0x7cda0);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ce4c + 0x7cdb6,0xb6,DAT_0007ce48 + 0x7cdae);
  }
  puVar5 = *(undefined4 **)(this + 0x3c);
  if ((undefined4 *)puVar5[2] != puVar5) {
    uVar3 = *(undefined4 *)puVar5[2];
    *(undefined4 *)(this + 0x20) = uVar3;
    iVar1 = *(int *)(this + 0x1c);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x88))(iVar1,uVar3,DAT_0007ce50 + 0x7cdd2);
      puVar5 = *(undefined4 **)(this + 0x3c);
    }
    puVar2 = (undefined4 *)puVar5[2];
    puVar7 = puVar5;
    if ((undefined4 *)puVar5[2] != puVar5) {
      do {
        puVar7 = (undefined4 *)puVar2[2];
        if (puVar2 != (undefined4 *)0x0) {
          operator_delete(puVar2);
          puVar5 = *(undefined4 **)(this + 0x3c);
        }
        puVar2 = puVar7;
      } while (puVar7 != puVar5);
    }
    puVar7[1] = puVar7;
    *(int *)(*(int *)(this + 0x3c) + 8) = *(int *)(this + 0x3c);
  }
  pcVar4 = *(code **)(this + 4);
  if (pcVar4 != (code *)0x0) {
    if (-1 < *(int *)(this + 0x18)) {
      (*pcVar4)();
      pcVar4 = *(code **)(this + 4);
      if (pcVar4 == (code *)0x0) goto LAB_0007ce0c;
    }
    if (-1 < *(int *)(this + 0x14)) {
      (*pcVar4)();
    }
  }
LAB_0007ce0c:
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    dlclose();
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ce58 + 0x7ce36,0xcf,DAT_0007ce54 + 0x7ce2e);
  }
LAB_0007ce38:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return;
}

