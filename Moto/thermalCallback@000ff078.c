
/* qcamera::QCameraThermalAdapter::thermalCallback(int, void*, void*) */

undefined4 qcamera::QCameraThermalAdapter::thermalCallback(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000ff114 + 0xff088);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff11c + 0xff09e,0xa5,DAT_000ff118 + 0xff096);
  }
  if (((*(byte *)(DAT_000ff120 + 0xff0a6) & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(DAT_000ff124 + 0xff0ee), iVar1 = DAT_000ff128, iVar4 != 0)) {
    puVar5 = (undefined8 *)(DAT_000ff128 + 0xff102);
    *(undefined4 *)(&UNK_000ff112 + DAT_000ff128) = 0;
    *puVar5 = 0;
    *(undefined8 *)(iVar1 + 0xff10a) = 0;
    *(undefined4 *)((int)&DAT_000ff114 + iVar1 + 2) = 0;
    __cxa_guard_release(DAT_000ff12c + 0xff10e);
  }
  puVar2 = *(undefined4 **)(DAT_000ff130 + 0xff0b2);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar2[1] = param_1;
    uVar3 = (**(code **)*puVar2)(puVar2,puVar2 + 1,param_2,param_3);
  }
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ff138 + 0xff0e0,0xac,DAT_000ff134 + 0xff0d8);
  }
  return uVar3;
}

