
/* qcamera::QCamera3HardwareInterface::dump(int) */

void __thiscall
qcamera::QCamera3HardwareInterface::dump(QCamera3HardwareInterface *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x3f0));
  dprintf(param_1,(char *)(DAT_0008fc7c + 0x8faec));
  iVar3 = 0;
  for (iVar2 = *(int *)(*(int *)(this + 0x204) + 0x54); iVar2 != *(int *)(this + 0x204);
      iVar2 = *(int *)(iVar2 + 0x54)) {
    iVar3 = iVar3 + 1;
  }
  dprintf(param_1,(char *)(DAT_0008fc80 + 0x8fb0a),iVar3);
  pcVar9 = (char *)(DAT_0008fc84 + 0x8fb14);
  dprintf(param_1,pcVar9);
  dprintf(param_1,(char *)(DAT_0008fc88 + 0x8fb20));
  dprintf(param_1,pcVar9);
  puVar5 = (undefined4 *)(*(undefined4 **)(this + 0x204))[0x15];
  if (puVar5 != *(undefined4 **)(this + 0x204)) {
    pcVar9 = (char *)(DAT_0008fc8c + 0x8fb3a);
    do {
      dprintf(param_1,pcVar9,*puVar5,puVar5[1],puVar5[2],puVar5[7],puVar5[0xc]);
      puVar5 = (undefined4 *)puVar5[0x15];
    } while (puVar5 != *(undefined4 **)(this + 0x204));
  }
  iVar3 = 0;
  for (iVar2 = *(int *)(*(int *)(this + 0x270) + 0x1c); iVar2 != *(int *)(this + 0x270);
      iVar2 = *(int *)(iVar2 + 0x1c)) {
    iVar4 = 0;
    for (iVar7 = *(int *)(*(int *)(iVar2 + 0x14) + 0x10); iVar7 != *(int *)(iVar2 + 0x14);
        iVar7 = *(int *)(iVar7 + 0x10)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + iVar4;
  }
  dprintf(param_1,(char *)(DAT_0008fc90 + 0x8fb8a),iVar3);
  pcVar9 = (char *)(DAT_0008fc94 + 0x8fb94);
  dprintf(param_1,pcVar9);
  dprintf(param_1,(char *)(DAT_0008fc98 + 0x8fba0));
  dprintf(param_1,pcVar9);
  puVar11 = *(undefined4 **)(this + 0x270);
  puVar5 = (undefined4 *)puVar11[7];
  if (puVar5 != puVar11) {
    pcVar9 = (char *)(DAT_0008fc9c + 0x8fbbc);
    do {
      piVar8 = (int *)puVar5[5];
      for (piVar10 = (int *)piVar8[4]; piVar10 != piVar8; piVar10 = (int *)piVar10[4]) {
        uVar6 = *puVar5;
        uVar1 = (**(code **)(**(int **)(*piVar10 + 0x18) + 0x20))();
        dprintf(param_1,pcVar9,uVar6,uVar1);
      }
      puVar5 = (undefined4 *)puVar5[7];
    } while (puVar5 != puVar11);
  }
  dprintf(param_1,(char *)(DAT_0008fca0 + 0x8fbf4));
  iVar3 = 0;
  for (iVar2 = *(int *)(*(int *)(this + 0x20c) + 0xc); iVar2 != *(int *)(this + 0x20c);
      iVar2 = *(int *)(iVar2 + 0xc)) {
    iVar3 = iVar3 + 1;
  }
  dprintf(param_1,(char *)(DAT_0008fca4 + 0x8fc12),iVar3);
  pcVar9 = (char *)(DAT_0008fca8 + 0x8fc1c);
  dprintf(param_1,pcVar9);
  dprintf(param_1,(char *)(DAT_0008fcac + 0x8fc28));
  dprintf(param_1,pcVar9);
  puVar5 = (undefined4 *)(*(undefined4 **)(this + 0x20c))[3];
  if (puVar5 != *(undefined4 **)(this + 0x20c)) {
    pcVar9 = (char *)(DAT_0008fcb0 + 0x8fc42);
    do {
      dprintf(param_1,pcVar9,*puVar5,puVar5[1]);
      puVar5 = (undefined4 *)puVar5[3];
    } while (puVar5 != *(undefined4 **)(this + 0x20c));
  }
  dprintf(param_1,(char *)(DAT_0008fcb4 + 0x8fc5e));
  dprintf(param_1,(char *)(DAT_0008fcb8 + 0x8fc68));
  this[0x41c] = (QCamera3HardwareInterface)0x1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3f0));
  return;
}

