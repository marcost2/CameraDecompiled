
/* qcamera::PendingBuffersMap::removeBuf(native_handle const**) */

void __thiscall
qcamera::PendingBuffersMap::removeBuf(PendingBuffersMap *this,native_handle **param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  
  puVar5 = (undefined4 *)(*(undefined4 **)(this + 8))[7];
  do {
    if (*(undefined4 **)(this + 8) == puVar5) {
LAB_00089804:
      if (*(int *)(*(int *)(DAT_00089864 + 0x8980a) + 0x2c) != 0) {
        iVar1 = 0;
        for (iVar3 = *(int *)(*(int *)(this + 8) + 0x1c); iVar3 != *(int *)(this + 8);
            iVar3 = *(int *)(iVar3 + 0x1c)) {
          iVar4 = 0;
          for (iVar6 = *(int *)(*(int *)(iVar3 + 0x14) + 0x10); iVar6 != *(int *)(iVar3 + 0x14);
              iVar6 = *(int *)(iVar6 + 0x10)) {
            iVar4 = iVar4 + 1;
          }
          iVar1 = iVar1 + iVar4;
        }
        mm_camera_debug_log(1,4,DAT_0008986c + 0x8984c,0x3590,DAT_00089868 + 0x89840,iVar1);
      }
      return;
    }
    pvVar7 = (void *)puVar5[5];
    while (pvVar7 = *(void **)((int)pvVar7 + 0x10), pvVar7 != (void *)puVar5[5]) {
      if (*(native_handle ***)((int)pvVar7 + 4) == param_1) {
        if (*(int *)(*(int *)(DAT_00089854 + 0x8978c) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008985c + 0x897aa,0x3581,DAT_00089858 + 0x8979c,*puVar5,
                              param_1);
        }
        iVar1 = *(int *)((int)pvVar7 + 0xc);
        iVar3 = *(int *)((int)pvVar7 + 0x10);
        *(int *)(iVar1 + 0x10) = iVar3;
        *(int *)(iVar3 + 0xc) = iVar1;
        operator_delete(pvVar7);
        if (*(int *)(puVar5[5] + 0x10) == puVar5[5]) {
          iVar1 = puVar5[6];
          iVar3 = puVar5[7];
          *(int *)(iVar1 + 0x1c) = iVar3;
          *(int *)(iVar3 + 0x18) = iVar1;
          puVar5[4] = *(int *)(DAT_00089860 + 0x897d0) + 8;
          pvVar2 = (void *)puVar5[5];
          pvVar7 = *(void **)((int)pvVar2 + 0x10);
          pvVar8 = pvVar2;
          if (*(void **)((int)pvVar2 + 0x10) != pvVar2) {
            do {
              pvVar8 = *(void **)((int)pvVar7 + 0x10);
              if (pvVar7 != (void *)0x0) {
                operator_delete(pvVar7);
                pvVar2 = (void *)puVar5[5];
              }
              pvVar7 = pvVar8;
            } while (pvVar8 != pvVar2);
          }
          *(void **)((int)pvVar8 + 0xc) = pvVar8;
          *(undefined4 *)(puVar5[5] + 0x10) = puVar5[5];
          if ((void *)puVar5[5] != (void *)0x0) {
            operator_delete__((void *)puVar5[5]);
          }
          operator_delete(puVar5);
        }
        goto LAB_00089804;
      }
    }
    puVar5 = (undefined4 *)puVar5[7];
  } while( true );
}

