
void FUN_0008035c(int param_1)

{
  astruct *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  astruct *paVar5;
  void *pvVar6;
  astruct *paVar7;
  
  pvVar1 = *(astruct **)(param_1 + 4);
  paVar7 = pvVar1;
  if ((astruct *)pvVar1->field22_0x1c != pvVar1) {
    iVar3 = *(int *)(DAT_000803c4 + 0x80370);
    paVar5 = (astruct *)pvVar1->field22_0x1c;
    do {
      paVar7 = (astruct *)paVar5->field22_0x1c;
      if (paVar5 != (astruct *)0x0) {
        paVar5->field16_0x10 = (void *)(iVar3 + 8);
        pvVar4 = *(void **)&paVar5->field_0x14;
        pvVar2 = *(void **)((int)pvVar4 + 0x10);
        pvVar6 = pvVar4;
        if (*(void **)((int)pvVar4 + 0x10) != pvVar4) {
          do {
            pvVar6 = *(void **)((int)pvVar2 + 0x10);
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2);
              pvVar4 = *(void **)&paVar5->field_0x14;
            }
            pvVar2 = pvVar6;
          } while (pvVar6 != pvVar4);
        }
        *(void **)((int)pvVar6 + 0xc) = pvVar6;
        *(int *)(*(int *)&paVar5->field_0x14 + 0x10) = *(int *)&paVar5->field_0x14;
        if (*(void **)&paVar5->field_0x14 != (void *)0x0) {
          operator_delete__(*(void **)&paVar5->field_0x14);
        }
        operator_delete(paVar5);
        pvVar1 = *(astruct **)(param_1 + 4);
      }
      paVar5 = paVar7;
    } while (paVar7 != pvVar1);
  }
  paVar7->field21_0x18 = paVar7;
  *(int *)(*(int *)(param_1 + 4) + 0x1c) = *(int *)(param_1 + 4);
  return;
}

