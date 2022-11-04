
undefined8 * FUN_0009946c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar3 = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  iVar8 = *(int *)(DAT_00099550 + 0x99486);
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(int *)((int)param_1 + 0xc) = iVar8 + 8;
  puVar4 = (undefined8 *)operator_new__(0x14);
  *(undefined8 **)(param_1 + 2) = puVar4;
  *(undefined8 **)((int)puVar4 + 0xc) = puVar4;
  *(undefined8 **)(puVar4 + 2) = puVar4;
  puVar11 = *(undefined8 **)(param_2 + 2);
  puVar1 = puVar4;
  for (puVar9 = *(undefined8 **)(puVar11 + 2); puVar11 != puVar9;
      puVar9 = *(undefined8 **)(puVar9 + 2)) {
    puVar5 = (undefined8 *)operator_new(0x14);
    uVar13 = *puVar9;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar9 + 1);
    *(undefined8 **)((int)puVar5 + 0xc) = puVar1;
    *(undefined8 **)(puVar5 + 2) = puVar4;
    *puVar5 = uVar13;
    *(undefined8 **)(puVar1 + 2) = puVar5;
    *(undefined8 **)((int)puVar4 + 0xc) = puVar5;
    puVar1 = puVar5;
  }
  *(int *)((int)param_1 + 0x14) = *(int *)(DAT_00099554 + 0x994d0) + 8;
  puVar6 = (undefined4 *)operator_new__(0x10);
  *(undefined4 **)(param_1 + 3) = puVar6;
  puVar6[2] = puVar6;
  puVar6[3] = puVar6;
  puVar12 = *(undefined4 **)(param_2 + 3);
  puVar2 = puVar6;
  for (puVar10 = (undefined4 *)puVar12[3]; puVar12 != puVar10; puVar10 = (undefined4 *)puVar10[3]) {
    puVar7 = (undefined4 *)operator_new(0x10);
    uVar3 = puVar10[1];
    *puVar7 = *puVar10;
    puVar7[1] = uVar3;
    puVar7[2] = puVar2;
    puVar7[3] = puVar6;
    puVar2[3] = puVar7;
    puVar6[2] = puVar7;
    puVar2 = puVar7;
  }
  uVar13 = param_2[6];
  uVar14 = *(undefined8 *)((int)param_2 + 0x1c);
  uVar15 = *(undefined8 *)((int)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_1[6] = uVar13;
  *(undefined8 *)((int)param_1 + 0x1c) = uVar14;
  *(undefined8 *)((int)param_1 + 0x24) = uVar15;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(param_1 + 7),(CameraMetadata *)(param_2 + 7));
  uVar13 = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[8] = uVar13;
  return param_1;
}

