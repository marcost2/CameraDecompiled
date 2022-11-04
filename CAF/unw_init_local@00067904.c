
undefined4 unw_init_local(int *param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  iVar2 = DAT_000679d8 + 0x67922;
  *param_1 = DAT_000679dc + 0x67928;
  param_1[1] = iVar2;
  auVar1 = *param_2;
  uVar3 = *(undefined8 *)(param_2[2] + 8);
  uVar4 = *(undefined8 *)param_2[1];
  uVar5 = *(undefined8 *)(param_2[1] + 8);
  uVar6 = *(undefined8 *)param_2[3];
  uVar7 = *(undefined8 *)(param_2[3] + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)param_2[2];
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(longlong *)(param_1 + 2) = SUB168(auVar1,0);
  *(longlong *)(param_1 + 4) = SUB168(auVar1 >> 0x40,0);
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  __aeabi_memclr4(param_1 + 0x14,0x88);
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  (**(code **)(*param_1 + 0x34))(param_1,0);
  return 0;
}

