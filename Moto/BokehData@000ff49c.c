
/* BokehData::BokehData() */

BokehData * __thiscall BokehData::BokehData(BokehData *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = (undefined8 *)operator_new(0x74);
  auVar6 = ZEXT816(0);
  *(undefined4 *)((int)puVar1 + 100) = 800;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)((int)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)((int)puVar1 + 0x4c) = 0x3fa66666;
  *(undefined4 *)(puVar1 + 10) = 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined8 *)((int)puVar1 + 0x54) = 0;
  *(undefined8 *)((int)puVar1 + 0x5c) = 0;
  *(undefined8 *)((int)puVar1 + 0x3c) = 0;
  *(undefined8 *)((int)puVar1 + 0x44) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((int)puVar1 + 0x14) = 0;
  iVar4 = *(int *)(DAT_000ff5f0 + 0xff4fc);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    uVar2 = gettid();
    iVar3 = DAT_000ff5f4 + 0xff510;
    mm_camera_debug_log(1,4,iVar3,0x32,DAT_000ff5f8 + 0xff50e,uVar2,iVar3,iVar3);
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 **)this = puVar1;
  puVar1 = (undefined8 *)operator_new(0x74);
  *(undefined4 *)((int)puVar1 + 100) = 800;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)((int)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)((int)puVar1 + 0x4c) = 0x3fa66666;
  *(undefined4 *)(puVar1 + 10) = 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  uVar5 = SUB168(auVar6,0);
  *(undefined8 *)((int)puVar1 + 0x54) = uVar5;
  uVar7 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)((int)puVar1 + 0x5c) = uVar7;
  *(undefined8 *)((int)puVar1 + 0x3c) = uVar5;
  *(undefined8 *)((int)puVar1 + 0x44) = uVar7;
  *puVar1 = uVar5;
  puVar1[1] = uVar7;
  *(undefined4 *)((int)puVar1 + 0x14) = 0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    uVar2 = gettid();
    iVar3 = DAT_000ff5fc + 0xff566;
    mm_camera_debug_log(1,4,iVar3,0x32,DAT_000ff600 + 0xff564,uVar2,iVar3,iVar3);
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 **)(this + 4) = puVar1;
  puVar1 = (undefined8 *)operator_new(0x74);
  *(undefined4 *)((int)puVar1 + 100) = 800;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)((int)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)((int)puVar1 + 0x4c) = 0x3fa66666;
  *(undefined4 *)(puVar1 + 10) = 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined8 *)((int)puVar1 + 0x54) = 0;
  *(undefined8 *)((int)puVar1 + 0x5c) = 0;
  *(undefined8 *)((int)puVar1 + 0x3c) = 0;
  *(undefined8 *)((int)puVar1 + 0x44) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar4 = *(int *)(iVar4 + 0x2c);
  *(undefined4 *)((int)puVar1 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar2 = gettid();
    iVar4 = DAT_000ff604 + 0xff5cc;
    mm_camera_debug_log(1,4,iVar4,0x32,DAT_000ff608 + 0xff5ca,uVar2,iVar4,iVar4);
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 **)(this + 8) = puVar1;
  return this;
}

