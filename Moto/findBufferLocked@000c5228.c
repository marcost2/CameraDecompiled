
/* qcamera::QCameraMemoryPool::findBufferLocked(qcamera::QCameraMemory::QCameraMemInfo&, unsigned
   int, unsigned int, bool, cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraMemoryPool::findBufferLocked
          (QCameraMemoryPool *this,QCameraMemInfo *param_1,uint param_2,uint param_3,bool param_4,
          cam_stream_type_t param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined3 in_stack_00000001;
  
  puVar8 = *(undefined8 **)(this + param_5 * 8 + 8);
  puVar7 = *(undefined8 **)((int)puVar8 + 0x1c);
  if (puVar7 != puVar8) {
    if (param_5 == 9) {
      do {
        if (*(uint *)((int)puVar7 + 0xc) == (param_3 + 0xfff & 0xfffff000)) {
          uVar5 = *(uint *)((int)puVar7 + 0x14);
          bVar9 = uVar5 == param_2;
          if (bVar9) {
            uVar5 = (uint)*(byte *)(puVar7 + 2);
          }
          if (bVar9 && uVar5 == _param_4) {
            uVar10 = puVar7[1];
            uVar11 = puVar7[2];
            *(undefined8 *)param_1 = *puVar7;
            *(undefined8 *)(param_1 + 8) = uVar10;
            *(undefined8 *)(param_1 + 0x10) = uVar11;
            if (*(int *)(*(int *)(DAT_000c531c + 0xc52aa) + 0x2c) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 8);
              uVar2 = *(undefined4 *)(param_1 + 0xc);
              uVar6 = 0x2bf;
              iVar3 = DAT_000c5320 + 0xc52bc;
              iVar4 = DAT_000c5324 + 0xc52ca;
LAB_000c5302:
              mm_camera_debug_log(1,4,iVar4,uVar6,iVar3,uVar1,uVar2);
            }
LAB_000c5306:
            iVar3 = *(int *)(puVar7 + 3);
            iVar4 = *(int *)((int)puVar7 + 0x1c);
            *(int *)(iVar3 + 0x1c) = iVar4;
            *(int *)(iVar4 + 0x18) = iVar3;
            operator_delete(puVar7);
            return 0;
          }
        }
        puVar7 = *(undefined8 **)((int)puVar7 + 0x1c);
      } while (puVar8 != puVar7);
    }
    else {
      do {
        if (param_3 <= *(uint *)((int)puVar7 + 0xc)) {
          uVar5 = *(uint *)((int)puVar7 + 0x14);
          bVar9 = uVar5 == param_2;
          if (bVar9) {
            uVar5 = (uint)*(byte *)(puVar7 + 2);
          }
          if (bVar9 && uVar5 == _param_4) {
            uVar10 = puVar7[1];
            uVar11 = puVar7[2];
            *(undefined8 *)param_1 = *puVar7;
            *(undefined8 *)(param_1 + 8) = uVar10;
            *(undefined8 *)(param_1 + 0x10) = uVar11;
            if (*(int *)(*(int *)(DAT_000c5328 + 0xc52e4) + 0x2c) == 0) goto LAB_000c5306;
            uVar1 = *(undefined4 *)(param_1 + 8);
            uVar2 = *(undefined4 *)(param_1 + 0xc);
            uVar6 = 0x2cc;
            iVar3 = DAT_000c532c + 0xc52f6;
            iVar4 = DAT_000c5330 + 0xc5304;
            goto LAB_000c5302;
          }
        }
        puVar7 = *(undefined8 **)((int)puVar7 + 0x1c);
      } while (puVar8 != puVar7);
    }
  }
  return 0xfffffffe;
}

